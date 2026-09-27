#pragma once
// IWYU pragma private; include "Meta/Voice/UserTranscriptionRequestEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserTranscriptionRequestEvent)
// Forward declare root types
namespace Meta::Voice {
class UserTranscriptionRequestEvent;
}
// Write type traits
MARK_REF_T(::Meta::Voice::UserTranscriptionRequestEvent*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::UserTranscriptionRequestEvent*, "Meta.Voice", "UserTranscriptionRequestEvent");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Meta::Voice {
// Is value type: false
// CS Name: Meta.Voice.UserTranscriptionRequestEvent
class CORDL_TYPE UserTranscriptionRequestEvent : public ::UnityEngine::Events::UnityEvent_2<::StringW,::StringW> {
public:
// Declarations
static inline ::Meta::Voice::UserTranscriptionRequestEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e2742c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserTranscriptionRequestEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserTranscriptionRequestEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserTranscriptionRequestEvent(UserTranscriptionRequestEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserTranscriptionRequestEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserTranscriptionRequestEvent(UserTranscriptionRequestEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25450};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::UserTranscriptionRequestEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::Voice
