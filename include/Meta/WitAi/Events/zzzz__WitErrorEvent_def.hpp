#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitErrorEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitErrorEvent)
// Forward declare root types
namespace Meta::WitAi::Events {
class WitErrorEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::WitErrorEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::WitErrorEvent*, "Meta.WitAi.Events", "WitErrorEvent");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.WitErrorEvent
class CORDL_TYPE WitErrorEvent : public ::UnityEngine::Events::UnityEvent_2<::StringW,::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::Events::WitErrorEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e955c4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitErrorEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitErrorEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitErrorEvent(WitErrorEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitErrorEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitErrorEvent(WitErrorEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25678};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::WitErrorEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
