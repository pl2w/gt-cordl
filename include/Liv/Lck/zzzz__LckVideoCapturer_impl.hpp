#pragma once
// IWYU pragma private; include "Liv/Lck/LckVideoCapturer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckVideoCapturer_def.hpp"
#include "GlobalNamespace/zzzz__ILckVideoTextureProvider_def.hpp"
#include "Liv/Lck/Encoding/zzzz__ILckEncoder_def.hpp"
#include "Liv/Lck/zzzz__ILckActiveCameraConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckPreviewer_def.hpp"
#include "Liv/Lck/zzzz__ILckVideoCapturer_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_CameraFramerateChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckVideoCapturer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)(::GlobalNamespace::ILckVideoTextureProvider*, ::Liv::Lck::ILckActiveCameraConfigurer*, ::Liv::Lck::ILckPreviewer*, ::Liv::Lck::Encoding::ILckEncoder*, ::Liv::Lck::ILckOutputConfigurer*, ::Liv::Lck::ILckEventBus*)>(&::Liv::Lck::LckVideoCapturer::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x9d32d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ILckVideoTextureProvider*>(), ::i2c::type_of<::Liv::Lck::ILckActiveCameraConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckPreviewer*>(), ::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.OnCameraFramerateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)(::GlobalNamespace::LckEvents_CameraFramerateChangedEvent)>(&::Liv::Lck::LckVideoCapturer::OnCameraFramerateChanged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d32f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"OnCameraFramerateChanged", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CameraFramerateChangedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.get_ForceCaptureAllFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::get_ForceCaptureAllFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d32fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"get_ForceCaptureAllFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.set_ForceCaptureAllFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)(bool)>(&::Liv::Lck::LckVideoCapturer::set_ForceCaptureAllFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d32fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"set_ForceCaptureAllFrames", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.get_IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::get_IsCapturing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d32ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"get_IsCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.set_IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)(bool)>(&::Liv::Lck::LckVideoCapturer::set_IsCapturing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d32ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"set_IsCapturing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.StartCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::StartCapturing)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d33000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"StartCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.StopCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::StopCapturing)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d330f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"StopCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.HasCurrentFrameBeenCaptured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::HasCurrentFrameBeenCaptured)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d33164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"HasCurrentFrameBeenCaptured", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.SetTargetCaptureFramerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)(uint32_t)>(&::Liv::Lck::LckVideoCapturer::SetTargetCaptureFramerate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d32f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"SetTargetCaptureFramerate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.CaptureLoopCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::CaptureLoopCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d33088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"CaptureLoopCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.PrepareCameraForCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)(::Liv::Lck::ILckCamera*)>(&::Liv::Lck::LckVideoCapturer::PrepareCameraForCapture)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9d33194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"PrepareCameraForCapture", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.HandleCameraFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)(::Liv::Lck::ILckCamera*)>(&::Liv::Lck::LckVideoCapturer::HandleCameraFrame)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d33468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"HandleCameraFrame", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.HandleCameraFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::HandleCameraFrame)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d335b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"HandleCameraFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.CaptureCanBeCulled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::CaptureCanBeCulled)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9d3333c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"CaptureCanBeCulled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer::*)()>(&::Liv::Lck::LckVideoCapturer::Dispose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9d33690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ILckVideoTextureProvider*& Liv::Lck::LckVideoCapturer::__cordl_internal_get__videoTextureProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTextureProvider;
}
constexpr ::GlobalNamespace::ILckVideoTextureProvider* const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__videoTextureProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTextureProvider;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__videoTextureProvider(::GlobalNamespace::ILckVideoTextureProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____videoTextureProvider = value;
}
constexpr ::Liv::Lck::ILckActiveCameraConfigurer*& Liv::Lck::LckVideoCapturer::__cordl_internal_get__activeCameraConfigurer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCameraConfigurer;
}
constexpr ::Liv::Lck::ILckActiveCameraConfigurer* const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__activeCameraConfigurer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCameraConfigurer;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__activeCameraConfigurer(::Liv::Lck::ILckActiveCameraConfigurer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeCameraConfigurer = value;
}
constexpr ::Liv::Lck::ILckPreviewer*& Liv::Lck::LckVideoCapturer::__cordl_internal_get__previewer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewer;
}
constexpr ::Liv::Lck::ILckPreviewer* const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__previewer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewer;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__previewer(::Liv::Lck::ILckPreviewer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewer = value;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder*& Liv::Lck::LckVideoCapturer::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder* const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckVideoCapturer::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Liv::Lck::LckVideoCapturer::__cordl_internal_get__captureStopwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureStopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__captureStopwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureStopwatch;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__captureStopwatch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____captureStopwatch = value;
}
constexpr bool& Liv::Lck::LckVideoCapturer::__cordl_internal_get__frameHasBeenRendered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameHasBeenRendered;
}
constexpr bool const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__frameHasBeenRendered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameHasBeenRendered;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__frameHasBeenRendered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameHasBeenRendered = value;
}
constexpr double_t& Liv::Lck::LckVideoCapturer::__cordl_internal_get__captureTimeOverflow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureTimeOverflow;
}
constexpr double_t const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__captureTimeOverflow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureTimeOverflow;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__captureTimeOverflow(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____captureTimeOverflow = value;
}
constexpr double_t& Liv::Lck::LckVideoCapturer::__cordl_internal_get__targetSecondsPerCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetSecondsPerCapture;
}
constexpr double_t const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__targetSecondsPerCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetSecondsPerCapture;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__targetSecondsPerCapture(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetSecondsPerCapture = value;
}
constexpr bool& Liv::Lck::LckVideoCapturer::__cordl_internal_get__ForceCaptureAllFrames_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceCaptureAllFrames_k__BackingField;
}
constexpr bool const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__ForceCaptureAllFrames_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceCaptureAllFrames_k__BackingField;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__ForceCaptureAllFrames_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceCaptureAllFrames_k__BackingField = value;
}
constexpr bool& Liv::Lck::LckVideoCapturer::__cordl_internal_get__IsCapturing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCapturing_k__BackingField;
}
constexpr bool const& Liv::Lck::LckVideoCapturer::__cordl_internal_get__IsCapturing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCapturing_k__BackingField;
}
constexpr void Liv::Lck::LckVideoCapturer::__cordl_internal_set__IsCapturing_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCapturing_k__BackingField = value;
}
inline void Liv::Lck::LckVideoCapturer::_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckActiveCameraConfigurer*  activeCameraConfigurer, ::Liv::Lck::ILckPreviewer*  previewer, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ILckVideoTextureProvider*>(), ::i2c::type_of<::Liv::Lck::ILckActiveCameraConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckPreviewer*>(), ::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, videoTextureProvider, activeCameraConfigurer, previewer, encoder, outputConfigurer, eventBus);
}
inline void Liv::Lck::LckVideoCapturer::OnCameraFramerateChanged(::GlobalNamespace::LckEvents_CameraFramerateChangedEvent  cameraFramerateChangedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"OnCameraFramerateChanged", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CameraFramerateChangedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraFramerateChangedEvent);
}
inline bool Liv::Lck::LckVideoCapturer::get_ForceCaptureAllFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"get_ForceCaptureAllFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoCapturer::set_ForceCaptureAllFrames(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"set_ForceCaptureAllFrames", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::LckVideoCapturer::get_IsCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"get_IsCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoCapturer::set_IsCapturing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"set_IsCapturing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckVideoCapturer::StartCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"StartCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoCapturer::StopCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"StopCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckVideoCapturer::HasCurrentFrameBeenCaptured()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"HasCurrentFrameBeenCaptured", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoCapturer::SetTargetCaptureFramerate(uint32_t  targetCaptureFramerate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"SetTargetCaptureFramerate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetCaptureFramerate);
}
inline ::System::Collections::IEnumerator* Liv::Lck::LckVideoCapturer::CaptureLoopCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"CaptureLoopCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoCapturer::PrepareCameraForCapture(::Liv::Lck::ILckCamera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"PrepareCameraForCapture", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void Liv::Lck::LckVideoCapturer::HandleCameraFrame(::Liv::Lck::ILckCamera*  activeCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"HandleCameraFrame", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeCamera);
}
inline void Liv::Lck::LckVideoCapturer::HandleCameraFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"HandleCameraFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckVideoCapturer::CaptureCanBeCulled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"CaptureCanBeCulled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoCapturer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckVideoCapturer* Liv::Lck::LckVideoCapturer::New_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckActiveCameraConfigurer*  activeCameraConfigurer, ::Liv::Lck::ILckPreviewer*  previewer, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckVideoCapturer*>(videoTextureProvider, activeCameraConfigurer, previewer, encoder, outputConfigurer, eventBus));
}
/// @brief Convert operator to "::Liv::Lck::ILckVideoCapturer"
constexpr  Liv::Lck::LckVideoCapturer::operator ::Liv::Lck::ILckVideoCapturer*() noexcept {
return static_cast<::Liv::Lck::ILckVideoCapturer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckVideoCapturer"
constexpr ::Liv::Lck::ILckVideoCapturer* Liv::Lck::LckVideoCapturer::i___Liv__Lck__ILckVideoCapturer() noexcept {
return static_cast<::Liv::Lck::ILckVideoCapturer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckVideoCapturer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckVideoCapturer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckVideoCapturer::LckVideoCapturer()   {
}
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::*)(int32_t)>(&::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d3316c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::*)()>(&::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d337a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::*)()>(&::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d337ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::*)()>(&::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3383c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::*)()>(&::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d33844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::*)()>(&::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3387c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Liv::Lck::LckVideoCapturer*& Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::LckVideoCapturer* const& Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::__cordl_internal_set___4__this(::Liv::Lck::LckVideoCapturer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24* Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckVideoCapturer__CaptureLoopCoroutine_d__24::LckVideoCapturer__CaptureLoopCoroutine_d__24()   {
}
