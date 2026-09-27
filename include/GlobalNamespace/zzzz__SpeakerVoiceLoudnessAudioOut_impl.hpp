#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeakerVoiceLoudnessAudioOut.hpp"
#include "Photon/Voice/Unity/zzzz__UnityAudioOut_impl.hpp"
#include "GlobalNamespace/zzzz__SpeakerVoiceLoudnessAudioOut_def.hpp"
#include "GlobalNamespace/zzzz__SpeakerVoiceToLoudness_def.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceLoudnessAudioOut._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeakerVoiceLoudnessAudioOut::*)(::GlobalNamespace::SpeakerVoiceToLoudness*, ::UnityEngine::AudioSource*, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*, ::Photon::Voice::ILogger*, ::StringW, bool)>(&::GlobalNamespace::SpeakerVoiceLoudnessAudioOut::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56adc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceLoudnessAudioOut*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SpeakerVoiceToLoudness*>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeakerVoiceLoudnessAudioOut.OutWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeakerVoiceLoudnessAudioOut::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::SpeakerVoiceLoudnessAudioOut::OutWrite)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x56adc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SpeakerVoiceLoudnessAudioOut*>(),
                    {::i2c::class_of<::GlobalNamespace::SpeakerVoiceLoudnessAudioOut*>(), 15}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>& GlobalNamespace::SpeakerVoiceLoudnessAudioOut::__cordl_internal_get_voiceToLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceToLoudness;
}
constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness> const& GlobalNamespace::SpeakerVoiceLoudnessAudioOut::__cordl_internal_get_voiceToLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceToLoudness;
}
constexpr void GlobalNamespace::SpeakerVoiceLoudnessAudioOut::__cordl_internal_set_voiceToLoudness(::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceToLoudness = value;
}
inline void GlobalNamespace::SpeakerVoiceLoudnessAudioOut::_ctor(::GlobalNamespace::SpeakerVoiceToLoudness*  speaker, ::UnityEngine::AudioSource*  audioSource, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeakerVoiceLoudnessAudioOut*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SpeakerVoiceToLoudness*>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker, audioSource, playDelayConfig, logger, logPrefix, debugInfo);
}
inline void GlobalNamespace::SpeakerVoiceLoudnessAudioOut::OutWrite(::ArrayW<float_t>  data, int32_t  offsetSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SpeakerVoiceLoudnessAudioOut*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offsetSamples);
}
inline ::GlobalNamespace::SpeakerVoiceLoudnessAudioOut* GlobalNamespace::SpeakerVoiceLoudnessAudioOut::New_ctor(::GlobalNamespace::SpeakerVoiceToLoudness*  speaker, ::UnityEngine::AudioSource*  audioSource, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpeakerVoiceLoudnessAudioOut*>(speaker, audioSource, playDelayConfig, logger, logPrefix, debugInfo));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpeakerVoiceLoudnessAudioOut::SpeakerVoiceLoudnessAudioOut()   {
}
