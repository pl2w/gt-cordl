#pragma once
// IWYU pragma private; include "Meta/Voice/INLPRequestResponseDecoder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INLPRequestResponseDecoder_1)
// Forward declare root types
namespace Meta::Voice {
template<typename TResults>
class INLPRequestResponseDecoder_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::INLPRequestResponseDecoder_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::INLPRequestResponseDecoder_1, "Meta.Voice", "INLPRequestResponseDecoder`1");
// Dependencies 
namespace Meta::Voice {
// cpp template
template<typename TResults>
// Is value type: false
// CS Name: Meta.Voice.INLPRequestResponseDecoder`1<TResults>
class CORDL_TYPE INLPRequestResponseDecoder_1 {
public:
// Declarations
/// @brief Method Decode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TResults Decode(::StringW  rawResponse) ;

/// @brief Method GetResponseError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetResponseError(TResults  results) ;

/// @brief Method GetResponseHasPartial, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetResponseHasPartial(TResults  results) ;

/// @brief Method GetResponseHasTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetResponseHasTranscription(TResults  results) ;

/// @brief Method GetResponseIsTranscriptionFull, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetResponseIsTranscriptionFull(TResults  results) ;

/// @brief Method GetResponseStatusCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetResponseStatusCode(TResults  results) ;

/// @brief Method GetResponseTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetResponseTranscription(TResults  results) ;

// Ctor Parameters [CppParam { name: "", ty: "INLPRequestResponseDecoder_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INLPRequestResponseDecoder_1(INLPRequestResponseDecoder_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25435};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
