#pragma once
// IWYU pragma private; include "GorillaNetworking/SO_NetworkVoiceSettings.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_impl.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_InputSourceType_impl.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_MicType_impl.hpp"
#include "Photon/Voice/zzzz__OpusCodec_FrameDuration_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaNetworking/zzzz__SO_NetworkVoiceSettings_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::SO_NetworkVoiceSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SO_NetworkVoiceSettings::*)()>(&::GorillaNetworking::SO_NetworkVoiceSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c4f8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SO_NetworkVoiceSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_AutoConnectAndJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoConnectAndJoin;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_AutoConnectAndJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoConnectAndJoin;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_AutoConnectAndJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoConnectAndJoin = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_AutoLeaveAndDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoLeaveAndDisconnect;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_AutoLeaveAndDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoLeaveAndDisconnect;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_AutoLeaveAndDisconnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoLeaveAndDisconnect = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_WorkInOfflineMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkInOfflineMode;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_WorkInOfflineMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkInOfflineMode;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_WorkInOfflineMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorkInOfflineMode = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_LogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_LogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogLevel = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_GlobalRecordersLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalRecordersLogLevel;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_GlobalRecordersLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalRecordersLogLevel;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_GlobalRecordersLogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalRecordersLogLevel = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_GlobalSpeakersLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalSpeakersLogLevel;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_GlobalSpeakersLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalSpeakersLogLevel;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_GlobalSpeakersLogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalSpeakersLogLevel = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_CreateSpeakerIfNotFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateSpeakerIfNotFound;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_CreateSpeakerIfNotFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateSpeakerIfNotFound;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_CreateSpeakerIfNotFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateSpeakerIfNotFound = value;
}
constexpr int32_t& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_UpdateInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateInterval;
}
constexpr int32_t const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_UpdateInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateInterval;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_UpdateInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateInterval = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_SupportLogger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SupportLogger;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_SupportLogger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SupportLogger;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_SupportLogger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SupportLogger = value;
}
constexpr int32_t& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_BackgroundTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackgroundTimeout;
}
constexpr int32_t const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_BackgroundTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackgroundTimeout;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_BackgroundTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BackgroundTimeout = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_RecordOnlyWhenEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordOnlyWhenEnabled;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_RecordOnlyWhenEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordOnlyWhenEnabled;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_RecordOnlyWhenEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordOnlyWhenEnabled = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_RecordOnlyWhenJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordOnlyWhenJoined;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_RecordOnlyWhenJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordOnlyWhenJoined;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_RecordOnlyWhenJoined(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordOnlyWhenJoined = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_StopRecordingWhenPaused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopRecordingWhenPaused;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_StopRecordingWhenPaused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopRecordingWhenPaused;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_StopRecordingWhenPaused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopRecordingWhenPaused = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_TransmitEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransmitEnabled;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_TransmitEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransmitEnabled;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_TransmitEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransmitEnabled = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_AutoStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoStart;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_AutoStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoStart;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_AutoStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoStart = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Encrypt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Encrypt;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Encrypt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Encrypt;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_Encrypt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Encrypt = value;
}
constexpr uint8_t& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_InterestGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterestGroup;
}
constexpr uint8_t const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_InterestGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterestGroup;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_InterestGroup(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterestGroup = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_DebugEcho()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugEcho;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_DebugEcho() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugEcho;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_DebugEcho(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugEcho = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_ReliableMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReliableMode;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_ReliableMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReliableMode;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_ReliableMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReliableMode = value;
}
constexpr ::GlobalNamespace::OpusCodec_FrameDuration& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_FrameDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameDuration;
}
constexpr ::GlobalNamespace::OpusCodec_FrameDuration const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_FrameDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameDuration;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_FrameDuration(::GlobalNamespace::OpusCodec_FrameDuration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FrameDuration = value;
}
constexpr ::POpusCodec::Enums::SamplingRate& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_SamplingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SamplingRate;
}
constexpr ::POpusCodec::Enums::SamplingRate const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_SamplingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SamplingRate;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_SamplingRate(::POpusCodec::Enums::SamplingRate  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SamplingRate = value;
}
constexpr int32_t& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Bitrate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bitrate;
}
constexpr int32_t const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Bitrate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bitrate;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_Bitrate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bitrate = value;
}
constexpr ::POpusCodec::Enums::SamplingRate& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_SubsSamplingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubsSamplingRate;
}
constexpr ::POpusCodec::Enums::SamplingRate const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_SubsSamplingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubsSamplingRate;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_SubsSamplingRate(::POpusCodec::Enums::SamplingRate  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubsSamplingRate = value;
}
constexpr int32_t& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_SubsBitrate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubsBitrate;
}
constexpr int32_t const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_SubsBitrate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubsBitrate;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_SubsBitrate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubsBitrate = value;
}
constexpr ::GlobalNamespace::Recorder_InputSourceType& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_InputSourceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputSourceType;
}
constexpr ::GlobalNamespace::Recorder_InputSourceType const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_InputSourceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputSourceType;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_InputSourceType(::GlobalNamespace::Recorder_InputSourceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputSourceType = value;
}
constexpr ::GlobalNamespace::Recorder_MicType& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_MicrophoneType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneType;
}
constexpr ::GlobalNamespace::Recorder_MicType const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_MicrophoneType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneType;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_MicrophoneType(::GlobalNamespace::Recorder_MicType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MicrophoneType = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_UseFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseFallback;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_UseFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseFallback;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_UseFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseFallback = value;
}
constexpr bool& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Detect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Detect;
}
constexpr bool const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Detect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Detect;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_Detect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Detect = value;
}
constexpr float_t& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Threshold;
}
constexpr float_t const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Threshold;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_Threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Threshold = value;
}
constexpr int32_t& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr int32_t const& GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_get_Delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr void GorillaNetworking::SO_NetworkVoiceSettings::__cordl_internal_set_Delay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delay = value;
}
inline void GorillaNetworking::SO_NetworkVoiceSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SO_NetworkVoiceSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::SO_NetworkVoiceSettings* GorillaNetworking::SO_NetworkVoiceSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::SO_NetworkVoiceSettings*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::SO_NetworkVoiceSettings::SO_NetworkVoiceSettings()   {
}
