#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitResponseDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitResponseDecoder)
namespace Meta::Voice {
template<typename TResults>
class INLPRequestResponseDecoder_1;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class WitResponseDecoder;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::WitResponseDecoder*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitResponseDecoder*, "Meta.WitAi.Requests", "WitResponseDecoder");
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitResponseDecoder
class CORDL_TYPE WitResponseDecoder : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr operator  ::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>*() noexcept;

/// @brief Method Decode, addr 0x9e92308, size 0x58, virtual true, abstract: false, final true
inline ::Meta::WitAi::Json::WitResponseNode* Decode(::StringW  rawResponse) ;

/// @brief Method GetResponseError, addr 0x9e9236c, size 0xc, virtual true, abstract: false, final true
inline ::StringW GetResponseError(::Meta::WitAi::Json::WitResponseNode*  results) ;

/// @brief Method GetResponseHasPartial, addr 0x9e92378, size 0x20, virtual true, abstract: false, final true
inline bool GetResponseHasPartial(::Meta::WitAi::Json::WitResponseNode*  results) ;

/// @brief Method GetResponseHasTranscription, addr 0x9e923a4, size 0xc, virtual true, abstract: false, final true
inline bool GetResponseHasTranscription(::Meta::WitAi::Json::WitResponseNode*  results) ;

/// @brief Method GetResponseIsTranscriptionFull, addr 0x9e923b0, size 0xc, virtual true, abstract: false, final true
inline bool GetResponseIsTranscriptionFull(::Meta::WitAi::Json::WitResponseNode*  results) ;

/// @brief Method GetResponseStatusCode, addr 0x9e92360, size 0xc, virtual true, abstract: false, final true
inline int32_t GetResponseStatusCode(::Meta::WitAi::Json::WitResponseNode*  results) ;

/// @brief Method GetResponseTranscription, addr 0x9e92398, size 0xc, virtual true, abstract: false, final true
inline ::StringW GetResponseTranscription(::Meta::WitAi::Json::WitResponseNode*  results) ;

static inline ::Meta::WitAi::Requests::WitResponseDecoder* New_ctor() ;

/// @brief Method .ctor, addr 0x9e91724, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr ::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>* i___Meta__Voice__INLPRequestResponseDecoder_1___Meta__WitAi__Json__WitResponseNode__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseDecoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseDecoder(WitResponseDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseDecoder(WitResponseDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25648};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Requests::WitResponseDecoder) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
