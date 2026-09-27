#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/MicBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Lib/zzzz__MicBase_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputSource_def.hpp"
#include "Meta/WitAi/Lib/zzzz__MicBase_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.GetMicName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::GetMicName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.GetMicSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::GetMicSampleRate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.GetMicClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::GetMicClip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.get_MicPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::get_MicPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.add_OnStartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::add_OnStartRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e173e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.remove_OnStartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::remove_OnStartRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e17484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.add_OnStartRecordingFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::add_OnStartRecordingFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e17520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.remove_OnStartRecordingFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::remove_OnStartRecordingFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e175bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.add_OnStopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::add_OnStopRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e17658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.remove_OnStopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::remove_OnStopRecording)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e176f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.add_OnSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*)>(&::Meta::WitAi::Lib::MicBase::add_OnSampleReady)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e17790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.remove_OnSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*)>(&::Meta::WitAi::Lib::MicBase::remove_OnSampleReady)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e17840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::get_IsRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e178f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"get_IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.set_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(bool)>(&::Meta::WitAi::Lib::MicBase::set_IsRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e178f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"set_IsRecording", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.get_IsMicListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::get_IsMicListening)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e17900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.get_IsInputAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::get_IsInputAvailable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e17920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"get_IsInputAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.get_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::AudioEncoding* (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::get_AudioEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e17998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.set_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::Meta::WitAi::Data::AudioEncoding*)>(&::Meta::WitAi::Lib::MicBase::set_AudioEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e179a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"set_AudioEncoding", {}, {::i2c::type_of<::Meta::WitAi::Data::AudioEncoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::get_IsMuted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e179a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.set_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(bool)>(&::Meta::WitAi::Lib::MicBase::set_IsMuted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e179b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.add_OnMicMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::add_OnMicMuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e179b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.remove_OnMicMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::remove_OnMicMuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e17a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.add_OnMicUnmuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::add_OnMicUnmuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e17af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.remove_OnMicUnmuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(::System::Action*)>(&::Meta::WitAi::Lib::MicBase::remove_OnMicUnmuted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e17b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.SetMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(bool)>(&::Meta::WitAi::Lib::MicBase::SetMuted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e17c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.CheckForInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::CheckForInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e17ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)(int32_t)>(&::Meta::WitAi::Lib::MicBase::StartRecording)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e17cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.ReadRawAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Lib::MicBase::*)(int32_t)>(&::Meta::WitAi::Lib::MicBase::ReadRawAudio)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e17d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::StopRecording)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e17df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase::*)()>(&::Meta::WitAi::Lib::MicBase::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e17e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnStartRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecording;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnStartRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecording;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set_OnStartRecording(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartRecording = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnStartRecordingFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecordingFailed;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnStartRecordingFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartRecordingFailed;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set_OnStartRecordingFailed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartRecordingFailed = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnStopRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopRecording;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnStopRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopRecording;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set_OnStopRecording(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStopRecording = value;
}
constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnSampleReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReady;
}
constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>* const& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnSampleReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSampleReady;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSampleReady = value;
}
constexpr bool& Meta::WitAi::Lib::MicBase::__cordl_internal_get__IsRecording_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRecording_k__BackingField;
}
constexpr bool const& Meta::WitAi::Lib::MicBase::__cordl_internal_get__IsRecording_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRecording_k__BackingField;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set__IsRecording_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRecording_k__BackingField = value;
}
constexpr ::Meta::WitAi::Data::AudioEncoding*& Meta::WitAi::Lib::MicBase::__cordl_internal_get__AudioEncoding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioEncoding_k__BackingField;
}
constexpr ::Meta::WitAi::Data::AudioEncoding* const& Meta::WitAi::Lib::MicBase::__cordl_internal_get__AudioEncoding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioEncoding_k__BackingField;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set__AudioEncoding_k__BackingField(::Meta::WitAi::Data::AudioEncoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioEncoding_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Lib::MicBase::__cordl_internal_get__IsMuted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMuted_k__BackingField;
}
constexpr bool const& Meta::WitAi::Lib::MicBase::__cordl_internal_get__IsMuted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMuted_k__BackingField;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set__IsMuted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMuted_k__BackingField = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnMicMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicMuted;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnMicMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicMuted;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set_OnMicMuted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMicMuted = value;
}
constexpr ::System::Action*& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnMicUnmuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicUnmuted;
}
constexpr ::System::Action* const& Meta::WitAi::Lib::MicBase::__cordl_internal_get_OnMicUnmuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMicUnmuted;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set_OnMicUnmuted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMicUnmuted = value;
}
constexpr int32_t& Meta::WitAi::Lib::MicBase::__cordl_internal_get__sampleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleCount;
}
constexpr int32_t const& Meta::WitAi::Lib::MicBase::__cordl_internal_get__sampleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleCount;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set__sampleCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleCount = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::Lib::MicBase::__cordl_internal_get__reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reader;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::Lib::MicBase::__cordl_internal_get__reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reader;
}
constexpr void Meta::WitAi::Lib::MicBase::__cordl_internal_set__reader(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reader = value;
}
inline ::StringW Meta::WitAi::Lib::MicBase::GetMicName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::MicBase::GetMicSampleRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> Meta::WitAi::Lib::MicBase::GetMicClip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Lib::MicBase::get_MicPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicBase::add_OnStartRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::remove_OnStartRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnStartRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::add_OnStartRecordingFailed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::remove_OnStartRecordingFailed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnStartRecordingFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::add_OnStopRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::remove_OnStopRecording(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnStopRecording", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::add_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::remove_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnSampleReady", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Lib::MicBase::get_IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"get_IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicBase::set_IsRecording(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"set_IsRecording", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Lib::MicBase::get_IsMicListening()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::MicBase::get_IsInputAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"get_IsInputAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioEncoding* Meta::WitAi::Lib::MicBase::get_AudioEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::AudioEncoding*>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicBase::set_AudioEncoding(::Meta::WitAi::Data::AudioEncoding*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"set_AudioEncoding", {}, {::i2c::type_of<::Meta::WitAi::Data::AudioEncoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Lib::MicBase::get_IsMuted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicBase::set_IsMuted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::add_OnMicMuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::remove_OnMicMuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnMicMuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::add_OnMicUnmuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"add_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::remove_OnMicUnmuted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {"remove_OnMicUnmuted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Lib::MicBase::SetMuted(bool  muted)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, muted);
}
inline void Meta::WitAi::Lib::MicBase::CheckForInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicBase::StartRecording(int32_t  sampleDurationMS)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleDurationMS);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Lib::MicBase::ReadRawAudio(int32_t  sampleDurationMS)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, sampleDurationMS);
}
inline void Meta::WitAi::Lib::MicBase::StopRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Lib::MicBase* Meta::WitAi::Lib::MicBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::MicBase*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr  Meta::WitAi::Lib::MicBase::operator ::Meta::WitAi::Interfaces::IAudioInputSource*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr ::Meta::WitAi::Interfaces::IAudioInputSource* Meta::WitAi::Lib::MicBase::i___Meta__WitAi__Interfaces__IAudioInputSource() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::MicBase::MicBase()   {
}
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::*)(int32_t)>(&::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e17dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::*)()>(&::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e17ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::*)()>(&::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::MoveNext)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x9e17ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::*)()>(&::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::*)()>(&::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e182a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::*)()>(&::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e182dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::Lib::MicBase>& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::Lib::MicBase> const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Lib::MicBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get_sampleDurationMS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleDurationMS;
}
constexpr int32_t const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get_sampleDurationMS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleDurationMS;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set_sampleDurationMS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleDurationMS = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__micClip_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micClip_5__2;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__micClip_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micClip_5__2;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set__micClip_5__2(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micClip_5__2 = value;
}
constexpr ::ArrayW<float_t>& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__sample_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sample_5__3;
}
constexpr ::ArrayW<float_t> const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__sample_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sample_5__3;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set__sample_5__3(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sample_5__3 = value;
}
constexpr int32_t& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__loops_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loops_5__4;
}
constexpr int32_t const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__loops_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loops_5__4;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set__loops_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loops_5__4 = value;
}
constexpr int32_t& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__readAbsPos_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readAbsPos_5__5;
}
constexpr int32_t const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__readAbsPos_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readAbsPos_5__5;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set__readAbsPos_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readAbsPos_5__5 = value;
}
constexpr int32_t& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__prevPos_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevPos_5__6;
}
constexpr int32_t const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__prevPos_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevPos_5__6;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set__prevPos_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevPos_5__6 = value;
}
constexpr int32_t& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__micTempTotal_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micTempTotal_5__7;
}
constexpr int32_t const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__micTempTotal_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micTempTotal_5__7;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set__micTempTotal_5__7(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micTempTotal_5__7 = value;
}
constexpr int32_t& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__micDif_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micDif_5__8;
}
constexpr int32_t const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__micDif_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micDif_5__8;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set__micDif_5__8(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micDif_5__8 = value;
}
constexpr ::ArrayW<float_t>& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__temp_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temp_5__9;
}
constexpr ::ArrayW<float_t> const& Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_get__temp_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temp_5__9;
}
constexpr void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::__cordl_internal_set__temp_5__9(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____temp_5__9 = value;
}
inline void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44* Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::MicBase__ReadRawAudio_d__44::MicBase__ReadRawAudio_d__44()   {
}
