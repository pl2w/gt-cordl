#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Audio/AudioAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioAffordanceReceiver)
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class BaseAffordanceStateProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
class AudioAffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
class AudioAffordanceTheme;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio {
class AudioAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio", "AudioAffordanceReceiver");
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// [AddComponentMenu("Affordance System/Receiver/Audio/Audio Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver
class CORDL_TYPE AudioAffordanceReceiver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_affordanceStateProvider, put=set_affordanceStateProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>  affordanceStateProvider;

 __declspec(property(get=get_affordanceThemeDatum, put=set_affordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*  affordanceThemeDatum;

 __declspec(property(get=get_audioSource, put=set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field m_AffordanceStateProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffordanceStateProvider, put=__cordl_internal_set_m_AffordanceStateProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>  m_AffordanceStateProvider;

/// @brief Field m_AffordanceThemeDatum, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffordanceThemeDatum, put=__cordl_internal_set_m_AffordanceThemeDatum)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*  m_AffordanceThemeDatum;

/// @brief Field m_AudioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioSource, put=__cordl_internal_set_m_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  m_AudioSource;

/// @brief Field m_BindingsGroup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsGroup, put=__cordl_internal_set_m_BindingsGroup)) ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  m_BindingsGroup;

/// @brief Field m_LastAffordanceStateIndex, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LastAffordanceStateIndex, put=__cordl_internal_set_m_LastAffordanceStateIndex)) uint8_t  m_LastAffordanceStateIndex;

/// @brief Method Awake, addr 0xb4dca54, size 0x108, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LogIfMissingAffordanceStates, addr 0xb4dcb5c, size 0x390, virtual false, abstract: false, final false
inline void LogIfMissingAffordanceStates(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*  theme) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceStateUpdated, addr 0xb4dd10c, size 0x1c0, virtual false, abstract: false, final false
inline void OnAffordanceStateUpdated(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  affordanceStateData) ;

/// @brief Method OnDisable, addr 0xb4dd0f4, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4dceec, size 0x208, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb4dc9b0, size 0xa4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PlayAudioClip, addr 0xb4dd2cc, size 0x94, virtual false, abstract: false, final false
inline void PlayAudioClip(::UnityEngine::AudioClip*  clipToPlay) ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> const& __cordl_internal_get_m_AffordanceStateProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>& __cordl_internal_get_m_AffordanceStateProvider() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* const& __cordl_internal_get_m_AffordanceThemeDatum() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_AudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_AudioSource() ;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& __cordl_internal_get_m_BindingsGroup() const;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& __cordl_internal_get_m_BindingsGroup() ;

constexpr uint8_t const& __cordl_internal_get_m_LastAffordanceStateIndex() const;

constexpr uint8_t& __cordl_internal_get_m_LastAffordanceStateIndex() ;

constexpr void __cordl_internal_set_m_AffordanceStateProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>  value) ;

constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_AudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value) ;

constexpr void __cordl_internal_set_m_LastAffordanceStateIndex(uint8_t  value) ;

/// @brief Method .ctor, addr 0xb4dd360, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_affordanceStateProvider, addr 0xb4dc980, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> get_affordanceStateProvider() ;

/// @brief Method get_affordanceThemeDatum, addr 0xb4dc990, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* get_affordanceThemeDatum() ;

/// @brief Method get_audioSource, addr 0xb4dc9a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> get_audioSource() ;

/// @brief Method set_affordanceStateProvider, addr 0xb4dc988, size 0x8, virtual false, abstract: false, final false
inline void set_affordanceStateProvider(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*  value) ;

/// @brief Method set_affordanceThemeDatum, addr 0xb4dc998, size 0x8, virtual false, abstract: false, final false
inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*  value) ;

/// @brief Method set_audioSource, addr 0xb4dc9a8, size 0x8, virtual false, abstract: false, final false
inline void set_audioSource(::UnityEngine::AudioSource*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioAffordanceReceiver(AudioAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioAffordanceReceiver(AudioAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11769};

/// [SerializeField]
/// [Tooltip("Affordance state provider component to subscribe to.")]
/// @brief Field m_AffordanceStateProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>  ___m_AffordanceStateProvider;

/// [SerializeField]
/// [Tooltip("Audio Affordance Theme datum property used to map affordance state to a Audio affordance value. Can store an asset or a serialized value.")]
/// @brief Field m_AffordanceThemeDatum, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*  ___m_AffordanceThemeDatum;

/// [SerializeField]
/// [Tooltip("Audio Source where the audio clip will be played.")]
/// @brief Field m_AudioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_AudioSource;

/// @brief Field m_BindingsGroup, offset: 0x38, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  ___m_BindingsGroup;

/// @brief Field m_LastAffordanceStateIndex, offset: 0x40, size: 0x1, def value: None
 uint8_t  ___m_LastAffordanceStateIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver, ___m_AffordanceStateProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver, ___m_AffordanceThemeDatum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver, ___m_AudioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver, ___m_BindingsGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver, ___m_LastAffordanceStateIndex) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio::AudioAffordanceReceiver) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Audio
