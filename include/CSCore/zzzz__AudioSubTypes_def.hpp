#pragma once
// IWYU pragma private; include "CSCore/AudioSubTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioSubTypes)
namespace CSCore {
struct AudioEncoding;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace CSCore {
class AudioSubTypes;
}
// Write type traits
MARK_REF_T(::CSCore::AudioSubTypes*);
DEFINE_IL2CPP_CLASS(::CSCore::AudioSubTypes*, "CSCore", "AudioSubTypes");
// Dependencies System.Guid, System.Object
namespace CSCore {
// Is value type: false
// CS Name: CSCore.AudioSubTypes
class CORDL_TYPE AudioSubTypes : public ::System::Object {
public:
// Declarations
/// @brief Field ALaw, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ALaw, put=setStaticF_ALaw)) ::System::Guid  ALaw;

/// @brief Field Acelp, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Acelp, put=setStaticF_Acelp)) ::System::Guid  Acelp;

/// @brief Field Adpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Adpcm, put=setStaticF_Adpcm)) ::System::Guid  Adpcm;

/// @brief Field AntexAdpcme, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_AntexAdpcme, put=setStaticF_AntexAdpcme)) ::System::Guid  AntexAdpcme;

/// @brief Field Aptx, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Aptx, put=setStaticF_Aptx)) ::System::Guid  Aptx;

/// @brief Field AudioFileAf10, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_AudioFileAf10, put=setStaticF_AudioFileAf10)) ::System::Guid  AudioFileAf10;

/// @brief Field AudioFileAf36, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_AudioFileAf36, put=setStaticF_AudioFileAf36)) ::System::Guid  AudioFileAf36;

/// @brief Field CUCodec, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CUCodec, put=setStaticF_CUCodec)) ::System::Guid  CUCodec;

/// @brief Field ControlResCr10, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ControlResCr10, put=setStaticF_ControlResCr10)) ::System::Guid  ControlResCr10;

/// @brief Field ControlResVqlpc, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ControlResVqlpc, put=setStaticF_ControlResVqlpc)) ::System::Guid  ControlResVqlpc;

/// @brief Field DialogicOkiAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DialogicOkiAdpcm, put=setStaticF_DialogicOkiAdpcm)) ::System::Guid  DialogicOkiAdpcm;

/// @brief Field DigiAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DigiAdpcm, put=setStaticF_DigiAdpcm)) ::System::Guid  DigiAdpcm;

/// @brief Field DigiFix, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DigiFix, put=setStaticF_DigiFix)) ::System::Guid  DigiFix;

/// @brief Field DigiReal, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DigiReal, put=setStaticF_DigiReal)) ::System::Guid  DigiReal;

/// @brief Field DigiStd, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DigiStd, put=setStaticF_DigiStd)) ::System::Guid  DigiStd;

/// @brief Field DolbyAc2, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DolbyAc2, put=setStaticF_DolbyAc2)) ::System::Guid  DolbyAc2;

/// @brief Field Drm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Drm, put=setStaticF_Drm)) ::System::Guid  Drm;

/// @brief Field DspGroupTrueSpeech, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DspGroupTrueSpeech, put=setStaticF_DspGroupTrueSpeech)) ::System::Guid  DspGroupTrueSpeech;

/// @brief Field Dts, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Dts, put=setStaticF_Dts)) ::System::Guid  Dts;

/// @brief Field DviAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DviAdpcm, put=setStaticF_DviAdpcm)) ::System::Guid  DviAdpcm;

/// @brief Field EchoSpeechCorporation1, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_EchoSpeechCorporation1, put=setStaticF_EchoSpeechCorporation1)) ::System::Guid  EchoSpeechCorporation1;

/// @brief Field Extensible, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Extensible, put=setStaticF_Extensible)) ::System::Guid  Extensible;

/// @brief Field G723, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_G723, put=setStaticF_G723)) ::System::Guid  G723;

/// @brief Field G723Adpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_G723Adpcm, put=setStaticF_G723Adpcm)) ::System::Guid  G723Adpcm;

/// @brief Field G729, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_G729, put=setStaticF_G729)) ::System::Guid  G729;

/// @brief Field Gsm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Gsm, put=setStaticF_Gsm)) ::System::Guid  Gsm;

/// @brief Field Gsm610, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Gsm610, put=setStaticF_Gsm610)) ::System::Guid  Gsm610;

/// @brief Field IbmCvsd, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_IbmCvsd, put=setStaticF_IbmCvsd)) ::System::Guid  IbmCvsd;

/// @brief Field IeeeFloat, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_IeeeFloat, put=setStaticF_IeeeFloat)) ::System::Guid  IeeeFloat;

/// @brief Field ImaAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ImaAdpcm, put=setStaticF_ImaAdpcm)) ::System::Guid  ImaAdpcm;

/// @brief Field Lrc, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Lrc, put=setStaticF_Lrc)) ::System::Guid  Lrc;

/// @brief Field MPEG_ADTS_AAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MPEG_ADTS_AAC, put=setStaticF_MPEG_ADTS_AAC)) ::System::Guid  MPEG_ADTS_AAC;

/// @brief Field MPEG_HEAAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MPEG_HEAAC, put=setStaticF_MPEG_HEAAC)) ::System::Guid  MPEG_HEAAC;

/// @brief Field MPEG_LOAS, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MPEG_LOAS, put=setStaticF_MPEG_LOAS)) ::System::Guid  MPEG_LOAS;

/// @brief Field MPEG_RAW_AAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MPEG_RAW_AAC, put=setStaticF_MPEG_RAW_AAC)) ::System::Guid  MPEG_RAW_AAC;

/// @brief Field MediaTypeAudio, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MediaTypeAudio, put=setStaticF_MediaTypeAudio)) ::System::Guid  MediaTypeAudio;

/// @brief Field MediaVisionAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MediaVisionAdpcm, put=setStaticF_MediaVisionAdpcm)) ::System::Guid  MediaVisionAdpcm;

/// @brief Field MediaspaceAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MediaspaceAdpcm, put=setStaticF_MediaspaceAdpcm)) ::System::Guid  MediaspaceAdpcm;

/// @brief Field Mpeg, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Mpeg, put=setStaticF_Mpeg)) ::System::Guid  Mpeg;

/// @brief Field MpegLayer3, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MpegLayer3, put=setStaticF_MpegLayer3)) ::System::Guid  MpegLayer3;

/// @brief Field MsnAudio, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MsnAudio, put=setStaticF_MsnAudio)) ::System::Guid  MsnAudio;

/// @brief Field MuLaw, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MuLaw, put=setStaticF_MuLaw)) ::System::Guid  MuLaw;

/// @brief Field NOKIA_MPEG_ADTS_AAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_NOKIA_MPEG_ADTS_AAC, put=setStaticF_NOKIA_MPEG_ADTS_AAC)) ::System::Guid  NOKIA_MPEG_ADTS_AAC;

/// @brief Field NOKIA_MPEG_RAW_AAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_NOKIA_MPEG_RAW_AAC, put=setStaticF_NOKIA_MPEG_RAW_AAC)) ::System::Guid  NOKIA_MPEG_RAW_AAC;

/// @brief Field OkiAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_OkiAdpcm, put=setStaticF_OkiAdpcm)) ::System::Guid  OkiAdpcm;

/// @brief Field Pcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Pcm, put=setStaticF_Pcm)) ::System::Guid  Pcm;

/// @brief Field Prosody1612, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Prosody1612, put=setStaticF_Prosody1612)) ::System::Guid  Prosody1612;

/// @brief Field RawAac, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_RawAac, put=setStaticF_RawAac)) ::System::Guid  RawAac;

/// @brief Field SierraAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SierraAdpcm, put=setStaticF_SierraAdpcm)) ::System::Guid  SierraAdpcm;

/// @brief Field SonarC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SonarC, put=setStaticF_SonarC)) ::System::Guid  SonarC;

/// @brief Field Unknown, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Unknown, put=setStaticF_Unknown)) ::System::Guid  Unknown;

/// @brief Field VODAFONE_MPEG_ADTS_AAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_VODAFONE_MPEG_ADTS_AAC, put=setStaticF_VODAFONE_MPEG_ADTS_AAC)) ::System::Guid  VODAFONE_MPEG_ADTS_AAC;

/// @brief Field VODAFONE_MPEG_RAW_AAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_VODAFONE_MPEG_RAW_AAC, put=setStaticF_VODAFONE_MPEG_RAW_AAC)) ::System::Guid  VODAFONE_MPEG_RAW_AAC;

/// @brief Field Vorbis1, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Vorbis1, put=setStaticF_Vorbis1)) ::System::Guid  Vorbis1;

/// @brief Field Vorbis1P, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Vorbis1P, put=setStaticF_Vorbis1P)) ::System::Guid  Vorbis1P;

/// @brief Field Vorbis2, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Vorbis2, put=setStaticF_Vorbis2)) ::System::Guid  Vorbis2;

/// @brief Field Vorbis2P, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Vorbis2P, put=setStaticF_Vorbis2P)) ::System::Guid  Vorbis2P;

/// @brief Field Vorbis3, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Vorbis3, put=setStaticF_Vorbis3)) ::System::Guid  Vorbis3;

/// @brief Field Vorbis3P, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Vorbis3P, put=setStaticF_Vorbis3P)) ::System::Guid  Vorbis3P;

/// @brief Field Vselp, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Vselp, put=setStaticF_Vselp)) ::System::Guid  Vselp;

/// @brief Field WAVE_FORMAT_BTV_DIGITAL, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_BTV_DIGITAL, put=setStaticF_WAVE_FORMAT_BTV_DIGITAL)) ::System::Guid  WAVE_FORMAT_BTV_DIGITAL;

/// @brief Field WAVE_FORMAT_CANOPUS_ATRAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_CANOPUS_ATRAC, put=setStaticF_WAVE_FORMAT_CANOPUS_ATRAC)) ::System::Guid  WAVE_FORMAT_CANOPUS_ATRAC;

/// @brief Field WAVE_FORMAT_CIRRUS, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_CIRRUS, put=setStaticF_WAVE_FORMAT_CIRRUS)) ::System::Guid  WAVE_FORMAT_CIRRUS;

/// @brief Field WAVE_FORMAT_CREATIVE_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_CREATIVE_ADPCM, put=setStaticF_WAVE_FORMAT_CREATIVE_ADPCM)) ::System::Guid  WAVE_FORMAT_CREATIVE_ADPCM;

/// @brief Field WAVE_FORMAT_CREATIVE_FASTSPEECH10, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH10, put=setStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH10)) ::System::Guid  WAVE_FORMAT_CREATIVE_FASTSPEECH10;

/// @brief Field WAVE_FORMAT_CREATIVE_FASTSPEECH8, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH8, put=setStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH8)) ::System::Guid  WAVE_FORMAT_CREATIVE_FASTSPEECH8;

/// @brief Field WAVE_FORMAT_CS2, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_CS2, put=setStaticF_WAVE_FORMAT_CS2)) ::System::Guid  WAVE_FORMAT_CS2;

/// @brief Field WAVE_FORMAT_CS_IMAADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_CS_IMAADPCM, put=setStaticF_WAVE_FORMAT_CS_IMAADPCM)) ::System::Guid  WAVE_FORMAT_CS_IMAADPCM;

/// @brief Field WAVE_FORMAT_DEVELOPMENT, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_DEVELOPMENT, put=setStaticF_WAVE_FORMAT_DEVELOPMENT)) ::System::Guid  WAVE_FORMAT_DEVELOPMENT;

/// @brief Field WAVE_FORMAT_DF_G726, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_DF_G726, put=setStaticF_WAVE_FORMAT_DF_G726)) ::System::Guid  WAVE_FORMAT_DF_G726;

/// @brief Field WAVE_FORMAT_DF_GSM610, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_DF_GSM610, put=setStaticF_WAVE_FORMAT_DF_GSM610)) ::System::Guid  WAVE_FORMAT_DF_GSM610;

/// @brief Field WAVE_FORMAT_DIGITAL_G723, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_DIGITAL_G723, put=setStaticF_WAVE_FORMAT_DIGITAL_G723)) ::System::Guid  WAVE_FORMAT_DIGITAL_G723;

/// @brief Field WAVE_FORMAT_DOLBY_AC3_SPDIF, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_DOLBY_AC3_SPDIF, put=setStaticF_WAVE_FORMAT_DOLBY_AC3_SPDIF)) ::System::Guid  WAVE_FORMAT_DOLBY_AC3_SPDIF;

/// @brief Field WAVE_FORMAT_DSAT_DISPLAY, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_DSAT_DISPLAY, put=setStaticF_WAVE_FORMAT_DSAT_DISPLAY)) ::System::Guid  WAVE_FORMAT_DSAT_DISPLAY;

/// @brief Field WAVE_FORMAT_DVM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_DVM, put=setStaticF_WAVE_FORMAT_DVM)) ::System::Guid  WAVE_FORMAT_DVM;

/// @brief Field WAVE_FORMAT_ECHOSC3, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ECHOSC3, put=setStaticF_WAVE_FORMAT_ECHOSC3)) ::System::Guid  WAVE_FORMAT_ECHOSC3;

/// @brief Field WAVE_FORMAT_ESPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ESPCM, put=setStaticF_WAVE_FORMAT_ESPCM)) ::System::Guid  WAVE_FORMAT_ESPCM;

/// @brief Field WAVE_FORMAT_ESST_AC3, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ESST_AC3, put=setStaticF_WAVE_FORMAT_ESST_AC3)) ::System::Guid  WAVE_FORMAT_ESST_AC3;

/// @brief Field WAVE_FORMAT_FLAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_FLAC, put=setStaticF_WAVE_FORMAT_FLAC)) ::System::Guid  WAVE_FORMAT_FLAC;

/// @brief Field WAVE_FORMAT_FM_TOWNS_SND, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_FM_TOWNS_SND, put=setStaticF_WAVE_FORMAT_FM_TOWNS_SND)) ::System::Guid  WAVE_FORMAT_FM_TOWNS_SND;

/// @brief Field WAVE_FORMAT_G721_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_G721_ADPCM, put=setStaticF_WAVE_FORMAT_G721_ADPCM)) ::System::Guid  WAVE_FORMAT_G721_ADPCM;

/// @brief Field WAVE_FORMAT_G722_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_G722_ADPCM, put=setStaticF_WAVE_FORMAT_G722_ADPCM)) ::System::Guid  WAVE_FORMAT_G722_ADPCM;

/// @brief Field WAVE_FORMAT_G726ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_G726ADPCM, put=setStaticF_WAVE_FORMAT_G726ADPCM)) ::System::Guid  WAVE_FORMAT_G726ADPCM;

/// @brief Field WAVE_FORMAT_G726_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_G726_ADPCM, put=setStaticF_WAVE_FORMAT_G726_ADPCM)) ::System::Guid  WAVE_FORMAT_G726_ADPCM;

/// @brief Field WAVE_FORMAT_G728_CELP, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_G728_CELP, put=setStaticF_WAVE_FORMAT_G728_CELP)) ::System::Guid  WAVE_FORMAT_G728_CELP;

/// @brief Field WAVE_FORMAT_G729A, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_G729A, put=setStaticF_WAVE_FORMAT_G729A)) ::System::Guid  WAVE_FORMAT_G729A;

/// @brief Field WAVE_FORMAT_ILINK_VC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ILINK_VC, put=setStaticF_WAVE_FORMAT_ILINK_VC)) ::System::Guid  WAVE_FORMAT_ILINK_VC;

/// @brief Field WAVE_FORMAT_IPI_HSX, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_IPI_HSX, put=setStaticF_WAVE_FORMAT_IPI_HSX)) ::System::Guid  WAVE_FORMAT_IPI_HSX;

/// @brief Field WAVE_FORMAT_IPI_RPELP, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_IPI_RPELP, put=setStaticF_WAVE_FORMAT_IPI_RPELP)) ::System::Guid  WAVE_FORMAT_IPI_RPELP;

/// @brief Field WAVE_FORMAT_IRAT, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_IRAT, put=setStaticF_WAVE_FORMAT_IRAT)) ::System::Guid  WAVE_FORMAT_IRAT;

/// @brief Field WAVE_FORMAT_ISIAUDIO, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ISIAUDIO, put=setStaticF_WAVE_FORMAT_ISIAUDIO)) ::System::Guid  WAVE_FORMAT_ISIAUDIO;

/// @brief Field WAVE_FORMAT_LH_CODEC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_LH_CODEC, put=setStaticF_WAVE_FORMAT_LH_CODEC)) ::System::Guid  WAVE_FORMAT_LH_CODEC;

/// @brief Field WAVE_FORMAT_LUCENT_G723, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_LUCENT_G723, put=setStaticF_WAVE_FORMAT_LUCENT_G723)) ::System::Guid  WAVE_FORMAT_LUCENT_G723;

/// @brief Field WAVE_FORMAT_MALDEN_PHONYTALK, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_MALDEN_PHONYTALK, put=setStaticF_WAVE_FORMAT_MALDEN_PHONYTALK)) ::System::Guid  WAVE_FORMAT_MALDEN_PHONYTALK;

/// @brief Field WAVE_FORMAT_MEDIASONIC_G723, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_MEDIASONIC_G723, put=setStaticF_WAVE_FORMAT_MEDIASONIC_G723)) ::System::Guid  WAVE_FORMAT_MEDIASONIC_G723;

/// @brief Field WAVE_FORMAT_MSAUDIO1, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_MSAUDIO1, put=setStaticF_WAVE_FORMAT_MSAUDIO1)) ::System::Guid  WAVE_FORMAT_MSAUDIO1;

/// @brief Field WAVE_FORMAT_MSG723, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_MSG723, put=setStaticF_WAVE_FORMAT_MSG723)) ::System::Guid  WAVE_FORMAT_MSG723;

/// @brief Field WAVE_FORMAT_MSRT24, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_MSRT24, put=setStaticF_WAVE_FORMAT_MSRT24)) ::System::Guid  WAVE_FORMAT_MSRT24;

/// @brief Field WAVE_FORMAT_MVI_MVI2, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_MVI_MVI2, put=setStaticF_WAVE_FORMAT_MVI_MVI2)) ::System::Guid  WAVE_FORMAT_MVI_MVI2;

/// @brief Field WAVE_FORMAT_NMS_VBXADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_NMS_VBXADPCM, put=setStaticF_WAVE_FORMAT_NMS_VBXADPCM)) ::System::Guid  WAVE_FORMAT_NMS_VBXADPCM;

/// @brief Field WAVE_FORMAT_NORRIS, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_NORRIS, put=setStaticF_WAVE_FORMAT_NORRIS)) ::System::Guid  WAVE_FORMAT_NORRIS;

/// @brief Field WAVE_FORMAT_OLIADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_OLIADPCM, put=setStaticF_WAVE_FORMAT_OLIADPCM)) ::System::Guid  WAVE_FORMAT_OLIADPCM;

/// @brief Field WAVE_FORMAT_OLICELP, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_OLICELP, put=setStaticF_WAVE_FORMAT_OLICELP)) ::System::Guid  WAVE_FORMAT_OLICELP;

/// @brief Field WAVE_FORMAT_OLIGSM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_OLIGSM, put=setStaticF_WAVE_FORMAT_OLIGSM)) ::System::Guid  WAVE_FORMAT_OLIGSM;

/// @brief Field WAVE_FORMAT_OLIOPR, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_OLIOPR, put=setStaticF_WAVE_FORMAT_OLIOPR)) ::System::Guid  WAVE_FORMAT_OLIOPR;

/// @brief Field WAVE_FORMAT_OLISBC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_OLISBC, put=setStaticF_WAVE_FORMAT_OLISBC)) ::System::Guid  WAVE_FORMAT_OLISBC;

/// @brief Field WAVE_FORMAT_ONLIVE, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ONLIVE, put=setStaticF_WAVE_FORMAT_ONLIVE)) ::System::Guid  WAVE_FORMAT_ONLIVE;

/// @brief Field WAVE_FORMAT_PAC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_PAC, put=setStaticF_WAVE_FORMAT_PAC)) ::System::Guid  WAVE_FORMAT_PAC;

/// @brief Field WAVE_FORMAT_PACKED, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_PACKED, put=setStaticF_WAVE_FORMAT_PACKED)) ::System::Guid  WAVE_FORMAT_PACKED;

/// @brief Field WAVE_FORMAT_PHILIPS_LPCBB, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_PHILIPS_LPCBB, put=setStaticF_WAVE_FORMAT_PHILIPS_LPCBB)) ::System::Guid  WAVE_FORMAT_PHILIPS_LPCBB;

/// @brief Field WAVE_FORMAT_PROSODY_8KBPS, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_PROSODY_8KBPS, put=setStaticF_WAVE_FORMAT_PROSODY_8KBPS)) ::System::Guid  WAVE_FORMAT_PROSODY_8KBPS;

/// @brief Field WAVE_FORMAT_QDESIGN_MUSIC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_QDESIGN_MUSIC, put=setStaticF_WAVE_FORMAT_QDESIGN_MUSIC)) ::System::Guid  WAVE_FORMAT_QDESIGN_MUSIC;

/// @brief Field WAVE_FORMAT_QUALCOMM_HALFRATE, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_QUALCOMM_HALFRATE, put=setStaticF_WAVE_FORMAT_QUALCOMM_HALFRATE)) ::System::Guid  WAVE_FORMAT_QUALCOMM_HALFRATE;

/// @brief Field WAVE_FORMAT_QUALCOMM_PUREVOICE, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_QUALCOMM_PUREVOICE, put=setStaticF_WAVE_FORMAT_QUALCOMM_PUREVOICE)) ::System::Guid  WAVE_FORMAT_QUALCOMM_PUREVOICE;

/// @brief Field WAVE_FORMAT_QUARTERDECK, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_QUARTERDECK, put=setStaticF_WAVE_FORMAT_QUARTERDECK)) ::System::Guid  WAVE_FORMAT_QUARTERDECK;

/// @brief Field WAVE_FORMAT_RAW_AAC1, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_RAW_AAC1, put=setStaticF_WAVE_FORMAT_RAW_AAC1)) ::System::Guid  WAVE_FORMAT_RAW_AAC1;

/// @brief Field WAVE_FORMAT_RAW_SPORT, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_RAW_SPORT, put=setStaticF_WAVE_FORMAT_RAW_SPORT)) ::System::Guid  WAVE_FORMAT_RAW_SPORT;

/// @brief Field WAVE_FORMAT_RHETOREX_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_RHETOREX_ADPCM, put=setStaticF_WAVE_FORMAT_RHETOREX_ADPCM)) ::System::Guid  WAVE_FORMAT_RHETOREX_ADPCM;

/// @brief Field WAVE_FORMAT_ROCKWELL_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ROCKWELL_ADPCM, put=setStaticF_WAVE_FORMAT_ROCKWELL_ADPCM)) ::System::Guid  WAVE_FORMAT_ROCKWELL_ADPCM;

/// @brief Field WAVE_FORMAT_ROCKWELL_DIGITALK, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ROCKWELL_DIGITALK, put=setStaticF_WAVE_FORMAT_ROCKWELL_DIGITALK)) ::System::Guid  WAVE_FORMAT_ROCKWELL_DIGITALK;

/// @brief Field WAVE_FORMAT_RT24, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_RT24, put=setStaticF_WAVE_FORMAT_RT24)) ::System::Guid  WAVE_FORMAT_RT24;

/// @brief Field WAVE_FORMAT_SANYO_LD_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SANYO_LD_ADPCM, put=setStaticF_WAVE_FORMAT_SANYO_LD_ADPCM)) ::System::Guid  WAVE_FORMAT_SANYO_LD_ADPCM;

/// @brief Field WAVE_FORMAT_SBC24, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SBC24, put=setStaticF_WAVE_FORMAT_SBC24)) ::System::Guid  WAVE_FORMAT_SBC24;

/// @brief Field WAVE_FORMAT_SIPROLAB_ACELP4800, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SIPROLAB_ACELP4800, put=setStaticF_WAVE_FORMAT_SIPROLAB_ACELP4800)) ::System::Guid  WAVE_FORMAT_SIPROLAB_ACELP4800;

/// @brief Field WAVE_FORMAT_SIPROLAB_ACELP8V3, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SIPROLAB_ACELP8V3, put=setStaticF_WAVE_FORMAT_SIPROLAB_ACELP8V3)) ::System::Guid  WAVE_FORMAT_SIPROLAB_ACELP8V3;

/// @brief Field WAVE_FORMAT_SIPROLAB_ACEPLNET, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SIPROLAB_ACEPLNET, put=setStaticF_WAVE_FORMAT_SIPROLAB_ACEPLNET)) ::System::Guid  WAVE_FORMAT_SIPROLAB_ACEPLNET;

/// @brief Field WAVE_FORMAT_SIPROLAB_G729, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SIPROLAB_G729, put=setStaticF_WAVE_FORMAT_SIPROLAB_G729)) ::System::Guid  WAVE_FORMAT_SIPROLAB_G729;

/// @brief Field WAVE_FORMAT_SIPROLAB_G729A, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SIPROLAB_G729A, put=setStaticF_WAVE_FORMAT_SIPROLAB_G729A)) ::System::Guid  WAVE_FORMAT_SIPROLAB_G729A;

/// @brief Field WAVE_FORMAT_SIPROLAB_KELVIN, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SIPROLAB_KELVIN, put=setStaticF_WAVE_FORMAT_SIPROLAB_KELVIN)) ::System::Guid  WAVE_FORMAT_SIPROLAB_KELVIN;

/// @brief Field WAVE_FORMAT_SOFTSOUND, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SOFTSOUND, put=setStaticF_WAVE_FORMAT_SOFTSOUND)) ::System::Guid  WAVE_FORMAT_SOFTSOUND;

/// @brief Field WAVE_FORMAT_SONY_SCX, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SONY_SCX, put=setStaticF_WAVE_FORMAT_SONY_SCX)) ::System::Guid  WAVE_FORMAT_SONY_SCX;

/// @brief Field WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS, put=setStaticF_WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS)) ::System::Guid  WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS;

/// @brief Field WAVE_FORMAT_TPC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_TPC, put=setStaticF_WAVE_FORMAT_TPC)) ::System::Guid  WAVE_FORMAT_TPC;

/// @brief Field WAVE_FORMAT_TUBGSM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_TUBGSM, put=setStaticF_WAVE_FORMAT_TUBGSM)) ::System::Guid  WAVE_FORMAT_TUBGSM;

/// @brief Field WAVE_FORMAT_UHER_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_UHER_ADPCM, put=setStaticF_WAVE_FORMAT_UHER_ADPCM)) ::System::Guid  WAVE_FORMAT_UHER_ADPCM;

/// @brief Field WAVE_FORMAT_UNISYS_NAP_16K, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_UNISYS_NAP_16K, put=setStaticF_WAVE_FORMAT_UNISYS_NAP_16K)) ::System::Guid  WAVE_FORMAT_UNISYS_NAP_16K;

/// @brief Field WAVE_FORMAT_UNISYS_NAP_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_UNISYS_NAP_ADPCM, put=setStaticF_WAVE_FORMAT_UNISYS_NAP_ADPCM)) ::System::Guid  WAVE_FORMAT_UNISYS_NAP_ADPCM;

/// @brief Field WAVE_FORMAT_UNISYS_NAP_ALAW, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_UNISYS_NAP_ALAW, put=setStaticF_WAVE_FORMAT_UNISYS_NAP_ALAW)) ::System::Guid  WAVE_FORMAT_UNISYS_NAP_ALAW;

/// @brief Field WAVE_FORMAT_UNISYS_NAP_ULAW, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_UNISYS_NAP_ULAW, put=setStaticF_WAVE_FORMAT_UNISYS_NAP_ULAW)) ::System::Guid  WAVE_FORMAT_UNISYS_NAP_ULAW;

/// @brief Field WAVE_FORMAT_VIVO_G723, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VIVO_G723, put=setStaticF_WAVE_FORMAT_VIVO_G723)) ::System::Guid  WAVE_FORMAT_VIVO_G723;

/// @brief Field WAVE_FORMAT_VIVO_SIREN, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VIVO_SIREN, put=setStaticF_WAVE_FORMAT_VIVO_SIREN)) ::System::Guid  WAVE_FORMAT_VIVO_SIREN;

/// @brief Field WAVE_FORMAT_VME_VMPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VME_VMPCM, put=setStaticF_WAVE_FORMAT_VME_VMPCM)) ::System::Guid  WAVE_FORMAT_VME_VMPCM;

/// @brief Field WAVE_FORMAT_VOXWARE, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE, put=setStaticF_WAVE_FORMAT_VOXWARE)) ::System::Guid  WAVE_FORMAT_VOXWARE;

/// @brief Field WAVE_FORMAT_VOXWARE_AC10, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_AC10, put=setStaticF_WAVE_FORMAT_VOXWARE_AC10)) ::System::Guid  WAVE_FORMAT_VOXWARE_AC10;

/// @brief Field WAVE_FORMAT_VOXWARE_AC16, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_AC16, put=setStaticF_WAVE_FORMAT_VOXWARE_AC16)) ::System::Guid  WAVE_FORMAT_VOXWARE_AC16;

/// @brief Field WAVE_FORMAT_VOXWARE_AC20, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_AC20, put=setStaticF_WAVE_FORMAT_VOXWARE_AC20)) ::System::Guid  WAVE_FORMAT_VOXWARE_AC20;

/// @brief Field WAVE_FORMAT_VOXWARE_AC8, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_AC8, put=setStaticF_WAVE_FORMAT_VOXWARE_AC8)) ::System::Guid  WAVE_FORMAT_VOXWARE_AC8;

/// @brief Field WAVE_FORMAT_VOXWARE_BYTE_ALIGNED, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_BYTE_ALIGNED, put=setStaticF_WAVE_FORMAT_VOXWARE_BYTE_ALIGNED)) ::System::Guid  WAVE_FORMAT_VOXWARE_BYTE_ALIGNED;

/// @brief Field WAVE_FORMAT_VOXWARE_RT24, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_RT24, put=setStaticF_WAVE_FORMAT_VOXWARE_RT24)) ::System::Guid  WAVE_FORMAT_VOXWARE_RT24;

/// @brief Field WAVE_FORMAT_VOXWARE_RT29, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_RT29, put=setStaticF_WAVE_FORMAT_VOXWARE_RT29)) ::System::Guid  WAVE_FORMAT_VOXWARE_RT29;

/// @brief Field WAVE_FORMAT_VOXWARE_RT29HW, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_RT29HW, put=setStaticF_WAVE_FORMAT_VOXWARE_RT29HW)) ::System::Guid  WAVE_FORMAT_VOXWARE_RT29HW;

/// @brief Field WAVE_FORMAT_VOXWARE_TQ40, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_TQ40, put=setStaticF_WAVE_FORMAT_VOXWARE_TQ40)) ::System::Guid  WAVE_FORMAT_VOXWARE_TQ40;

/// @brief Field WAVE_FORMAT_VOXWARE_TQ60, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_TQ60, put=setStaticF_WAVE_FORMAT_VOXWARE_TQ60)) ::System::Guid  WAVE_FORMAT_VOXWARE_TQ60;

/// @brief Field WAVE_FORMAT_VOXWARE_VR12, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_VR12, put=setStaticF_WAVE_FORMAT_VOXWARE_VR12)) ::System::Guid  WAVE_FORMAT_VOXWARE_VR12;

/// @brief Field WAVE_FORMAT_VOXWARE_VR18, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_VOXWARE_VR18, put=setStaticF_WAVE_FORMAT_VOXWARE_VR18)) ::System::Guid  WAVE_FORMAT_VOXWARE_VR18;

/// @brief Field WAVE_FORMAT_WMAVOICE9, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_WMAVOICE9, put=setStaticF_WAVE_FORMAT_WMAVOICE9)) ::System::Guid  WAVE_FORMAT_WMAVOICE9;

/// @brief Field WAVE_FORMAT_XEBEC, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_XEBEC, put=setStaticF_WAVE_FORMAT_XEBEC)) ::System::Guid  WAVE_FORMAT_XEBEC;

/// @brief Field WAVE_FORMAT_ZYXEL_ADPCM, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WAVE_FORMAT_ZYXEL_ADPCM, put=setStaticF_WAVE_FORMAT_ZYXEL_ADPCM)) ::System::Guid  WAVE_FORMAT_ZYXEL_ADPCM;

/// @brief Field WindowsMediaAudio, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WindowsMediaAudio, put=setStaticF_WindowsMediaAudio)) ::System::Guid  WindowsMediaAudio;

/// @brief Field WindowsMediaAudioLosseless, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WindowsMediaAudioLosseless, put=setStaticF_WindowsMediaAudioLosseless)) ::System::Guid  WindowsMediaAudioLosseless;

/// @brief Field WindowsMediaAudioProfessional, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WindowsMediaAudioProfessional, put=setStaticF_WindowsMediaAudioProfessional)) ::System::Guid  WindowsMediaAudioProfessional;

/// @brief Field WindowsMediaAudioSpdif, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WindowsMediaAudioSpdif, put=setStaticF_WindowsMediaAudioSpdif)) ::System::Guid  WindowsMediaAudioSpdif;

/// @brief Field WmaVoice9, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WmaVoice9, put=setStaticF_WmaVoice9)) ::System::Guid  WmaVoice9;

/// @brief Field YamahaAdpcm, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_YamahaAdpcm, put=setStaticF_YamahaAdpcm)) ::System::Guid  YamahaAdpcm;

/// @brief Method EncodingFromSubType, addr 0xa75ff04, size 0x130, virtual false, abstract: false, final false
static inline ::CSCore::AudioEncoding EncodingFromSubType(::System::Guid  audioSubType) ;

/// @brief Method SubTypeFromEncoding, addr 0xa760034, size 0x158, virtual false, abstract: false, final false
static inline ::System::Guid SubTypeFromEncoding(::CSCore::AudioEncoding  audioEncoding) ;

static inline ::System::Guid getStaticF_ALaw() ;

static inline ::System::Guid getStaticF_Acelp() ;

static inline ::System::Guid getStaticF_Adpcm() ;

static inline ::System::Guid getStaticF_AntexAdpcme() ;

static inline ::System::Guid getStaticF_Aptx() ;

static inline ::System::Guid getStaticF_AudioFileAf10() ;

static inline ::System::Guid getStaticF_AudioFileAf36() ;

static inline ::System::Guid getStaticF_CUCodec() ;

static inline ::System::Guid getStaticF_ControlResCr10() ;

static inline ::System::Guid getStaticF_ControlResVqlpc() ;

static inline ::System::Guid getStaticF_DialogicOkiAdpcm() ;

static inline ::System::Guid getStaticF_DigiAdpcm() ;

static inline ::System::Guid getStaticF_DigiFix() ;

static inline ::System::Guid getStaticF_DigiReal() ;

static inline ::System::Guid getStaticF_DigiStd() ;

static inline ::System::Guid getStaticF_DolbyAc2() ;

static inline ::System::Guid getStaticF_Drm() ;

static inline ::System::Guid getStaticF_DspGroupTrueSpeech() ;

static inline ::System::Guid getStaticF_Dts() ;

static inline ::System::Guid getStaticF_DviAdpcm() ;

static inline ::System::Guid getStaticF_EchoSpeechCorporation1() ;

static inline ::System::Guid getStaticF_Extensible() ;

static inline ::System::Guid getStaticF_G723() ;

static inline ::System::Guid getStaticF_G723Adpcm() ;

static inline ::System::Guid getStaticF_G729() ;

static inline ::System::Guid getStaticF_Gsm() ;

static inline ::System::Guid getStaticF_Gsm610() ;

static inline ::System::Guid getStaticF_IbmCvsd() ;

static inline ::System::Guid getStaticF_IeeeFloat() ;

static inline ::System::Guid getStaticF_ImaAdpcm() ;

static inline ::System::Guid getStaticF_Lrc() ;

static inline ::System::Guid getStaticF_MPEG_ADTS_AAC() ;

static inline ::System::Guid getStaticF_MPEG_HEAAC() ;

static inline ::System::Guid getStaticF_MPEG_LOAS() ;

static inline ::System::Guid getStaticF_MPEG_RAW_AAC() ;

static inline ::System::Guid getStaticF_MediaTypeAudio() ;

static inline ::System::Guid getStaticF_MediaVisionAdpcm() ;

static inline ::System::Guid getStaticF_MediaspaceAdpcm() ;

static inline ::System::Guid getStaticF_Mpeg() ;

static inline ::System::Guid getStaticF_MpegLayer3() ;

static inline ::System::Guid getStaticF_MsnAudio() ;

static inline ::System::Guid getStaticF_MuLaw() ;

static inline ::System::Guid getStaticF_NOKIA_MPEG_ADTS_AAC() ;

static inline ::System::Guid getStaticF_NOKIA_MPEG_RAW_AAC() ;

static inline ::System::Guid getStaticF_OkiAdpcm() ;

static inline ::System::Guid getStaticF_Pcm() ;

static inline ::System::Guid getStaticF_Prosody1612() ;

static inline ::System::Guid getStaticF_RawAac() ;

static inline ::System::Guid getStaticF_SierraAdpcm() ;

static inline ::System::Guid getStaticF_SonarC() ;

static inline ::System::Guid getStaticF_Unknown() ;

static inline ::System::Guid getStaticF_VODAFONE_MPEG_ADTS_AAC() ;

static inline ::System::Guid getStaticF_VODAFONE_MPEG_RAW_AAC() ;

static inline ::System::Guid getStaticF_Vorbis1() ;

static inline ::System::Guid getStaticF_Vorbis1P() ;

static inline ::System::Guid getStaticF_Vorbis2() ;

static inline ::System::Guid getStaticF_Vorbis2P() ;

static inline ::System::Guid getStaticF_Vorbis3() ;

static inline ::System::Guid getStaticF_Vorbis3P() ;

static inline ::System::Guid getStaticF_Vselp() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_BTV_DIGITAL() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_CANOPUS_ATRAC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_CIRRUS() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_CREATIVE_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH10() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH8() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_CS2() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_CS_IMAADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_DEVELOPMENT() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_DF_G726() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_DF_GSM610() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_DIGITAL_G723() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_DOLBY_AC3_SPDIF() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_DSAT_DISPLAY() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_DVM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ECHOSC3() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ESPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ESST_AC3() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_FLAC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_FM_TOWNS_SND() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_G721_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_G722_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_G726ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_G726_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_G728_CELP() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_G729A() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ILINK_VC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_IPI_HSX() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_IPI_RPELP() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_IRAT() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ISIAUDIO() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_LH_CODEC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_LUCENT_G723() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_MALDEN_PHONYTALK() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_MEDIASONIC_G723() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_MSAUDIO1() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_MSG723() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_MSRT24() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_MVI_MVI2() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_NMS_VBXADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_NORRIS() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_OLIADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_OLICELP() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_OLIGSM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_OLIOPR() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_OLISBC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ONLIVE() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_PAC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_PACKED() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_PHILIPS_LPCBB() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_PROSODY_8KBPS() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_QDESIGN_MUSIC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_QUALCOMM_HALFRATE() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_QUALCOMM_PUREVOICE() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_QUARTERDECK() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_RAW_AAC1() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_RAW_SPORT() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_RHETOREX_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ROCKWELL_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ROCKWELL_DIGITALK() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_RT24() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SANYO_LD_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SBC24() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SIPROLAB_ACELP4800() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SIPROLAB_ACELP8V3() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SIPROLAB_ACEPLNET() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SIPROLAB_G729() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SIPROLAB_G729A() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SIPROLAB_KELVIN() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SOFTSOUND() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SONY_SCX() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_TPC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_TUBGSM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_UHER_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_UNISYS_NAP_16K() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_UNISYS_NAP_ADPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_UNISYS_NAP_ALAW() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_UNISYS_NAP_ULAW() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VIVO_G723() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VIVO_SIREN() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VME_VMPCM() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_AC10() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_AC16() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_AC20() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_AC8() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_BYTE_ALIGNED() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_RT24() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_RT29() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_RT29HW() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_TQ40() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_TQ60() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_VR12() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_VOXWARE_VR18() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_WMAVOICE9() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_XEBEC() ;

static inline ::System::Guid getStaticF_WAVE_FORMAT_ZYXEL_ADPCM() ;

static inline ::System::Guid getStaticF_WindowsMediaAudio() ;

static inline ::System::Guid getStaticF_WindowsMediaAudioLosseless() ;

static inline ::System::Guid getStaticF_WindowsMediaAudioProfessional() ;

static inline ::System::Guid getStaticF_WindowsMediaAudioSpdif() ;

static inline ::System::Guid getStaticF_WmaVoice9() ;

static inline ::System::Guid getStaticF_YamahaAdpcm() ;

static inline void setStaticF_ALaw(::System::Guid  value) ;

static inline void setStaticF_Acelp(::System::Guid  value) ;

static inline void setStaticF_Adpcm(::System::Guid  value) ;

static inline void setStaticF_AntexAdpcme(::System::Guid  value) ;

static inline void setStaticF_Aptx(::System::Guid  value) ;

static inline void setStaticF_AudioFileAf10(::System::Guid  value) ;

static inline void setStaticF_AudioFileAf36(::System::Guid  value) ;

static inline void setStaticF_CUCodec(::System::Guid  value) ;

static inline void setStaticF_ControlResCr10(::System::Guid  value) ;

static inline void setStaticF_ControlResVqlpc(::System::Guid  value) ;

static inline void setStaticF_DialogicOkiAdpcm(::System::Guid  value) ;

static inline void setStaticF_DigiAdpcm(::System::Guid  value) ;

static inline void setStaticF_DigiFix(::System::Guid  value) ;

static inline void setStaticF_DigiReal(::System::Guid  value) ;

static inline void setStaticF_DigiStd(::System::Guid  value) ;

static inline void setStaticF_DolbyAc2(::System::Guid  value) ;

static inline void setStaticF_Drm(::System::Guid  value) ;

static inline void setStaticF_DspGroupTrueSpeech(::System::Guid  value) ;

static inline void setStaticF_Dts(::System::Guid  value) ;

static inline void setStaticF_DviAdpcm(::System::Guid  value) ;

static inline void setStaticF_EchoSpeechCorporation1(::System::Guid  value) ;

static inline void setStaticF_Extensible(::System::Guid  value) ;

static inline void setStaticF_G723(::System::Guid  value) ;

static inline void setStaticF_G723Adpcm(::System::Guid  value) ;

static inline void setStaticF_G729(::System::Guid  value) ;

static inline void setStaticF_Gsm(::System::Guid  value) ;

static inline void setStaticF_Gsm610(::System::Guid  value) ;

static inline void setStaticF_IbmCvsd(::System::Guid  value) ;

static inline void setStaticF_IeeeFloat(::System::Guid  value) ;

static inline void setStaticF_ImaAdpcm(::System::Guid  value) ;

static inline void setStaticF_Lrc(::System::Guid  value) ;

static inline void setStaticF_MPEG_ADTS_AAC(::System::Guid  value) ;

static inline void setStaticF_MPEG_HEAAC(::System::Guid  value) ;

static inline void setStaticF_MPEG_LOAS(::System::Guid  value) ;

static inline void setStaticF_MPEG_RAW_AAC(::System::Guid  value) ;

static inline void setStaticF_MediaTypeAudio(::System::Guid  value) ;

static inline void setStaticF_MediaVisionAdpcm(::System::Guid  value) ;

static inline void setStaticF_MediaspaceAdpcm(::System::Guid  value) ;

static inline void setStaticF_Mpeg(::System::Guid  value) ;

static inline void setStaticF_MpegLayer3(::System::Guid  value) ;

static inline void setStaticF_MsnAudio(::System::Guid  value) ;

static inline void setStaticF_MuLaw(::System::Guid  value) ;

static inline void setStaticF_NOKIA_MPEG_ADTS_AAC(::System::Guid  value) ;

static inline void setStaticF_NOKIA_MPEG_RAW_AAC(::System::Guid  value) ;

static inline void setStaticF_OkiAdpcm(::System::Guid  value) ;

static inline void setStaticF_Pcm(::System::Guid  value) ;

static inline void setStaticF_Prosody1612(::System::Guid  value) ;

static inline void setStaticF_RawAac(::System::Guid  value) ;

static inline void setStaticF_SierraAdpcm(::System::Guid  value) ;

static inline void setStaticF_SonarC(::System::Guid  value) ;

static inline void setStaticF_Unknown(::System::Guid  value) ;

static inline void setStaticF_VODAFONE_MPEG_ADTS_AAC(::System::Guid  value) ;

static inline void setStaticF_VODAFONE_MPEG_RAW_AAC(::System::Guid  value) ;

static inline void setStaticF_Vorbis1(::System::Guid  value) ;

static inline void setStaticF_Vorbis1P(::System::Guid  value) ;

static inline void setStaticF_Vorbis2(::System::Guid  value) ;

static inline void setStaticF_Vorbis2P(::System::Guid  value) ;

static inline void setStaticF_Vorbis3(::System::Guid  value) ;

static inline void setStaticF_Vorbis3P(::System::Guid  value) ;

static inline void setStaticF_Vselp(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_BTV_DIGITAL(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_CANOPUS_ATRAC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_CIRRUS(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_CREATIVE_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH10(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_CREATIVE_FASTSPEECH8(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_CS2(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_CS_IMAADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_DEVELOPMENT(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_DF_G726(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_DF_GSM610(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_DIGITAL_G723(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_DOLBY_AC3_SPDIF(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_DSAT_DISPLAY(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_DVM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ECHOSC3(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ESPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ESST_AC3(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_FLAC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_FM_TOWNS_SND(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_G721_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_G722_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_G726ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_G726_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_G728_CELP(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_G729A(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ILINK_VC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_IPI_HSX(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_IPI_RPELP(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_IRAT(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ISIAUDIO(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_LH_CODEC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_LUCENT_G723(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_MALDEN_PHONYTALK(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_MEDIASONIC_G723(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_MSAUDIO1(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_MSG723(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_MSRT24(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_MVI_MVI2(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_NMS_VBXADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_NORRIS(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_OLIADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_OLICELP(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_OLIGSM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_OLIOPR(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_OLISBC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ONLIVE(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_PAC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_PACKED(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_PHILIPS_LPCBB(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_PROSODY_8KBPS(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_QDESIGN_MUSIC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_QUALCOMM_HALFRATE(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_QUALCOMM_PUREVOICE(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_QUARTERDECK(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_RAW_AAC1(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_RAW_SPORT(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_RHETOREX_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ROCKWELL_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ROCKWELL_DIGITALK(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_RT24(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SANYO_LD_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SBC24(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SIPROLAB_ACELP4800(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SIPROLAB_ACELP8V3(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SIPROLAB_ACEPLNET(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SIPROLAB_G729(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SIPROLAB_G729A(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SIPROLAB_KELVIN(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SOFTSOUND(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SONY_SCX(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_TPC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_TUBGSM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_UHER_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_UNISYS_NAP_16K(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_UNISYS_NAP_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_UNISYS_NAP_ALAW(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_UNISYS_NAP_ULAW(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VIVO_G723(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VIVO_SIREN(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VME_VMPCM(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_AC10(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_AC16(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_AC20(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_AC8(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_BYTE_ALIGNED(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_RT24(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_RT29(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_RT29HW(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_TQ40(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_TQ60(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_VR12(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_VOXWARE_VR18(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_WMAVOICE9(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_XEBEC(::System::Guid  value) ;

static inline void setStaticF_WAVE_FORMAT_ZYXEL_ADPCM(::System::Guid  value) ;

static inline void setStaticF_WindowsMediaAudio(::System::Guid  value) ;

static inline void setStaticF_WindowsMediaAudioLosseless(::System::Guid  value) ;

static inline void setStaticF_WindowsMediaAudioProfessional(::System::Guid  value) ;

static inline void setStaticF_WindowsMediaAudioSpdif(::System::Guid  value) ;

static inline void setStaticF_WmaVoice9(::System::Guid  value) ;

static inline void setStaticF_YamahaAdpcm(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSubTypes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSubTypes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSubTypes(AudioSubTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSubTypes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSubTypes(AudioSubTypes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28861};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::CSCore::AudioSubTypes) == 0x10, "Size mismatch!");

} // namespace end def CSCore
