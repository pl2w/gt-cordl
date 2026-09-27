#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/StringEntityMatchEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringEntityMatchEvent)
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class StringEntityMatchEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*, "Meta.WitAi.CallbackHandlers", "StringEntityMatchEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.StringEntityMatchEvent
class CORDL_TYPE StringEntityMatchEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e9d0e0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringEntityMatchEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringEntityMatchEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringEntityMatchEvent(StringEntityMatchEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringEntityMatchEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringEntityMatchEvent(StringEntityMatchEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25728};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
