#pragma once
// IWYU pragma private; include "Meta/Voice/INLPRequestResults_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INLPRequestResults_1)
namespace Meta::Voice {
class ITranscriptionRequestResults;
}
namespace Meta::Voice {
class IVoiceRequestResults;
}
// Forward declare root types
namespace Meta::Voice {
template<typename TResponseData>
class INLPRequestResults_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::INLPRequestResults_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::INLPRequestResults_1, "Meta.Voice", "INLPRequestResults`1");
// Dependencies 
namespace Meta::Voice {
// cpp template
template<typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.INLPRequestResults`1<TResponseData>
class CORDL_TYPE INLPRequestResults_1 {
public:
// Declarations
 __declspec(property(get=get_ResponseData)) TResponseData  ResponseData;

/// @brief Convert operator to "::Meta::Voice::ITranscriptionRequestResults"
constexpr operator  ::Meta::Voice::ITranscriptionRequestResults*() noexcept;

/// @brief Convert operator to "::Meta::Voice::IVoiceRequestResults"
constexpr operator  ::Meta::Voice::IVoiceRequestResults*() noexcept;

/// @brief Method SetResponseData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetResponseData(TResponseData  responseData) ;

/// @brief Method get_ResponseData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TResponseData get_ResponseData() ;

/// @brief Convert to "::Meta::Voice::ITranscriptionRequestResults"
constexpr ::Meta::Voice::ITranscriptionRequestResults* i___Meta__Voice__ITranscriptionRequestResults() noexcept;

/// @brief Convert to "::Meta::Voice::IVoiceRequestResults"
constexpr ::Meta::Voice::IVoiceRequestResults* i___Meta__Voice__IVoiceRequestResults() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INLPRequestResults_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INLPRequestResults_1(INLPRequestResults_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25436};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
