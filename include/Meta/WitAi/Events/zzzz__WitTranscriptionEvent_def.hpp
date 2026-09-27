#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitTranscriptionEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitTranscriptionEvent)
// Forward declare root types
namespace Meta::WitAi::Events {
class WitTranscriptionEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::WitTranscriptionEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::WitTranscriptionEvent*, "Meta.WitAi.Events", "WitTranscriptionEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.WitTranscriptionEvent
class CORDL_TYPE WitTranscriptionEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::Events::WitTranscriptionEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e94c88, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitTranscriptionEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitTranscriptionEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitTranscriptionEvent(WitTranscriptionEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitTranscriptionEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitTranscriptionEvent(WitTranscriptionEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25684};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::WitTranscriptionEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
