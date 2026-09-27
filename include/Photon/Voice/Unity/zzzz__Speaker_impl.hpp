#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Speaker.hpp"
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_impl.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_def.hpp"
#include "Photon/Voice/Unity/zzzz__RemoteVoiceLink_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
#include "Photon/Voice/zzzz__FrameOut_1_def.hpp"
#include "Photon/Voice/zzzz__IAudioOut_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_PlayDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_PlayDelayMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa771dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlayDelayMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.set_PlayDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)(int32_t)>(&::Photon::Voice::Unity::Speaker::set_PlayDelayMs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa771dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_PlayDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_IsPlaying)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa771df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_Lag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_Lag)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa771eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_Lag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_OnRemoteVoiceRemoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>* (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_OnRemoteVoiceRemoveAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa771f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_OnRemoteVoiceRemoveAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.set_OnRemoteVoiceRemoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*)>(&::Photon::Voice::Unity::Speaker::set_OnRemoteVoiceRemoveAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa771f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_OnRemoteVoiceRemoveAction", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_Actor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_Actor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa771f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_Actor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.set_Actor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)(::Photon::Realtime::Player*)>(&::Photon::Voice::Unity::Speaker::set_Actor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa771f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_Actor", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_IsLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_IsLinked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa771f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_IsLinked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_RemoteVoiceLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Unity::RemoteVoiceLink* (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_RemoteVoiceLink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa771f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_RemoteVoiceLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_PlaybackOnlyWhenEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_PlaybackOnlyWhenEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa771fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackOnlyWhenEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.set_PlaybackOnlyWhenEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)(bool)>(&::Photon::Voice::Unity::Speaker::set_PlaybackOnlyWhenEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa771fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_PlaybackOnlyWhenEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_PlaybackStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_PlaybackStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7728f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.set_PlaybackStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)(bool)>(&::Photon::Voice::Unity::Speaker::set_PlaybackStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7728fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_PlaybackStarted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_PlaybackDelayMinSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_PlaybackDelayMinSoft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa772904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackDelayMinSoft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_PlaybackDelayMaxSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_PlaybackDelayMaxSoft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77290c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackDelayMaxSoft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_PlaybackDelayMaxHard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_PlaybackDelayMaxHard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa772914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackDelayMaxHard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::get_IsInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa771e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa77291c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa77293c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::Initialize)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa772958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.GetDefaultAudioOutFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::GetDefaultAudioOutFactory)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa772bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"GetDefaultAudioOutFactory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.OnRemoteVoiceInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)(::Photon::Voice::Unity::RemoteVoiceLink*)>(&::Photon::Voice::Unity::Speaker::OnRemoteVoiceInfo)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xa772d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnRemoteVoiceInfo", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.OnRemoteVoiceRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::OnRemoteVoiceRemove)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa7730fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnRemoteVoiceRemove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.OnAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)(::Photon::Voice::FrameOut_1<float_t>*)>(&::Photon::Voice::Unity::Speaker::OnAudioFrame)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa773388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::StartPlaying)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0xa77203c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"StartPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.AudioOutputStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)(int32_t, int32_t, int32_t)>(&::Photon::Voice::Unity::Speaker::AudioOutputStart)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa7734d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::OnDestroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa77359c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)(bool)>(&::Photon::Voice::Unity::Speaker::StopPlaying)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa77255c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"StopPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.AudioOutputStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::AudioOutputStop)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa773694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.CleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::CleanUp)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa773220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"CleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::Service)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa773738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"Service", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.AudioOutputService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::AudioOutputService)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa773754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.StartPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::StartPlayback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7730f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"StartPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.StopPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::StopPlayback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa7737f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"StopPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.RestartPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)(bool)>(&::Photon::Voice::Unity::Speaker::RestartPlayback)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa773908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"RestartPlayback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.SetPlaybackDelaySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)(::Photon::Voice::Unity::PlaybackDelaySettings)>(&::Photon::Voice::Unity::Speaker::SetPlaybackDelaySettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa773964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"SetPlaybackDelaySettings", {}, {::i2c::type_of<::Photon::Voice::Unity::PlaybackDelaySettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker.SetPlaybackDelaySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Speaker::*)(int32_t, int32_t, int32_t)>(&::Photon::Voice::Unity::Speaker::SetPlaybackDelaySettings)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa773974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"SetPlaybackDelaySettings", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker::*)()>(&::Photon::Voice::Unity::Speaker::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa773bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::IAudioOut_1<float_t>*& Photon::Voice::Unity::Speaker::__cordl_internal_get_audioOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOutput;
}
constexpr ::Photon::Voice::IAudioOut_1<float_t>* const& Photon::Voice::Unity::Speaker::__cordl_internal_get_audioOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOutput;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set_audioOutput(::Photon::Voice::IAudioOut_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioOutput = value;
}
constexpr ::Photon::Voice::Unity::RemoteVoiceLink*& Photon::Voice::Unity::Speaker::__cordl_internal_get_remoteVoiceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoiceLink;
}
constexpr ::Photon::Voice::Unity::RemoteVoiceLink* const& Photon::Voice::Unity::Speaker::__cordl_internal_get_remoteVoiceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoiceLink;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set_remoteVoiceLink(::Photon::Voice::Unity::RemoteVoiceLink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteVoiceLink = value;
}
constexpr bool& Photon::Voice::Unity::Speaker::__cordl_internal_get_playbackOnlyWhenEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackOnlyWhenEnabled;
}
constexpr bool const& Photon::Voice::Unity::Speaker::__cordl_internal_get_playbackOnlyWhenEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackOnlyWhenEnabled;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set_playbackOnlyWhenEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackOnlyWhenEnabled = value;
}
constexpr int32_t& Photon::Voice::Unity::Speaker::__cordl_internal_get_playDelayMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDelayMs;
}
constexpr int32_t const& Photon::Voice::Unity::Speaker::__cordl_internal_get_playDelayMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playDelayMs;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set_playDelayMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playDelayMs = value;
}
constexpr ::Photon::Voice::Unity::PlaybackDelaySettings& Photon::Voice::Unity::Speaker::__cordl_internal_get_playbackDelaySettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackDelaySettings;
}
constexpr ::Photon::Voice::Unity::PlaybackDelaySettings const& Photon::Voice::Unity::Speaker::__cordl_internal_get_playbackDelaySettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackDelaySettings;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set_playbackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackDelaySettings = value;
}
constexpr bool& Photon::Voice::Unity::Speaker::__cordl_internal_get_playbackExplicitlyStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackExplicitlyStopped;
}
constexpr bool const& Photon::Voice::Unity::Speaker::__cordl_internal_get_playbackExplicitlyStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackExplicitlyStopped;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set_playbackExplicitlyStopped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackExplicitlyStopped = value;
}
constexpr ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*& Photon::Voice::Unity::Speaker::__cordl_internal_get_CustomAudioOutFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomAudioOutFactory;
}
constexpr ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* const& Photon::Voice::Unity::Speaker::__cordl_internal_get_CustomAudioOutFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomAudioOutFactory;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set_CustomAudioOutFactory(::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomAudioOutFactory = value;
}
constexpr ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*& Photon::Voice::Unity::Speaker::__cordl_internal_get__OnRemoteVoiceRemoveAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnRemoteVoiceRemoveAction_k__BackingField;
}
constexpr ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>* const& Photon::Voice::Unity::Speaker::__cordl_internal_get__OnRemoteVoiceRemoveAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnRemoteVoiceRemoveAction_k__BackingField;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set__OnRemoteVoiceRemoveAction_k__BackingField(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnRemoteVoiceRemoveAction_k__BackingField = value;
}
constexpr ::Photon::Realtime::Player*& Photon::Voice::Unity::Speaker::__cordl_internal_get__Actor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Actor_k__BackingField;
}
constexpr ::Photon::Realtime::Player* const& Photon::Voice::Unity::Speaker::__cordl_internal_get__Actor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Actor_k__BackingField;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set__Actor_k__BackingField(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Actor_k__BackingField = value;
}
constexpr bool& Photon::Voice::Unity::Speaker::__cordl_internal_get__PlaybackStarted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackStarted_k__BackingField;
}
constexpr bool const& Photon::Voice::Unity::Speaker::__cordl_internal_get__PlaybackStarted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackStarted_k__BackingField;
}
constexpr void Photon::Voice::Unity::Speaker::__cordl_internal_set__PlaybackStarted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlaybackStarted_k__BackingField = value;
}
inline int32_t Photon::Voice::Unity::Speaker::get_PlayDelayMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlayDelayMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::set_PlayDelayMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_PlayDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Speaker::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::Speaker::get_Lag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_Lag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>* Photon::Voice::Unity::Speaker::get_OnRemoteVoiceRemoveAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_OnRemoteVoiceRemoveAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::set_OnRemoteVoiceRemoveAction(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_OnRemoteVoiceRemoveAction", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Realtime::Player* Photon::Voice::Unity::Speaker::get_Actor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_Actor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::set_Actor(::Photon::Realtime::Player*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_Actor", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Speaker::get_IsLinked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_IsLinked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::RemoteVoiceLink* Photon::Voice::Unity::Speaker::get_RemoteVoiceLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_RemoteVoiceLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Unity::RemoteVoiceLink*>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Speaker::get_PlaybackOnlyWhenEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackOnlyWhenEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::set_PlaybackOnlyWhenEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_PlaybackOnlyWhenEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Speaker::get_PlaybackStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::set_PlaybackStarted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"set_PlaybackStarted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::Unity::Speaker::get_PlaybackDelayMinSoft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackDelayMinSoft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::Speaker::get_PlaybackDelayMaxSoft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackDelayMaxSoft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::Speaker::get_PlaybackDelayMaxHard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_PlaybackDelayMaxHard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Speaker::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* Photon::Voice::Unity::Speaker::GetDefaultAudioOutFactory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"GetDefaultAudioOutFactory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Speaker::OnRemoteVoiceInfo(::Photon::Voice::Unity::RemoteVoiceLink*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnRemoteVoiceInfo", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline void Photon::Voice::Unity::Speaker::OnRemoteVoiceRemove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnRemoteVoiceRemove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::OnAudioFrame(::Photon::Voice::FrameOut_1<float_t>*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline bool Photon::Voice::Unity::Speaker::StartPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"StartPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::AudioOutputStart(int32_t  frequency, int32_t  channels, int32_t  frameSamplesPerChannel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, channels, frameSamplesPerChannel);
}
inline void Photon::Voice::Unity::Speaker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Speaker::StopPlaying(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"StopPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline void Photon::Voice::Unity::Speaker::AudioOutputStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"CleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::Service()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"Service", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Speaker::AudioOutputService()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::Speaker*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Speaker::StartPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"StartPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Speaker::StopPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"StopPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Speaker::RestartPlayback(bool  reinit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"RestartPlayback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reinit);
}
inline bool Photon::Voice::Unity::Speaker::SetPlaybackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  pdc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"SetPlaybackDelaySettings", {}, {::i2c::type_of<::Photon::Voice::Unity::PlaybackDelaySettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pdc);
}
inline bool Photon::Voice::Unity::Speaker::SetPlaybackDelaySettings(int32_t  low, int32_t  high, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {"SetPlaybackDelaySettings", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, low, high, max);
}
inline void Photon::Voice::Unity::Speaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::Speaker* Photon::Voice::Unity::Speaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::Speaker*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::Speaker::Speaker()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker___c__DisplayClass44_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Speaker___c__DisplayClass44_0::*)()>(&::Photon::Voice::Unity::Speaker___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa772cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Speaker___c__DisplayClass44_0._GetDefaultAudioOutFactory_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IAudioOut_1<float_t>* (::Photon::Voice::Unity::Speaker___c__DisplayClass44_0::*)()>(&::Photon::Voice::Unity::Speaker___c__DisplayClass44_0::_GetDefaultAudioOutFactory_b__0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa773be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker___c__DisplayClass44_0*>(),
                        {"<GetDefaultAudioOutFactory>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& Photon::Voice::Unity::Speaker___c__DisplayClass44_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& Photon::Voice::Unity::Speaker___c__DisplayClass44_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Voice::Unity::Speaker___c__DisplayClass44_0::__cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::Speaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*& Photon::Voice::Unity::Speaker___c__DisplayClass44_0::__cordl_internal_get_pdc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pdc;
}
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* const& Photon::Voice::Unity::Speaker___c__DisplayClass44_0::__cordl_internal_get_pdc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pdc;
}
constexpr void Photon::Voice::Unity::Speaker___c__DisplayClass44_0::__cordl_internal_set_pdc(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pdc = value;
}
inline void Photon::Voice::Unity::Speaker___c__DisplayClass44_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::IAudioOut_1<float_t>* Photon::Voice::Unity::Speaker___c__DisplayClass44_0::_GetDefaultAudioOutFactory_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Speaker___c__DisplayClass44_0*>(),
                        {"<GetDefaultAudioOutFactory>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IAudioOut_1<float_t>*>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::Speaker___c__DisplayClass44_0* Photon::Voice::Unity::Speaker___c__DisplayClass44_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::Speaker___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::Speaker___c__DisplayClass44_0::Speaker___c__DisplayClass44_0()   {
}
