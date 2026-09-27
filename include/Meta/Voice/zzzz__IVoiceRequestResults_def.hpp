#pragma once
// IWYU pragma private; include "Meta/Voice/IVoiceRequestResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IVoiceRequestResults)
// Forward declare root types
namespace Meta::Voice {
class IVoiceRequestResults;
}
// Write type traits
MARK_REF_T(::Meta::Voice::IVoiceRequestResults*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::IVoiceRequestResults*, "Meta.Voice", "IVoiceRequestResults");
// Dependencies 
namespace Meta::Voice {
// Is value type: false
// CS Name: Meta.Voice.IVoiceRequestResults
class CORDL_TYPE IVoiceRequestResults {
public:
// Declarations
/// @brief Method SetCancel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetCancel(::StringW  reason) ;

/// @brief Method SetError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetError(int32_t  errorStatusCode, ::StringW  error) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceRequestResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceRequestResults(IVoiceRequestResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25432};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
