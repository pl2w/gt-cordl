#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/VoiceBroadcastCosmetic.hpp"
#include "GorillaTag/Cosmetics/zzzz__TalkingCosmeticType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__VoiceBroadcastCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSpeakerLoudness_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerActivator_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__VoiceBroadcastCosmeticWearable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)()>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5da5a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.SetWearable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable*)>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::SetWearable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da5ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"SetWearable", {}, {::i2c::type_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.StartBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)()>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::StartBroadcast)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5da5aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"StartBroadcast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.StopBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)()>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::StopBroadcast)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5da5b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"StopBroadcast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)()>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5da5c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)()>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5da5c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.SetListenState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::SetListenState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5da5c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"SetListenState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)()>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::SliceUpdate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5da5c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic.ResetToFirstFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)()>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::ResetToFirstFrame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5da5e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"ResetToFirstFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::*)()>(&::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5da5e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::Cosmetics::TalkingCosmeticType& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_talkingCosmeticType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___talkingCosmeticType;
}
constexpr ::GorillaTag::Cosmetics::TalkingCosmeticType const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_talkingCosmeticType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___talkingCosmeticType;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_talkingCosmeticType(::GorillaTag::Cosmetics::TalkingCosmeticType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___talkingCosmeticType = value;
}
constexpr float_t& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_minVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolume;
}
constexpr float_t const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_minVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolume;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_minVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVolume = value;
}
constexpr float_t& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_minSpeakingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeakingTime;
}
constexpr float_t const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_minSpeakingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeakingTime;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_minSpeakingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSpeakingTime = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_simpleAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simpleAnimation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_simpleAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simpleAnimation;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_simpleAnimation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simpleAnimation = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_talkAnimationTriggerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___talkAnimationTriggerName;
}
constexpr ::StringW const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_talkAnimationTriggerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___talkAnimationTriggerName;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_talkAnimationTriggerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___talkAnimationTriggerName = value;
}
constexpr int32_t& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_talkAnimationTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___talkAnimationTrigger;
}
constexpr int32_t const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_talkAnimationTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___talkAnimationTrigger;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_talkAnimationTrigger(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___talkAnimationTrigger = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_onStartListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartListening;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_onStartListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartListening;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_onStartListening(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStartListening = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_onStartSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartSpeaking;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_onStartSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartSpeaking;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_onStartSpeaking(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStartSpeaking = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_onStopSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStopSpeaking;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_onStopSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStopSpeaking;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_onStopSpeaking(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStopSpeaking = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_onStopListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStopListening;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_onStopListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStopListening;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_onStopListening(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStopListening = value;
}
constexpr float_t& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_speakingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakingTime;
}
constexpr float_t const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_speakingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakingTime;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_speakingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speakingTime = value;
}
constexpr bool& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_isListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isListening;
}
constexpr bool const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_isListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isListening;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_isListening(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isListening = value;
}
constexpr bool& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_isSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSpeaking;
}
constexpr bool const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_isSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSpeaking;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_isSpeaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSpeaking = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable>& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_wearable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wearable;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable> const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_wearable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wearable;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_wearable(::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wearable = value;
}
constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerActivator>& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_loudSpeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudSpeaker;
}
constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerActivator> const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_loudSpeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudSpeaker;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_loudSpeaker(::UnityW<::GorillaTag::Audio::LoudSpeakerActivator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudSpeaker = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_gsl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gsl;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_gsl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gsl;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_gsl(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gsl = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr float_t& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_lastSliceUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceUpdateTime;
}
constexpr float_t const& GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_get_lastSliceUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceUpdateTime;
}
constexpr void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::__cordl_internal_set_lastSliceUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSliceUpdateTime = value;
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::SetWearable(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable*  wearable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"SetWearable", {}, {::i2c::type_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wearable);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::StartBroadcast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"StartBroadcast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::StopBroadcast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"StopBroadcast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::SetListenState(bool  listening)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"SetListenState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listening);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::ResetToFirstFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {"ResetToFirstFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VoiceBroadcastCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic* GorillaTag::Cosmetics::VoiceBroadcastCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaTag::Cosmetics::VoiceBroadcastCosmetic::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaTag::Cosmetics::VoiceBroadcastCosmetic::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic::VoiceBroadcastCosmetic()   {
}
