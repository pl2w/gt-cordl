#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitResponseEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(WitResponseEvent)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class WitResponseEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::WitResponseEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::WitResponseEvent*, "Meta.WitAi.Events", "WitResponseEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.WitResponseEvent
class CORDL_TYPE WitResponseEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*> {
public:
// Declarations
static inline ::Meta::WitAi::Events::WitResponseEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e9569c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseEvent(WitResponseEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseEvent(WitResponseEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::WitResponseEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
