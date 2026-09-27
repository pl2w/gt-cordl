#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/StringEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringEvent)
// Forward declare root types
namespace Meta::WitAi::Utilities {
class StringEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Utilities::StringEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::StringEvent*, "Meta.WitAi.Utilities", "StringEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.Utilities.StringEvent
class CORDL_TYPE StringEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::Utilities::StringEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e84af8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringEvent(StringEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringEvent(StringEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25578};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Utilities::StringEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
