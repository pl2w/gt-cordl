#pragma once
// IWYU pragma private; include "CSCore/AudioSubTypes.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CSCore/zzzz__AudioSubTypes_def.hpp"
#include "CSCore/zzzz__AudioEncoding_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::CSCore::AudioSubTypes.EncodingFromSubType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::CSCore::AudioEncoding (*)(::System::Guid)>(&::CSCore::AudioSubTypes::EncodingFromSubType)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa75ff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::AudioSubTypes*>(),
                        {"EncodingFromSubType", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::AudioSubTypes.SubTypeFromEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::CSCore::AudioEncoding)>(&::CSCore::AudioSubTypes::SubTypeFromEncoding)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa760034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::AudioSubTypes*>(),
                        {"SubTypeFromEncoding", {}, {::i2c::type_of<::CSCore::AudioEncoding>()}}
                    )));
    return ___internal_method;
  }
};
inline void CSCore::AudioSubTypes::setStaticF_MediaTypeAudio(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MediaTypeAudio", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MediaTypeAudio()  {
return ::cordl_internals::getStaticField<::System::Guid, "MediaTypeAudio", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Unknown(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Unknown", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Unknown()  {
return ::cordl_internals::getStaticField<::System::Guid, "Unknown", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Pcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Pcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Pcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "Pcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Adpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Adpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Adpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "Adpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_IeeeFloat(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "IeeeFloat", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_IeeeFloat()  {
return ::cordl_internals::getStaticField<::System::Guid, "IeeeFloat", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Vselp(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Vselp", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Vselp()  {
return ::cordl_internals::getStaticField<::System::Guid, "Vselp", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_IbmCvsd(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "IbmCvsd", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_IbmCvsd()  {
return ::cordl_internals::getStaticField<::System::Guid, "IbmCvsd", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_ALaw(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "ALaw", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_ALaw()  {
return ::cordl_internals::getStaticField<::System::Guid, "ALaw", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MuLaw(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MuLaw", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MuLaw()  {
return ::cordl_internals::getStaticField<::System::Guid, "MuLaw", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Dts(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Dts", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Dts()  {
return ::cordl_internals::getStaticField<::System::Guid, "Dts", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Drm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Drm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Drm()  {
return ::cordl_internals::getStaticField<::System::Guid, "Drm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WmaVoice9(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WmaVoice9", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WmaVoice9()  {
return ::cordl_internals::getStaticField<::System::Guid, "WmaVoice9", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_OkiAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "OkiAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_OkiAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "OkiAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_DviAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DviAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_DviAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "DviAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_ImaAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "ImaAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_ImaAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "ImaAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MediaspaceAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MediaspaceAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MediaspaceAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "MediaspaceAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_SierraAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SierraAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_SierraAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "SierraAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_G723Adpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "G723Adpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_G723Adpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "G723Adpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_DigiStd(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DigiStd", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_DigiStd()  {
return ::cordl_internals::getStaticField<::System::Guid, "DigiStd", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_DigiFix(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DigiFix", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_DigiFix()  {
return ::cordl_internals::getStaticField<::System::Guid, "DigiFix", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_DialogicOkiAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DialogicOkiAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_DialogicOkiAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "DialogicOkiAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MediaVisionAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MediaVisionAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MediaVisionAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "MediaVisionAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_CUCodec(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "CUCodec", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_CUCodec()  {
return ::cordl_internals::getStaticField<::System::Guid, "CUCodec", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_YamahaAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "YamahaAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_YamahaAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "YamahaAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_SonarC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SonarC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_SonarC()  {
return ::cordl_internals::getStaticField<::System::Guid, "SonarC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_DspGroupTrueSpeech(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DspGroupTrueSpeech", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_DspGroupTrueSpeech()  {
return ::cordl_internals::getStaticField<::System::Guid, "DspGroupTrueSpeech", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_EchoSpeechCorporation1(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "EchoSpeechCorporation1", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_EchoSpeechCorporation1()  {
return ::cordl_internals::getStaticField<::System::Guid, "EchoSpeechCorporation1", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_AudioFileAf36(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "AudioFileAf36", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_AudioFileAf36()  {
return ::cordl_internals::getStaticField<::System::Guid, "AudioFileAf36", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Aptx(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Aptx", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Aptx()  {
return ::cordl_internals::getStaticField<::System::Guid, "Aptx", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_AudioFileAf10(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "AudioFileAf10", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_AudioFileAf10()  {
return ::cordl_internals::getStaticField<::System::Guid, "AudioFileAf10", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Prosody1612(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Prosody1612", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Prosody1612()  {
return ::cordl_internals::getStaticField<::System::Guid, "Prosody1612", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Lrc(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Lrc", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Lrc()  {
return ::cordl_internals::getStaticField<::System::Guid, "Lrc", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_DolbyAc2(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DolbyAc2", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_DolbyAc2()  {
return ::cordl_internals::getStaticField<::System::Guid, "DolbyAc2", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Gsm610(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Gsm610", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Gsm610()  {
return ::cordl_internals::getStaticField<::System::Guid, "Gsm610", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MsnAudio(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MsnAudio", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MsnAudio()  {
return ::cordl_internals::getStaticField<::System::Guid, "MsnAudio", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_AntexAdpcme(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "AntexAdpcme", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_AntexAdpcme()  {
return ::cordl_internals::getStaticField<::System::Guid, "AntexAdpcme", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_ControlResVqlpc(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "ControlResVqlpc", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_ControlResVqlpc()  {
return ::cordl_internals::getStaticField<::System::Guid, "ControlResVqlpc", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_DigiReal(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DigiReal", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_DigiReal()  {
return ::cordl_internals::getStaticField<::System::Guid, "DigiReal", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_DigiAdpcm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DigiAdpcm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_DigiAdpcm()  {
return ::cordl_internals::getStaticField<::System::Guid, "DigiAdpcm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_ControlResCr10(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "ControlResCr10", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_ControlResCr10()  {
return ::cordl_internals::getStaticField<::System::Guid, "ControlResCr10", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_NMS_VBXADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_NMS_VBXADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_NMS_VBXADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_NMS_VBXADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_CS_IMAADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_CS_IMAADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_CS_IMAADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_CS_IMAADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ECHOSC3(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ECHOSC3", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ECHOSC3()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ECHOSC3", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ROCKWELL_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ROCKWELL_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ROCKWELL_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ROCKWELL_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ROCKWELL_DIGITALK(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ROCKWELL_DIGITALK", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ROCKWELL_DIGITALK()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ROCKWELL_DIGITALK", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_XEBEC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_XEBEC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_XEBEC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_XEBEC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_G721_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_G721_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_G721_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_G721_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_G728_CELP(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_G728_CELP", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_G728_CELP()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_G728_CELP", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_MSG723(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_MSG723", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_MSG723()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_MSG723", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Mpeg(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Mpeg", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Mpeg()  {
return ::cordl_internals::getStaticField<::System::Guid, "Mpeg", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_RT24(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_RT24", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_RT24()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_RT24", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_PAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_PAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_PAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_PAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MpegLayer3(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MpegLayer3", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MpegLayer3()  {
return ::cordl_internals::getStaticField<::System::Guid, "MpegLayer3", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_LUCENT_G723(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_LUCENT_G723", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_LUCENT_G723()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_LUCENT_G723", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_CIRRUS(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_CIRRUS", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_CIRRUS()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_CIRRUS", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ESPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ESPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ESPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ESPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_CANOPUS_ATRAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_CANOPUS_ATRAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_CANOPUS_ATRAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_CANOPUS_ATRAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_G726_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_G726_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_G726_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_G726_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_G722_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_G722_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_G722_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_G722_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_DSAT_DISPLAY(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_DSAT_DISPLAY", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_DSAT_DISPLAY()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_DSAT_DISPLAY", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_BYTE_ALIGNED(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_BYTE_ALIGNED", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_BYTE_ALIGNED()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_BYTE_ALIGNED", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_AC8(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_AC8", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_AC8()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_AC8", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_AC10(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_AC10", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_AC10()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_AC10", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_AC16(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_AC16", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_AC16()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_AC16", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_AC20(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_AC20", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_AC20()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_AC20", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_RT24(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_RT24", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_RT24()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_RT24", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_RT29(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_RT29", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_RT29()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_RT29", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_RT29HW(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_RT29HW", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_RT29HW()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_RT29HW", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_VR12(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_VR12", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_VR12()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_VR12", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_VR18(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_VR18", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_VR18()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_VR18", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_TQ40(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_TQ40", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_TQ40()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_TQ40", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SOFTSOUND(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SOFTSOUND", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SOFTSOUND()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SOFTSOUND", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VOXWARE_TQ60(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_TQ60", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VOXWARE_TQ60()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VOXWARE_TQ60", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_MSRT24(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_MSRT24", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_MSRT24()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_MSRT24", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_G729A(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_G729A", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_G729A()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_G729A", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_MVI_MVI2(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_MVI_MVI2", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_MVI_MVI2()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_MVI_MVI2", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_DF_G726(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_DF_G726", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_DF_G726()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_DF_G726", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_DF_GSM610(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_DF_GSM610", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_DF_GSM610()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_DF_GSM610", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ISIAUDIO(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ISIAUDIO", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ISIAUDIO()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ISIAUDIO", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ONLIVE(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ONLIVE", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ONLIVE()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ONLIVE", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SBC24(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SBC24", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SBC24()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SBC24", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_DOLBY_AC3_SPDIF(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_DOLBY_AC3_SPDIF", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_DOLBY_AC3_SPDIF()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_DOLBY_AC3_SPDIF", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_MEDIASONIC_G723(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_MEDIASONIC_G723", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_MEDIASONIC_G723()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_MEDIASONIC_G723", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_PROSODY_8KBPS(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_PROSODY_8KBPS", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_PROSODY_8KBPS()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_PROSODY_8KBPS", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ZYXEL_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ZYXEL_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ZYXEL_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ZYXEL_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_PHILIPS_LPCBB(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_PHILIPS_LPCBB", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_PHILIPS_LPCBB()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_PHILIPS_LPCBB", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_PACKED(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_PACKED", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_PACKED()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_PACKED", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_MALDEN_PHONYTALK(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_MALDEN_PHONYTALK", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_MALDEN_PHONYTALK()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_MALDEN_PHONYTALK", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Gsm(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Gsm", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Gsm()  {
return ::cordl_internals::getStaticField<::System::Guid, "Gsm", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_G729(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "G729", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_G729()  {
return ::cordl_internals::getStaticField<::System::Guid, "G729", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_G723(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "G723", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_G723()  {
return ::cordl_internals::getStaticField<::System::Guid, "G723", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Acelp(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Acelp", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Acelp()  {
return ::cordl_internals::getStaticField<::System::Guid, "Acelp", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_RawAac(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "RawAac", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_RawAac()  {
return ::cordl_internals::getStaticField<::System::Guid, "RawAac", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_RHETOREX_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_RHETOREX_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_RHETOREX_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_RHETOREX_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_IRAT(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_IRAT", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_IRAT()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_IRAT", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VIVO_G723(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VIVO_G723", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VIVO_G723()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VIVO_G723", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VIVO_SIREN(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VIVO_SIREN", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VIVO_SIREN()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VIVO_SIREN", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_DIGITAL_G723(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_DIGITAL_G723", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_DIGITAL_G723()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_DIGITAL_G723", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SANYO_LD_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SANYO_LD_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SANYO_LD_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SANYO_LD_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SIPROLAB_ACEPLNET(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_ACEPLNET", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SIPROLAB_ACEPLNET()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_ACEPLNET", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SIPROLAB_ACELP4800(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_ACELP4800", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SIPROLAB_ACELP4800()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_ACELP4800", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SIPROLAB_ACELP8V3(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_ACELP8V3", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SIPROLAB_ACELP8V3()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_ACELP8V3", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SIPROLAB_G729(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_G729", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SIPROLAB_G729()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_G729", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SIPROLAB_G729A(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_G729A", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SIPROLAB_G729A()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_G729A", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SIPROLAB_KELVIN(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_KELVIN", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SIPROLAB_KELVIN()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SIPROLAB_KELVIN", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_G726ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_G726ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_G726ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_G726ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_QUALCOMM_PUREVOICE(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_QUALCOMM_PUREVOICE", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_QUALCOMM_PUREVOICE()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_QUALCOMM_PUREVOICE", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_QUALCOMM_HALFRATE(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_QUALCOMM_HALFRATE", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_QUALCOMM_HALFRATE()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_QUALCOMM_HALFRATE", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_TUBGSM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_TUBGSM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_TUBGSM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_TUBGSM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_MSAUDIO1(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_MSAUDIO1", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_MSAUDIO1()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_MSAUDIO1", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WindowsMediaAudio(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WindowsMediaAudio", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WindowsMediaAudio()  {
return ::cordl_internals::getStaticField<::System::Guid, "WindowsMediaAudio", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WindowsMediaAudioProfessional(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WindowsMediaAudioProfessional", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WindowsMediaAudioProfessional()  {
return ::cordl_internals::getStaticField<::System::Guid, "WindowsMediaAudioProfessional", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WindowsMediaAudioLosseless(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WindowsMediaAudioLosseless", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WindowsMediaAudioLosseless()  {
return ::cordl_internals::getStaticField<::System::Guid, "WindowsMediaAudioLosseless", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WindowsMediaAudioSpdif(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WindowsMediaAudioSpdif", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WindowsMediaAudioSpdif()  {
return ::cordl_internals::getStaticField<::System::Guid, "WindowsMediaAudioSpdif", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_UNISYS_NAP_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_UNISYS_NAP_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_UNISYS_NAP_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_UNISYS_NAP_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_UNISYS_NAP_ULAW(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_UNISYS_NAP_ULAW", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_UNISYS_NAP_ULAW()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_UNISYS_NAP_ULAW", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_UNISYS_NAP_ALAW(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_UNISYS_NAP_ALAW", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_UNISYS_NAP_ALAW()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_UNISYS_NAP_ALAW", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_UNISYS_NAP_16K(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_UNISYS_NAP_16K", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_UNISYS_NAP_16K()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_UNISYS_NAP_16K", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_CREATIVE_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_CREATIVE_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_CREATIVE_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_CREATIVE_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH8(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_CREATIVE_FASTSPEECH8", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH8()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_CREATIVE_FASTSPEECH8", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH10(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_CREATIVE_FASTSPEECH10", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH10()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_CREATIVE_FASTSPEECH10", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_UHER_ADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_UHER_ADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_UHER_ADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_UHER_ADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_QUARTERDECK(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_QUARTERDECK", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_QUARTERDECK()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_QUARTERDECK", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ILINK_VC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ILINK_VC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ILINK_VC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ILINK_VC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_RAW_SPORT(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_RAW_SPORT", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_RAW_SPORT()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_RAW_SPORT", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_ESST_AC3(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_ESST_AC3", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_ESST_AC3()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_ESST_AC3", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_IPI_HSX(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_IPI_HSX", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_IPI_HSX()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_IPI_HSX", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_IPI_RPELP(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_IPI_RPELP", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_IPI_RPELP()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_IPI_RPELP", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_CS2(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_CS2", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_CS2()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_CS2", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SONY_SCX(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SONY_SCX", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SONY_SCX()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SONY_SCX", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_FM_TOWNS_SND(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_FM_TOWNS_SND", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_FM_TOWNS_SND()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_FM_TOWNS_SND", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_BTV_DIGITAL(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_BTV_DIGITAL", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_BTV_DIGITAL()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_BTV_DIGITAL", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_QDESIGN_MUSIC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_QDESIGN_MUSIC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_QDESIGN_MUSIC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_QDESIGN_MUSIC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_VME_VMPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_VME_VMPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_VME_VMPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_VME_VMPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_TPC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_TPC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_TPC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_TPC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_OLIGSM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_OLIGSM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_OLIGSM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_OLIGSM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_OLIADPCM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_OLIADPCM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_OLIADPCM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_OLIADPCM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_OLICELP(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_OLICELP", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_OLICELP()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_OLICELP", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_OLISBC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_OLISBC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_OLISBC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_OLISBC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_OLIOPR(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_OLIOPR", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_OLIOPR()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_OLIOPR", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_LH_CODEC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_LH_CODEC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_LH_CODEC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_LH_CODEC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_NORRIS(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_NORRIS", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_NORRIS()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_NORRIS", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MPEG_ADTS_AAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MPEG_ADTS_AAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MPEG_ADTS_AAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "MPEG_ADTS_AAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MPEG_RAW_AAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MPEG_RAW_AAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MPEG_RAW_AAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "MPEG_RAW_AAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MPEG_LOAS(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MPEG_LOAS", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MPEG_LOAS()  {
return ::cordl_internals::getStaticField<::System::Guid, "MPEG_LOAS", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_NOKIA_MPEG_ADTS_AAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "NOKIA_MPEG_ADTS_AAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_NOKIA_MPEG_ADTS_AAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "NOKIA_MPEG_ADTS_AAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_NOKIA_MPEG_RAW_AAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "NOKIA_MPEG_RAW_AAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_NOKIA_MPEG_RAW_AAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "NOKIA_MPEG_RAW_AAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_VODAFONE_MPEG_ADTS_AAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "VODAFONE_MPEG_ADTS_AAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_VODAFONE_MPEG_ADTS_AAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "VODAFONE_MPEG_ADTS_AAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_VODAFONE_MPEG_RAW_AAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "VODAFONE_MPEG_RAW_AAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_VODAFONE_MPEG_RAW_AAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "VODAFONE_MPEG_RAW_AAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_MPEG_HEAAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "MPEG_HEAAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_MPEG_HEAAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "MPEG_HEAAC", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_DVM(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_DVM", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_DVM()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_DVM", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Vorbis1(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Vorbis1", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Vorbis1()  {
return ::cordl_internals::getStaticField<::System::Guid, "Vorbis1", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Vorbis2(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Vorbis2", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Vorbis2()  {
return ::cordl_internals::getStaticField<::System::Guid, "Vorbis2", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Vorbis3(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Vorbis3", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Vorbis3()  {
return ::cordl_internals::getStaticField<::System::Guid, "Vorbis3", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Vorbis1P(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Vorbis1P", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Vorbis1P()  {
return ::cordl_internals::getStaticField<::System::Guid, "Vorbis1P", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Vorbis2P(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Vorbis2P", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Vorbis2P()  {
return ::cordl_internals::getStaticField<::System::Guid, "Vorbis2P", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Vorbis3P(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Vorbis3P", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Vorbis3P()  {
return ::cordl_internals::getStaticField<::System::Guid, "Vorbis3P", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_RAW_AAC1(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_RAW_AAC1", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_RAW_AAC1()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_RAW_AAC1", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_WMAVOICE9(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_WMAVOICE9", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_WMAVOICE9()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_WMAVOICE9", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_Extensible(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Extensible", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_Extensible()  {
return ::cordl_internals::getStaticField<::System::Guid, "Extensible", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_DEVELOPMENT(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_DEVELOPMENT", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_DEVELOPMENT()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_DEVELOPMENT", ::CSCore::AudioSubTypes*>();
}
inline void CSCore::AudioSubTypes::setStaticF_WAVE_FORMAT_FLAC(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "WAVE_FORMAT_FLAC", ::CSCore::AudioSubTypes*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid CSCore::AudioSubTypes::getStaticF_WAVE_FORMAT_FLAC()  {
return ::cordl_internals::getStaticField<::System::Guid, "WAVE_FORMAT_FLAC", ::CSCore::AudioSubTypes*>();
}
inline ::CSCore::AudioEncoding CSCore::AudioSubTypes::EncodingFromSubType(::System::Guid  audioSubType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::AudioSubTypes*>(),
                        {"EncodingFromSubType", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::CSCore::AudioEncoding>(nullptr, ___internal_method, audioSubType);
}
inline ::System::Guid CSCore::AudioSubTypes::SubTypeFromEncoding(::CSCore::AudioEncoding  audioEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::AudioSubTypes*>(),
                        {"SubTypeFromEncoding", {}, {::i2c::type_of<::CSCore::AudioEncoding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, audioEncoding);
}
// Ctor Parameters []
constexpr ::CSCore::AudioSubTypes::AudioSubTypes()   {
}
