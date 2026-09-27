#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioClipAudioSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioClipAudioSource_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAudioSource__TransmitAudio_d__38_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAudioSource_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputSource_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.get__log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::get__log)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"get__log", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::get_IsMuted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.set_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(bool)>(&::GlobalNamespace::AudioClipAudioSource::set_IsMuted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e19e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.add_OnMicMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::add_OnMicMuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e19e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.remove_OnMicMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::remove_OnMicMuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e19f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.add_OnMicUnmuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::add_OnMicUnmuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e19f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.remove_OnMicUnmuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::remove_OnMicUnmuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e1a038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.SetMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(bool)>(&::GlobalNamespace::AudioClipAudioSource::SetMuted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e1a0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::Start)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9e1a154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.add_OnStartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::add_OnStartRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e1a454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.remove_OnStartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::remove_OnStartRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e1a4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.add_OnStartRecordingFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::add_OnStartRecordingFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e1a58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.remove_OnStartRecordingFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::remove_OnStartRecordingFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e1a628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.add_OnSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*)>(&::GlobalNamespace::AudioClipAudioSource::add_OnSampleReady)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e1a6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.remove_OnSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*)>(&::GlobalNamespace::AudioClipAudioSource::remove_OnSampleReady)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e1a774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.add_OnStopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::add_OnStopRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e1a824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.remove_OnStopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::System::Action*)>(&::GlobalNamespace::AudioClipAudioSource::remove_OnStopRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e1a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(int32_t)>(&::GlobalNamespace::AudioClipAudioSource::StartRecording)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e1a95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"StartRecording", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.PlayNextClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::PlayNextClip)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9e1a98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"PlayNextClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.TransmitAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::AudioClipAudioSource::*)(::ArrayW<float_t>)>(&::GlobalNamespace::AudioClipAudioSource::TransmitAudio)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e1ab8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"TransmitAudio", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::StopRecording)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e1ac84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"StopRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::get_IsRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1aca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"get_IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.get_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::AudioEncoding* (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::get_AudioEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1acac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.get_IsInputAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::get_IsInputAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1acb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"get_IsInputAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.CheckForInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::CheckForInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e1acbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"CheckForInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.SetActiveClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioClipAudioSource::*)(::StringW)>(&::GlobalNamespace::AudioClipAudioSource::SetActiveClip)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e1acc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"SetActiveClip", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.AddClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioClipAudioSource::AddClip)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e1ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"AddClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.AddClipData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioClipAudioSource::AddClipData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e1a31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"AddClipData", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource.QuickResample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(::ArrayW<float_t>, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::AudioClipAudioSource::QuickResample)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e1af74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"QuickResample", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource::*)()>(&::GlobalNamespace::AudioClipAudioSource::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9e1b0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__audioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__audioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClips;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set__audioClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioClips = value;
}
constexpr bool& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__loopRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopRequests;
}
constexpr bool const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__loopRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopRequests;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set__loopRequests(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopRequests = value;
}
constexpr bool& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__isRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecording;
}
constexpr bool const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__isRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecording;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set__isRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRecording = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__audioQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioQueue;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__audioQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioQueue;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set__audioQueue(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioQueue = value;
}
constexpr int32_t& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_clipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipIndex;
}
constexpr int32_t const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_clipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipIndex;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set_clipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set_clipData(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::Meta::Voice::Logging::IVLogger*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get___log_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____log_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get___log_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____log_k__BackingField;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set___log_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____log_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__IsMuted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMuted_k__BackingField;
}
constexpr bool const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__IsMuted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMuted_k__BackingField;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set__IsMuted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMuted_k__BackingField = value;
}
constexpr ::System::Action*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnMicMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicMuted;
}
constexpr ::System::Action* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnMicMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicMuted;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set_OnMicMuted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMicMuted = value;
}
constexpr ::System::Action*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnMicUnmuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicUnmuted;
}
constexpr ::System::Action* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnMicUnmuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicUnmuted;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set_OnMicUnmuted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMicUnmuted = value;
}
constexpr ::System::Action*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnStartRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecording;
}
constexpr ::System::Action* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnStartRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecording;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set_OnStartRecording(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartRecording = value;
}
constexpr ::System::Action*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnStartRecordingFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecordingFailed;
}
constexpr ::System::Action* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnStartRecordingFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecordingFailed;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set_OnStartRecordingFailed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartRecordingFailed = value;
}
constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnSampleReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReady;
}
constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnSampleReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReady;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSampleReady = value;
}
constexpr ::System::Action*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnStopRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopRecording;
}
constexpr ::System::Action* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get_OnStopRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopRecording;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set_OnStopRecording(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStopRecording = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set__buffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr ::Meta::WitAi::Data::AudioEncoding*& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__audioEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEncoding;
}
constexpr ::Meta::WitAi::Data::AudioEncoding* const& GlobalNamespace::AudioClipAudioSource::__cordl_internal_get__audioEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEncoding;
}
constexpr void GlobalNamespace::AudioClipAudioSource::__cordl_internal_set__audioEncoding(::Meta::WitAi::Data::AudioEncoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioEncoding = value;
}
inline ::Meta::Voice::Logging::IVLogger* GlobalNamespace::AudioClipAudioSource::get__log()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"get__log", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioClipAudioSource::get_IsMuted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClipAudioSource::set_IsMuted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::add_OnMicMuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::remove_OnMicMuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::add_OnMicUnmuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::remove_OnMicUnmuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::SetMuted(bool  muted)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, muted);
}
inline void GlobalNamespace::AudioClipAudioSource::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClipAudioSource::add_OnStartRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::remove_OnStartRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::add_OnStartRecordingFailed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::remove_OnStartRecordingFailed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::add_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::remove_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::add_OnStopRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"add_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::remove_OnStopRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"remove_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioClipAudioSource::StartRecording(int32_t  sampleLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"StartRecording", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleLen);
}
inline void GlobalNamespace::AudioClipAudioSource::PlayNextClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"PlayNextClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::AudioClipAudioSource::TransmitAudio(::ArrayW<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"TransmitAudio", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, samples);
}
inline void GlobalNamespace::AudioClipAudioSource::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"StopRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioClipAudioSource::get_IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"get_IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioEncoding* GlobalNamespace::AudioClipAudioSource::get_AudioEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::AudioEncoding*>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioClipAudioSource::get_IsInputAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"get_IsInputAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClipAudioSource::CheckForInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"CheckForInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioClipAudioSource::SetActiveClip(::StringW  clipName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"SetActiveClip", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipName);
}
inline void GlobalNamespace::AudioClipAudioSource::AddClip(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"AddClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::AudioClipAudioSource::AddClipData(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"AddClipData", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline ::ArrayW<float_t> GlobalNamespace::AudioClipAudioSource::QuickResample(::ArrayW<float_t>  oldSamples, int32_t  oldChannels, int32_t  oldSampleRate, int32_t  newChannels, int32_t  newSampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {"QuickResample", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, oldSamples, oldChannels, oldSampleRate, newChannels, newSampleRate);
}
inline void GlobalNamespace::AudioClipAudioSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioClipAudioSource* GlobalNamespace::AudioClipAudioSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipAudioSource*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr  GlobalNamespace::AudioClipAudioSource::operator ::Meta::WitAi::Interfaces::IAudioInputSource*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr ::Meta::WitAi::Interfaces::IAudioInputSource* GlobalNamespace::AudioClipAudioSource::i___Meta__WitAi__Interfaces__IAudioInputSource() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAudioSource::AudioClipAudioSource()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::*)()>(&::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1ae48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0._SetActiveClip_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::_SetActiveClip_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e1b2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0*>(),
                        {"<SetActiveClip>b__0", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::__cordl_internal_get_clipName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipName;
}
constexpr ::StringW const& GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::__cordl_internal_get_clipName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipName;
}
constexpr void GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::__cordl_internal_set_clipName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipName = value;
}
inline void GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::_SetActiveClip_b__0(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0*>(),
                        {"<SetActiveClip>b__0", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip);
}
inline ::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0* GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0::AudioClipAudioSource___c__DisplayClass48_0()   {
}
