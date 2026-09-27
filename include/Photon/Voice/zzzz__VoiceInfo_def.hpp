#pragma once
// IWYU pragma private; include "Photon/Voice/VoiceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__Codec_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceInfo)
namespace GlobalNamespace {
struct OpusCodec_FrameDuration;
}
namespace POpusCodec::Enums {
struct SamplingRate;
}
namespace Photon::Voice {
struct Codec;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
struct VoiceInfo;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::VoiceInfo);
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceInfo, "Photon.Voice", "VoiceInfo");
// Dependencies Photon.Voice.Codec
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.VoiceInfo
struct CORDL_TYPE VoiceInfo {
public:
// Declarations
 __declspec(property(get=get_Bitrate, put=set_Bitrate)) int32_t  Bitrate;

 __declspec(property(get=get_Channels, put=set_Channels)) int32_t  Channels;

 __declspec(property(get=get_Codec, put=set_Codec)) ::Photon::Voice::Codec  Codec;

 __declspec(property(get=get_FPS, put=set_FPS)) int32_t  FPS;

 __declspec(property(get=get_FrameDurationSamples)) int32_t  FrameDurationSamples;

 __declspec(property(get=get_FrameDurationUs, put=set_FrameDurationUs)) int32_t  FrameDurationUs;

 __declspec(property(get=get_FrameSize)) int32_t  FrameSize;

 __declspec(property(get=get_Height, put=set_Height)) int32_t  Height;

 __declspec(property(get=get_KeyFrameInt, put=set_KeyFrameInt)) int32_t  KeyFrameInt;

 __declspec(property(get=get_SamplingRate, put=set_SamplingRate)) int32_t  SamplingRate;

 __declspec(property(get=get_UserData, put=set_UserData)) ::System::Object*  UserData;

 __declspec(property(get=get_Width, put=set_Width)) int32_t  Width;

/// @brief Method CreateAudio, addr 0xa753f44, size 0x50, virtual false, abstract: false, final false
static inline ::Photon::Voice::VoiceInfo CreateAudio(::Photon::Voice::Codec  codec, int32_t  samplingRate, int32_t  channels, int32_t  frameDurationUs, ::System::Object*  userdata) ;

/// @brief Method CreateAudioOpus, addr 0xa753eec, size 0x58, virtual false, abstract: false, final false
static inline ::Photon::Voice::VoiceInfo CreateAudioOpus(::POpusCodec::Enums::SamplingRate  samplingRate, int32_t  channels, ::GlobalNamespace::OpusCodec_FrameDuration  frameDurationUs, int32_t  bitrate, ::System::Object*  userdata) ;

/// @brief Method ToString, addr 0xa74e2cc, size 0x540, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Bitrate, addr 0xa75400c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Bitrate() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Channels, addr 0xa753fec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Channels() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Codec, addr 0xa753fcc, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::Codec get_Codec() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_FPS, addr 0xa75403c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FPS() ;

/// @brief Method get_FrameDurationSamples, addr 0xa75406c, size 0x30, virtual false, abstract: false, final false
inline int32_t get_FrameDurationSamples() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_FrameDurationUs, addr 0xa753ffc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FrameDurationUs() ;

/// @brief Method get_FrameSize, addr 0xa753f94, size 0x38, virtual false, abstract: false, final false
inline int32_t get_FrameSize() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Height, addr 0xa75402c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Height() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_KeyFrameInt, addr 0xa75404c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_KeyFrameInt() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_SamplingRate, addr 0xa753fdc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SamplingRate() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_UserData, addr 0xa75405c, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_UserData() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Width, addr 0xa75401c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Width() ;

/// [CompilerGenerated]
/// @brief Method set_Bitrate, addr 0xa754014, size 0x8, virtual false, abstract: false, final false
inline void set_Bitrate(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Channels, addr 0xa753ff4, size 0x8, virtual false, abstract: false, final false
inline void set_Channels(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Codec, addr 0xa753fd4, size 0x8, virtual false, abstract: false, final false
inline void set_Codec(::Photon::Voice::Codec  value) ;

/// [CompilerGenerated]
/// @brief Method set_FPS, addr 0xa754044, size 0x8, virtual false, abstract: false, final false
inline void set_FPS(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FrameDurationUs, addr 0xa754004, size 0x8, virtual false, abstract: false, final false
inline void set_FrameDurationUs(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Height, addr 0xa754034, size 0x8, virtual false, abstract: false, final false
inline void set_Height(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_KeyFrameInt, addr 0xa754054, size 0x8, virtual false, abstract: false, final false
inline void set_KeyFrameInt(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SamplingRate, addr 0xa753fe4, size 0x8, virtual false, abstract: false, final false
inline void set_SamplingRate(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_UserData, addr 0xa754064, size 0x8, virtual false, abstract: false, final false
inline void set_UserData(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Width, addr 0xa754024, size 0x8, virtual false, abstract: false, final false
inline void set_Width(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoiceInfo() ;

// Ctor Parameters [CppParam { name: "_Codec_k__BackingField", ty: "::Photon::Voice::Codec", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SamplingRate_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Channels_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FrameDurationUs_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Bitrate_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FPS_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_KeyFrameInt_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UserData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr VoiceInfo(::Photon::Voice::Codec  _Codec_k__BackingField, int32_t  _SamplingRate_k__BackingField, int32_t  _Channels_k__BackingField, int32_t  _FrameDurationUs_k__BackingField, int32_t  _Bitrate_k__BackingField, int32_t  _Width_k__BackingField, int32_t  _Height_k__BackingField, int32_t  _FPS_k__BackingField, int32_t  _KeyFrameInt_k__BackingField, ::System::Object*  _UserData_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [CompilerGenerated]
/// @brief Field <Codec>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Photon::Voice::Codec  _Codec_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SamplingRate>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _SamplingRate_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Channels>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _Channels_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FrameDurationUs>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _FrameDurationUs_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Bitrate>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  _Bitrate_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Width>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  _Width_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Height>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  _Height_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FPS>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  _FPS_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <KeyFrameInt>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  _KeyFrameInt_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UserData>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  _UserData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::VoiceInfo, _Codec_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _SamplingRate_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _Channels_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _FrameDurationUs_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _Bitrate_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _Width_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _Height_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _FPS_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _KeyFrameInt_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::VoiceInfo, _UserData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::VoiceInfo) == 0x30, "Size mismatch!");

} // namespace end def Photon::Voice
