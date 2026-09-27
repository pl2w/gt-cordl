#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSpeakerLoudness.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSpeakerLoudness_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__ISpeakerLoudness_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__SpeakerVoiceToLoudness_def.hpp"
#include "GorillaTag/Audio/zzzz__VoiceToLoudness_def.hpp"
#include "GorillaTag/zzzz__IDynamicFloat_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5924bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.get_Loudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::get_Loudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5924bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_Loudness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.get_LoudnessNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::get_LoudnessNormalized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5924c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_LoudnessNormalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.get_floatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::get_floatValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5924c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_floatValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.get_IsMicEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::get_IsMicEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5924c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_IsMicEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.get_SmoothedLoudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::get_SmoothedLoudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5924c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_SmoothedLoudness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5924c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5924cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5924cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::SliceUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5924cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.UpdateMicEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::UpdateMicEnabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5924d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"UpdateMicEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.CheckMicConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::CheckMicConnection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5925700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"CheckMicConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.UpdateLoudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::UpdateLoudness)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x5924dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"UpdateLoudness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness.UpdateSmoothedLoudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::UpdateSmoothedLoudness)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59255a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"UpdateSmoothedLoudness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSpeakerLoudness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSpeakerLoudness::*)()>(&::GlobalNamespace::GorillaSpeakerLoudness::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5925788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_isSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSpeaking;
}
constexpr bool const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_isSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSpeaking;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_isSpeaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSpeaking = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_loudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_loudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_loudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudness = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_normalizedMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizedMax;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_normalizedMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizedMax;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_normalizedMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalizedMax = value;
}
constexpr bool& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_isMicEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMicEnabled;
}
constexpr bool const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_isMicEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMicEnabled;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_isMicEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMicEnabled = value;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer>& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_rigContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigContainer;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer> const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_rigContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigContainer;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigContainer = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_speaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_speaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_speaker(::UnityW<::Photon::Voice::Unity::Speaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speaker = value;
}
constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_speakerVoiceToLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerVoiceToLoudness;
}
constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness> const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_speakerVoiceToLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerVoiceToLoudness;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_speakerVoiceToLoudness(::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speakerVoiceToLoudness = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recorder = value;
}
constexpr ::UnityW<::GorillaTag::Audio::VoiceToLoudness>& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_voiceToLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceToLoudness;
}
constexpr ::UnityW<::GorillaTag::Audio::VoiceToLoudness> const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_voiceToLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceToLoudness;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_voiceToLoudness(::UnityW<::GorillaTag::Audio::VoiceToLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceToLoudness = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_smoothedLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedLoudness;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_smoothedLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedLoudness;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_smoothedLoudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothedLoudness = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_lastLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLoudness;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_lastLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLoudness;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_lastLoudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLoudness = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_timeSinceLoudnessChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceLoudnessChange;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_timeSinceLoudnessChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceLoudnessChange;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_timeSinceLoudnessChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSinceLoudnessChange = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_loudnessUpdateCheckRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudnessUpdateCheckRate;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_loudnessUpdateCheckRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudnessUpdateCheckRate;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_loudnessUpdateCheckRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudnessUpdateCheckRate = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_loudnessBlendStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudnessBlendStrength;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_loudnessBlendStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudnessBlendStrength;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_loudnessBlendStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudnessBlendStrength = value;
}
constexpr bool& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_permission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___permission;
}
constexpr bool const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_permission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___permission;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_permission(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___permission = value;
}
constexpr bool& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_micConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micConnected;
}
constexpr bool const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_micConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micConnected;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_micConnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micConnected = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_timeLastUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastUpdated;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_timeLastUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastUpdated;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_timeLastUpdated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastUpdated = value;
}
constexpr float_t& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr float_t const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_offlineMic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineMic;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_offlineMic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineMic;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_offlineMic(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineMic = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_voiceSampleBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSampleBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_get_voiceSampleBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSampleBuffer;
}
constexpr void GlobalNamespace::GorillaSpeakerLoudness::__cordl_internal_set_voiceSampleBuffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceSampleBuffer = value;
}
inline bool GlobalNamespace::GorillaSpeakerLoudness::get_IsSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GorillaSpeakerLoudness::get_Loudness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_Loudness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::GorillaSpeakerLoudness::get_LoudnessNormalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_LoudnessNormalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::GorillaSpeakerLoudness::get_floatValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_floatValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaSpeakerLoudness::get_IsMicEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_IsMicEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GorillaSpeakerLoudness::get_SmoothedLoudness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"get_SmoothedLoudness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSpeakerLoudness::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSpeakerLoudness::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSpeakerLoudness::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSpeakerLoudness::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSpeakerLoudness::UpdateMicEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"UpdateMicEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaSpeakerLoudness::CheckMicConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"CheckMicConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSpeakerLoudness::UpdateLoudness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"UpdateLoudness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSpeakerLoudness::UpdateSmoothedLoudness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {"UpdateSmoothedLoudness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSpeakerLoudness::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSpeakerLoudness*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSpeakerLoudness* GlobalNamespace::GorillaSpeakerLoudness::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSpeakerLoudness*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GorillaSpeakerLoudness::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GorillaSpeakerLoudness::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::IDynamicFloat"
constexpr  GlobalNamespace::GorillaSpeakerLoudness::operator ::GorillaTag::IDynamicFloat*() noexcept {
return static_cast<::GorillaTag::IDynamicFloat*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::IDynamicFloat"
constexpr ::GorillaTag::IDynamicFloat* GlobalNamespace::GorillaSpeakerLoudness::i___GorillaTag__IDynamicFloat() noexcept {
return static_cast<::GorillaTag::IDynamicFloat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISpeakerLoudness"
constexpr  GlobalNamespace::GorillaSpeakerLoudness::operator ::GlobalNamespace::ISpeakerLoudness*() noexcept {
return static_cast<::GlobalNamespace::ISpeakerLoudness*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISpeakerLoudness"
constexpr ::GlobalNamespace::ISpeakerLoudness* GlobalNamespace::GorillaSpeakerLoudness::i___GlobalNamespace__ISpeakerLoudness() noexcept {
return static_cast<::GlobalNamespace::ISpeakerLoudness*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSpeakerLoudness::GorillaSpeakerLoudness()   {
}
