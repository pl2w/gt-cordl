#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitMicLevelChangedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WitMicLevelChangedEvent)
// Forward declare root types
namespace Meta::WitAi::Events {
class WitMicLevelChangedEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::WitMicLevelChangedEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::WitMicLevelChangedEvent*, "Meta.WitAi.Events", "WitMicLevelChangedEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.WitMicLevelChangedEvent
class CORDL_TYPE WitMicLevelChangedEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
static inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e8558c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitMicLevelChangedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitMicLevelChangedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitMicLevelChangedEvent(WitMicLevelChangedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitMicLevelChangedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitMicLevelChangedEvent(WitMicLevelChangedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25679};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::WitMicLevelChangedEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
