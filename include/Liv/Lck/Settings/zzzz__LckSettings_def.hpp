#pragma once
// IWYU pragma private; include "Liv/Lck/Settings/LckSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Core/zzzz__LevelFilter_def.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LogLevel_def.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_ImageFileFormat_def.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_LimiterType_def.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_MicPermissionAskType_def.hpp"
#include "Liv/Lck/zzzz__LogLevel_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckSettings)
namespace GlobalNamespace {
struct LckSettings_ImageFileFormat;
}
namespace GlobalNamespace {
struct LckSettings_LimiterType;
}
namespace GlobalNamespace {
struct LckSettings_MicPermissionAskType;
}
// Forward declare root types
namespace Liv::Lck::Settings {
class LckSettings;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Settings::LckSettings*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Settings::LckSettings*, "Liv.Lck.Settings", "LckSettings");
// Dependencies Liv.Lck.Core.LevelFilter, Liv.Lck.LogLevel, Liv.Lck.NativeMicrophone.LogLevel, Liv.Lck.Settings.LckSettings::ImageFileFormat, Liv.Lck.Settings.LckSettings::LimiterType, Liv.Lck.Settings.LckSettings::MicPermissionAskType, Liv.NGFX.LogLevel, UnityEngine.ScriptableObject
namespace Liv::Lck::Settings {
// Is value type: false
// CS Name: Liv.Lck.Settings.LckSettings
class CORDL_TYPE LckSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ImageFileFormat = ::GlobalNamespace::LckSettings_ImageFileFormat;

using LimiterType = ::GlobalNamespace::LckSettings_LimiterType;

using MicPermissionAskType = ::GlobalNamespace::LckSettings_MicPermissionAskType;

/// @brief Field AddControlCenterPermissionsToAndroidManifest, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddControlCenterPermissionsToAndroidManifest, put=__cordl_internal_set_AddControlCenterPermissionsToAndroidManifest)) bool  AddControlCenterPermissionsToAndroidManifest;

/// @brief Field AddInternetPermissionsToAndroidManifest, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddInternetPermissionsToAndroidManifest, put=__cordl_internal_set_AddInternetPermissionsToAndroidManifest)) bool  AddInternetPermissionsToAndroidManifest;

/// @brief Field AddMicPermissionsToAndroidManifest, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddMicPermissionsToAndroidManifest, put=__cordl_internal_set_AddMicPermissionsToAndroidManifest)) bool  AddMicPermissionsToAndroidManifest;

/// @brief Field AudioLimiter, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_AudioLimiter, put=__cordl_internal_set_AudioLimiter)) ::GlobalNamespace::LckSettings_LimiterType  AudioLimiter;

/// @brief Field BaseLogLevel, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_BaseLogLevel, put=__cordl_internal_set_BaseLogLevel)) ::Liv::Lck::LogLevel  BaseLogLevel;

/// @brief Field CoreLogLevel, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_CoreLogLevel, put=__cordl_internal_set_CoreLogLevel)) ::Liv::Lck::Core::LevelFilter  CoreLogLevel;

/// @brief Field DismissedNotificationBarVersion, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DismissedNotificationBarVersion, put=__cordl_internal_set_DismissedNotificationBarVersion)) ::StringW  DismissedNotificationBarVersion;

/// @brief Field DismissedUpdateVersion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DismissedUpdateVersion, put=__cordl_internal_set_DismissedUpdateVersion)) ::StringW  DismissedUpdateVersion;

/// @brief Field FallbackSampleRate, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_FallbackSampleRate, put=__cordl_internal_set_FallbackSampleRate)) int32_t  FallbackSampleRate;

/// @brief Field GameAudioSyncTimeOffsetInMS, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_GameAudioSyncTimeOffsetInMS, put=__cordl_internal_set_GameAudioSyncTimeOffsetInMS)) float_t  GameAudioSyncTimeOffsetInMS;

/// @brief Field GameName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameName, put=__cordl_internal_set_GameName)) ::StringW  GameName;

/// @brief Field ImageCaptureFileFormat, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImageCaptureFileFormat, put=__cordl_internal_set_ImageCaptureFileFormat)) ::GlobalNamespace::LckSettings_ImageFileFormat  ImageCaptureFileFormat;

/// @brief Field LastShownOverviewVersion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastShownOverviewVersion, put=__cordl_internal_set_LastShownOverviewVersion)) ::StringW  LastShownOverviewVersion;

/// @brief Field MicPermissionType, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_MicPermissionType, put=__cordl_internal_set_MicPermissionType)) ::GlobalNamespace::LckSettings_MicPermissionAskType  MicPermissionType;

/// @brief Field MicrophoneLogLevel, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MicrophoneLogLevel, put=__cordl_internal_set_MicrophoneLogLevel)) ::Liv::Lck::NativeMicrophone::LogLevel  MicrophoneLogLevel;

/// @brief Field NativeLogLevel, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_NativeLogLevel, put=__cordl_internal_set_NativeLogLevel)) ::Liv::NGFX::LogLevel  NativeLogLevel;

/// @brief Field RecordingAlbumName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordingAlbumName, put=__cordl_internal_set_RecordingAlbumName)) ::StringW  RecordingAlbumName;

/// @brief Field RecordingDateSuffixFormat, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordingDateSuffixFormat, put=__cordl_internal_set_RecordingDateSuffixFormat)) ::StringW  RecordingDateSuffixFormat;

/// @brief Field RecordingFilenamePrefix, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordingFilenamePrefix, put=__cordl_internal_set_RecordingFilenamePrefix)) ::StringW  RecordingFilenamePrefix;

/// @brief Field ShowOpenGLMessages, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowOpenGLMessages, put=__cordl_internal_set_ShowOpenGLMessages)) bool  ShowOpenGLMessages;

/// @brief Field ShowSetupWizard, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowSetupWizard, put=__cordl_internal_set_ShowSetupWizard)) bool  ShowSetupWizard;

/// @brief Field TrackingId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackingId, put=__cordl_internal_set_TrackingId)) ::StringW  TrackingId;

/// @brief Field TriggerEnterTag, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerEnterTag, put=__cordl_internal_set_TriggerEnterTag)) ::StringW  TriggerEnterTag;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Liv::Lck::Settings::LckSettings>  _instance;

static inline ::Liv::Lck::Settings::LckSettings* New_ctor() ;

/// @brief Method OnValidate, addr 0x9d4142c, size 0x48, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr bool const& __cordl_internal_get_AddControlCenterPermissionsToAndroidManifest() const;

constexpr bool& __cordl_internal_get_AddControlCenterPermissionsToAndroidManifest() ;

constexpr bool const& __cordl_internal_get_AddInternetPermissionsToAndroidManifest() const;

constexpr bool& __cordl_internal_get_AddInternetPermissionsToAndroidManifest() ;

constexpr bool const& __cordl_internal_get_AddMicPermissionsToAndroidManifest() const;

constexpr bool& __cordl_internal_get_AddMicPermissionsToAndroidManifest() ;

constexpr ::GlobalNamespace::LckSettings_LimiterType const& __cordl_internal_get_AudioLimiter() const;

constexpr ::GlobalNamespace::LckSettings_LimiterType& __cordl_internal_get_AudioLimiter() ;

constexpr ::Liv::Lck::LogLevel const& __cordl_internal_get_BaseLogLevel() const;

constexpr ::Liv::Lck::LogLevel& __cordl_internal_get_BaseLogLevel() ;

constexpr ::Liv::Lck::Core::LevelFilter const& __cordl_internal_get_CoreLogLevel() const;

constexpr ::Liv::Lck::Core::LevelFilter& __cordl_internal_get_CoreLogLevel() ;

constexpr ::StringW const& __cordl_internal_get_DismissedNotificationBarVersion() const;

constexpr ::StringW& __cordl_internal_get_DismissedNotificationBarVersion() ;

constexpr ::StringW const& __cordl_internal_get_DismissedUpdateVersion() const;

constexpr ::StringW& __cordl_internal_get_DismissedUpdateVersion() ;

constexpr int32_t const& __cordl_internal_get_FallbackSampleRate() const;

constexpr int32_t& __cordl_internal_get_FallbackSampleRate() ;

constexpr float_t const& __cordl_internal_get_GameAudioSyncTimeOffsetInMS() const;

constexpr float_t& __cordl_internal_get_GameAudioSyncTimeOffsetInMS() ;

constexpr ::StringW const& __cordl_internal_get_GameName() const;

constexpr ::StringW& __cordl_internal_get_GameName() ;

constexpr ::GlobalNamespace::LckSettings_ImageFileFormat const& __cordl_internal_get_ImageCaptureFileFormat() const;

constexpr ::GlobalNamespace::LckSettings_ImageFileFormat& __cordl_internal_get_ImageCaptureFileFormat() ;

constexpr ::StringW const& __cordl_internal_get_LastShownOverviewVersion() const;

constexpr ::StringW& __cordl_internal_get_LastShownOverviewVersion() ;

constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType const& __cordl_internal_get_MicPermissionType() const;

constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType& __cordl_internal_get_MicPermissionType() ;

constexpr ::Liv::Lck::NativeMicrophone::LogLevel const& __cordl_internal_get_MicrophoneLogLevel() const;

constexpr ::Liv::Lck::NativeMicrophone::LogLevel& __cordl_internal_get_MicrophoneLogLevel() ;

constexpr ::Liv::NGFX::LogLevel const& __cordl_internal_get_NativeLogLevel() const;

constexpr ::Liv::NGFX::LogLevel& __cordl_internal_get_NativeLogLevel() ;

constexpr ::StringW const& __cordl_internal_get_RecordingAlbumName() const;

constexpr ::StringW& __cordl_internal_get_RecordingAlbumName() ;

constexpr ::StringW const& __cordl_internal_get_RecordingDateSuffixFormat() const;

constexpr ::StringW& __cordl_internal_get_RecordingDateSuffixFormat() ;

constexpr ::StringW const& __cordl_internal_get_RecordingFilenamePrefix() const;

constexpr ::StringW& __cordl_internal_get_RecordingFilenamePrefix() ;

constexpr bool const& __cordl_internal_get_ShowOpenGLMessages() const;

constexpr bool& __cordl_internal_get_ShowOpenGLMessages() ;

constexpr bool const& __cordl_internal_get_ShowSetupWizard() const;

constexpr bool& __cordl_internal_get_ShowSetupWizard() ;

constexpr ::StringW const& __cordl_internal_get_TrackingId() const;

constexpr ::StringW& __cordl_internal_get_TrackingId() ;

constexpr ::StringW const& __cordl_internal_get_TriggerEnterTag() const;

constexpr ::StringW& __cordl_internal_get_TriggerEnterTag() ;

constexpr void __cordl_internal_set_AddControlCenterPermissionsToAndroidManifest(bool  value) ;

constexpr void __cordl_internal_set_AddInternetPermissionsToAndroidManifest(bool  value) ;

constexpr void __cordl_internal_set_AddMicPermissionsToAndroidManifest(bool  value) ;

constexpr void __cordl_internal_set_AudioLimiter(::GlobalNamespace::LckSettings_LimiterType  value) ;

constexpr void __cordl_internal_set_BaseLogLevel(::Liv::Lck::LogLevel  value) ;

constexpr void __cordl_internal_set_CoreLogLevel(::Liv::Lck::Core::LevelFilter  value) ;

constexpr void __cordl_internal_set_DismissedNotificationBarVersion(::StringW  value) ;

constexpr void __cordl_internal_set_DismissedUpdateVersion(::StringW  value) ;

constexpr void __cordl_internal_set_FallbackSampleRate(int32_t  value) ;

constexpr void __cordl_internal_set_GameAudioSyncTimeOffsetInMS(float_t  value) ;

constexpr void __cordl_internal_set_GameName(::StringW  value) ;

constexpr void __cordl_internal_set_ImageCaptureFileFormat(::GlobalNamespace::LckSettings_ImageFileFormat  value) ;

constexpr void __cordl_internal_set_LastShownOverviewVersion(::StringW  value) ;

constexpr void __cordl_internal_set_MicPermissionType(::GlobalNamespace::LckSettings_MicPermissionAskType  value) ;

constexpr void __cordl_internal_set_MicrophoneLogLevel(::Liv::Lck::NativeMicrophone::LogLevel  value) ;

constexpr void __cordl_internal_set_NativeLogLevel(::Liv::NGFX::LogLevel  value) ;

constexpr void __cordl_internal_set_RecordingAlbumName(::StringW  value) ;

constexpr void __cordl_internal_set_RecordingDateSuffixFormat(::StringW  value) ;

constexpr void __cordl_internal_set_RecordingFilenamePrefix(::StringW  value) ;

constexpr void __cordl_internal_set_ShowOpenGLMessages(bool  value) ;

constexpr void __cordl_internal_set_ShowSetupWizard(bool  value) ;

constexpr void __cordl_internal_set_TrackingId(::StringW  value) ;

constexpr void __cordl_internal_set_TriggerEnterTag(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d41474, size 0x188, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Liv::Lck::Settings::LckSettings> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x9d4120c, size 0x220, virtual false, abstract: false, final false
static inline ::UnityW<::Liv::Lck::Settings::LckSettings> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::Liv::Lck::Settings::LckSettings>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckSettings(LckSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckSettings(LckSettings const& ) = delete;

/// @brief Field Build offset 0xffffffff size 0x4
static constexpr int32_t  Build{static_cast<int32_t>(0xffffffff)};

/// @brief Field RequiredAndroidApiLevel offset 0xffffffff size 0x4
static constexpr int32_t  RequiredAndroidApiLevel{static_cast<int32_t>(0x1d)};

/// @brief Field SettingsPath offset 0xffffffff size 0x8
static constexpr ::ConstString  SettingsPath{u"Assets/Resources/LckSettings.asset"};

/// @brief Field Version offset 0xffffffff size 0x8
static constexpr ::ConstString  Version{u"1.4.6"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24869};

/// [SerializeField]
/// @brief Field ShowSetupWizard, offset: 0x18, size: 0x1, def value: None
 bool  ___ShowSetupWizard;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field DismissedUpdateVersion, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DismissedUpdateVersion;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field LastShownOverviewVersion, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___LastShownOverviewVersion;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field DismissedNotificationBarVersion, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___DismissedNotificationBarVersion;

/// [SerializeField]
/// @brief Field TrackingId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___TrackingId;

/// [SerializeField]
/// @brief Field GameName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___GameName;

/// [Space(10)]
/// [SerializeField]
/// @brief Field RecordingFilenamePrefix, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___RecordingFilenamePrefix;

/// [SerializeField]
/// @brief Field RecordingAlbumName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___RecordingAlbumName;

/// [SerializeField]
/// @brief Field RecordingDateSuffixFormat, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___RecordingDateSuffixFormat;

/// [Space(10)]
/// [Header("Advanced")]
/// [SerializeField]
/// [Tooltip("When should the user be asked for microphone access permission in Android builds.")]
/// @brief Field MicPermissionType, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::LckSettings_MicPermissionAskType  ___MicPermissionType;

/// [SerializeField]
/// [Tooltip("Allow LCK to modify the AndroidManifest.xml file to add Microphone permissions. Disable if you want to manually add permissions.")]
/// @brief Field AddMicPermissionsToAndroidManifest, offset: 0x64, size: 0x1, def value: None
 bool  ___AddMicPermissionsToAndroidManifest;

/// [SerializeField]
/// [Tooltip("Allow LCK to modify the AndroidManifest.xml file to allow the LIV Control Center app (for streaming) to be launched and queried. Disable if you want to remove the permission.")]
/// @brief Field AddControlCenterPermissionsToAndroidManifest, offset: 0x65, size: 0x1, def value: None
 bool  ___AddControlCenterPermissionsToAndroidManifest;

/// [SerializeField]
/// [Tooltip("Allow LCK to modify the AndroidManifest.xml file to add Internet permissions. Disable if you want to manually add permissions.")]
/// @brief Field AddInternetPermissionsToAndroidManifest, offset: 0x66, size: 0x1, def value: None
 bool  ___AddInternetPermissionsToAndroidManifest;

/// [Space(10)]
/// [Header("Logging")]
/// [SerializeField]
/// @brief Field BaseLogLevel, offset: 0x68, size: 0x4, def value: None
 ::Liv::Lck::LogLevel  ___BaseLogLevel;

/// [SerializeField]
/// @brief Field MicrophoneLogLevel, offset: 0x6c, size: 0x4, def value: None
 ::Liv::Lck::NativeMicrophone::LogLevel  ___MicrophoneLogLevel;

/// [SerializeField]
/// @brief Field NativeLogLevel, offset: 0x70, size: 0x4, def value: None
 ::Liv::NGFX::LogLevel  ___NativeLogLevel;

/// [SerializeField]
/// @brief Field CoreLogLevel, offset: 0x74, size: 0x4, def value: None
 ::Liv::Lck::Core::LevelFilter  ___CoreLogLevel;

/// [SerializeField]
/// [Tooltip("OpenGL messages can be useful to debug errors happening at graphics API level.")]
/// @brief Field ShowOpenGLMessages, offset: 0x78, size: 0x1, def value: None
 bool  ___ShowOpenGLMessages;

/// [Header("Audio")]
/// [SerializeField]
/// [Tooltip("Game audio may appear ahead or behind the game visuals in your game recordings. This property allows for Game Audio to be shifted forward or backwards by the provided milliseconds. Positive values will move the audio forward in time, negative backwards.")]
/// @brief Field GameAudioSyncTimeOffsetInMS, offset: 0x7c, size: 0x4, def value: None
 float_t  ___GameAudioSyncTimeOffsetInMS;

/// [SerializeField]
/// [Tooltip("Enabling the audio limiter results in limiter compression applied to the recordings audio.")]
/// @brief Field AudioLimiter, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::LckSettings_LimiterType  ___AudioLimiter;

/// [SerializeField]
/// [Tooltip("The sample rate used by LCK if it can\'t get the samplerate from other sources")]
/// @brief Field FallbackSampleRate, offset: 0x84, size: 0x4, def value: None
 int32_t  ___FallbackSampleRate;

/// [Header("Photo")]
/// [SerializeField]
/// [Tooltip("The format Photo images will be saved in.")]
/// @brief Field ImageCaptureFileFormat, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::LckSettings_ImageFileFormat  ___ImageCaptureFileFormat;

/// [Space(10)]
/// [Header("Tablet Using Collider Settings")]
/// [Tooltip("When using the \'LCK Tablet Using Collider\' prefab. Trigger events will check this tag. Make sure to add this tag on your XR Rig Direct Interactors for both controllers")]
/// [SerializeField]
/// @brief Field TriggerEnterTag, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___TriggerEnterTag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___ShowSetupWizard) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___DismissedUpdateVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___LastShownOverviewVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___DismissedNotificationBarVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___TrackingId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___GameName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___RecordingFilenamePrefix) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___RecordingAlbumName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___RecordingDateSuffixFormat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___MicPermissionType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___AddMicPermissionsToAndroidManifest) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___AddControlCenterPermissionsToAndroidManifest) == 0x65, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___AddInternetPermissionsToAndroidManifest) == 0x66, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___BaseLogLevel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___MicrophoneLogLevel) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___NativeLogLevel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___CoreLogLevel) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___ShowOpenGLMessages) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___GameAudioSyncTimeOffsetInMS) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___AudioLimiter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___FallbackSampleRate) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___ImageCaptureFileFormat) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Settings::LckSettings, ___TriggerEnterTag) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Settings::LckSettings) == 0x98, "Size mismatch!");

} // namespace end def Liv::Lck::Settings
