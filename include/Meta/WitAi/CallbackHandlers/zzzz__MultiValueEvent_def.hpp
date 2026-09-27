#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/MultiValueEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MultiValueEvent)
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class MultiValueEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::MultiValueEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::MultiValueEvent*, "Meta.WitAi.CallbackHandlers", "MultiValueEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.MultiValueEvent
class CORDL_TYPE MultiValueEvent : public ::UnityEngine::Events::UnityEvent_1<::ArrayW<::StringW>> {
public:
// Declarations
static inline ::Meta::WitAi::CallbackHandlers::MultiValueEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e9e6b0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiValueEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiValueEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiValueEvent(MultiValueEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiValueEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiValueEvent(MultiValueEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25732};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::CallbackHandlers::MultiValueEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
