#pragma once
// IWYU pragma private; include "Meta/WitAi/ServiceReferences/CombinedAudioEventReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Events/UnityEventListeners/zzzz__AudioEventListener_def.hpp"
#include "Meta/WitAi/ServiceReferences/zzzz__AudioInputServiceReference_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CombinedAudioEventReference)
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
namespace Meta::WitAi::ServiceReferences {
class CombinedAudioEventReference;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*, "Meta.WitAi.ServiceReferences", "CombinedAudioEventReference");
// Dependencies Meta.WitAi.Events.UnityEventListeners.AudioEventListener, Meta.WitAi.ServiceReferences.AudioInputServiceReference
namespace Meta::WitAi::ServiceReferences {
// Is value type: false
// CS Name: Meta.WitAi.ServiceReferences.CombinedAudioEventReference
class CORDL_TYPE CombinedAudioEventReference : public ::Meta::WitAi::ServiceReferences::AudioInputServiceReference {
public:
// Declarations
 __declspec(property(get=get_AudioEvents)) ::Meta::WitAi::Interfaces::IAudioInputEvents*  AudioEvents;

 __declspec(property(get=get_OnMicAudioLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  OnMicAudioLevelChanged;

 __declspec(property(get=get_OnMicStartedListening)) ::UnityEngine::Events::UnityEvent*  OnMicStartedListening;

 __declspec(property(get=get_OnMicStoppedListening)) ::UnityEngine::Events::UnityEvent*  OnMicStoppedListening;

/// @brief Field _onMicAudioLevelChanged, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onMicAudioLevelChanged, put=__cordl_internal_set__onMicAudioLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  _onMicAudioLevelChanged;

/// @brief Field _onMicStartedListening, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__onMicStartedListening, put=__cordl_internal_set__onMicStartedListening)) ::UnityEngine::Events::UnityEvent*  _onMicStartedListening;

/// @brief Field _onMicStoppedListening, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onMicStoppedListening, put=__cordl_internal_set__onMicStoppedListening)) ::UnityEngine::Events::UnityEvent*  _onMicStoppedListening;

/// @brief Field _sourceListeners, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceListeners, put=__cordl_internal_set__sourceListeners)) ::ArrayW<::UnityW<::Meta::WitAi::Events::UnityEventListeners::AudioEventListener>>  _sourceListeners;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioInputEvents*() noexcept;

/// @brief Method Awake, addr 0x9e850f0, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e8530c, size 0x19c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e85170, size 0x19c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& __cordl_internal_get__onMicAudioLevelChanged() const;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& __cordl_internal_get__onMicAudioLevelChanged() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onMicStartedListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onMicStartedListening() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onMicStoppedListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onMicStoppedListening() ;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::Events::UnityEventListeners::AudioEventListener>> const& __cordl_internal_get__sourceListeners() const;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::Events::UnityEventListeners::AudioEventListener>>& __cordl_internal_get__sourceListeners() ;

constexpr void __cordl_internal_set__onMicAudioLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value) ;

constexpr void __cordl_internal_set__onMicStartedListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onMicStoppedListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__sourceListeners(::ArrayW<::UnityW<::Meta::WitAi::Events::UnityEventListeners::AudioEventListener>>  value) ;

/// @brief Method .ctor, addr 0x9e854c0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioEvents, addr 0x9e850ec, size 0x4, virtual true, abstract: false, final false
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* get_AudioEvents() ;

/// @brief Method get_OnMicAudioLevelChanged, addr 0x9e854a8, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* get_OnMicAudioLevelChanged() ;

/// @brief Method get_OnMicStartedListening, addr 0x9e854b0, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnMicStartedListening() ;

/// @brief Method get_OnMicStoppedListening, addr 0x9e854b8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnMicStoppedListening() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr ::Meta::WitAi::Interfaces::IAudioInputEvents* i___Meta__WitAi__Interfaces__IAudioInputEvents() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CombinedAudioEventReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CombinedAudioEventReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CombinedAudioEventReference(CombinedAudioEventReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CombinedAudioEventReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CombinedAudioEventReference(CombinedAudioEventReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25586};

/// @brief Field _onMicAudioLevelChanged, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitMicLevelChangedEvent*  ____onMicAudioLevelChanged;

/// @brief Field _onMicStartedListening, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onMicStartedListening;

/// @brief Field _onMicStoppedListening, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onMicStoppedListening;

/// @brief Field _sourceListeners, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Meta::WitAi::Events::UnityEventListeners::AudioEventListener>>  ____sourceListeners;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ServiceReferences::CombinedAudioEventReference, ____onMicAudioLevelChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ServiceReferences::CombinedAudioEventReference, ____onMicStartedListening) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ServiceReferences::CombinedAudioEventReference, ____onMicStoppedListening) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::ServiceReferences::CombinedAudioEventReference, ____sourceListeners) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ServiceReferences::CombinedAudioEventReference) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::ServiceReferences
