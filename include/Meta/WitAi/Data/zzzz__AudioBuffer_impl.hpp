#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioBuffer.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBuffer_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBufferConfiguration_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBuffer_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
#include "Meta/WitAi/Data/zzzz__IAudioBufferProvider_def.hpp"
#include "Meta/WitAi/Data/zzzz__RingBuffer_1_def.hpp"
#include "Meta/WitAi/Events/zzzz__AudioBufferEvents_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputSource_def.hpp"
#include "Meta/WitAi/Lib/zzzz__IAudioLevelRangeProvider_def.hpp"
#include "Meta/WitAi/Lib/zzzz__Mic_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get__log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (*)()>(&::Meta::WitAi::Data::AudioBuffer::get__log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e96c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get__log", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e96ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.SingletonInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::WitAi::Data::AudioBuffer::SingletonInit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e96d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"SingletonInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::AudioBuffer> (*)()>(&::Meta::WitAi::Data::AudioBuffer::get_Instance)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x9e83b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.CanInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::WitAi::Data::AudioBuffer::CanInstantiate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e96d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"CanInstantiate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::AudioEncoding* (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::get_AudioEncoding)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e96e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::AudioBufferEvents* (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::get_Events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e96e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_MicInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::IAudioInputSource* (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::get_MicInput)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e84050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_MicInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.set_MicInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::Meta::WitAi::Interfaces::IAudioInputSource*)>(&::Meta::WitAi::Data::AudioBuffer::set_MicInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e96e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"set_MicInput", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::IAudioInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.FindOrCreateInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::IAudioInputSource* (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::FindOrCreateInputSource)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x9e97624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"FindOrCreateInputSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.SetInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::Meta::WitAi::Interfaces::IAudioInputSource*)>(&::Meta::WitAi::Data::AudioBuffer::SetInputSource)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x9e96e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"SetInputSource", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::IAudioInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.SetInputDelegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(bool)>(&::Meta::WitAi::Data::AudioBuffer::SetInputDelegates)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x9e978f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"SetInputDelegates", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_MicMinAudioLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::get_MicMinAudioLevel)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e97da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_MicMinAudioLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_MicMaxAudioLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::get_MicMaxAudioLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e97e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_MicMaxAudioLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_IsInputAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::get_IsInputAvailable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e97efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_IsInputAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_AudioState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::VoiceAudioInputState (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::get_AudioState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e97f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_AudioState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.set_AudioState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::Meta::Voice::VoiceAudioInputState)>(&::Meta::WitAi::Data::AudioBuffer::set_AudioState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e97f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"set_AudioState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.get_MicMaxLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::get_MicMaxLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e97f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_MicMaxLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.set_MicMaxLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(float_t)>(&::Meta::WitAi::Data::AudioBuffer::set_MicMaxLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e97f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"set_MicMaxLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::AudioBuffer::*)(::UnityEngine::Component*)>(&::Meta::WitAi::Data::AudioBuffer::IsRecording)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e97f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"IsRecording", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e97f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::OnDestroy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9e983f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::OnEnable)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x9e984bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e98900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.SetAudioState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::Meta::Voice::VoiceAudioInputState)>(&::Meta::WitAi::Data::AudioBuffer::SetAudioState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e98930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"SetAudioState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::UnityEngine::Component*)>(&::Meta::WitAi::Data::AudioBuffer::StartRecording)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9e8438c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"StartRecording", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnMicRecordSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::OnMicRecordSuccess)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e98a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnMicRecordStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::UnityEngine::Component*)>(&::Meta::WitAi::Data::AudioBuffer::OnMicRecordStarted)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e98ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordStarted", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnMicRecordFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::OnMicRecordFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e98c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordFailed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::UnityEngine::Component*)>(&::Meta::WitAi::Data::AudioBuffer::StopRecording)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9e847a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"StopRecording", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnMicRecordStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::OnMicRecordStop)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e98c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnMicRecordStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::UnityEngine::Component*)>(&::Meta::WitAi::Data::AudioBuffer::OnMicRecordStopped)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e98dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordStopped", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.InitializeMicDataBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::InitializeMicDataBuffer)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x9e97ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"InitializeMicDataBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnMicSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(int32_t, ::ArrayW<float_t>, float_t)>(&::Meta::WitAi::Data::AudioBuffer::OnMicSampleReady)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e98ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicSampleReady", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.OnAudioSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Meta::WitAi::Data::AudioBuffer::OnAudioSampleReady)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e98ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnAudioSampleReady", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.WaitForSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::WaitForSampleReady)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e9900c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"WaitForSampleReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.CallSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*)>(&::Meta::WitAi::Data::AudioBuffer::CallSampleReady)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9e9964c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"CallSampleReady", {}, {::i2c::type_of<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.UpdateVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::UpdateVolume)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e98a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"UpdateVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.StopUpdateVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::StopUpdateVolume)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e989c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"StopUpdateVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.EncodeAndPush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Data::AudioBuffer::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Meta::WitAi::Data::AudioBuffer::EncodeAndPush)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x9e990cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"EncodeAndPush", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.GetEncodingMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(int32_t, bool, ::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Meta::WitAi::Data::AudioBuffer::GetEncodingMinMax)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e99cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"GetEncodingMinMax", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.CreateMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::CreateMarker)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e99078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"CreateMarker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.CreateMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* (::Meta::WitAi::Data::AudioBuffer::*)(float_t)>(&::Meta::WitAi::Data::AudioBuffer::CreateMarker)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e99d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"CreateMarker", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.UpdateSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)(int32_t)>(&::Meta::WitAi::Data::AudioBuffer::UpdateSampleRate)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x9e997e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"UpdateSampleRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.GetAverageSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::ArrayW<double_t>, int32_t)>(&::Meta::WitAi::Data::AudioBuffer::GetAverageSampleRate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e99e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"GetAverageSampleRate", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer.GetClosestSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t)>(&::Meta::WitAi::Data::AudioBuffer::GetClosestSampleRate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9e99e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"GetClosestSampleRate", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer::*)()>(&::Meta::WitAi::Data::AudioBuffer::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9e9a01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get_alwaysRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRecording;
}
constexpr bool const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get_alwaysRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRecording;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set_alwaysRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysRecording = value;
}
constexpr ::Meta::WitAi::Data::AudioBufferConfiguration*& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get_audioBufferConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioBufferConfiguration;
}
constexpr ::Meta::WitAi::Data::AudioBufferConfiguration* const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get_audioBufferConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioBufferConfiguration;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set_audioBufferConfiguration(::Meta::WitAi::Data::AudioBufferConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioBufferConfiguration = value;
}
constexpr ::Meta::WitAi::Events::AudioBufferEvents*& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::Meta::WitAi::Events::AudioBufferEvents* const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set_events(::Meta::WitAi::Events::AudioBufferEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__micInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micInput;
}
constexpr ::UnityW<::UnityEngine::Object> const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__micInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micInput;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__micInput(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micInput = value;
}
constexpr ::Meta::WitAi::Lib::IAudioLevelRangeProvider*& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__micLevelRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micLevelRange;
}
constexpr ::Meta::WitAi::Lib::IAudioLevelRangeProvider* const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__micLevelRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micLevelRange;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__micLevelRange(::Meta::WitAi::Lib::IAudioLevelRangeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micLevelRange = value;
}
constexpr bool& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr bool const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
constexpr ::UnityW<::Meta::WitAi::Lib::Mic>& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__instantiatedMic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instantiatedMic;
}
constexpr ::UnityW<::Meta::WitAi::Lib::Mic> const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__instantiatedMic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instantiatedMic;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__instantiatedMic(::UnityW<::Meta::WitAi::Lib::Mic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instantiatedMic = value;
}
constexpr int32_t& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__totalSampleChunks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalSampleChunks;
}
constexpr int32_t const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__totalSampleChunks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalSampleChunks;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__totalSampleChunks(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalSampleChunks = value;
}
constexpr ::Meta::WitAi::Data::RingBuffer_1<uint8_t>*& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__outputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputBuffer;
}
constexpr ::Meta::WitAi::Data::RingBuffer_1<uint8_t>* const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__outputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputBuffer;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__outputBuffer(::Meta::WitAi::Data::RingBuffer_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputBuffer = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Component>>*& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__recorders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorders;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Component>>* const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__recorders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorders;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__recorders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Component>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recorders = value;
}
constexpr ::Meta::Voice::VoiceAudioInputState& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__AudioState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioState_k__BackingField;
}
constexpr ::Meta::Voice::VoiceAudioInputState const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__AudioState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioState_k__BackingField;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__AudioState_k__BackingField(::Meta::Voice::VoiceAudioInputState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioState_k__BackingField = value;
}
constexpr float_t& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__MicMaxLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MicMaxLevel_k__BackingField;
}
constexpr float_t const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__MicMaxLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MicMaxLevel_k__BackingField;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__MicMaxLevel_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MicMaxLevel_k__BackingField = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__volumeUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeUpdate;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__volumeUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeUpdate;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__volumeUpdate(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeUpdate = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__sampleReadyCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleReadyCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__sampleReadyCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleReadyCoroutine;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__sampleReadyCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleReadyCoroutine = value;
}
constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__sampleReadyMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleReadyMarker;
}
constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__sampleReadyMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleReadyMarker;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__sampleReadyMarker(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleReadyMarker = value;
}
constexpr float_t& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__sampleReadyMaxLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleReadyMaxLevel;
}
constexpr float_t const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__sampleReadyMaxLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleReadyMaxLevel;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__sampleReadyMaxLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleReadyMaxLevel = value;
}
constexpr int64_t& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__lastSampleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSampleTime;
}
constexpr int64_t const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__lastSampleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSampleTime;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__lastSampleTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSampleTime = value;
}
constexpr int64_t& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__startSampleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startSampleTime;
}
constexpr int64_t const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__startSampleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startSampleTime;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__startSampleTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startSampleTime = value;
}
constexpr int64_t& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__measureSampleTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____measureSampleTotal;
}
constexpr int64_t const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__measureSampleTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____measureSampleTotal;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__measureSampleTotal(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____measureSampleTotal = value;
}
constexpr int32_t& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__measuredSampleRateCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____measuredSampleRateCount;
}
constexpr int32_t const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__measuredSampleRateCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____measuredSampleRateCount;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__measuredSampleRateCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____measuredSampleRateCount = value;
}
constexpr ::ArrayW<double_t>& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__measuredSampleRates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____measuredSampleRates;
}
constexpr ::ArrayW<double_t> const& Meta::WitAi::Data::AudioBuffer::__cordl_internal_get__measuredSampleRates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____measuredSampleRates;
}
constexpr void Meta::WitAi::Data::AudioBuffer::__cordl_internal_set__measuredSampleRates(::ArrayW<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____measuredSampleRates = value;
}
inline void Meta::WitAi::Data::AudioBuffer::setStaticF___log_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::Logging::IVLogger*, "<_log>k__BackingField", ::Meta::WitAi::Data::AudioBuffer*>(std::forward<::Meta::Voice::Logging::IVLogger*>(value));
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::Data::AudioBuffer::getStaticF___log_k__BackingField()  {
return ::cordl_internals::getStaticField<::Meta::Voice::Logging::IVLogger*, "<_log>k__BackingField", ::Meta::WitAi::Data::AudioBuffer*>();
}
inline void Meta::WitAi::Data::AudioBuffer::setStaticF__isQuitting(bool  value)  {
::cordl_internals::setStaticField<bool, "_isQuitting", ::Meta::WitAi::Data::AudioBuffer*>(std::forward<bool>(value));
}
inline bool Meta::WitAi::Data::AudioBuffer::getStaticF__isQuitting()  {
return ::cordl_internals::getStaticField<bool, "_isQuitting", ::Meta::WitAi::Data::AudioBuffer*>();
}
inline void Meta::WitAi::Data::AudioBuffer::setStaticF_instantiateMic(bool  value)  {
::cordl_internals::setStaticField<bool, "instantiateMic", ::Meta::WitAi::Data::AudioBuffer*>(std::forward<bool>(value));
}
inline bool Meta::WitAi::Data::AudioBuffer::getStaticF_instantiateMic()  {
return ::cordl_internals::getStaticField<bool, "instantiateMic", ::Meta::WitAi::Data::AudioBuffer*>();
}
inline void Meta::WitAi::Data::AudioBuffer::setStaticF__instance(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::WitAi::Data::AudioBuffer>, "_instance", ::Meta::WitAi::Data::AudioBuffer*>(std::forward<::UnityW<::Meta::WitAi::Data::AudioBuffer>>(value));
}
inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> Meta::WitAi::Data::AudioBuffer::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::WitAi::Data::AudioBuffer>, "_instance", ::Meta::WitAi::Data::AudioBuffer*>();
}
inline void Meta::WitAi::Data::AudioBuffer::setStaticF_AudioBufferProvider(::Meta::WitAi::Data::IAudioBufferProvider*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::Data::IAudioBufferProvider*, "AudioBufferProvider", ::Meta::WitAi::Data::AudioBuffer*>(std::forward<::Meta::WitAi::Data::IAudioBufferProvider*>(value));
}
inline ::Meta::WitAi::Data::IAudioBufferProvider* Meta::WitAi::Data::AudioBuffer::getStaticF_AudioBufferProvider()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::Data::IAudioBufferProvider*, "AudioBufferProvider", ::Meta::WitAi::Data::AudioBuffer*>();
}
inline void Meta::WitAi::Data::AudioBuffer::setStaticF_ALLOWED_SAMPLE_RATES(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "ALLOWED_SAMPLE_RATES", ::Meta::WitAi::Data::AudioBuffer*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Meta::WitAi::Data::AudioBuffer::getStaticF_ALLOWED_SAMPLE_RATES()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "ALLOWED_SAMPLE_RATES", ::Meta::WitAi::Data::AudioBuffer*>();
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::Data::AudioBuffer::get__log()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get__log", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(nullptr, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::SingletonInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"SingletonInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> Meta::WitAi::Data::AudioBuffer::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::AudioBuffer>>(nullptr, ___internal_method);
}
inline bool Meta::WitAi::Data::AudioBuffer::CanInstantiate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"CanInstantiate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioEncoding* Meta::WitAi::Data::AudioBuffer::get_AudioEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::AudioEncoding*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::AudioBufferEvents* Meta::WitAi::Data::AudioBuffer::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::AudioBufferEvents*>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::IAudioInputSource* Meta::WitAi::Data::AudioBuffer::get_MicInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_MicInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::IAudioInputSource*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::set_MicInput(::Meta::WitAi::Interfaces::IAudioInputSource*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"set_MicInput", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::IAudioInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Interfaces::IAudioInputSource* Meta::WitAi::Data::AudioBuffer::FindOrCreateInputSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"FindOrCreateInputSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::IAudioInputSource*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::SetInputSource(::Meta::WitAi::Interfaces::IAudioInputSource*  newInput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"SetInputSource", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::IAudioInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInput);
}
inline void Meta::WitAi::Data::AudioBuffer::SetInputDelegates(bool  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"SetInputDelegates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, add);
}
inline float_t Meta::WitAi::Data::AudioBuffer::get_MicMinAudioLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_MicMinAudioLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Meta::WitAi::Data::AudioBuffer::get_MicMaxAudioLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_MicMaxAudioLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Meta::WitAi::Data::AudioBuffer::get_IsInputAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_IsInputAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::Voice::VoiceAudioInputState Meta::WitAi::Data::AudioBuffer::get_AudioState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_AudioState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::VoiceAudioInputState>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::set_AudioState(::Meta::Voice::VoiceAudioInputState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"set_AudioState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::WitAi::Data::AudioBuffer::get_MicMaxLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"get_MicMaxLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::set_MicMaxLevel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"set_MicMaxLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Data::AudioBuffer::IsRecording(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"IsRecording", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void Meta::WitAi::Data::AudioBuffer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::SetAudioState(::Meta::Voice::VoiceAudioInputState  newAudioState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"SetAudioState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAudioState);
}
inline void Meta::WitAi::Data::AudioBuffer::StartRecording(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"StartRecording", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void Meta::WitAi::Data::AudioBuffer::OnMicRecordSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::OnMicRecordStarted(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordStarted", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void Meta::WitAi::Data::AudioBuffer::OnMicRecordFailed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordFailed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::StopRecording(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"StopRecording", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void Meta::WitAi::Data::AudioBuffer::OnMicRecordStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::OnMicRecordStopped(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicRecordStopped", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void Meta::WitAi::Data::AudioBuffer::InitializeMicDataBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"InitializeMicDataBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::OnMicSampleReady(int32_t  sampleCount, ::ArrayW<float_t>  samples, float_t  levelMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnMicSampleReady", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleCount, samples, levelMax);
}
inline void Meta::WitAi::Data::AudioBuffer::OnAudioSampleReady(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"OnAudioSampleReady", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, offset, length);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Data::AudioBuffer::WaitForSampleReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"WaitForSampleReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::CallSampleReady(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"CallSampleReady", {}, {::i2c::type_of<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, marker);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Data::AudioBuffer::UpdateVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"UpdateVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer::StopUpdateVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"StopUpdateVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Meta::WitAi::Data::AudioBuffer::EncodeAndPush(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"EncodeAndPush", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, samples, offset, length);
}
inline void Meta::WitAi::Data::AudioBuffer::GetEncodingMinMax(int32_t  bits, bool  _cordl_signed, ::by_ref<int64_t>  encodingMin, ::by_ref<int64_t>  encodingMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"GetEncodingMinMax", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bits, _cordl_signed, encodingMin, encodingMax);
}
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* Meta::WitAi::Data::AudioBuffer::CreateMarker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"CreateMarker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* Meta::WitAi::Data::AudioBuffer::CreateMarker(float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"CreateMarker", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*>(this, ___internal_method, offset);
}
inline void Meta::WitAi::Data::AudioBuffer::UpdateSampleRate(int32_t  sampleLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"UpdateSampleRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleLength);
}
inline double_t Meta::WitAi::Data::AudioBuffer::GetAverageSampleRate(::ArrayW<double_t>  sampleRates, int32_t  sampleRateCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"GetAverageSampleRate", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, sampleRates, sampleRateCount);
}
inline int32_t Meta::WitAi::Data::AudioBuffer::GetClosestSampleRate(double_t  samplesPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {"GetClosestSampleRate", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, samplesPerSecond);
}
inline void Meta::WitAi::Data::AudioBuffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioBuffer* Meta::WitAi::Data::AudioBuffer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::AudioBuffer*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::AudioBuffer::AudioBuffer()   {
}
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::*)(int32_t)>(&::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e99624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::*)()>(&::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9a524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::*)()>(&::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e9a528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::*)()>(&::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::*)()>(&::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e9a688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::*)()>(&::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9a6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68* Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68::AudioBuffer__WaitForSampleReady_d__68()   {
}
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::*)(int32_t)>(&::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e997c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::*)()>(&::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9a364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::*)()>(&::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9e9a368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::*)()>(&::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9a4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::*)()>(&::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e9a4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::*)()>(&::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9a51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_get__volume_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume_5__2;
}
constexpr float_t const& Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_get__volume_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume_5__2;
}
constexpr void Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::__cordl_internal_set__volume_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume_5__2 = value;
}
inline void Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70* Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70::AudioBuffer__UpdateVolume_d__70()   {
}
