#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/ITranscriptionEventProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITranscriptionEventProvider)
namespace Meta::WitAi::Interfaces {
class ITranscriptionEvent;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class ITranscriptionEventProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::ITranscriptionEventProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::ITranscriptionEventProvider*, "Meta.WitAi.Interfaces", "ITranscriptionEventProvider");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.ITranscriptionEventProvider
class CORDL_TYPE ITranscriptionEventProvider {
public:
// Declarations
 __declspec(property(get=get_TranscriptionEvents)) ::Meta::WitAi::Interfaces::ITranscriptionEvent*  TranscriptionEvents;

/// @brief Method get_TranscriptionEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Interfaces::ITranscriptionEvent* get_TranscriptionEvents() ;

// Ctor Parameters [CppParam { name: "", ty: "ITranscriptionEventProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITranscriptionEventProvider(ITranscriptionEventProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25663};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
