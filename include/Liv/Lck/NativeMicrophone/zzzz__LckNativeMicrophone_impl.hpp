#pragma once
// IWYU pragma private; include "Liv/Lck/NativeMicrophone/LckNativeMicrophone.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LckNativeMicrophone_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LckNativeMicrophone_ReturnCode_def.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LckNativeMicrophone__SetMicrophoneCaptureActive_d__26_def.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LckNativeMicrophone_def.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LogLevel_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioSource_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.microphone_capture_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_new)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d6e39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_new", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.microphone_capture_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckNativeMicrophone_ReturnCode (*)(uint64_t)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_free)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d6e418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_free", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.microphone_capture_start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckNativeMicrophone_ReturnCode (*)(uint64_t)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d6e494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_start", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.microphone_capture_stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckNativeMicrophone_ReturnCode (*)(uint64_t)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_stop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d6e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_stop", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.microphone_capture_get_audio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckNativeMicrophone_ReturnCode (*)(uint64_t, ::System::IntPtr)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_get_audio)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d6e58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_get_audio", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.set_max_log_level
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::NativeMicrophone::LogLevel)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::set_max_log_level)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d6e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"set_max_log_level", {}, {::i2c::type_of<::Liv::Lck::NativeMicrophone::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)(int32_t)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9d6e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.AudioDataCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, uint64_t)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::AudioDataCallback)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x9d6dfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"AudioDataCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.InitMicrophone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::InitMicrophone)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9d6e934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"InitMicrophone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)()>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d6ea18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)()>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::IsCapturing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6eab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"IsCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.GetAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::GetAudioData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d6eab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.EnableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)()>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::EnableCapture)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9d6eb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"EnableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.DisableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)()>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::DisableCapture)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9d6ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"DisableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.SetMicrophoneCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)(bool)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::SetMicrophoneCaptureActive)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d6ecf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"SetMicrophoneCaptureActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone.SetMaxLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::NativeMicrophone::LogLevel)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::SetMaxLogLevel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d6e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"SetMaxLogLevel", {}, {::i2c::type_of<::Liv::Lck::NativeMicrophone::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone._EnableCapture_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)()>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::_EnableCapture_b__24_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6ee78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"<EnableCapture>b__24_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone._DisableCapture_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::NativeMicrophone::LckNativeMicrophone::*)()>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone::_DisableCapture_b__25_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"<DisableCapture>b__25_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__nativeInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeInstance;
}
constexpr uint64_t const& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__nativeInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeInstance;
}
constexpr void Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_set__nativeInstance(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeInstance = value;
}
constexpr ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate* const& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr void Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_set__callback(::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callback = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__audioBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__audioBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBuffer;
}
constexpr void Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_set__audioBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioBuffer = value;
}
constexpr ::System::IntPtr& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__callbackPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbackPtr;
}
constexpr ::System::IntPtr const& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__callbackPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callbackPtr;
}
constexpr void Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_set__callbackPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callbackPtr = value;
}
constexpr bool& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__isCapturing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCapturing;
}
constexpr bool const& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__isCapturing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCapturing;
}
constexpr void Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_set__isCapturing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCapturing = value;
}
constexpr bool& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__shouldDisableCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDisableCapture;
}
constexpr bool const& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__shouldDisableCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDisableCapture;
}
constexpr void Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_set__shouldDisableCapture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldDisableCapture = value;
}
constexpr bool& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__shouldEnableCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldEnableCapture;
}
constexpr bool const& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__shouldEnableCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldEnableCapture;
}
constexpr void Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_set__shouldEnableCapture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldEnableCapture = value;
}
constexpr ::System::Threading::Tasks::Task*& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__setMicStateTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setMicStateTask;
}
constexpr ::System::Threading::Tasks::Task* const& Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_get__setMicStateTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setMicStateTask;
}
constexpr void Liv::Lck::NativeMicrophone::LckNativeMicrophone::__cordl_internal_set__setMicStateTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setMicStateTask = value;
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::setStaticF__instances(::System::Collections::Generic::Dictionary_2<uint64_t,::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>*, "_instances", ::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>* Liv::Lck::NativeMicrophone::LckNativeMicrophone::getStaticF__instances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>*, "_instances", ::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>();
}
inline uint64_t Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_new(uint32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_new", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, sampleRate);
}
inline ::GlobalNamespace::LckNativeMicrophone_ReturnCode Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_free(uint64_t  audioCaptureKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_free", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckNativeMicrophone_ReturnCode>(nullptr, ___internal_method, audioCaptureKey);
}
inline ::GlobalNamespace::LckNativeMicrophone_ReturnCode Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_start(uint64_t  audioCaptureKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_start", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckNativeMicrophone_ReturnCode>(nullptr, ___internal_method, audioCaptureKey);
}
inline ::GlobalNamespace::LckNativeMicrophone_ReturnCode Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_stop(uint64_t  audioCaptureKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_stop", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckNativeMicrophone_ReturnCode>(nullptr, ___internal_method, audioCaptureKey);
}
inline ::GlobalNamespace::LckNativeMicrophone_ReturnCode Liv::Lck::NativeMicrophone::LckNativeMicrophone::microphone_capture_get_audio(uint64_t  audioCaptureKey, ::System::IntPtr  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"microphone_capture_get_audio", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckNativeMicrophone_ReturnCode>(nullptr, ___internal_method, audioCaptureKey, callback);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::set_max_log_level(::Liv::Lck::NativeMicrophone::LogLevel  levelFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"set_max_log_level", {}, {::i2c::type_of<::Liv::Lck::NativeMicrophone::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, levelFilter);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::_ctor(int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::AudioDataCallback(::System::IntPtr  dataPtr, int32_t  length, uint64_t  audioCaptureKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"AudioDataCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dataPtr, length, audioCaptureKey);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::InitMicrophone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"InitMicrophone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::NativeMicrophone::LckNativeMicrophone::IsCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"IsCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::EnableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"EnableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::DisableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"DisableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::NativeMicrophone::LckNativeMicrophone::SetMicrophoneCaptureActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"SetMicrophoneCaptureActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, active);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone::SetMaxLogLevel(::Liv::Lck::NativeMicrophone::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"SetMaxLogLevel", {}, {::i2c::type_of<::Liv::Lck::NativeMicrophone::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logLevel);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::NativeMicrophone::LckNativeMicrophone::_EnableCapture_b__24_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"<EnableCapture>b__24_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::NativeMicrophone::LckNativeMicrophone::_DisableCapture_b__25_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(),
                        {"<DisableCapture>b__25_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Liv::Lck::NativeMicrophone::LckNativeMicrophone* Liv::Lck::NativeMicrophone::LckNativeMicrophone::New_ctor(int32_t  sampleRate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::NativeMicrophone::LckNativeMicrophone*>(sampleRate));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::NativeMicrophone::LckNativeMicrophone::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::NativeMicrophone::LckNativeMicrophone::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr  Liv::Lck::NativeMicrophone::LckNativeMicrophone::operator ::Liv::Lck::ILckAudioSource*() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* Liv::Lck::NativeMicrophone::LckNativeMicrophone::i___Liv__Lck__ILckAudioSource() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::NativeMicrophone::LckNativeMicrophone::LckNativeMicrophone()   {
}
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d6e894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::*)(::System::IntPtr, int32_t, uint64_t)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d6ee88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::*)(::System::IntPtr, int32_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d6ee9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d6ef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::Invoke(::System::IntPtr  dataPtr, int32_t  length, uint64_t  audioCaptureKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataPtr, length, audioCaptureKey);
}
inline ::System::IAsyncResult* Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::BeginInvoke(::System::IntPtr  dataPtr, int32_t  length, uint64_t  audioCaptureKey, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, dataPtr, length, audioCaptureKey, callback, object);
}
inline void Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate* Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::NativeMicrophone::LckNativeMicrophone_AudioDataCallbackDelegate::LckNativeMicrophone_AudioDataCallbackDelegate()   {
}
