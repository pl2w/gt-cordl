#pragma once
// IWYU pragma private; include "Meta/Voice/ITranscriptionRequestResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITranscriptionRequestResults)
namespace Meta::Voice {
class IVoiceRequestResults;
}
// Forward declare root types
namespace Meta::Voice {
class ITranscriptionRequestResults;
}
// Write type traits
MARK_REF_T(::Meta::Voice::ITranscriptionRequestResults*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::ITranscriptionRequestResults*, "Meta.Voice", "ITranscriptionRequestResults");
// Dependencies 
namespace Meta::Voice {
// Is value type: false
// CS Name: Meta.Voice.ITranscriptionRequestResults
class CORDL_TYPE ITranscriptionRequestResults {
public:
// Declarations
 __declspec(property(get=get_Transcription)) ::StringW  Transcription;

/// @brief Convert operator to "::Meta::Voice::IVoiceRequestResults"
constexpr operator  ::Meta::Voice::IVoiceRequestResults*() noexcept;

/// @brief Method SetTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetTranscription(::StringW  transcription, bool  full) ;

/// @brief Method get_Transcription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Transcription() ;

/// @brief Convert to "::Meta::Voice::IVoiceRequestResults"
constexpr ::Meta::Voice::IVoiceRequestResults* i___Meta__Voice__IVoiceRequestResults() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITranscriptionRequestResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITranscriptionRequestResults(ITranscriptionRequestResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25447};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
