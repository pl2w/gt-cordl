#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitRequestOptionsEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(WitRequestOptionsEvent)
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class WitRequestOptionsEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::WitRequestOptionsEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::WitRequestOptionsEvent*, "Meta.WitAi.Events", "WitRequestOptionsEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.WitRequestOptionsEvent
class CORDL_TYPE WitRequestOptionsEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Configuration::WitRequestOptions*> {
public:
// Declarations
static inline ::Meta::WitAi::Events::WitRequestOptionsEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e95654, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequestOptionsEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequestOptionsEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequestOptionsEvent(WitRequestOptionsEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequestOptionsEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequestOptionsEvent(WitRequestOptionsEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25681};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::WitRequestOptionsEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
