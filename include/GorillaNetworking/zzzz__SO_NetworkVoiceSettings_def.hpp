#pragma once
// IWYU pragma private; include "GorillaNetworking/SO_NetworkVoiceSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_InputSourceType_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_MicType_def.hpp"
#include "Photon/Voice/zzzz__OpusCodec_FrameDuration_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SO_NetworkVoiceSettings)
// Forward declare root types
namespace GorillaNetworking {
class SO_NetworkVoiceSettings;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::SO_NetworkVoiceSettings*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::SO_NetworkVoiceSettings*, "GorillaNetworking", "SO_NetworkVoiceSettings");
// [CreateAssetMenu(fileName = "VoiceSettings", menuName = "Gorilla Tag/VoiceSettings")]
// Dependencies ExitGames.Client.Photon.DebugLevel, POpusCodec.Enums.SamplingRate, Photon.Voice.OpusCodec::FrameDuration, Photon.Voice.Unity.Recorder::InputSourceType, Photon.Voice.Unity.Recorder::MicType, UnityEngine.ScriptableObject
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.SO_NetworkVoiceSettings
class CORDL_TYPE SO_NetworkVoiceSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AutoConnectAndJoin, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoConnectAndJoin, put=__cordl_internal_set_AutoConnectAndJoin)) bool  AutoConnectAndJoin;

/// @brief Field AutoLeaveAndDisconnect, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoLeaveAndDisconnect, put=__cordl_internal_set_AutoLeaveAndDisconnect)) bool  AutoLeaveAndDisconnect;

/// @brief Field AutoStart, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoStart, put=__cordl_internal_set_AutoStart)) bool  AutoStart;

/// @brief Field BackgroundTimeout, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_BackgroundTimeout, put=__cordl_internal_set_BackgroundTimeout)) int32_t  BackgroundTimeout;

/// @brief Field Bitrate, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_Bitrate, put=__cordl_internal_set_Bitrate)) int32_t  Bitrate;

/// @brief Field CreateSpeakerIfNotFound, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_CreateSpeakerIfNotFound, put=__cordl_internal_set_CreateSpeakerIfNotFound)) bool  CreateSpeakerIfNotFound;

/// @brief Field DebugEcho, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugEcho, put=__cordl_internal_set_DebugEcho)) bool  DebugEcho;

/// @brief Field Delay, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Delay, put=__cordl_internal_set_Delay)) int32_t  Delay;

/// @brief Field Detect, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_Detect, put=__cordl_internal_set_Detect)) bool  Detect;

/// @brief Field Encrypt, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_Encrypt, put=__cordl_internal_set_Encrypt)) bool  Encrypt;

/// @brief Field FrameDuration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_FrameDuration, put=__cordl_internal_set_FrameDuration)) ::GlobalNamespace::OpusCodec_FrameDuration  FrameDuration;

/// @brief Field GlobalRecordersLogLevel, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_GlobalRecordersLogLevel, put=__cordl_internal_set_GlobalRecordersLogLevel)) ::ExitGames::Client::Photon::DebugLevel  GlobalRecordersLogLevel;

/// @brief Field GlobalSpeakersLogLevel, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_GlobalSpeakersLogLevel, put=__cordl_internal_set_GlobalSpeakersLogLevel)) ::ExitGames::Client::Photon::DebugLevel  GlobalSpeakersLogLevel;

/// @brief Field InputSourceType, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_InputSourceType, put=__cordl_internal_set_InputSourceType)) ::GlobalNamespace::Recorder_InputSourceType  InputSourceType;

/// @brief Field InterestGroup, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_InterestGroup, put=__cordl_internal_set_InterestGroup)) uint8_t  InterestGroup;

/// @brief Field LogLevel, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_LogLevel, put=__cordl_internal_set_LogLevel)) ::ExitGames::Client::Photon::DebugLevel  LogLevel;

/// @brief Field MicrophoneType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_MicrophoneType, put=__cordl_internal_set_MicrophoneType)) ::GlobalNamespace::Recorder_MicType  MicrophoneType;

/// @brief Field RecordOnlyWhenEnabled, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_RecordOnlyWhenEnabled, put=__cordl_internal_set_RecordOnlyWhenEnabled)) bool  RecordOnlyWhenEnabled;

/// @brief Field RecordOnlyWhenJoined, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_RecordOnlyWhenJoined, put=__cordl_internal_set_RecordOnlyWhenJoined)) bool  RecordOnlyWhenJoined;

/// @brief Field ReliableMode, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_ReliableMode, put=__cordl_internal_set_ReliableMode)) bool  ReliableMode;

/// @brief Field SamplingRate, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SamplingRate, put=__cordl_internal_set_SamplingRate)) ::POpusCodec::Enums::SamplingRate  SamplingRate;

/// @brief Field StopRecordingWhenPaused, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_StopRecordingWhenPaused, put=__cordl_internal_set_StopRecordingWhenPaused)) bool  StopRecordingWhenPaused;

/// @brief Field SubsBitrate, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_SubsBitrate, put=__cordl_internal_set_SubsBitrate)) int32_t  SubsBitrate;

/// @brief Field SubsSamplingRate, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_SubsSamplingRate, put=__cordl_internal_set_SubsSamplingRate)) ::POpusCodec::Enums::SamplingRate  SubsSamplingRate;

/// @brief Field SupportLogger, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_SupportLogger, put=__cordl_internal_set_SupportLogger)) bool  SupportLogger;

/// @brief Field Threshold, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_Threshold, put=__cordl_internal_set_Threshold)) float_t  Threshold;

/// @brief Field TransmitEnabled, offset 0x2f, size 0x1 
 __declspec(property(get=__cordl_internal_get_TransmitEnabled, put=__cordl_internal_set_TransmitEnabled)) bool  TransmitEnabled;

/// @brief Field UpdateInterval, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateInterval, put=__cordl_internal_set_UpdateInterval)) int32_t  UpdateInterval;

/// @brief Field UseFallback, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseFallback, put=__cordl_internal_set_UseFallback)) bool  UseFallback;

/// @brief Field WorkInOfflineMode, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_WorkInOfflineMode, put=__cordl_internal_set_WorkInOfflineMode)) bool  WorkInOfflineMode;

static inline ::GorillaNetworking::SO_NetworkVoiceSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_AutoConnectAndJoin() const;

constexpr bool& __cordl_internal_get_AutoConnectAndJoin() ;

constexpr bool const& __cordl_internal_get_AutoLeaveAndDisconnect() const;

constexpr bool& __cordl_internal_get_AutoLeaveAndDisconnect() ;

constexpr bool const& __cordl_internal_get_AutoStart() const;

constexpr bool& __cordl_internal_get_AutoStart() ;

constexpr int32_t const& __cordl_internal_get_BackgroundTimeout() const;

constexpr int32_t& __cordl_internal_get_BackgroundTimeout() ;

constexpr int32_t const& __cordl_internal_get_Bitrate() const;

constexpr int32_t& __cordl_internal_get_Bitrate() ;

constexpr bool const& __cordl_internal_get_CreateSpeakerIfNotFound() const;

constexpr bool& __cordl_internal_get_CreateSpeakerIfNotFound() ;

constexpr bool const& __cordl_internal_get_DebugEcho() const;

constexpr bool& __cordl_internal_get_DebugEcho() ;

constexpr int32_t const& __cordl_internal_get_Delay() const;

constexpr int32_t& __cordl_internal_get_Delay() ;

constexpr bool const& __cordl_internal_get_Detect() const;

constexpr bool& __cordl_internal_get_Detect() ;

constexpr bool const& __cordl_internal_get_Encrypt() const;

constexpr bool& __cordl_internal_get_Encrypt() ;

constexpr ::GlobalNamespace::OpusCodec_FrameDuration const& __cordl_internal_get_FrameDuration() const;

constexpr ::GlobalNamespace::OpusCodec_FrameDuration& __cordl_internal_get_FrameDuration() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_GlobalRecordersLogLevel() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_GlobalRecordersLogLevel() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_GlobalSpeakersLogLevel() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_GlobalSpeakersLogLevel() ;

constexpr ::GlobalNamespace::Recorder_InputSourceType const& __cordl_internal_get_InputSourceType() const;

constexpr ::GlobalNamespace::Recorder_InputSourceType& __cordl_internal_get_InputSourceType() ;

constexpr uint8_t const& __cordl_internal_get_InterestGroup() const;

constexpr uint8_t& __cordl_internal_get_InterestGroup() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_LogLevel() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_LogLevel() ;

constexpr ::GlobalNamespace::Recorder_MicType const& __cordl_internal_get_MicrophoneType() const;

constexpr ::GlobalNamespace::Recorder_MicType& __cordl_internal_get_MicrophoneType() ;

constexpr bool const& __cordl_internal_get_RecordOnlyWhenEnabled() const;

constexpr bool& __cordl_internal_get_RecordOnlyWhenEnabled() ;

constexpr bool const& __cordl_internal_get_RecordOnlyWhenJoined() const;

constexpr bool& __cordl_internal_get_RecordOnlyWhenJoined() ;

constexpr bool const& __cordl_internal_get_ReliableMode() const;

constexpr bool& __cordl_internal_get_ReliableMode() ;

constexpr ::POpusCodec::Enums::SamplingRate const& __cordl_internal_get_SamplingRate() const;

constexpr ::POpusCodec::Enums::SamplingRate& __cordl_internal_get_SamplingRate() ;

constexpr bool const& __cordl_internal_get_StopRecordingWhenPaused() const;

constexpr bool& __cordl_internal_get_StopRecordingWhenPaused() ;

constexpr int32_t const& __cordl_internal_get_SubsBitrate() const;

constexpr int32_t& __cordl_internal_get_SubsBitrate() ;

constexpr ::POpusCodec::Enums::SamplingRate const& __cordl_internal_get_SubsSamplingRate() const;

constexpr ::POpusCodec::Enums::SamplingRate& __cordl_internal_get_SubsSamplingRate() ;

constexpr bool const& __cordl_internal_get_SupportLogger() const;

constexpr bool& __cordl_internal_get_SupportLogger() ;

constexpr float_t const& __cordl_internal_get_Threshold() const;

constexpr float_t& __cordl_internal_get_Threshold() ;

constexpr bool const& __cordl_internal_get_TransmitEnabled() const;

constexpr bool& __cordl_internal_get_TransmitEnabled() ;

constexpr int32_t const& __cordl_internal_get_UpdateInterval() const;

constexpr int32_t& __cordl_internal_get_UpdateInterval() ;

constexpr bool const& __cordl_internal_get_UseFallback() const;

constexpr bool& __cordl_internal_get_UseFallback() ;

constexpr bool const& __cordl_internal_get_WorkInOfflineMode() const;

constexpr bool& __cordl_internal_get_WorkInOfflineMode() ;

constexpr void __cordl_internal_set_AutoConnectAndJoin(bool  value) ;

constexpr void __cordl_internal_set_AutoLeaveAndDisconnect(bool  value) ;

constexpr void __cordl_internal_set_AutoStart(bool  value) ;

constexpr void __cordl_internal_set_BackgroundTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_Bitrate(int32_t  value) ;

constexpr void __cordl_internal_set_CreateSpeakerIfNotFound(bool  value) ;

constexpr void __cordl_internal_set_DebugEcho(bool  value) ;

constexpr void __cordl_internal_set_Delay(int32_t  value) ;

constexpr void __cordl_internal_set_Detect(bool  value) ;

constexpr void __cordl_internal_set_Encrypt(bool  value) ;

constexpr void __cordl_internal_set_FrameDuration(::GlobalNamespace::OpusCodec_FrameDuration  value) ;

constexpr void __cordl_internal_set_GlobalRecordersLogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_GlobalSpeakersLogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_InputSourceType(::GlobalNamespace::Recorder_InputSourceType  value) ;

constexpr void __cordl_internal_set_InterestGroup(uint8_t  value) ;

constexpr void __cordl_internal_set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_MicrophoneType(::GlobalNamespace::Recorder_MicType  value) ;

constexpr void __cordl_internal_set_RecordOnlyWhenEnabled(bool  value) ;

constexpr void __cordl_internal_set_RecordOnlyWhenJoined(bool  value) ;

constexpr void __cordl_internal_set_ReliableMode(bool  value) ;

constexpr void __cordl_internal_set_SamplingRate(::POpusCodec::Enums::SamplingRate  value) ;

constexpr void __cordl_internal_set_StopRecordingWhenPaused(bool  value) ;

constexpr void __cordl_internal_set_SubsBitrate(int32_t  value) ;

constexpr void __cordl_internal_set_SubsSamplingRate(::POpusCodec::Enums::SamplingRate  value) ;

constexpr void __cordl_internal_set_SupportLogger(bool  value) ;

constexpr void __cordl_internal_set_Threshold(float_t  value) ;

constexpr void __cordl_internal_set_TransmitEnabled(bool  value) ;

constexpr void __cordl_internal_set_UpdateInterval(int32_t  value) ;

constexpr void __cordl_internal_set_UseFallback(bool  value) ;

constexpr void __cordl_internal_set_WorkInOfflineMode(bool  value) ;

/// @brief Method .ctor, addr 0x5c4f8cc, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SO_NetworkVoiceSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SO_NetworkVoiceSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SO_NetworkVoiceSettings(SO_NetworkVoiceSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SO_NetworkVoiceSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SO_NetworkVoiceSettings(SO_NetworkVoiceSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4265};

/// [Header("Voice settings")]
/// @brief Field AutoConnectAndJoin, offset: 0x18, size: 0x1, def value: None
 bool  ___AutoConnectAndJoin;

/// @brief Field AutoLeaveAndDisconnect, offset: 0x19, size: 0x1, def value: None
 bool  ___AutoLeaveAndDisconnect;

/// @brief Field WorkInOfflineMode, offset: 0x1a, size: 0x1, def value: None
 bool  ___WorkInOfflineMode;

/// @brief Field LogLevel, offset: 0x1b, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___LogLevel;

/// @brief Field GlobalRecordersLogLevel, offset: 0x1c, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___GlobalRecordersLogLevel;

/// @brief Field GlobalSpeakersLogLevel, offset: 0x1d, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___GlobalSpeakersLogLevel;

/// @brief Field CreateSpeakerIfNotFound, offset: 0x1e, size: 0x1, def value: None
 bool  ___CreateSpeakerIfNotFound;

/// @brief Field UpdateInterval, offset: 0x20, size: 0x4, def value: None
 int32_t  ___UpdateInterval;

/// @brief Field SupportLogger, offset: 0x24, size: 0x1, def value: None
 bool  ___SupportLogger;

/// @brief Field BackgroundTimeout, offset: 0x28, size: 0x4, def value: None
 int32_t  ___BackgroundTimeout;

/// [Header("Recorder Settings")]
/// @brief Field RecordOnlyWhenEnabled, offset: 0x2c, size: 0x1, def value: None
 bool  ___RecordOnlyWhenEnabled;

/// @brief Field RecordOnlyWhenJoined, offset: 0x2d, size: 0x1, def value: None
 bool  ___RecordOnlyWhenJoined;

/// @brief Field StopRecordingWhenPaused, offset: 0x2e, size: 0x1, def value: None
 bool  ___StopRecordingWhenPaused;

/// @brief Field TransmitEnabled, offset: 0x2f, size: 0x1, def value: None
 bool  ___TransmitEnabled;

/// @brief Field AutoStart, offset: 0x30, size: 0x1, def value: None
 bool  ___AutoStart;

/// @brief Field Encrypt, offset: 0x31, size: 0x1, def value: None
 bool  ___Encrypt;

/// @brief Field InterestGroup, offset: 0x32, size: 0x1, def value: None
 uint8_t  ___InterestGroup;

/// @brief Field DebugEcho, offset: 0x33, size: 0x1, def value: None
 bool  ___DebugEcho;

/// @brief Field ReliableMode, offset: 0x34, size: 0x1, def value: None
 bool  ___ReliableMode;

/// [Header("Recorder Codec Parameters")]
/// @brief Field FrameDuration, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::OpusCodec_FrameDuration  ___FrameDuration;

/// @brief Field SamplingRate, offset: 0x3c, size: 0x4, def value: None
 ::POpusCodec::Enums::SamplingRate  ___SamplingRate;

/// [Range(6000, 510000)]
/// @brief Field Bitrate, offset: 0x40, size: 0x4, def value: None
 int32_t  ___Bitrate;

/// [Space]
/// @brief Field SubsSamplingRate, offset: 0x44, size: 0x4, def value: None
 ::POpusCodec::Enums::SamplingRate  ___SubsSamplingRate;

/// [Range(6000, 510000)]
/// @brief Field SubsBitrate, offset: 0x48, size: 0x4, def value: None
 int32_t  ___SubsBitrate;

/// [Header("Recorder Audio Source Settings")]
/// @brief Field InputSourceType, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::Recorder_InputSourceType  ___InputSourceType;

/// @brief Field MicrophoneType, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::Recorder_MicType  ___MicrophoneType;

/// @brief Field UseFallback, offset: 0x54, size: 0x1, def value: None
 bool  ___UseFallback;

/// @brief Field Detect, offset: 0x55, size: 0x1, def value: None
 bool  ___Detect;

/// [Range(0, 1)]
/// @brief Field Threshold, offset: 0x58, size: 0x4, def value: None
 float_t  ___Threshold;

/// @brief Field Delay, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___Delay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___AutoConnectAndJoin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___AutoLeaveAndDisconnect) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___WorkInOfflineMode) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___LogLevel) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___GlobalRecordersLogLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___GlobalSpeakersLogLevel) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___CreateSpeakerIfNotFound) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___UpdateInterval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___SupportLogger) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___BackgroundTimeout) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___RecordOnlyWhenEnabled) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___RecordOnlyWhenJoined) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___StopRecordingWhenPaused) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___TransmitEnabled) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___AutoStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___Encrypt) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___InterestGroup) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___DebugEcho) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___ReliableMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___FrameDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___SamplingRate) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___Bitrate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___SubsSamplingRate) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___SubsBitrate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___InputSourceType) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___MicrophoneType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___UseFallback) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___Detect) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___Threshold) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SO_NetworkVoiceSettings, ___Delay) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::SO_NetworkVoiceSettings) == 0x60, "Size mismatch!");

} // namespace end def GorillaNetworking
