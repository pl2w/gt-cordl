#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/WitUtteranceMatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/CallbackHandlers/zzzz__WitResponseHandler_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitUtteranceMatcher)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Utilities {
class StringEvent;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class WitUtteranceMatcher;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher*, "Meta.WitAi.CallbackHandlers", "WitUtteranceMatcher");
// [AddComponentMenu("Wit.ai/Response Matchers/Utterance Matcher")]
// Dependencies Meta.WitAi.CallbackHandlers.WitResponseHandler
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
class CORDL_TYPE WitUtteranceMatcher : public ::Meta::WitAi::CallbackHandlers::WitResponseHandler {
public:
// Declarations
/// @brief Field exactMatch, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_exactMatch, put=__cordl_internal_set_exactMatch)) bool  exactMatch;

/// @brief Field onUtteranceMatched, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUtteranceMatched, put=__cordl_internal_set_onUtteranceMatched)) ::Meta::WitAi::Utilities::StringEvent*  onUtteranceMatched;

/// @brief Field regex, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_regex, put=__cordl_internal_set_regex)) ::System::Text::RegularExpressions::Regex*  regex;

/// @brief Field searchText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchText, put=__cordl_internal_set_searchText)) ::StringW  searchText;

/// @brief Field useRegex, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRegex, put=__cordl_internal_set_useRegex)) bool  useRegex;

/// @brief Method IsMatch, addr 0x9e9e934, size 0x174, virtual false, abstract: false, final false
inline bool IsMatch(::StringW  text) ;

static inline ::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher* New_ctor() ;

/// @brief Method OnResponseInvalid, addr 0x9e9eaa8, size 0x4, virtual true, abstract: false, final false
inline void OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error) ;

/// @brief Method OnResponseSuccess, addr 0x9e9eaac, size 0xa4, virtual true, abstract: false, final false
inline void OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method OnValidateResponse, addr 0x9e9e884, size 0xb0, virtual true, abstract: false, final false
inline ::StringW OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse) ;

constexpr bool const& __cordl_internal_get_exactMatch() const;

constexpr bool& __cordl_internal_get_exactMatch() ;

constexpr ::Meta::WitAi::Utilities::StringEvent* const& __cordl_internal_get_onUtteranceMatched() const;

constexpr ::Meta::WitAi::Utilities::StringEvent*& __cordl_internal_get_onUtteranceMatched() ;

constexpr ::System::Text::RegularExpressions::Regex* const& __cordl_internal_get_regex() const;

constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get_regex() ;

constexpr ::StringW const& __cordl_internal_get_searchText() const;

constexpr ::StringW& __cordl_internal_get_searchText() ;

constexpr bool const& __cordl_internal_get_useRegex() const;

constexpr bool& __cordl_internal_get_useRegex() ;

constexpr void __cordl_internal_set_exactMatch(bool  value) ;

constexpr void __cordl_internal_set_onUtteranceMatched(::Meta::WitAi::Utilities::StringEvent*  value) ;

constexpr void __cordl_internal_set_regex(::System::Text::RegularExpressions::Regex*  value) ;

constexpr void __cordl_internal_set_searchText(::StringW  value) ;

constexpr void __cordl_internal_set_useRegex(bool  value) ;

/// @brief Method .ctor, addr 0x9e9eb50, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitUtteranceMatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitUtteranceMatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitUtteranceMatcher(WitUtteranceMatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitUtteranceMatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitUtteranceMatcher(WitUtteranceMatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25738};

/// [SerializeField]
/// @brief Field searchText, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___searchText;

/// [SerializeField]
/// @brief Field exactMatch, offset: 0x38, size: 0x1, def value: None
 bool  ___exactMatch;

/// [SerializeField]
/// @brief Field useRegex, offset: 0x39, size: 0x1, def value: None
 bool  ___useRegex;

/// [SerializeField]
/// @brief Field onUtteranceMatched, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::Utilities::StringEvent*  ___onUtteranceMatched;

/// @brief Field regex, offset: 0x48, size: 0x8, def value: None
 ::System::Text::RegularExpressions::Regex*  ___regex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher, ___searchText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher, ___exactMatch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher, ___useRegex) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher, ___onUtteranceMatched) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher, ___regex) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::WitUtteranceMatcher) == 0x50, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
