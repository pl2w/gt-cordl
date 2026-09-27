#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/BaseAudioClipInput.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Lib/zzzz__BaseAudioClipInput_def.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputSource_def.hpp"
#include "Meta/WitAi/Lib/zzzz__BaseAudioClipInput_def.hpp"
#include "Meta/WitAi/Lib/zzzz__IAudioLevelRangeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_Clip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_ClipPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_ClipPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_CanActivateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_CanActivateAudio)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_ActivateOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_ActivateOnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_AudioChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_AudioChannels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_AudioSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_AudioSampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_AudioSampleLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_AudioSampleLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.set_AudioSampleLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(int32_t)>(&::Meta::WitAi::Lib::BaseAudioClipInput::set_AudioSampleLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"set_AudioSampleLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_MinAudioLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_MinAudioLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_MaxAudioLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_MaxAudioLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::AudioEncoding* (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_AudioEncoding)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e15ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_ActivationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::VoiceAudioInputState (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_ActivationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"get_ActivationState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.set_ActivationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::Meta::Voice::VoiceAudioInputState)>(&::Meta::WitAi::Lib::BaseAudioClipInput::set_ActivationState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"set_ActivationState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.add_OnActivationStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::add_OnActivationStateChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e15c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnActivationStateChange", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::VoiceAudioInputState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.remove_OnActivationStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::remove_OnActivationStateChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e15ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnActivationStateChange", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::VoiceAudioInputState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_IsRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.set_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(bool)>(&::Meta::WitAi::Lib::BaseAudioClipInput::set_IsRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e15da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"set_IsRecording", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.add_OnStartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::add_OnStartRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e15da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.remove_OnStartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::remove_OnStartRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e15e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.add_OnStartRecordingFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::add_OnStartRecordingFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e15ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.remove_OnStartRecordingFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::remove_OnStartRecordingFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e15f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.add_OnStopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::add_OnStopRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e16018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.remove_OnStopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::remove_OnStopRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e160b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.add_OnSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::add_OnSampleReady)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e16150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.remove_OnSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::remove_OnSampleReady)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e16200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.SetActivationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::Meta::Voice::VoiceAudioInputState)>(&::Meta::WitAi::Lib::BaseAudioClipInput::SetActivationState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e162b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"SetActivationState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::get_IsMuted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e162d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.set_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(bool)>(&::Meta::WitAi::Lib::BaseAudioClipInput::set_IsMuted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e162d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.add_OnMicMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::add_OnMicMuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e162e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.remove_OnMicMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::remove_OnMicMuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e1637c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.add_OnMicUnmuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::add_OnMicUnmuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e16418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.remove_OnMicUnmuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(::System::Action*)>(&::Meta::WitAi::Lib::BaseAudioClipInput::remove_OnMicUnmuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e164b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.SetMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(bool)>(&::Meta::WitAi::Lib::BaseAudioClipInput::SetMuted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e16550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e165d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.ActivateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::ActivateAudio)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9e16610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"ActivateAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.PerformActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::PerformActivation)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e16848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"PerformActivation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.HandleActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::HandleActivation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e168dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.DeactivateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::DeactivateAudio)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9e16948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"DeactivateAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.HandleDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::HandleDeactivation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)(int32_t)>(&::Meta::WitAi::Lib::BaseAudioClipInput::StartRecording)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9e16ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.ReadRawAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::ReadRawAudio)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e16c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"ReadRawAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::StopRecording)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e16cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e16ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__AudioSampleLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioSampleLength_k__BackingField;
}
constexpr int32_t const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__AudioSampleLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioSampleLength_k__BackingField;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set__AudioSampleLength_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioSampleLength_k__BackingField = value;
}
constexpr ::Meta::WitAi::Data::AudioEncoding*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__audioEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEncoding;
}
constexpr ::Meta::WitAi::Data::AudioEncoding* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__audioEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEncoding;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set__audioEncoding(::Meta::WitAi::Data::AudioEncoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioEncoding = value;
}
constexpr ::Meta::Voice::VoiceAudioInputState& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__ActivationState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActivationState_k__BackingField;
}
constexpr ::Meta::Voice::VoiceAudioInputState const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__ActivationState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActivationState_k__BackingField;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set__ActivationState_k__BackingField(::Meta::Voice::VoiceAudioInputState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActivationState_k__BackingField = value;
}
constexpr ::System::Action_1<::Meta::Voice::VoiceAudioInputState>*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnActivationStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnActivationStateChange;
}
constexpr ::System::Action_1<::Meta::Voice::VoiceAudioInputState>* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnActivationStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnActivationStateChange;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set_OnActivationStateChange(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnActivationStateChange = value;
}
constexpr bool& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__IsRecording_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRecording_k__BackingField;
}
constexpr bool const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__IsRecording_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRecording_k__BackingField;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set__IsRecording_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRecording_k__BackingField = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnStartRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecording;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnStartRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecording;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set_OnStartRecording(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartRecording = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnStartRecordingFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecordingFailed;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnStartRecordingFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecordingFailed;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set_OnStartRecordingFailed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartRecordingFailed = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnStopRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopRecording;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnStopRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopRecording;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set_OnStopRecording(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStopRecording = value;
}
constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnSampleReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReady;
}
constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnSampleReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReady;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSampleReady = value;
}
constexpr bool& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__IsMuted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMuted_k__BackingField;
}
constexpr bool const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__IsMuted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMuted_k__BackingField;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set__IsMuted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMuted_k__BackingField = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnMicMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicMuted;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnMicMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicMuted;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set_OnMicMuted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMicMuted = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnMicUnmuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicUnmuted;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get_OnMicUnmuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicUnmuted;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set_OnMicUnmuted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMicUnmuted = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__activateCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__activateCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateCoroutine;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set__activateCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateCoroutine = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__recordCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_get__recordCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordCoroutine;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput::__cordl_internal_set__recordCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordCoroutine = value;
}
inline ::UnityW<::UnityEngine::AudioClip> Meta::WitAi::Lib::BaseAudioClipInput::get_Clip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::BaseAudioClipInput::get_ClipPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::BaseAudioClipInput::get_CanActivateAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::BaseAudioClipInput::get_ActivateOnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::BaseAudioClipInput::get_AudioChannels()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::BaseAudioClipInput::get_AudioSampleRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::BaseAudioClipInput::get_AudioSampleLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::set_AudioSampleLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"set_AudioSampleLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::WitAi::Lib::BaseAudioClipInput::get_MinAudioLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Meta::WitAi::Lib::BaseAudioClipInput::get_MaxAudioLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioEncoding* Meta::WitAi::Lib::BaseAudioClipInput::get_AudioEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::AudioEncoding*>(this, ___internal_method);
}
inline ::Meta::Voice::VoiceAudioInputState Meta::WitAi::Lib::BaseAudioClipInput::get_ActivationState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"get_ActivationState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::VoiceAudioInputState>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::set_ActivationState(::Meta::Voice::VoiceAudioInputState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"set_ActivationState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::add_OnActivationStateChange(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnActivationStateChange", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::VoiceAudioInputState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::remove_OnActivationStateChange(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnActivationStateChange", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::VoiceAudioInputState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Lib::BaseAudioClipInput::get_IsRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::set_IsRecording(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"set_IsRecording", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::add_OnStartRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::remove_OnStartRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::add_OnStartRecordingFailed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::remove_OnStartRecordingFailed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::add_OnStopRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::remove_OnStopRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::add_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::remove_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::SetActivationState(::Meta::Voice::VoiceAudioInputState  newActivationState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"SetActivationState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newActivationState);
}
inline bool Meta::WitAi::Lib::BaseAudioClipInput::get_IsMuted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::set_IsMuted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::add_OnMicMuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::remove_OnMicMuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::add_OnMicUnmuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"add_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::remove_OnMicUnmuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"remove_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::SetMuted(bool  muted)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, muted);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::ActivateAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"ActivateAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Lib::BaseAudioClipInput::PerformActivation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"PerformActivation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Lib::BaseAudioClipInput::HandleActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::DeactivateAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"DeactivateAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::HandleDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::StartRecording(int32_t  sampleDurationMS)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleDurationMS);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Lib::BaseAudioClipInput::ReadRawAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {"ReadRawAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::StopRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Lib::BaseAudioClipInput* Meta::WitAi::Lib::BaseAudioClipInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::BaseAudioClipInput*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr  Meta::WitAi::Lib::BaseAudioClipInput::operator ::Meta::WitAi::Interfaces::IAudioInputSource*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr ::Meta::WitAi::Interfaces::IAudioInputSource* Meta::WitAi::Lib::BaseAudioClipInput::i___Meta__WitAi__Interfaces__IAudioInputSource() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::Lib::IAudioLevelRangeProvider"
constexpr  Meta::WitAi::Lib::BaseAudioClipInput::operator ::Meta::WitAi::Lib::IAudioLevelRangeProvider*() noexcept {
return static_cast<::Meta::WitAi::Lib::IAudioLevelRangeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Lib::IAudioLevelRangeProvider"
constexpr ::Meta::WitAi::Lib::IAudioLevelRangeProvider* Meta::WitAi::Lib::BaseAudioClipInput::i___Meta__WitAi__Lib__IAudioLevelRangeProvider() noexcept {
return static_cast<::Meta::WitAi::Lib::IAudioLevelRangeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::BaseAudioClipInput::BaseAudioClipInput()   {
}
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::*)(int32_t)>(&::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e16c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e16f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::MoveNext)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x9e16f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e173a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e173a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e173e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput> const& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__micClip_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micClip_5__2;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__micClip_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micClip_5__2;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_set__micClip_5__2(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micClip_5__2 = value;
}
constexpr ::ArrayW<float_t>& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__samples_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples_5__3;
}
constexpr ::ArrayW<float_t> const& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__samples_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples_5__3;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_set__samples_5__3(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samples_5__3 = value;
}
constexpr int32_t& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__prevMicPosition_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevMicPosition_5__4;
}
constexpr int32_t const& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__prevMicPosition_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevMicPosition_5__4;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_set__prevMicPosition_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevMicPosition_5__4 = value;
}
constexpr int32_t& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__readAbsPosition_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readAbsPosition_5__5;
}
constexpr int32_t const& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__readAbsPosition_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readAbsPosition_5__5;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_set__readAbsPosition_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readAbsPosition_5__5 = value;
}
constexpr int32_t& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__loops_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loops_5__6;
}
constexpr int32_t const& Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_get__loops_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loops_5__6;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::__cordl_internal_set__loops_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loops_5__6 = value;
}
inline void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68* Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68::BaseAudioClipInput__ReadRawAudio_d__68()   {
}
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::*)(int32_t)>(&::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e168b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e16de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e16de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e16ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e16ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::*)()>(&::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e16f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>& Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput> const& Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61* Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61::BaseAudioClipInput__PerformActivation_d__61()   {
}
