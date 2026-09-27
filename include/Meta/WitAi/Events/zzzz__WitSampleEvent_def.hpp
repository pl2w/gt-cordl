#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitSampleEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitSampleEvent)
// Forward declare root types
namespace Meta::WitAi::Events {
class WitSampleEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::WitSampleEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::WitSampleEvent*, "Meta.WitAi.Events", "WitSampleEvent");
// Dependencies UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.WitSampleEvent
class CORDL_TYPE WitSampleEvent : public ::UnityEngine::Events::UnityEvent_3<::ArrayW<float_t>,int32_t,float_t> {
public:
// Declarations
static inline ::Meta::WitAi::Events::WitSampleEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e94dc8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitSampleEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitSampleEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitSampleEvent(WitSampleEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitSampleEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitSampleEvent(WitSampleEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25683};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::WitSampleEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
