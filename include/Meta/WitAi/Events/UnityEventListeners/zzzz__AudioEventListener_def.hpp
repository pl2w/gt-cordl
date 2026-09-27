#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/UnityEventListeners/AudioEventListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioEventListener)
namespace Meta::WitAi::Events {
class WitMicLevelChangedEvent;
}
namespace Meta::WitAi::Interfaces {
class IAudioInputEvents;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::WitAi::Events::UnityEventListeners {
class AudioEventListener;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener*, "Meta.WitAi.Events.UnityEventListeners", "AudioEventListener");
// [RequireComponent(typeof(Meta.WitAi.Interfaces.IAudioEventProvider))]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Events::UnityEventListeners {
// Is value type: false
// CS Name: Meta.WitAi.Events.UnityEventListeners.AudioEventListener
class CORDL_TYPE AudioEventListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AudioInputEvents)) ::Meta::WitAi::Interfaces::IAudioInputEvents*  AudioInputEvents;

 __declspec(property(get=get_OnMicAudioLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  OnMicAudioLevelChanged;

 __declspec(property(get=get_OnMicStartedListening)) ::UnityEngine::Events::UnityEvent*  OnMicStartedListening;

 __declspec(property(get=get_OnMicStoppedListening)) ::UnityEngine::Events::UnityEvent*  OnMicStoppedListening;

/// @brief Field _events, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Meta::WitAi::Interfaces::IAudioInputEvents*  _events;

/// @brief Field onMicAudioLevelChanged, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMicAudioLevelChanged, put=__cordl_internal_set_onMicAudioLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  onMicAudioLevelChanged;

/// @brief Field onMicStartedListening, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMicStartedListening, put=__cordl_internal_set_onMicStartedListening)) ::UnityEngine::Events::UnityEvent*  onMicStartedListening;

/// @brief Field onMicStoppedListening, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMicStoppedListening, put=__cordl_internal_set_onMicStoppedListening)) ::UnityEngine::Events::UnityEvent*  onMicStoppedListening;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioInputEvents*() noexcept;

static inline ::Meta::WitAi::Events::UnityEventListeners::AudioEventListener* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e95b64, size 0x2a8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e958bc, size 0x2a8, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Meta::WitAi::Interfaces::IAudioInputEvents* const& __cordl_internal_get__events() const;

constexpr ::Meta::WitAi::Interfaces::IAudioInputEvents*& __cordl_internal_get__events() ;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& __cordl_internal_get_onMicAudioLevelChanged() const;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& __cordl_internal_get_onMicAudioLevelChanged() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onMicStartedListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onMicStartedListening() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onMicStoppedListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onMicStoppedListening() ;

constexpr void __cordl_internal_set__events(::Meta::WitAi::Interfaces::IAudioInputEvents*  value) ;

constexpr void __cordl_internal_set_onMicAudioLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value) ;

constexpr void __cordl_internal_set_onMicStartedListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onMicStoppedListening(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9e95e0c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioInputEvents, addr 0x9e957dc, size 0xe0, virtual false, abstract: false, final false
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* get_AudioInputEvents() ;

/// @brief Method get_OnMicAudioLevelChanged, addr 0x9e957c4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* get_OnMicAudioLevelChanged() ;

/// @brief Method get_OnMicStartedListening, addr 0x9e957cc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnMicStartedListening() ;

/// @brief Method get_OnMicStoppedListening, addr 0x9e957d4, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnMicStoppedListening() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr ::Meta::WitAi::Interfaces::IAudioInputEvents* i___Meta__WitAi__Interfaces__IAudioInputEvents() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioEventListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioEventListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioEventListener(AudioEventListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioEventListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioEventListener(AudioEventListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25687};

/// [SerializeField]
/// @brief Field onMicAudioLevelChanged, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitMicLevelChangedEvent*  ___onMicAudioLevelChanged;

/// [SerializeField]
/// @brief Field onMicStartedListening, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onMicStartedListening;

/// [SerializeField]
/// @brief Field onMicStoppedListening, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onMicStoppedListening;

/// @brief Field _events, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Interfaces::IAudioInputEvents*  ____events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener, ___onMicAudioLevelChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener, ___onMicStartedListening) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener, ___onMicStoppedListening) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener, ____events) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Events::UnityEventListeners::AudioEventListener) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::Events::UnityEventListeners
