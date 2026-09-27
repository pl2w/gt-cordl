#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceAudioFloat.hpp"
#include "Photon/Voice/zzzz__LocalVoiceAudio_1_impl.hpp"
#include "Photon/Voice/zzzz__LocalVoiceAudioFloat_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
//  Writing Method size for method: ::Photon::Voice::LocalVoiceAudioFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoiceAudioFloat::*)(::Photon::Voice::VoiceClient*, ::Photon::Voice::IEncoder*, uint8_t, ::Photon::Voice::VoiceInfo, ::Photon::Voice::IAudioDesc*, int32_t)>(&::Photon::Voice::LocalVoiceAudioFloat::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa74c2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::IAudioDesc*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::LocalVoiceAudioFloat::_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::IAudioDesc*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceClient, encoder, id, voiceInfo, audioSourceDesc, channelId);
}
inline ::Photon::Voice::LocalVoiceAudioFloat* Photon::Voice::LocalVoiceAudioFloat::New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LocalVoiceAudioFloat*>(voiceClient, encoder, id, voiceInfo, audioSourceDesc, channelId));
}
// Ctor Parameters []
constexpr ::Photon::Voice::LocalVoiceAudioFloat::LocalVoiceAudioFloat()   {
}
