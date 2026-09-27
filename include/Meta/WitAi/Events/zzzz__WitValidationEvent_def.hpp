#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitValidationEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(WitValidationEvent)
namespace Meta::WitAi::Data {
class VoiceSession;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class WitValidationEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::WitValidationEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::WitValidationEvent*, "Meta.WitAi.Events", "WitValidationEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.WitValidationEvent
class CORDL_TYPE WitValidationEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Data::VoiceSession*> {
public:
// Declarations
static inline ::Meta::WitAi::Events::WitValidationEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e950ac, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitValidationEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitValidationEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitValidationEvent(WitValidationEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitValidationEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitValidationEvent(WitValidationEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::WitValidationEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
