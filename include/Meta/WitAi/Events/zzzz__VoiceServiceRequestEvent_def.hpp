#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/VoiceServiceRequestEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(VoiceServiceRequestEvent)
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class VoiceServiceRequestEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::VoiceServiceRequestEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::VoiceServiceRequestEvent*, "Meta.WitAi.Events", "VoiceServiceRequestEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.VoiceServiceRequestEvent
class CORDL_TYPE VoiceServiceRequestEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Requests::VoiceServiceRequest*> {
public:
// Declarations
static inline ::Meta::WitAi::Events::VoiceServiceRequestEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e9557c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceRequestEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceRequestEvent(VoiceServiceRequestEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceRequestEvent(VoiceServiceRequestEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25674};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::VoiceServiceRequestEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
