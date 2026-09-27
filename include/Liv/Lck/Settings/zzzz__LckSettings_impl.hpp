#pragma once
// IWYU pragma private; include "Liv/Lck/Settings/LckSettings.hpp"
#include "Liv/Lck/Core/zzzz__LevelFilter_impl.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LogLevel_impl.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_ImageFileFormat_impl.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_LimiterType_impl.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_MicPermissionAskType_impl.hpp"
#include "Liv/Lck/zzzz__LogLevel_impl.hpp"
#include "Liv/NGFX/zzzz__LogLevel_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_def.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_ImageFileFormat_def.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_LimiterType_def.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_MicPermissionAskType_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Settings::LckSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::Settings::LckSettings> (*)()>(&::Liv::Lck::Settings::LckSettings::get_Instance)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9d4120c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Settings::LckSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Settings::LckSettings.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Settings::LckSettings::*)()>(&::Liv::Lck::Settings::LckSettings::OnValidate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d4142c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Settings::LckSettings*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Settings::LckSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Settings::LckSettings::*)()>(&::Liv::Lck::Settings::LckSettings::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9d41474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Settings::LckSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::Settings::LckSettings::__cordl_internal_get_ShowSetupWizard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowSetupWizard;
}
constexpr bool const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_ShowSetupWizard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowSetupWizard;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_ShowSetupWizard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowSetupWizard = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_DismissedUpdateVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DismissedUpdateVersion;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_DismissedUpdateVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DismissedUpdateVersion;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_DismissedUpdateVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DismissedUpdateVersion = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_LastShownOverviewVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastShownOverviewVersion;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_LastShownOverviewVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastShownOverviewVersion;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_LastShownOverviewVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastShownOverviewVersion = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_DismissedNotificationBarVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DismissedNotificationBarVersion;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_DismissedNotificationBarVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DismissedNotificationBarVersion;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_DismissedNotificationBarVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DismissedNotificationBarVersion = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_TrackingId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingId;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_TrackingId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingId;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_TrackingId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingId = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_GameName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameName;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_GameName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameName;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_GameName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameName = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_RecordingFilenamePrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingFilenamePrefix;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_RecordingFilenamePrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingFilenamePrefix;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_RecordingFilenamePrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordingFilenamePrefix = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_RecordingAlbumName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingAlbumName;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_RecordingAlbumName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingAlbumName;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_RecordingAlbumName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordingAlbumName = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_RecordingDateSuffixFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingDateSuffixFormat;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_RecordingDateSuffixFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordingDateSuffixFormat;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_RecordingDateSuffixFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordingDateSuffixFormat = value;
}
constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType& Liv::Lck::Settings::LckSettings::__cordl_internal_get_MicPermissionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicPermissionType;
}
constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_MicPermissionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicPermissionType;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_MicPermissionType(::GlobalNamespace::LckSettings_MicPermissionAskType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MicPermissionType = value;
}
constexpr bool& Liv::Lck::Settings::LckSettings::__cordl_internal_get_AddMicPermissionsToAndroidManifest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddMicPermissionsToAndroidManifest;
}
constexpr bool const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_AddMicPermissionsToAndroidManifest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddMicPermissionsToAndroidManifest;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_AddMicPermissionsToAndroidManifest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddMicPermissionsToAndroidManifest = value;
}
constexpr bool& Liv::Lck::Settings::LckSettings::__cordl_internal_get_AddControlCenterPermissionsToAndroidManifest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddControlCenterPermissionsToAndroidManifest;
}
constexpr bool const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_AddControlCenterPermissionsToAndroidManifest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddControlCenterPermissionsToAndroidManifest;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_AddControlCenterPermissionsToAndroidManifest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddControlCenterPermissionsToAndroidManifest = value;
}
constexpr bool& Liv::Lck::Settings::LckSettings::__cordl_internal_get_AddInternetPermissionsToAndroidManifest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddInternetPermissionsToAndroidManifest;
}
constexpr bool const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_AddInternetPermissionsToAndroidManifest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddInternetPermissionsToAndroidManifest;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_AddInternetPermissionsToAndroidManifest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddInternetPermissionsToAndroidManifest = value;
}
constexpr ::Liv::Lck::LogLevel& Liv::Lck::Settings::LckSettings::__cordl_internal_get_BaseLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseLogLevel;
}
constexpr ::Liv::Lck::LogLevel const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_BaseLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseLogLevel;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_BaseLogLevel(::Liv::Lck::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BaseLogLevel = value;
}
constexpr ::Liv::Lck::NativeMicrophone::LogLevel& Liv::Lck::Settings::LckSettings::__cordl_internal_get_MicrophoneLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneLogLevel;
}
constexpr ::Liv::Lck::NativeMicrophone::LogLevel const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_MicrophoneLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneLogLevel;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_MicrophoneLogLevel(::Liv::Lck::NativeMicrophone::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MicrophoneLogLevel = value;
}
constexpr ::Liv::NGFX::LogLevel& Liv::Lck::Settings::LckSettings::__cordl_internal_get_NativeLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NativeLogLevel;
}
constexpr ::Liv::NGFX::LogLevel const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_NativeLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NativeLogLevel;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_NativeLogLevel(::Liv::NGFX::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NativeLogLevel = value;
}
constexpr ::Liv::Lck::Core::LevelFilter& Liv::Lck::Settings::LckSettings::__cordl_internal_get_CoreLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreLogLevel;
}
constexpr ::Liv::Lck::Core::LevelFilter const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_CoreLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreLogLevel;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_CoreLogLevel(::Liv::Lck::Core::LevelFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoreLogLevel = value;
}
constexpr bool& Liv::Lck::Settings::LckSettings::__cordl_internal_get_ShowOpenGLMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowOpenGLMessages;
}
constexpr bool const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_ShowOpenGLMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowOpenGLMessages;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_ShowOpenGLMessages(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowOpenGLMessages = value;
}
constexpr float_t& Liv::Lck::Settings::LckSettings::__cordl_internal_get_GameAudioSyncTimeOffsetInMS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameAudioSyncTimeOffsetInMS;
}
constexpr float_t const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_GameAudioSyncTimeOffsetInMS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameAudioSyncTimeOffsetInMS;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_GameAudioSyncTimeOffsetInMS(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameAudioSyncTimeOffsetInMS = value;
}
constexpr ::GlobalNamespace::LckSettings_LimiterType& Liv::Lck::Settings::LckSettings::__cordl_internal_get_AudioLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioLimiter;
}
constexpr ::GlobalNamespace::LckSettings_LimiterType const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_AudioLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioLimiter;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_AudioLimiter(::GlobalNamespace::LckSettings_LimiterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioLimiter = value;
}
constexpr int32_t& Liv::Lck::Settings::LckSettings::__cordl_internal_get_FallbackSampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FallbackSampleRate;
}
constexpr int32_t const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_FallbackSampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FallbackSampleRate;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_FallbackSampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FallbackSampleRate = value;
}
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat& Liv::Lck::Settings::LckSettings::__cordl_internal_get_ImageCaptureFileFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageCaptureFileFormat;
}
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_ImageCaptureFileFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageCaptureFileFormat;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_ImageCaptureFileFormat(::GlobalNamespace::LckSettings_ImageFileFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImageCaptureFileFormat = value;
}
constexpr ::StringW& Liv::Lck::Settings::LckSettings::__cordl_internal_get_TriggerEnterTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerEnterTag;
}
constexpr ::StringW const& Liv::Lck::Settings::LckSettings::__cordl_internal_get_TriggerEnterTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerEnterTag;
}
constexpr void Liv::Lck::Settings::LckSettings::__cordl_internal_set_TriggerEnterTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerEnterTag = value;
}
inline void Liv::Lck::Settings::LckSettings::setStaticF__instance(::UnityW<::Liv::Lck::Settings::LckSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::Liv::Lck::Settings::LckSettings>, "_instance", ::Liv::Lck::Settings::LckSettings*>(std::forward<::UnityW<::Liv::Lck::Settings::LckSettings>>(value));
}
inline ::UnityW<::Liv::Lck::Settings::LckSettings> Liv::Lck::Settings::LckSettings::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Liv::Lck::Settings::LckSettings>, "_instance", ::Liv::Lck::Settings::LckSettings*>();
}
inline ::UnityW<::Liv::Lck::Settings::LckSettings> Liv::Lck::Settings::LckSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Settings::LckSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::Settings::LckSettings>>(nullptr, ___internal_method);
}
inline void Liv::Lck::Settings::LckSettings::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Settings::LckSettings*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Settings::LckSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Settings::LckSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Settings::LckSettings* Liv::Lck::Settings::LckSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Settings::LckSettings*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Settings::LckSettings::LckSettings()   {
}
