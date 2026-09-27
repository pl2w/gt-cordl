#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeakerVoiceToLoudness.hpp"
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpeakerVoiceToLoudness_def.hpp"
#include "GlobalNamespace/zzzz__SpeakerVoiceToLoudness_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
#include "Photon/Voice/zzzz__IAudioOut_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudness.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeakerVoiceToLoudness::*)()>(&::GlobalNamespace::SpeakerVoiceToLoudness::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56ad94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudness.GetVolumeTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* (::GlobalNamespace::SpeakerVoiceToLoudness::*)(::Photon::Voice::Unity::Speaker*)>(&::GlobalNamespace::SpeakerVoiceToLoudness::GetVolumeTracking)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56ad9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness*>(),
                        {"GetVolumeTracking", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeakerVoiceToLoudness::*)()>(&::GlobalNamespace::SpeakerVoiceToLoudness::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56adae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::Unity::PlaybackDelaySettings& GlobalNamespace::SpeakerVoiceToLoudness::__cordl_internal_get_playbackDelaySettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackDelaySettings;
}
constexpr ::Photon::Voice::Unity::PlaybackDelaySettings const& GlobalNamespace::SpeakerVoiceToLoudness::__cordl_internal_get_playbackDelaySettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackDelaySettings;
}
constexpr void GlobalNamespace::SpeakerVoiceToLoudness::__cordl_internal_set_playbackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackDelaySettings = value;
}
constexpr float_t& GlobalNamespace::SpeakerVoiceToLoudness::__cordl_internal_get_loudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr float_t const& GlobalNamespace::SpeakerVoiceToLoudness::__cordl_internal_get_loudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr void GlobalNamespace::SpeakerVoiceToLoudness::__cordl_internal_set_loudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudness = value;
}
inline void GlobalNamespace::SpeakerVoiceToLoudness::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* GlobalNamespace::SpeakerVoiceToLoudness::GetVolumeTracking(::Photon::Voice::Unity::Speaker*  speaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness*>(),
                        {"GetVolumeTracking", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*>(this, ___internal_method, speaker);
}
inline void GlobalNamespace::SpeakerVoiceToLoudness::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpeakerVoiceToLoudness* GlobalNamespace::SpeakerVoiceToLoudness::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpeakerVoiceToLoudness*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpeakerVoiceToLoudness::SpeakerVoiceToLoudness()   {
}
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::*)()>(&::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56adad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0._GetVolumeTracking_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IAudioOut_1<float_t>* (::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::*)()>(&::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::_GetVolumeTracking_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x56adafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0*>(),
                        {"<GetVolumeTracking>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>& GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness> const& GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_get_speaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_get_speaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr void GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_set_speaker(::UnityW<::Photon::Voice::Unity::Speaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speaker = value;
}
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*& GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_get_pdc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pdc;
}
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* const& GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_get_pdc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pdc;
}
constexpr void GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::__cordl_internal_set_pdc(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pdc = value;
}
inline void GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::IAudioOut_1<float_t>* GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::_GetVolumeTracking_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0*>(),
                        {"<GetVolumeTracking>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IAudioOut_1<float_t>*>(this, ___internal_method);
}
inline ::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0* GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0::SpeakerVoiceToLoudness___c__DisplayClass3_0()   {
}
