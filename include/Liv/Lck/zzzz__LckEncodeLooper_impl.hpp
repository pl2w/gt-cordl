#pragma once
// IWYU pragma private; include "Liv/Lck/LckEncodeLooper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckEncodeLooper_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/Encoding/zzzz__ILckEncoder_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioMixer_def.hpp"
#include "Liv/Lck/zzzz__ILckEarlyUpdate_def.hpp"
#include "Liv/Lck/zzzz__ILckEncodeLooper_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckVideoCapturer_def.hpp"
#include "Liv/Lck/zzzz__LckEncodeLooper_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStartedEvent_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper::*)(::Liv::Lck::Encoding::ILckEncoder*, ::Liv::Lck::ILckOutputConfigurer*, ::Liv::Lck::ILckAudioMixer*, ::Liv::Lck::ILckVideoCapturer*, ::Liv::Lck::ILckEventBus*, ::Liv::Lck::Telemetry::ILckTelemetryClient*)>(&::Liv::Lck::LckEncodeLooper::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9ced0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckAudioMixer*>(), ::i2c::type_of<::Liv::Lck::ILckVideoCapturer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.EarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper::*)()>(&::Liv::Lck::LckEncodeLooper::EarlyUpdate)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x9ced270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"EarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.CalculateAudioTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::LckEncodeLooper::*)()>(&::Liv::Lck::LckEncodeLooper::CalculateAudioTime)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9ced960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"CalculateAudioTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.IsAudioDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckEncodeLooper::*)(::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::LckEncodeLooper::IsAudioDataValid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9ced828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"IsAudioDataValid", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.StartEncodingFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper::*)()>(&::Liv::Lck::LckEncodeLooper::StartEncodingFrames)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cede48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"StartEncodingFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.UnregisterEncodeFrameEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper::*)()>(&::Liv::Lck::LckEncodeLooper::UnregisterEncodeFrameEarlyUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ced824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"UnregisterEncodeFrameEarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.HandleEncodeFrameError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper::*)(::StringW)>(&::Liv::Lck::LckEncodeLooper::HandleEncodeFrameError)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9cedcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"HandleEncodeFrameError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.StartEncodingAfterWarmupFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::LckEncodeLooper::*)(int32_t)>(&::Liv::Lck::LckEncodeLooper::StartEncodingAfterWarmupFrames)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cede54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"StartEncodingAfterWarmupFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.OnEncoderStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper::*)(::GlobalNamespace::LckEvents_EncoderStartedEvent)>(&::Liv::Lck::LckEncodeLooper::OnEncoderStarted)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9cedef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"OnEncoderStarted", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStartedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.EnsureTrackTimeAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, float_t, float_t)>(&::Liv::Lck::LckEncodeLooper::EnsureTrackTimeAlignment)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x9cedab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"EnsureTrackTimeAlignment", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper::*)()>(&::Liv::Lck::LckEncodeLooper::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cedf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Encoding::ILckEncoder*& Liv::Lck::LckEncodeLooper::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder* const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr ::Liv::Lck::ILckOutputConfigurer*& Liv::Lck::LckEncodeLooper::__cordl_internal_get__outputConfigurer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr ::Liv::Lck::ILckOutputConfigurer* const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__outputConfigurer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputConfigurer = value;
}
constexpr ::Liv::Lck::ILckAudioMixer*& Liv::Lck::LckEncodeLooper::__cordl_internal_get__audioMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioMixer;
}
constexpr ::Liv::Lck::ILckAudioMixer* const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__audioMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioMixer;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__audioMixer(::Liv::Lck::ILckAudioMixer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioMixer = value;
}
constexpr ::Liv::Lck::ILckVideoCapturer*& Liv::Lck::LckEncodeLooper::__cordl_internal_get__videoCapturer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoCapturer;
}
constexpr ::Liv::Lck::ILckVideoCapturer* const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__videoCapturer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoCapturer;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__videoCapturer(::Liv::Lck::ILckVideoCapturer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____videoCapturer = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckEncodeLooper::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& Liv::Lck::LckEncodeLooper::__cordl_internal_get__telemetryClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__telemetryClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryClient = value;
}
constexpr float_t& Liv::Lck::LckEncodeLooper::__cordl_internal_get__pausedForTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pausedForTime;
}
constexpr float_t const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__pausedForTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pausedForTime;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__pausedForTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pausedForTime = value;
}
constexpr float_t& Liv::Lck::LckEncodeLooper::__cordl_internal_get__videoTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTime;
}
constexpr float_t const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__videoTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTime;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__videoTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____videoTime = value;
}
constexpr float_t& Liv::Lck::LckEncodeLooper::__cordl_internal_get__prevVideoTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevVideoTime;
}
constexpr float_t const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__prevVideoTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevVideoTime;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__prevVideoTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevVideoTime = value;
}
constexpr bool& Liv::Lck::LckEncodeLooper::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Liv::Lck::LckEncodeLooper::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Liv::Lck::LckEncodeLooper::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Liv::Lck::LckEncodeLooper::_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckAudioMixer*  audioMixer, ::Liv::Lck::ILckVideoCapturer*  videoCapturer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckAudioMixer*>(), ::i2c::type_of<::Liv::Lck::ILckVideoCapturer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoder, outputConfigurer, audioMixer, videoCapturer, eventBus, telemetryClient);
}
inline void Liv::Lck::LckEncodeLooper::EarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"EarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Liv::Lck::LckEncodeLooper::CalculateAudioTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"CalculateAudioTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Liv::Lck::LckEncodeLooper::IsAudioDataValid(::Liv::Lck::Collections::AudioBuffer*  audioData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"IsAudioDataValid", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, audioData);
}
inline void Liv::Lck::LckEncodeLooper::StartEncodingFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"StartEncodingFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckEncodeLooper::UnregisterEncodeFrameEarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"UnregisterEncodeFrameEarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckEncodeLooper::HandleEncodeFrameError(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"HandleEncodeFrameError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline ::System::Collections::IEnumerator* Liv::Lck::LckEncodeLooper::StartEncodingAfterWarmupFrames(int32_t  warmupFrameCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"StartEncodingAfterWarmupFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, warmupFrameCount);
}
inline void Liv::Lck::LckEncodeLooper::OnEncoderStarted(::GlobalNamespace::LckEvents_EncoderStartedEvent  encoderStartedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"OnEncoderStarted", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStartedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderStartedEvent);
}
inline void Liv::Lck::LckEncodeLooper::EnsureTrackTimeAlignment(::by_ref<float_t>  videoTime, float_t  audioTime, float_t  prevVideoTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"EnsureTrackTimeAlignment", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, videoTime, audioTime, prevVideoTime);
}
inline void Liv::Lck::LckEncodeLooper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckEncodeLooper* Liv::Lck::LckEncodeLooper::New_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckAudioMixer*  audioMixer, ::Liv::Lck::ILckVideoCapturer*  videoCapturer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckEncodeLooper*>(encoder, outputConfigurer, audioMixer, videoCapturer, eventBus, telemetryClient));
}
/// @brief Convert operator to "::Liv::Lck::ILckEncodeLooper"
constexpr  Liv::Lck::LckEncodeLooper::operator ::Liv::Lck::ILckEncodeLooper*() noexcept {
return static_cast<::Liv::Lck::ILckEncodeLooper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckEncodeLooper"
constexpr ::Liv::Lck::ILckEncodeLooper* Liv::Lck::LckEncodeLooper::i___Liv__Lck__ILckEncodeLooper() noexcept {
return static_cast<::Liv::Lck::ILckEncodeLooper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckEncodeLooper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckEncodeLooper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Liv::Lck::ILckEarlyUpdate"
constexpr  Liv::Lck::LckEncodeLooper::operator ::Liv::Lck::ILckEarlyUpdate*() noexcept {
return static_cast<::Liv::Lck::ILckEarlyUpdate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckEarlyUpdate"
constexpr ::Liv::Lck::ILckEarlyUpdate* Liv::Lck::LckEncodeLooper::i___Liv__Lck__ILckEarlyUpdate() noexcept {
return static_cast<::Liv::Lck::ILckEarlyUpdate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckEncodeLooper::LckEncodeLooper()   {
}
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::*)(int32_t)>(&::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ceded0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::*)()>(&::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cee01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::*)()>(&::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9cee020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::*)()>(&::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cee1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::*)()>(&::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9cee1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::*)()>(&::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cee1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Liv::Lck::LckEncodeLooper*& Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::LckEncodeLooper* const& Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_set___4__this(::Liv::Lck::LckEncodeLooper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_get_warmupFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warmupFrameCount;
}
constexpr int32_t const& Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_get_warmupFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warmupFrameCount;
}
constexpr void Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::__cordl_internal_set_warmupFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warmupFrameCount = value;
}
inline void Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21* Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21::LckEncodeLooper__StartEncodingAfterWarmupFrames_d__21()   {
}
