#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioInputEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioInputEvents)
namespace Meta::WitAi::Events {
class WitMicLevelChangedEvent;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IAudioInputEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IAudioInputEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IAudioInputEvents*, "Meta.WitAi.Interfaces", "IAudioInputEvents");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IAudioInputEvents
class CORDL_TYPE IAudioInputEvents {
public:
// Declarations
 __declspec(property(get=get_OnMicAudioLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  OnMicAudioLevelChanged;

 __declspec(property(get=get_OnMicStartedListening)) ::UnityEngine::Events::UnityEvent*  OnMicStartedListening;

 __declspec(property(get=get_OnMicStoppedListening)) ::UnityEngine::Events::UnityEvent*  OnMicStoppedListening;

/// @brief Method get_OnMicAudioLevelChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* get_OnMicAudioLevelChanged() ;

/// @brief Method get_OnMicStartedListening, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Events::UnityEvent* get_OnMicStartedListening() ;

/// @brief Method get_OnMicStoppedListening, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Events::UnityEvent* get_OnMicStoppedListening() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioInputEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioInputEvents(IAudioInputEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25658};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
