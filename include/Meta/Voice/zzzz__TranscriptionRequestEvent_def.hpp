#pragma once
// IWYU pragma private; include "Meta/Voice/TranscriptionRequestEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TranscriptionRequestEvent)
// Forward declare root types
namespace Meta::Voice {
class TranscriptionRequestEvent;
}
// Write type traits
MARK_REF_T(::Meta::Voice::TranscriptionRequestEvent*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::TranscriptionRequestEvent*, "Meta.Voice", "TranscriptionRequestEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::Voice {
// Is value type: false
// CS Name: Meta.Voice.TranscriptionRequestEvent
class CORDL_TYPE TranscriptionRequestEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::Meta::Voice::TranscriptionRequestEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e273e4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TranscriptionRequestEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TranscriptionRequestEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TranscriptionRequestEvent(TranscriptionRequestEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TranscriptionRequestEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TranscriptionRequestEvent(TranscriptionRequestEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25449};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::TranscriptionRequestEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::Voice
