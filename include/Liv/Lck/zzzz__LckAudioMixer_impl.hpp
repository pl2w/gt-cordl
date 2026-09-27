#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioMixer.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "Liv/Lck/zzzz__LckAudioMixer_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioLimiter_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioMixer_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioSource_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckLateUpdate_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStartedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)(::Liv::Lck::ILckEventBus*, ::Liv::Lck::ILckOutputConfigurer*)>(&::Liv::Lck::LckAudioMixer::_ctor)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x9cdde00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.GetMixedAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Collections::AudioBuffer* (::Liv::Lck::LckAudioMixer::*)(float_t)>(&::Liv::Lck::LckAudioMixer::GetMixedAudio)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cde708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GetMixedAudio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.ReadAvailableAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::ReadAvailableAudioData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9cde9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"ReadAvailableAudioData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.EnableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::EnableCapture)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9cdeb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"EnableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.DisableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::DisableCapture)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9cdeda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"DisableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.MixAudioArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Collections::AudioBuffer* (::Liv::Lck::LckAudioMixer::*)(float_t)>(&::Liv::Lck::LckAudioMixer::MixAudioArrays)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x9cde70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"MixAudioArrays", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.EnqueueGameBufferSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::EnqueueGameBufferSamples)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x9cdee7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"EnqueueGameBufferSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.EnqueueMicBufferSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::EnqueueMicBufferSamples)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9cdf070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"EnqueueMicBufferSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.DetermineAvailableBlockCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::LckAudioMixer::*)(bool)>(&::Liv::Lck::LckAudioMixer::DetermineAvailableBlockCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cdf464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"DetermineAvailableBlockCount", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.CountAvailableGameBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::CountAvailableGameBlocks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cdf5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"CountAvailableGameBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.CountAvailableMicrophoneBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::CountAvailableMicrophoneBlocks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cdf678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"CountAvailableMicrophoneBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.MixBlocksIntoMixedAudioBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Collections::AudioBuffer* (::Liv::Lck::LckAudioMixer::*)(bool, int32_t)>(&::Liv::Lck::LckAudioMixer::MixBlocksIntoMixedAudioBuffer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9cdf4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"MixBlocksIntoMixedAudioBuffer", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.ApplyLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::LckAudioMixer::*)(float_t)>(&::Liv::Lck::LckAudioMixer::ApplyLimiter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cdf708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"ApplyLimiter", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.MicrophoneAudioDataCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)(::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::LckAudioMixer::MicrophoneAudioDataCallback)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9cdf750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"MicrophoneAudioDataCallback", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.GameAudioDataCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)(::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::LckAudioMixer::GameAudioDataCallback)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9cdf914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GameAudioDataCallback", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.VerifyAudioCaptureComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::VerifyAudioCaptureComponent)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x9cde1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"VerifyAudioCaptureComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.CheckMicAudioPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::CheckMicAudioPermissions)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9cdfa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"CheckMicAudioPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.SetMicrophoneCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckAudioMixer::*)(bool)>(&::Liv::Lck::LckAudioMixer::SetMicrophoneCaptureActive)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9cdfaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"SetMicrophoneCaptureActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.GetMicrophoneCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::GetMicrophoneCaptureActive)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9cdfd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GetMicrophoneCaptureActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.SetGameAudioMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckAudioMixer::*)(bool)>(&::Liv::Lck::LckAudioMixer::SetGameAudioMute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdfde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"SetGameAudioMute", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.IsGameAudioMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::IsGameAudioMute)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cdfdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"IsGameAudioMute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.SetMicrophoneGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)(float_t)>(&::Liv::Lck::LckAudioMixer::SetMicrophoneGain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdfe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"SetMicrophoneGain", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.SetGameAudioGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)(float_t)>(&::Liv::Lck::LckAudioMixer::SetGameAudioGain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdfe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"SetGameAudioGain", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.GetMicrophoneOutputLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::GetMicrophoneOutputLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdfe44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GetMicrophoneOutputLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.GetGameOutputLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::GetGameOutputLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdfe4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GetGameOutputLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.CalculateRootMeanSquare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::LckAudioMixer::CalculateRootMeanSquare)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9cdf888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"CalculateRootMeanSquare", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.PadWithSilence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Queue_1<float_t>*, int32_t, ::by_ref<int32_t>)>(&::Liv::Lck::LckAudioMixer::PadWithSilence)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9cdfe54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"PadWithSilence", {}, {::i2c::type_of<::System::Collections::Generic::Queue_1<float_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.EnsureAudioSourceSamplesWithinTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)(::StringW, float_t, ::System::Collections::Generic::Queue_1<float_t>*, ::by_ref<int32_t>)>(&::Liv::Lck::LckAudioMixer::EnsureAudioSourceSamplesWithinTolerance)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x9cdf140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"EnsureAudioSourceSamplesWithinTolerance", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::Queue_1<float_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.PrepareGameAudioSyncOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::PrepareGameAudioSyncOffset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9cdecfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"PrepareGameAudioSyncOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.OnEncoderStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)(::GlobalNamespace::LckEvents_EncoderStartedEvent)>(&::Liv::Lck::LckAudioMixer::OnEncoderStarted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cdfee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"OnEncoderStarted", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStartedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::LateUpdate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cdff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioMixer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioMixer::*)()>(&::Liv::Lck::LckAudioMixer::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cdfff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckAudioSource*& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioSource;
}
constexpr ::Liv::Lck::ILckAudioSource* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioSource;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__gameAudioSource(::Liv::Lck::ILckAudioSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameAudioSource = value;
}
constexpr bool& Liv::Lck::LckAudioMixer::__cordl_internal_get__isGameAudioMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGameAudioMuted;
}
constexpr bool const& Liv::Lck::LckAudioMixer::__cordl_internal_get__isGameAudioMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGameAudioMuted;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__isGameAudioMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isGameAudioMuted = value;
}
constexpr float_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioGain;
}
constexpr float_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioGain;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__gameAudioGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameAudioGain = value;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>*& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioQueue;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioQueue;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__gameAudioQueue(::System::Collections::Generic::Queue_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameAudioQueue = value;
}
constexpr ::Liv::Lck::ILckAudioSource*& Liv::Lck::LckAudioMixer::__cordl_internal_get__nativeMicrophoneCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeMicrophoneCapture;
}
constexpr ::Liv::Lck::ILckAudioSource* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__nativeMicrophoneCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeMicrophoneCapture;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__nativeMicrophoneCapture(::Liv::Lck::ILckAudioSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeMicrophoneCapture = value;
}
constexpr bool& Liv::Lck::LckAudioMixer::__cordl_internal_get__isMicrophoneMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMicrophoneMuted;
}
constexpr bool const& Liv::Lck::LckAudioMixer::__cordl_internal_get__isMicrophoneMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMicrophoneMuted;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__isMicrophoneMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMicrophoneMuted = value;
}
constexpr float_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__microphoneGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneGain;
}
constexpr float_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__microphoneGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneGain;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__microphoneGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneGain = value;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>*& Liv::Lck::LckAudioMixer::__cordl_internal_get__microphoneQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneQueue;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__microphoneQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneQueue;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__microphoneQueue(::System::Collections::Generic::Queue_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneQueue = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioMixer::__cordl_internal_get__micAudioBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micAudioBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__micAudioBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micAudioBuffer;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__micAudioBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micAudioBuffer = value;
}
constexpr float_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__lastMicrophoneLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMicrophoneLevel;
}
constexpr float_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__lastMicrophoneLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMicrophoneLevel;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__lastMicrophoneLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastMicrophoneLevel = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioBuffer;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__gameAudioBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameAudioBuffer = value;
}
constexpr float_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__lastGameAudioLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastGameAudioLevel;
}
constexpr float_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__lastGameAudioLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastGameAudioLevel;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__lastGameAudioLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastGameAudioLevel = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioMixer::__cordl_internal_get__mixedAudioBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixedAudioBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__mixedAudioBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixedAudioBuffer;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__mixedAudioBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mixedAudioBuffer = value;
}
constexpr int32_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__remainingGameAudioValuesToAdjust()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remainingGameAudioValuesToAdjust;
}
constexpr int32_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__remainingGameAudioValuesToAdjust() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remainingGameAudioValuesToAdjust;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__remainingGameAudioValuesToAdjust(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remainingGameAudioValuesToAdjust = value;
}
constexpr int32_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioValueCountOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioValueCountOffset;
}
constexpr int32_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__gameAudioValueCountOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioValueCountOffset;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__gameAudioValueCountOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameAudioValueCountOffset = value;
}
constexpr int32_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr ::UnityW<::UnityEngine::Component>& Liv::Lck::LckAudioMixer::__cordl_internal_get__audioCaptureMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioCaptureMarker;
}
constexpr ::UnityW<::UnityEngine::Component> const& Liv::Lck::LckAudioMixer::__cordl_internal_get__audioCaptureMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioCaptureMarker;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__audioCaptureMarker(::UnityW<::UnityEngine::Component>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioCaptureMarker = value;
}
constexpr ::Liv::Lck::ILckAudioLimiter*& Liv::Lck::LckAudioMixer::__cordl_internal_get__lckAudioLimiterHard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckAudioLimiterHard;
}
constexpr ::Liv::Lck::ILckAudioLimiter* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__lckAudioLimiterHard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckAudioLimiterHard;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__lckAudioLimiterHard(::Liv::Lck::ILckAudioLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckAudioLimiterHard = value;
}
constexpr ::Liv::Lck::ILckAudioLimiter*& Liv::Lck::LckAudioMixer::__cordl_internal_get__lckAudioLimiterSoft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckAudioLimiterSoft;
}
constexpr ::Liv::Lck::ILckAudioLimiter* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__lckAudioLimiterSoft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckAudioLimiterSoft;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__lckAudioLimiterSoft(::Liv::Lck::ILckAudioLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckAudioLimiterSoft = value;
}
constexpr ::Liv::Lck::ILckAudioLimiter*& Liv::Lck::LckAudioMixer::__cordl_internal_get__lckAudioLimiterCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckAudioLimiterCurve;
}
constexpr ::Liv::Lck::ILckAudioLimiter* const& Liv::Lck::LckAudioMixer::__cordl_internal_get__lckAudioLimiterCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckAudioLimiterCurve;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__lckAudioLimiterCurve(::Liv::Lck::ILckAudioLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckAudioLimiterCurve = value;
}
constexpr ::System::Nullable_1<float_t>& Liv::Lck::LckAudioMixer::__cordl_internal_get__micCaptureStartRecordingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micCaptureStartRecordingTime;
}
constexpr ::System::Nullable_1<float_t> const& Liv::Lck::LckAudioMixer::__cordl_internal_get__micCaptureStartRecordingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micCaptureStartRecordingTime;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__micCaptureStartRecordingTime(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micCaptureStartRecordingTime = value;
}
constexpr int32_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__totalGameSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalGameSamples;
}
constexpr int32_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__totalGameSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalGameSamples;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__totalGameSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalGameSamples = value;
}
constexpr int32_t& Liv::Lck::LckAudioMixer::__cordl_internal_get__totalMicSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalMicSamples;
}
constexpr int32_t const& Liv::Lck::LckAudioMixer::__cordl_internal_get__totalMicSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalMicSamples;
}
constexpr void Liv::Lck::LckAudioMixer::__cordl_internal_set__totalMicSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalMicSamples = value;
}
inline void Liv::Lck::LckAudioMixer::setStaticF__lateUpdateProfileMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "_lateUpdateProfileMarker", ::Liv::Lck::LckAudioMixer*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Liv::Lck::LckAudioMixer::getStaticF__lateUpdateProfileMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "_lateUpdateProfileMarker", ::Liv::Lck::LckAudioMixer*>();
}
inline void Liv::Lck::LckAudioMixer::_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventBus, outputConfigurer);
}
inline ::Liv::Lck::Collections::AudioBuffer* Liv::Lck::LckAudioMixer::GetMixedAudio(float_t  recordingTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GetMixedAudio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Collections::AudioBuffer*>(this, ___internal_method, recordingTime);
}
inline void Liv::Lck::LckAudioMixer::ReadAvailableAudioData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"ReadAvailableAudioData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioMixer::EnableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"EnableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioMixer::DisableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"DisableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Collections::AudioBuffer* Liv::Lck::LckAudioMixer::MixAudioArrays(float_t  recordingTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"MixAudioArrays", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Collections::AudioBuffer*>(this, ___internal_method, recordingTime);
}
inline void Liv::Lck::LckAudioMixer::EnqueueGameBufferSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"EnqueueGameBufferSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioMixer::EnqueueMicBufferSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"EnqueueMicBufferSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Liv::Lck::LckAudioMixer::DetermineAvailableBlockCount(bool  shouldIncludeMicAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"DetermineAvailableBlockCount", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, shouldIncludeMicAudio);
}
inline int32_t Liv::Lck::LckAudioMixer::CountAvailableGameBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"CountAvailableGameBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Liv::Lck::LckAudioMixer::CountAvailableMicrophoneBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"CountAvailableMicrophoneBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Liv::Lck::Collections::AudioBuffer* Liv::Lck::LckAudioMixer::MixBlocksIntoMixedAudioBuffer(bool  shouldIncludeMicAudio, int32_t  blocks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"MixBlocksIntoMixedAudioBuffer", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Collections::AudioBuffer*>(this, ___internal_method, shouldIncludeMicAudio, blocks);
}
inline float_t Liv::Lck::LckAudioMixer::ApplyLimiter(float_t  mixedAudioRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"ApplyLimiter", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, mixedAudioRaw);
}
inline void Liv::Lck::LckAudioMixer::MicrophoneAudioDataCallback(::Liv::Lck::Collections::AudioBuffer*  audioBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"MicrophoneAudioDataCallback", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioBuffer);
}
inline void Liv::Lck::LckAudioMixer::GameAudioDataCallback(::Liv::Lck::Collections::AudioBuffer*  audioBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GameAudioDataCallback", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioBuffer);
}
inline bool Liv::Lck::LckAudioMixer::VerifyAudioCaptureComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"VerifyAudioCaptureComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::LckAudioMixer::CheckMicAudioPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"CheckMicAudioPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckAudioMixer::SetMicrophoneCaptureActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"SetMicrophoneCaptureActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, active);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::LckAudioMixer::GetMicrophoneCaptureActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GetMicrophoneCaptureActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckAudioMixer::SetGameAudioMute(bool  isMute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"SetGameAudioMute", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isMute);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::LckAudioMixer::IsGameAudioMute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"IsGameAudioMute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioMixer::SetMicrophoneGain(float_t  gain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"SetMicrophoneGain", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gain);
}
inline void Liv::Lck::LckAudioMixer::SetGameAudioGain(float_t  gain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"SetGameAudioGain", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gain);
}
inline float_t Liv::Lck::LckAudioMixer::GetMicrophoneOutputLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GetMicrophoneOutputLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Liv::Lck::LckAudioMixer::GetGameOutputLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"GetGameOutputLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Liv::Lck::LckAudioMixer::CalculateRootMeanSquare(::Liv::Lck::Collections::AudioBuffer*  audioBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"CalculateRootMeanSquare", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, audioBuffer);
}
inline void Liv::Lck::LckAudioMixer::PadWithSilence(::System::Collections::Generic::Queue_1<float_t>*  audioQueue, int32_t  samplesToAdd, ::by_ref<int32_t>  runningSampleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"PadWithSilence", {}, {::i2c::type_of<::System::Collections::Generic::Queue_1<float_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, audioQueue, samplesToAdd, runningSampleCount);
}
inline void Liv::Lck::LckAudioMixer::EnsureAudioSourceSamplesWithinTolerance(::StringW  audioSourceName, float_t  captureTime, ::System::Collections::Generic::Queue_1<float_t>*  audioSourceQueue, ::by_ref<int32_t>  audioSourceRunningSampleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"EnsureAudioSourceSamplesWithinTolerance", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::Queue_1<float_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSourceName, captureTime, audioSourceQueue, audioSourceRunningSampleCount);
}
inline void Liv::Lck::LckAudioMixer::PrepareGameAudioSyncOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"PrepareGameAudioSyncOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioMixer::OnEncoderStarted(::GlobalNamespace::LckEvents_EncoderStartedEvent  encoderStartedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"OnEncoderStarted", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStartedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderStartedEvent);
}
inline void Liv::Lck::LckAudioMixer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioMixer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioMixer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckAudioMixer* Liv::Lck::LckAudioMixer::New_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckAudioMixer*>(eventBus, outputConfigurer));
}
/// @brief Convert operator to "::Liv::Lck::ILckAudioMixer"
constexpr  Liv::Lck::LckAudioMixer::operator ::Liv::Lck::ILckAudioMixer*() noexcept {
return static_cast<::Liv::Lck::ILckAudioMixer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckAudioMixer"
constexpr ::Liv::Lck::ILckAudioMixer* Liv::Lck::LckAudioMixer::i___Liv__Lck__ILckAudioMixer() noexcept {
return static_cast<::Liv::Lck::ILckAudioMixer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckAudioMixer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckAudioMixer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Liv::Lck::ILckLateUpdate"
constexpr  Liv::Lck::LckAudioMixer::operator ::Liv::Lck::ILckLateUpdate*() noexcept {
return static_cast<::Liv::Lck::ILckLateUpdate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckLateUpdate"
constexpr ::Liv::Lck::ILckLateUpdate* Liv::Lck::LckAudioMixer::i___Liv__Lck__ILckLateUpdate() noexcept {
return static_cast<::Liv::Lck::ILckLateUpdate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioMixer::LckAudioMixer()   {
}
