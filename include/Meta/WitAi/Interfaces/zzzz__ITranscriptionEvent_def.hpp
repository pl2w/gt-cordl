#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/ITranscriptionEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITranscriptionEvent)
namespace Meta::WitAi::Events {
class WitTranscriptionEvent;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class ITranscriptionEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::ITranscriptionEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::ITranscriptionEvent*, "Meta.WitAi.Interfaces", "ITranscriptionEvent");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.ITranscriptionEvent
class CORDL_TYPE ITranscriptionEvent {
public:
// Declarations
 __declspec(property(get=get_OnFullTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnFullTranscription;

 __declspec(property(get=get_OnPartialTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnPartialTranscription;

/// @brief Method get_OnFullTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnFullTranscription() ;

/// @brief Method get_OnPartialTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnPartialTranscription() ;

// Ctor Parameters [CppParam { name: "", ty: "ITranscriptionEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITranscriptionEvent(ITranscriptionEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25662};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
