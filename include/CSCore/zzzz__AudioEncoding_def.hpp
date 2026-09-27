#pragma once
// IWYU pragma private; include "CSCore/AudioEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioEncoding)
// Forward declare root types
namespace CSCore {
struct AudioEncoding;
}
// Write type traits
MARK_VAL_T(::CSCore::AudioEncoding);
DEFINE_IL2CPP_CLASS(::CSCore::AudioEncoding, "CSCore", "AudioEncoding");
// Dependencies 
namespace CSCore {
// Is value type: true
// CS Name: CSCore.AudioEncoding
struct CORDL_TYPE AudioEncoding {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __AudioEncoding_Unwrapped
enum struct __AudioEncoding_Unwrapped : int16_t {
__E_Unknown = static_cast<int16_t>(0x0),
__E_Pcm = static_cast<int16_t>(0x1),
__E_Adpcm = static_cast<int16_t>(0x2),
__E_IeeeFloat = static_cast<int16_t>(0x3),
__E_Vselp = static_cast<int16_t>(0x4),
__E_IbmCvsd = static_cast<int16_t>(0x5),
__E_ALaw = static_cast<int16_t>(0x6),
__E_MuLaw = static_cast<int16_t>(0x7),
__E_Dts = static_cast<int16_t>(0x8),
__E_Drm = static_cast<int16_t>(0x9),
__E_WmaVoice9 = static_cast<int16_t>(0xa),
__E_OkiAdpcm = static_cast<int16_t>(0x10),
__E_DviAdpcm = static_cast<int16_t>(0x11),
__E_ImaAdpcm = static_cast<int16_t>(0x11),
__E_MediaspaceAdpcm = static_cast<int16_t>(0x12),
__E_SierraAdpcm = static_cast<int16_t>(0x13),
__E_G723Adpcm = static_cast<int16_t>(0x14),
__E_DigiStd = static_cast<int16_t>(0x15),
__E_DigiFix = static_cast<int16_t>(0x16),
__E_DialogicOkiAdpcm = static_cast<int16_t>(0x17),
__E_MediaVisionAdpcm = static_cast<int16_t>(0x18),
__E_CUCodec = static_cast<int16_t>(0x19),
__E_YamahaAdpcm = static_cast<int16_t>(0x20),
__E_SonarC = static_cast<int16_t>(0x21),
__E_DspGroupTrueSpeech = static_cast<int16_t>(0x22),
__E_EchoSpeechCorporation1 = static_cast<int16_t>(0x23),
__E_AudioFileAf36 = static_cast<int16_t>(0x24),
__E_Aptx = static_cast<int16_t>(0x25),
__E_AudioFileAf10 = static_cast<int16_t>(0x26),
__E_Prosody1612 = static_cast<int16_t>(0x27),
__E_Lrc = static_cast<int16_t>(0x28),
__E_DolbyAc2 = static_cast<int16_t>(0x30),
__E_Gsm610 = static_cast<int16_t>(0x31),
__E_MsnAudio = static_cast<int16_t>(0x32),
__E_AntexAdpcme = static_cast<int16_t>(0x33),
__E_ControlResVqlpc = static_cast<int16_t>(0x34),
__E_DigiReal = static_cast<int16_t>(0x35),
__E_DigiAdpcm = static_cast<int16_t>(0x36),
__E_ControlResCr10 = static_cast<int16_t>(0x37),
__E_WAVE_FORMAT_NMS_VBXADPCM = static_cast<int16_t>(0x38),
__E_WAVE_FORMAT_CS_IMAADPCM = static_cast<int16_t>(0x39),
__E_WAVE_FORMAT_ECHOSC3 = static_cast<int16_t>(0x3a),
__E_WAVE_FORMAT_ROCKWELL_ADPCM = static_cast<int16_t>(0x3b),
__E_WAVE_FORMAT_ROCKWELL_DIGITALK = static_cast<int16_t>(0x3c),
__E_WAVE_FORMAT_XEBEC = static_cast<int16_t>(0x3d),
__E_WAVE_FORMAT_G721_ADPCM = static_cast<int16_t>(0x40),
__E_WAVE_FORMAT_G728_CELP = static_cast<int16_t>(0x41),
__E_WAVE_FORMAT_MSG723 = static_cast<int16_t>(0x42),
__E_Mpeg = static_cast<int16_t>(0x50),
__E_WAVE_FORMAT_RT24 = static_cast<int16_t>(0x52),
__E_WAVE_FORMAT_PAC = static_cast<int16_t>(0x53),
__E_MpegLayer3 = static_cast<int16_t>(0x55),
__E_WAVE_FORMAT_LUCENT_G723 = static_cast<int16_t>(0x59),
__E_WAVE_FORMAT_CIRRUS = static_cast<int16_t>(0x60),
__E_WAVE_FORMAT_ESPCM = static_cast<int16_t>(0x61),
__E_WAVE_FORMAT_VOXWARE = static_cast<int16_t>(0x62),
__E_WAVE_FORMAT_CANOPUS_ATRAC = static_cast<int16_t>(0x63),
__E_WAVE_FORMAT_G726_ADPCM = static_cast<int16_t>(0x64),
__E_WAVE_FORMAT_G722_ADPCM = static_cast<int16_t>(0x65),
__E_WAVE_FORMAT_DSAT_DISPLAY = static_cast<int16_t>(0x67),
__E_WAVE_FORMAT_VOXWARE_BYTE_ALIGNED = static_cast<int16_t>(0x69),
__E_WAVE_FORMAT_VOXWARE_AC8 = static_cast<int16_t>(0x70),
__E_WAVE_FORMAT_VOXWARE_AC10 = static_cast<int16_t>(0x71),
__E_WAVE_FORMAT_VOXWARE_AC16 = static_cast<int16_t>(0x72),
__E_WAVE_FORMAT_VOXWARE_AC20 = static_cast<int16_t>(0x73),
__E_WAVE_FORMAT_VOXWARE_RT24 = static_cast<int16_t>(0x74),
__E_WAVE_FORMAT_VOXWARE_RT29 = static_cast<int16_t>(0x75),
__E_WAVE_FORMAT_VOXWARE_RT29HW = static_cast<int16_t>(0x76),
__E_WAVE_FORMAT_VOXWARE_VR12 = static_cast<int16_t>(0x77),
__E_WAVE_FORMAT_VOXWARE_VR18 = static_cast<int16_t>(0x78),
__E_WAVE_FORMAT_VOXWARE_TQ40 = static_cast<int16_t>(0x79),
__E_WAVE_FORMAT_SOFTSOUND = static_cast<int16_t>(0x80),
__E_WAVE_FORMAT_VOXWARE_TQ60 = static_cast<int16_t>(0x81),
__E_WAVE_FORMAT_MSRT24 = static_cast<int16_t>(0x82),
__E_WAVE_FORMAT_G729A = static_cast<int16_t>(0x83),
__E_WAVE_FORMAT_MVI_MVI2 = static_cast<int16_t>(0x84),
__E_WAVE_FORMAT_DF_G726 = static_cast<int16_t>(0x85),
__E_WAVE_FORMAT_DF_GSM610 = static_cast<int16_t>(0x86),
__E_WAVE_FORMAT_ISIAUDIO = static_cast<int16_t>(0x88),
__E_WAVE_FORMAT_ONLIVE = static_cast<int16_t>(0x89),
__E_WAVE_FORMAT_SBC24 = static_cast<int16_t>(0x91),
__E_WAVE_FORMAT_DOLBY_AC3_SPDIF = static_cast<int16_t>(0x92),
__E_WAVE_FORMAT_MEDIASONIC_G723 = static_cast<int16_t>(0x93),
__E_WAVE_FORMAT_PROSODY_8KBPS = static_cast<int16_t>(0x94),
__E_WAVE_FORMAT_ZYXEL_ADPCM = static_cast<int16_t>(0x97),
__E_WAVE_FORMAT_PHILIPS_LPCBB = static_cast<int16_t>(0x98),
__E_WAVE_FORMAT_PACKED = static_cast<int16_t>(0x99),
__E_WAVE_FORMAT_MALDEN_PHONYTALK = static_cast<int16_t>(0xa0),
__E_Gsm = static_cast<int16_t>(0xa1),
__E_G729 = static_cast<int16_t>(0xa2),
__E_G723 = static_cast<int16_t>(0xa3),
__E_Acelp = static_cast<int16_t>(0xa4),
__E_RawAac = static_cast<int16_t>(0xff),
__E_WAVE_FORMAT_RHETOREX_ADPCM = static_cast<int16_t>(0x100),
__E_WAVE_FORMAT_IRAT = static_cast<int16_t>(0x101),
__E_WAVE_FORMAT_VIVO_G723 = static_cast<int16_t>(0x111),
__E_WAVE_FORMAT_VIVO_SIREN = static_cast<int16_t>(0x112),
__E_WAVE_FORMAT_DIGITAL_G723 = static_cast<int16_t>(0x123),
__E_WAVE_FORMAT_SANYO_LD_ADPCM = static_cast<int16_t>(0x125),
__E_WAVE_FORMAT_SIPROLAB_ACEPLNET = static_cast<int16_t>(0x130),
__E_WAVE_FORMAT_SIPROLAB_ACELP4800 = static_cast<int16_t>(0x131),
__E_WAVE_FORMAT_SIPROLAB_ACELP8V3 = static_cast<int16_t>(0x132),
__E_WAVE_FORMAT_SIPROLAB_G729 = static_cast<int16_t>(0x133),
__E_WAVE_FORMAT_SIPROLAB_G729A = static_cast<int16_t>(0x134),
__E_WAVE_FORMAT_SIPROLAB_KELVIN = static_cast<int16_t>(0x135),
__E_WAVE_FORMAT_G726ADPCM = static_cast<int16_t>(0x140),
__E_WAVE_FORMAT_QUALCOMM_PUREVOICE = static_cast<int16_t>(0x150),
__E_WAVE_FORMAT_QUALCOMM_HALFRATE = static_cast<int16_t>(0x151),
__E_WAVE_FORMAT_TUBGSM = static_cast<int16_t>(0x155),
__E_WAVE_FORMAT_MSAUDIO1 = static_cast<int16_t>(0x160),
__E_WindowsMediaAudio = static_cast<int16_t>(0x161),
__E_WindowsMediaAudioProfessional = static_cast<int16_t>(0x162),
__E_WindowsMediaAudioLosseless = static_cast<int16_t>(0x163),
__E_WindowsMediaAudioSpdif = static_cast<int16_t>(0x164),
__E_WAVE_FORMAT_UNISYS_NAP_ADPCM = static_cast<int16_t>(0x170),
__E_WAVE_FORMAT_UNISYS_NAP_ULAW = static_cast<int16_t>(0x171),
__E_WAVE_FORMAT_UNISYS_NAP_ALAW = static_cast<int16_t>(0x172),
__E_WAVE_FORMAT_UNISYS_NAP_16K = static_cast<int16_t>(0x173),
__E_WAVE_FORMAT_CREATIVE_ADPCM = static_cast<int16_t>(0x200),
__E_WAVE_FORMAT_CREATIVE_FASTSPEECH8 = static_cast<int16_t>(0x202),
__E_WAVE_FORMAT_CREATIVE_FASTSPEECH10 = static_cast<int16_t>(0x203),
__E_WAVE_FORMAT_UHER_ADPCM = static_cast<int16_t>(0x210),
__E_WAVE_FORMAT_QUARTERDECK = static_cast<int16_t>(0x220),
__E_WAVE_FORMAT_ILINK_VC = static_cast<int16_t>(0x230),
__E_WAVE_FORMAT_RAW_SPORT = static_cast<int16_t>(0x240),
__E_WAVE_FORMAT_ESST_AC3 = static_cast<int16_t>(0x241),
__E_WAVE_FORMAT_IPI_HSX = static_cast<int16_t>(0x250),
__E_WAVE_FORMAT_IPI_RPELP = static_cast<int16_t>(0x251),
__E_WAVE_FORMAT_CS2 = static_cast<int16_t>(0x260),
__E_WAVE_FORMAT_SONY_SCX = static_cast<int16_t>(0x270),
__E_WAVE_FORMAT_FM_TOWNS_SND = static_cast<int16_t>(0x300),
__E_WAVE_FORMAT_BTV_DIGITAL = static_cast<int16_t>(0x400),
__E_WAVE_FORMAT_QDESIGN_MUSIC = static_cast<int16_t>(0x450),
__E_WAVE_FORMAT_VME_VMPCM = static_cast<int16_t>(0x680),
__E_WAVE_FORMAT_TPC = static_cast<int16_t>(0x681),
__E_WAVE_FORMAT_OLIGSM = static_cast<int16_t>(0x1000),
__E_WAVE_FORMAT_OLIADPCM = static_cast<int16_t>(0x1001),
__E_WAVE_FORMAT_OLICELP = static_cast<int16_t>(0x1002),
__E_WAVE_FORMAT_OLISBC = static_cast<int16_t>(0x1003),
__E_WAVE_FORMAT_OLIOPR = static_cast<int16_t>(0x1004),
__E_WAVE_FORMAT_LH_CODEC = static_cast<int16_t>(0x1100),
__E_WAVE_FORMAT_NORRIS = static_cast<int16_t>(0x1400),
__E_WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS = static_cast<int16_t>(0x1500),
__E_MPEG_ADTS_AAC = static_cast<int16_t>(0x1600),
__E_MPEG_RAW_AAC = static_cast<int16_t>(0x1601),
__E_MPEG_LOAS = static_cast<int16_t>(0x1602),
__E_NOKIA_MPEG_ADTS_AAC = static_cast<int16_t>(0x1608),
__E_NOKIA_MPEG_RAW_AAC = static_cast<int16_t>(0x1609),
__E_VODAFONE_MPEG_ADTS_AAC = static_cast<int16_t>(0x160a),
__E_VODAFONE_MPEG_RAW_AAC = static_cast<int16_t>(0x160b),
__E_MPEG_HEAAC = static_cast<int16_t>(0x1610),
__E_WAVE_FORMAT_DVM = static_cast<int16_t>(0x2000),
__E_Vorbis1 = static_cast<int16_t>(0x674f),
__E_Vorbis2 = static_cast<int16_t>(0x6750),
__E_Vorbis3 = static_cast<int16_t>(0x6751),
__E_Vorbis1P = static_cast<int16_t>(0x676f),
__E_Vorbis2P = static_cast<int16_t>(0x6770),
__E_Vorbis3P = static_cast<int16_t>(0x6771),
__E_WAVE_FORMAT_RAW_AAC1 = static_cast<int16_t>(0xff),
__E_WAVE_FORMAT_WMAVOICE9 = static_cast<int16_t>(0xa),
__E_Extensible = static_cast<int16_t>(0xfffe),
__E_WAVE_FORMAT_DEVELOPMENT = static_cast<int16_t>(0xffff),
__E_WAVE_FORMAT_FLAC = static_cast<int16_t>(0xf1ac),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioEncoding_Unwrapped () const noexcept {
return static_cast<__AudioEncoding_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioEncoding() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioEncoding(int16_t  value__) noexcept;

/// @brief Field ALaw value: I16(6)
static ::CSCore::AudioEncoding const ALaw;

/// @brief Field Acelp value: I16(164)
static ::CSCore::AudioEncoding const Acelp;

/// @brief Field Adpcm value: I16(2)
static ::CSCore::AudioEncoding const Adpcm;

/// @brief Field AntexAdpcme value: I16(51)
static ::CSCore::AudioEncoding const AntexAdpcme;

/// @brief Field Aptx value: I16(37)
static ::CSCore::AudioEncoding const Aptx;

/// @brief Field AudioFileAf10 value: I16(38)
static ::CSCore::AudioEncoding const AudioFileAf10;

/// @brief Field AudioFileAf36 value: I16(36)
static ::CSCore::AudioEncoding const AudioFileAf36;

/// @brief Field CUCodec value: I16(25)
static ::CSCore::AudioEncoding const CUCodec;

/// @brief Field ControlResCr10 value: I16(55)
static ::CSCore::AudioEncoding const ControlResCr10;

/// @brief Field ControlResVqlpc value: I16(52)
static ::CSCore::AudioEncoding const ControlResVqlpc;

/// @brief Field DialogicOkiAdpcm value: I16(23)
static ::CSCore::AudioEncoding const DialogicOkiAdpcm;

/// @brief Field DigiAdpcm value: I16(54)
static ::CSCore::AudioEncoding const DigiAdpcm;

/// @brief Field DigiFix value: I16(22)
static ::CSCore::AudioEncoding const DigiFix;

/// @brief Field DigiReal value: I16(53)
static ::CSCore::AudioEncoding const DigiReal;

/// @brief Field DigiStd value: I16(21)
static ::CSCore::AudioEncoding const DigiStd;

/// @brief Field DolbyAc2 value: I16(48)
static ::CSCore::AudioEncoding const DolbyAc2;

/// @brief Field Drm value: I16(9)
static ::CSCore::AudioEncoding const Drm;

/// @brief Field DspGroupTrueSpeech value: I16(34)
static ::CSCore::AudioEncoding const DspGroupTrueSpeech;

/// @brief Field Dts value: I16(8)
static ::CSCore::AudioEncoding const Dts;

/// @brief Field DviAdpcm value: I16(17)
static ::CSCore::AudioEncoding const DviAdpcm;

/// @brief Field EchoSpeechCorporation1 value: I16(35)
static ::CSCore::AudioEncoding const EchoSpeechCorporation1;

/// @brief Field Extensible value: I16(-2)
static ::CSCore::AudioEncoding const Extensible;

/// @brief Field G723 value: I16(163)
static ::CSCore::AudioEncoding const G723;

/// @brief Field G723Adpcm value: I16(20)
static ::CSCore::AudioEncoding const G723Adpcm;

/// @brief Field G729 value: I16(162)
static ::CSCore::AudioEncoding const G729;

/// @brief Field Gsm value: I16(161)
static ::CSCore::AudioEncoding const Gsm;

/// @brief Field Gsm610 value: I16(49)
static ::CSCore::AudioEncoding const Gsm610;

/// @brief Field IbmCvsd value: I16(5)
static ::CSCore::AudioEncoding const IbmCvsd;

/// @brief Field IeeeFloat value: I16(3)
static ::CSCore::AudioEncoding const IeeeFloat;

/// @brief Field ImaAdpcm value: I16(17)
static ::CSCore::AudioEncoding const ImaAdpcm;

/// @brief Field Lrc value: I16(40)
static ::CSCore::AudioEncoding const Lrc;

/// @brief Field MPEG_ADTS_AAC value: I16(5632)
static ::CSCore::AudioEncoding const MPEG_ADTS_AAC;

/// @brief Field MPEG_HEAAC value: I16(5648)
static ::CSCore::AudioEncoding const MPEG_HEAAC;

/// @brief Field MPEG_LOAS value: I16(5634)
static ::CSCore::AudioEncoding const MPEG_LOAS;

/// @brief Field MPEG_RAW_AAC value: I16(5633)
static ::CSCore::AudioEncoding const MPEG_RAW_AAC;

/// @brief Field MediaVisionAdpcm value: I16(24)
static ::CSCore::AudioEncoding const MediaVisionAdpcm;

/// @brief Field MediaspaceAdpcm value: I16(18)
static ::CSCore::AudioEncoding const MediaspaceAdpcm;

/// @brief Field Mpeg value: I16(80)
static ::CSCore::AudioEncoding const Mpeg;

/// @brief Field MpegLayer3 value: I16(85)
static ::CSCore::AudioEncoding const MpegLayer3;

/// @brief Field MsnAudio value: I16(50)
static ::CSCore::AudioEncoding const MsnAudio;

/// @brief Field MuLaw value: I16(7)
static ::CSCore::AudioEncoding const MuLaw;

/// @brief Field NOKIA_MPEG_ADTS_AAC value: I16(5640)
static ::CSCore::AudioEncoding const NOKIA_MPEG_ADTS_AAC;

/// @brief Field NOKIA_MPEG_RAW_AAC value: I16(5641)
static ::CSCore::AudioEncoding const NOKIA_MPEG_RAW_AAC;

/// @brief Field OkiAdpcm value: I16(16)
static ::CSCore::AudioEncoding const OkiAdpcm;

/// @brief Field Pcm value: I16(1)
static ::CSCore::AudioEncoding const Pcm;

/// @brief Field Prosody1612 value: I16(39)
static ::CSCore::AudioEncoding const Prosody1612;

/// @brief Field RawAac value: I16(255)
static ::CSCore::AudioEncoding const RawAac;

/// @brief Field SierraAdpcm value: I16(19)
static ::CSCore::AudioEncoding const SierraAdpcm;

/// @brief Field SonarC value: I16(33)
static ::CSCore::AudioEncoding const SonarC;

/// @brief Field Unknown value: I16(0)
static ::CSCore::AudioEncoding const Unknown;

/// @brief Field VODAFONE_MPEG_ADTS_AAC value: I16(5642)
static ::CSCore::AudioEncoding const VODAFONE_MPEG_ADTS_AAC;

/// @brief Field VODAFONE_MPEG_RAW_AAC value: I16(5643)
static ::CSCore::AudioEncoding const VODAFONE_MPEG_RAW_AAC;

/// @brief Field Vorbis1 value: I16(26447)
static ::CSCore::AudioEncoding const Vorbis1;

/// @brief Field Vorbis1P value: I16(26479)
static ::CSCore::AudioEncoding const Vorbis1P;

/// @brief Field Vorbis2 value: I16(26448)
static ::CSCore::AudioEncoding const Vorbis2;

/// @brief Field Vorbis2P value: I16(26480)
static ::CSCore::AudioEncoding const Vorbis2P;

/// @brief Field Vorbis3 value: I16(26449)
static ::CSCore::AudioEncoding const Vorbis3;

/// @brief Field Vorbis3P value: I16(26481)
static ::CSCore::AudioEncoding const Vorbis3P;

/// @brief Field Vselp value: I16(4)
static ::CSCore::AudioEncoding const Vselp;

/// @brief Field WAVE_FORMAT_BTV_DIGITAL value: I16(1024)
static ::CSCore::AudioEncoding const WAVE_FORMAT_BTV_DIGITAL;

/// @brief Field WAVE_FORMAT_CANOPUS_ATRAC value: I16(99)
static ::CSCore::AudioEncoding const WAVE_FORMAT_CANOPUS_ATRAC;

/// @brief Field WAVE_FORMAT_CIRRUS value: I16(96)
static ::CSCore::AudioEncoding const WAVE_FORMAT_CIRRUS;

/// @brief Field WAVE_FORMAT_CREATIVE_ADPCM value: I16(512)
static ::CSCore::AudioEncoding const WAVE_FORMAT_CREATIVE_ADPCM;

/// @brief Field WAVE_FORMAT_CREATIVE_FASTSPEECH10 value: I16(515)
static ::CSCore::AudioEncoding const WAVE_FORMAT_CREATIVE_FASTSPEECH10;

/// @brief Field WAVE_FORMAT_CREATIVE_FASTSPEECH8 value: I16(514)
static ::CSCore::AudioEncoding const WAVE_FORMAT_CREATIVE_FASTSPEECH8;

/// @brief Field WAVE_FORMAT_CS2 value: I16(608)
static ::CSCore::AudioEncoding const WAVE_FORMAT_CS2;

/// @brief Field WAVE_FORMAT_CS_IMAADPCM value: I16(57)
static ::CSCore::AudioEncoding const WAVE_FORMAT_CS_IMAADPCM;

/// @brief Field WAVE_FORMAT_DEVELOPMENT value: I16(-1)
static ::CSCore::AudioEncoding const WAVE_FORMAT_DEVELOPMENT;

/// @brief Field WAVE_FORMAT_DF_G726 value: I16(133)
static ::CSCore::AudioEncoding const WAVE_FORMAT_DF_G726;

/// @brief Field WAVE_FORMAT_DF_GSM610 value: I16(134)
static ::CSCore::AudioEncoding const WAVE_FORMAT_DF_GSM610;

/// @brief Field WAVE_FORMAT_DIGITAL_G723 value: I16(291)
static ::CSCore::AudioEncoding const WAVE_FORMAT_DIGITAL_G723;

/// @brief Field WAVE_FORMAT_DOLBY_AC3_SPDIF value: I16(146)
static ::CSCore::AudioEncoding const WAVE_FORMAT_DOLBY_AC3_SPDIF;

/// @brief Field WAVE_FORMAT_DSAT_DISPLAY value: I16(103)
static ::CSCore::AudioEncoding const WAVE_FORMAT_DSAT_DISPLAY;

/// @brief Field WAVE_FORMAT_DVM value: I16(8192)
static ::CSCore::AudioEncoding const WAVE_FORMAT_DVM;

/// @brief Field WAVE_FORMAT_ECHOSC3 value: I16(58)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ECHOSC3;

/// @brief Field WAVE_FORMAT_ESPCM value: I16(97)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ESPCM;

/// @brief Field WAVE_FORMAT_ESST_AC3 value: I16(577)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ESST_AC3;

/// @brief Field WAVE_FORMAT_FLAC value: I16(-3668)
static ::CSCore::AudioEncoding const WAVE_FORMAT_FLAC;

/// @brief Field WAVE_FORMAT_FM_TOWNS_SND value: I16(768)
static ::CSCore::AudioEncoding const WAVE_FORMAT_FM_TOWNS_SND;

/// @brief Field WAVE_FORMAT_G721_ADPCM value: I16(64)
static ::CSCore::AudioEncoding const WAVE_FORMAT_G721_ADPCM;

/// @brief Field WAVE_FORMAT_G722_ADPCM value: I16(101)
static ::CSCore::AudioEncoding const WAVE_FORMAT_G722_ADPCM;

/// @brief Field WAVE_FORMAT_G726ADPCM value: I16(320)
static ::CSCore::AudioEncoding const WAVE_FORMAT_G726ADPCM;

/// @brief Field WAVE_FORMAT_G726_ADPCM value: I16(100)
static ::CSCore::AudioEncoding const WAVE_FORMAT_G726_ADPCM;

/// @brief Field WAVE_FORMAT_G728_CELP value: I16(65)
static ::CSCore::AudioEncoding const WAVE_FORMAT_G728_CELP;

/// @brief Field WAVE_FORMAT_G729A value: I16(131)
static ::CSCore::AudioEncoding const WAVE_FORMAT_G729A;

/// @brief Field WAVE_FORMAT_ILINK_VC value: I16(560)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ILINK_VC;

/// @brief Field WAVE_FORMAT_IPI_HSX value: I16(592)
static ::CSCore::AudioEncoding const WAVE_FORMAT_IPI_HSX;

/// @brief Field WAVE_FORMAT_IPI_RPELP value: I16(593)
static ::CSCore::AudioEncoding const WAVE_FORMAT_IPI_RPELP;

/// @brief Field WAVE_FORMAT_IRAT value: I16(257)
static ::CSCore::AudioEncoding const WAVE_FORMAT_IRAT;

/// @brief Field WAVE_FORMAT_ISIAUDIO value: I16(136)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ISIAUDIO;

/// @brief Field WAVE_FORMAT_LH_CODEC value: I16(4352)
static ::CSCore::AudioEncoding const WAVE_FORMAT_LH_CODEC;

/// @brief Field WAVE_FORMAT_LUCENT_G723 value: I16(89)
static ::CSCore::AudioEncoding const WAVE_FORMAT_LUCENT_G723;

/// @brief Field WAVE_FORMAT_MALDEN_PHONYTALK value: I16(160)
static ::CSCore::AudioEncoding const WAVE_FORMAT_MALDEN_PHONYTALK;

/// @brief Field WAVE_FORMAT_MEDIASONIC_G723 value: I16(147)
static ::CSCore::AudioEncoding const WAVE_FORMAT_MEDIASONIC_G723;

/// @brief Field WAVE_FORMAT_MSAUDIO1 value: I16(352)
static ::CSCore::AudioEncoding const WAVE_FORMAT_MSAUDIO1;

/// @brief Field WAVE_FORMAT_MSG723 value: I16(66)
static ::CSCore::AudioEncoding const WAVE_FORMAT_MSG723;

/// @brief Field WAVE_FORMAT_MSRT24 value: I16(130)
static ::CSCore::AudioEncoding const WAVE_FORMAT_MSRT24;

/// @brief Field WAVE_FORMAT_MVI_MVI2 value: I16(132)
static ::CSCore::AudioEncoding const WAVE_FORMAT_MVI_MVI2;

/// @brief Field WAVE_FORMAT_NMS_VBXADPCM value: I16(56)
static ::CSCore::AudioEncoding const WAVE_FORMAT_NMS_VBXADPCM;

/// @brief Field WAVE_FORMAT_NORRIS value: I16(5120)
static ::CSCore::AudioEncoding const WAVE_FORMAT_NORRIS;

/// @brief Field WAVE_FORMAT_OLIADPCM value: I16(4097)
static ::CSCore::AudioEncoding const WAVE_FORMAT_OLIADPCM;

/// @brief Field WAVE_FORMAT_OLICELP value: I16(4098)
static ::CSCore::AudioEncoding const WAVE_FORMAT_OLICELP;

/// @brief Field WAVE_FORMAT_OLIGSM value: I16(4096)
static ::CSCore::AudioEncoding const WAVE_FORMAT_OLIGSM;

/// @brief Field WAVE_FORMAT_OLIOPR value: I16(4100)
static ::CSCore::AudioEncoding const WAVE_FORMAT_OLIOPR;

/// @brief Field WAVE_FORMAT_OLISBC value: I16(4099)
static ::CSCore::AudioEncoding const WAVE_FORMAT_OLISBC;

/// @brief Field WAVE_FORMAT_ONLIVE value: I16(137)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ONLIVE;

/// @brief Field WAVE_FORMAT_PAC value: I16(83)
static ::CSCore::AudioEncoding const WAVE_FORMAT_PAC;

/// @brief Field WAVE_FORMAT_PACKED value: I16(153)
static ::CSCore::AudioEncoding const WAVE_FORMAT_PACKED;

/// @brief Field WAVE_FORMAT_PHILIPS_LPCBB value: I16(152)
static ::CSCore::AudioEncoding const WAVE_FORMAT_PHILIPS_LPCBB;

/// @brief Field WAVE_FORMAT_PROSODY_8KBPS value: I16(148)
static ::CSCore::AudioEncoding const WAVE_FORMAT_PROSODY_8KBPS;

/// @brief Field WAVE_FORMAT_QDESIGN_MUSIC value: I16(1104)
static ::CSCore::AudioEncoding const WAVE_FORMAT_QDESIGN_MUSIC;

/// @brief Field WAVE_FORMAT_QUALCOMM_HALFRATE value: I16(337)
static ::CSCore::AudioEncoding const WAVE_FORMAT_QUALCOMM_HALFRATE;

/// @brief Field WAVE_FORMAT_QUALCOMM_PUREVOICE value: I16(336)
static ::CSCore::AudioEncoding const WAVE_FORMAT_QUALCOMM_PUREVOICE;

/// @brief Field WAVE_FORMAT_QUARTERDECK value: I16(544)
static ::CSCore::AudioEncoding const WAVE_FORMAT_QUARTERDECK;

/// @brief Field WAVE_FORMAT_RAW_AAC1 value: I16(255)
static ::CSCore::AudioEncoding const WAVE_FORMAT_RAW_AAC1;

/// @brief Field WAVE_FORMAT_RAW_SPORT value: I16(576)
static ::CSCore::AudioEncoding const WAVE_FORMAT_RAW_SPORT;

/// @brief Field WAVE_FORMAT_RHETOREX_ADPCM value: I16(256)
static ::CSCore::AudioEncoding const WAVE_FORMAT_RHETOREX_ADPCM;

/// @brief Field WAVE_FORMAT_ROCKWELL_ADPCM value: I16(59)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ROCKWELL_ADPCM;

/// @brief Field WAVE_FORMAT_ROCKWELL_DIGITALK value: I16(60)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ROCKWELL_DIGITALK;

/// @brief Field WAVE_FORMAT_RT24 value: I16(82)
static ::CSCore::AudioEncoding const WAVE_FORMAT_RT24;

/// @brief Field WAVE_FORMAT_SANYO_LD_ADPCM value: I16(293)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SANYO_LD_ADPCM;

/// @brief Field WAVE_FORMAT_SBC24 value: I16(145)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SBC24;

/// @brief Field WAVE_FORMAT_SIPROLAB_ACELP4800 value: I16(305)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SIPROLAB_ACELP4800;

/// @brief Field WAVE_FORMAT_SIPROLAB_ACELP8V3 value: I16(306)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SIPROLAB_ACELP8V3;

/// @brief Field WAVE_FORMAT_SIPROLAB_ACEPLNET value: I16(304)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SIPROLAB_ACEPLNET;

/// @brief Field WAVE_FORMAT_SIPROLAB_G729 value: I16(307)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SIPROLAB_G729;

/// @brief Field WAVE_FORMAT_SIPROLAB_G729A value: I16(308)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SIPROLAB_G729A;

/// @brief Field WAVE_FORMAT_SIPROLAB_KELVIN value: I16(309)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SIPROLAB_KELVIN;

/// @brief Field WAVE_FORMAT_SOFTSOUND value: I16(128)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SOFTSOUND;

/// @brief Field WAVE_FORMAT_SONY_SCX value: I16(624)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SONY_SCX;

/// @brief Field WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS value: I16(5376)
static ::CSCore::AudioEncoding const WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS;

/// @brief Field WAVE_FORMAT_TPC value: I16(1665)
static ::CSCore::AudioEncoding const WAVE_FORMAT_TPC;

/// @brief Field WAVE_FORMAT_TUBGSM value: I16(341)
static ::CSCore::AudioEncoding const WAVE_FORMAT_TUBGSM;

/// @brief Field WAVE_FORMAT_UHER_ADPCM value: I16(528)
static ::CSCore::AudioEncoding const WAVE_FORMAT_UHER_ADPCM;

/// @brief Field WAVE_FORMAT_UNISYS_NAP_16K value: I16(371)
static ::CSCore::AudioEncoding const WAVE_FORMAT_UNISYS_NAP_16K;

/// @brief Field WAVE_FORMAT_UNISYS_NAP_ADPCM value: I16(368)
static ::CSCore::AudioEncoding const WAVE_FORMAT_UNISYS_NAP_ADPCM;

/// @brief Field WAVE_FORMAT_UNISYS_NAP_ALAW value: I16(370)
static ::CSCore::AudioEncoding const WAVE_FORMAT_UNISYS_NAP_ALAW;

/// @brief Field WAVE_FORMAT_UNISYS_NAP_ULAW value: I16(369)
static ::CSCore::AudioEncoding const WAVE_FORMAT_UNISYS_NAP_ULAW;

/// @brief Field WAVE_FORMAT_VIVO_G723 value: I16(273)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VIVO_G723;

/// @brief Field WAVE_FORMAT_VIVO_SIREN value: I16(274)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VIVO_SIREN;

/// @brief Field WAVE_FORMAT_VME_VMPCM value: I16(1664)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VME_VMPCM;

/// @brief Field WAVE_FORMAT_VOXWARE value: I16(98)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE;

/// @brief Field WAVE_FORMAT_VOXWARE_AC10 value: I16(113)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_AC10;

/// @brief Field WAVE_FORMAT_VOXWARE_AC16 value: I16(114)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_AC16;

/// @brief Field WAVE_FORMAT_VOXWARE_AC20 value: I16(115)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_AC20;

/// @brief Field WAVE_FORMAT_VOXWARE_AC8 value: I16(112)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_AC8;

/// @brief Field WAVE_FORMAT_VOXWARE_BYTE_ALIGNED value: I16(105)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_BYTE_ALIGNED;

/// @brief Field WAVE_FORMAT_VOXWARE_RT24 value: I16(116)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_RT24;

/// @brief Field WAVE_FORMAT_VOXWARE_RT29 value: I16(117)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_RT29;

/// @brief Field WAVE_FORMAT_VOXWARE_RT29HW value: I16(118)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_RT29HW;

/// @brief Field WAVE_FORMAT_VOXWARE_TQ40 value: I16(121)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_TQ40;

/// @brief Field WAVE_FORMAT_VOXWARE_TQ60 value: I16(129)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_TQ60;

/// @brief Field WAVE_FORMAT_VOXWARE_VR12 value: I16(119)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_VR12;

/// @brief Field WAVE_FORMAT_VOXWARE_VR18 value: I16(120)
static ::CSCore::AudioEncoding const WAVE_FORMAT_VOXWARE_VR18;

/// @brief Field WAVE_FORMAT_WMAVOICE9 value: I16(10)
static ::CSCore::AudioEncoding const WAVE_FORMAT_WMAVOICE9;

/// @brief Field WAVE_FORMAT_XEBEC value: I16(61)
static ::CSCore::AudioEncoding const WAVE_FORMAT_XEBEC;

/// @brief Field WAVE_FORMAT_ZYXEL_ADPCM value: I16(151)
static ::CSCore::AudioEncoding const WAVE_FORMAT_ZYXEL_ADPCM;

/// @brief Field WindowsMediaAudio value: I16(353)
static ::CSCore::AudioEncoding const WindowsMediaAudio;

/// @brief Field WindowsMediaAudioLosseless value: I16(355)
static ::CSCore::AudioEncoding const WindowsMediaAudioLosseless;

/// @brief Field WindowsMediaAudioProfessional value: I16(354)
static ::CSCore::AudioEncoding const WindowsMediaAudioProfessional;

/// @brief Field WindowsMediaAudioSpdif value: I16(356)
static ::CSCore::AudioEncoding const WindowsMediaAudioSpdif;

/// @brief Field WmaVoice9 value: I16(10)
static ::CSCore::AudioEncoding const WmaVoice9;

/// @brief Field YamahaAdpcm value: I16(32)
static ::CSCore::AudioEncoding const YamahaAdpcm;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28860};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::CSCore::AudioEncoding, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::CSCore::AudioEncoding) == 0x2, "Size mismatch!");

} // namespace end def CSCore
