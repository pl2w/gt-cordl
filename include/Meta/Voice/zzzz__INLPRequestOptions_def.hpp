#pragma once
// IWYU pragma private; include "Meta/Voice/INLPRequestOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INLPRequestOptions)
namespace Meta::Voice {
class ITranscriptionRequestOptions;
}
namespace Meta::Voice {
class IVoiceRequestOptions;
}
namespace Meta::Voice {
struct NLPRequestInputType;
}
// Forward declare root types
namespace Meta::Voice {
class INLPRequestOptions;
}
// Write type traits
MARK_REF_T(::Meta::Voice::INLPRequestOptions*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::INLPRequestOptions*, "Meta.Voice", "INLPRequestOptions");
// Dependencies 
namespace Meta::Voice {
// Is value type: false
// CS Name: Meta.Voice.INLPRequestOptions
class CORDL_TYPE INLPRequestOptions {
public:
// Declarations
 __declspec(property(get=get_InputType, put=set_InputType)) ::Meta::Voice::NLPRequestInputType  InputType;

/// @brief Convert operator to "::Meta::Voice::ITranscriptionRequestOptions"
constexpr operator  ::Meta::Voice::ITranscriptionRequestOptions*() noexcept;

/// @brief Convert operator to "::Meta::Voice::IVoiceRequestOptions"
constexpr operator  ::Meta::Voice::IVoiceRequestOptions*() noexcept;

/// @brief Method get_InputType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::NLPRequestInputType get_InputType() ;

/// @brief Convert to "::Meta::Voice::ITranscriptionRequestOptions"
constexpr ::Meta::Voice::ITranscriptionRequestOptions* i___Meta__Voice__ITranscriptionRequestOptions() noexcept;

/// @brief Convert to "::Meta::Voice::IVoiceRequestOptions"
constexpr ::Meta::Voice::IVoiceRequestOptions* i___Meta__Voice__IVoiceRequestOptions() noexcept;

/// @brief Method set_InputType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_InputType(::Meta::Voice::NLPRequestInputType  value) ;

// Ctor Parameters [CppParam { name: "", ty: "INLPRequestOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INLPRequestOptions(INLPRequestOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25434};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
