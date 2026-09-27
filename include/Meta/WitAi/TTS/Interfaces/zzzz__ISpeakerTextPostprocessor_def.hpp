#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ISpeakerTextPostprocessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ISpeakerTextPostprocessor)
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class ISpeakerTextPostprocessor;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*, "Meta.WitAi.TTS.Interfaces", "ISpeakerTextPostprocessor");
// Dependencies 
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.ISpeakerTextPostprocessor
class CORDL_TYPE ISpeakerTextPostprocessor {
public:
// Declarations
/// @brief Method OnPostprocessTTS, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPostprocessTTS(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::System::Collections::Generic::List_1<::StringW>*  phrases) ;

// Ctor Parameters [CppParam { name: "", ty: "ISpeakerTextPostprocessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISpeakerTextPostprocessor(ISpeakerTextPostprocessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29101};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Interfaces
