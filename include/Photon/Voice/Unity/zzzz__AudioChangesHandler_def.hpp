#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioChangesHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
CORDL_MODULE_EXPORT(AudioChangesHandler)
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice {
class IAudioInChangeNotifier;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class AudioChangesHandler;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::AudioChangesHandler*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AudioChangesHandler*, "Photon.Voice.Unity", "AudioChangesHandler");
// [RequireComponent(typeof(Photon.Voice.Unity.Recorder))]
// Dependencies Photon.Voice.Unity.VoiceComponent, UnityEngine.AudioConfiguration
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AudioChangesHandler
class CORDL_TYPE AudioChangesHandler : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
/// @brief Field Android_AlwaysHandleDeviceChange, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_Android_AlwaysHandleDeviceChange, put=__cordl_internal_set_Android_AlwaysHandleDeviceChange)) bool  Android_AlwaysHandleDeviceChange;

/// @brief Field HandleConfigChange, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_HandleConfigChange, put=__cordl_internal_set_HandleConfigChange)) bool  HandleConfigChange;

/// @brief Field HandleDeviceChange, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_HandleDeviceChange, put=__cordl_internal_set_HandleDeviceChange)) bool  HandleDeviceChange;

/// @brief Field StartWhenDeviceChange, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_StartWhenDeviceChange, put=__cordl_internal_set_StartWhenDeviceChange)) bool  StartWhenDeviceChange;

/// @brief Field UseNativePluginChangeNotifier, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseNativePluginChangeNotifier, put=__cordl_internal_set_UseNativePluginChangeNotifier)) bool  UseNativePluginChangeNotifier;

/// @brief Field UseOnAudioConfigurationChanged, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseOnAudioConfigurationChanged, put=__cordl_internal_set_UseOnAudioConfigurationChanged)) bool  UseOnAudioConfigurationChanged;

/// @brief Field audioConfiguration, offset 0x38, size 0x14 
 __declspec(property(get=__cordl_internal_get_audioConfiguration, put=__cordl_internal_set_audioConfiguration)) ::UnityEngine::AudioConfiguration  audioConfiguration;

/// @brief Field photonMicChangeNotifier, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonMicChangeNotifier, put=__cordl_internal_set_photonMicChangeNotifier)) ::Photon::Voice::IAudioInChangeNotifier*  photonMicChangeNotifier;

/// @brief Field recorder, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_recorder, put=__cordl_internal_set_recorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  recorder;

/// @brief Field subscribedToSystemChangesPhoton, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscribedToSystemChangesPhoton, put=__cordl_internal_set_subscribedToSystemChangesPhoton)) bool  subscribedToSystemChangesPhoton;

/// @brief Field subscribedToSystemChangesUnity, offset 0x5f, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscribedToSystemChangesUnity, put=__cordl_internal_set_subscribedToSystemChangesUnity)) bool  subscribedToSystemChangesUnity;

/// @brief Method Awake, addr 0xa765960, size 0xa8, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Photon::Voice::Unity::AudioChangesHandler* New_ctor() ;

/// @brief Method OnAudioConfigChanged, addr 0xa7669b0, size 0x978, virtual false, abstract: false, final false
inline void OnAudioConfigChanged(bool  deviceWasChanged) ;

/// @brief Method OnDestroy, addr 0xa765f80, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDeviceChange, addr 0xa7662c0, size 0x2d8, virtual false, abstract: false, final false
inline void OnDeviceChange() ;

/// @brief Method SubscribeToSystemChanges, addr 0xa765b48, size 0x438, virtual false, abstract: false, final false
inline void SubscribeToSystemChanges() ;

/// @brief Method UnsubscribeFromSystemChanges, addr 0xa765f84, size 0x33c, virtual false, abstract: false, final false
inline void UnsubscribeFromSystemChanges() ;

constexpr bool const& __cordl_internal_get_Android_AlwaysHandleDeviceChange() const;

constexpr bool& __cordl_internal_get_Android_AlwaysHandleDeviceChange() ;

constexpr bool const& __cordl_internal_get_HandleConfigChange() const;

constexpr bool& __cordl_internal_get_HandleConfigChange() ;

constexpr bool const& __cordl_internal_get_HandleDeviceChange() const;

constexpr bool& __cordl_internal_get_HandleDeviceChange() ;

constexpr bool const& __cordl_internal_get_StartWhenDeviceChange() const;

constexpr bool& __cordl_internal_get_StartWhenDeviceChange() ;

constexpr bool const& __cordl_internal_get_UseNativePluginChangeNotifier() const;

constexpr bool& __cordl_internal_get_UseNativePluginChangeNotifier() ;

constexpr bool const& __cordl_internal_get_UseOnAudioConfigurationChanged() const;

constexpr bool& __cordl_internal_get_UseOnAudioConfigurationChanged() ;

constexpr ::UnityEngine::AudioConfiguration const& __cordl_internal_get_audioConfiguration() const;

constexpr ::UnityEngine::AudioConfiguration& __cordl_internal_get_audioConfiguration() ;

constexpr ::Photon::Voice::IAudioInChangeNotifier* const& __cordl_internal_get_photonMicChangeNotifier() const;

constexpr ::Photon::Voice::IAudioInChangeNotifier*& __cordl_internal_get_photonMicChangeNotifier() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_recorder() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_recorder() ;

constexpr bool const& __cordl_internal_get_subscribedToSystemChangesPhoton() const;

constexpr bool& __cordl_internal_get_subscribedToSystemChangesPhoton() ;

constexpr bool const& __cordl_internal_get_subscribedToSystemChangesUnity() const;

constexpr bool& __cordl_internal_get_subscribedToSystemChangesUnity() ;

constexpr void __cordl_internal_set_Android_AlwaysHandleDeviceChange(bool  value) ;

constexpr void __cordl_internal_set_HandleConfigChange(bool  value) ;

constexpr void __cordl_internal_set_HandleDeviceChange(bool  value) ;

constexpr void __cordl_internal_set_StartWhenDeviceChange(bool  value) ;

constexpr void __cordl_internal_set_UseNativePluginChangeNotifier(bool  value) ;

constexpr void __cordl_internal_set_UseOnAudioConfigurationChanged(bool  value) ;

constexpr void __cordl_internal_set_audioConfiguration(::UnityEngine::AudioConfiguration  value) ;

constexpr void __cordl_internal_set_photonMicChangeNotifier(::Photon::Voice::IAudioInChangeNotifier*  value) ;

constexpr void __cordl_internal_set_recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_subscribedToSystemChangesPhoton(bool  value) ;

constexpr void __cordl_internal_set_subscribedToSystemChangesUnity(bool  value) ;

/// @brief Method .ctor, addr 0xa7673f0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioChangesHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioChangesHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioChangesHandler(AudioChangesHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioChangesHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioChangesHandler(AudioChangesHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28872};

/// @brief Field photonMicChangeNotifier, offset: 0x30, size: 0x8, def value: None
 ::Photon::Voice::IAudioInChangeNotifier*  ___photonMicChangeNotifier;

/// @brief Field audioConfiguration, offset: 0x38, size: 0x14, def value: None
 ::UnityEngine::AudioConfiguration  ___audioConfiguration;

/// @brief Field recorder, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___recorder;

/// [Tooltip("Try to start recording when we get devices change notification and recording is not started.")]
/// @brief Field StartWhenDeviceChange, offset: 0x58, size: 0x1, def value: None
 bool  ___StartWhenDeviceChange;

/// [Tooltip("Try to react to device change notification when Recorder is started.")]
/// @brief Field HandleDeviceChange, offset: 0x59, size: 0x1, def value: None
 bool  ___HandleDeviceChange;

/// [Tooltip("Try to react to audio config change notification when Recorder is started.")]
/// @brief Field HandleConfigChange, offset: 0x5a, size: 0x1, def value: None
 bool  ___HandleConfigChange;

/// [Tooltip("Whether or not to make use of Photon\'s AudioInChangeNotifier native plugin.")]
/// @brief Field UseNativePluginChangeNotifier, offset: 0x5b, size: 0x1, def value: None
 bool  ___UseNativePluginChangeNotifier;

/// [Tooltip("Whether or not to make use of Unity\'s OnAudioConfigurationChanged.")]
/// @brief Field UseOnAudioConfigurationChanged, offset: 0x5c, size: 0x1, def value: None
 bool  ___UseOnAudioConfigurationChanged;

/// [Tooltip("If the recorder is set to use microphone as source with type Photon, audio device changes are handled within the native plugin by default. If you set this to true, it will also be handled via this component logic.")]
/// @brief Field Android_AlwaysHandleDeviceChange, offset: 0x5d, size: 0x1, def value: None
 bool  ___Android_AlwaysHandleDeviceChange;

/// @brief Field subscribedToSystemChangesPhoton, offset: 0x5e, size: 0x1, def value: None
 bool  ___subscribedToSystemChangesPhoton;

/// @brief Field subscribedToSystemChangesUnity, offset: 0x5f, size: 0x1, def value: None
 bool  ___subscribedToSystemChangesUnity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___photonMicChangeNotifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___audioConfiguration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___recorder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___StartWhenDeviceChange) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___HandleDeviceChange) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___HandleConfigChange) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___UseNativePluginChangeNotifier) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___UseOnAudioConfigurationChanged) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___Android_AlwaysHandleDeviceChange) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___subscribedToSystemChangesPhoton) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioChangesHandler, ___subscribedToSystemChangesUnity) == 0x5f, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::AudioChangesHandler) == 0x60, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
