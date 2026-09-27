#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitRequestCreatedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(WitRequestCreatedEvent)
namespace Meta::WitAi {
class WitRequest;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class WitRequestCreatedEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::WitRequestCreatedEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::WitRequestCreatedEvent*, "Meta.WitAi.Events", "WitRequestCreatedEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.WitRequestCreatedEvent
class CORDL_TYPE WitRequestCreatedEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::WitRequest*> {
public:
// Declarations
static inline ::Meta::WitAi::Events::WitRequestCreatedEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e9560c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequestCreatedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequestCreatedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequestCreatedEvent(WitRequestCreatedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequestCreatedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequestCreatedEvent(WitRequestCreatedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25680};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::WitRequestCreatedEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
