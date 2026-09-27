#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/WitResponseMatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/CallbackHandlers/zzzz__FormattedValueEvents_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ValuePathMatcher_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitIntentMatcher_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitResponseMatcher)
namespace Meta::WitAi::CallbackHandlers {
class MultiValueEvent;
}
namespace Meta::WitAi::CallbackHandlers {
class ValuePathMatcher;
}
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
class WitResponseMatcher;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::WitResponseMatcher*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::WitResponseMatcher*, "Meta.WitAi.CallbackHandlers", "WitResponseMatcher");
// [AddComponentMenu("Wit.ai/Response Matchers/Response Matcher")]
// Dependencies Meta.WitAi.CallbackHandlers.FormattedValueEvents, Meta.WitAi.CallbackHandlers.ValuePathMatcher, Meta.WitAi.CallbackHandlers.WitIntentMatcher
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.WitResponseMatcher
class CORDL_TYPE WitResponseMatcher : public ::Meta::WitAi::CallbackHandlers::WitIntentMatcher {
public:
// Declarations
/// @brief Field formattedValueEvents, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_formattedValueEvents, put=__cordl_internal_set_formattedValueEvents)) ::ArrayW<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>  formattedValueEvents;

/// @brief Field onDidNotMatch, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDidNotMatch, put=__cordl_internal_set_onDidNotMatch)) ::Meta::WitAi::Utilities::StringEvent*  onDidNotMatch;

/// @brief Field onMultiValueEvent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMultiValueEvent, put=__cordl_internal_set_onMultiValueEvent)) ::Meta::WitAi::CallbackHandlers::MultiValueEvent*  onMultiValueEvent;

/// @brief Field onOutOfDomain, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOutOfDomain, put=__cordl_internal_set_onOutOfDomain)) ::Meta::WitAi::Utilities::StringEvent*  onOutOfDomain;

/// @brief Field valueMatchers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueMatchers, put=__cordl_internal_set_valueMatchers)) ::ArrayW<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>  valueMatchers;

/// @brief Field valueRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_valueRegex, put=setStaticF_valueRegex)) ::System::Text::RegularExpressions::Regex*  valueRegex;

/// @brief Method CompareDouble, addr 0x9e9e484, size 0x154, virtual false, abstract: false, final false
inline bool CompareDouble(::StringW  value, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*  matcher) ;

/// @brief Method CompareFloat, addr 0x9e9e328, size 0x15c, virtual false, abstract: false, final false
inline bool CompareFloat(::StringW  value, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*  matcher) ;

/// @brief Method CompareInt, addr 0x9e9e240, size 0xe8, virtual false, abstract: false, final false
inline bool CompareInt(::StringW  value, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*  matcher) ;

static inline ::Meta::WitAi::CallbackHandlers::WitResponseMatcher* New_ctor() ;

/// @brief Method OnResponseInvalid, addr 0x9e9da38, size 0xe8, virtual true, abstract: false, final false
inline void OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error) ;

/// @brief Method OnResponseSuccess, addr 0x9e9db20, size 0x440, virtual true, abstract: false, final false
inline void OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method OnValidateResponse, addr 0x9e9d924, size 0xa0, virtual true, abstract: false, final false
inline ::StringW OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse) ;

/// @brief Method ValueMatches, addr 0x9e9d9c4, size 0x74, virtual false, abstract: false, final false
inline bool ValueMatches(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method ValueMatches, addr 0x9e9e104, size 0x13c, virtual false, abstract: false, final false
inline bool ValueMatches(::Meta::WitAi::Json::WitResponseNode*  response, ::Meta::WitAi::CallbackHandlers::ValuePathMatcher*  matcher) ;

constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*> const& __cordl_internal_get_formattedValueEvents() const;

constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>& __cordl_internal_get_formattedValueEvents() ;

constexpr ::Meta::WitAi::Utilities::StringEvent* const& __cordl_internal_get_onDidNotMatch() const;

constexpr ::Meta::WitAi::Utilities::StringEvent*& __cordl_internal_get_onDidNotMatch() ;

constexpr ::Meta::WitAi::CallbackHandlers::MultiValueEvent* const& __cordl_internal_get_onMultiValueEvent() const;

constexpr ::Meta::WitAi::CallbackHandlers::MultiValueEvent*& __cordl_internal_get_onMultiValueEvent() ;

constexpr ::Meta::WitAi::Utilities::StringEvent* const& __cordl_internal_get_onOutOfDomain() const;

constexpr ::Meta::WitAi::Utilities::StringEvent*& __cordl_internal_get_onOutOfDomain() ;

constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*> const& __cordl_internal_get_valueMatchers() const;

constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>& __cordl_internal_get_valueMatchers() ;

constexpr void __cordl_internal_set_formattedValueEvents(::ArrayW<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>  value) ;

constexpr void __cordl_internal_set_onDidNotMatch(::Meta::WitAi::Utilities::StringEvent*  value) ;

constexpr void __cordl_internal_set_onMultiValueEvent(::Meta::WitAi::CallbackHandlers::MultiValueEvent*  value) ;

constexpr void __cordl_internal_set_onOutOfDomain(::Meta::WitAi::Utilities::StringEvent*  value) ;

constexpr void __cordl_internal_set_valueMatchers(::ArrayW<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>  value) ;

/// @brief Method .ctor, addr 0x9e9e5d8, size 0xd8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_valueRegex() ;

static inline void setStaticF_valueRegex(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseMatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseMatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseMatcher(WitResponseMatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseMatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseMatcher(WitResponseMatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25731};

/// [FormerlySerializedAs("valuePaths")]
/// [Header("Value Matching")]
/// [SerializeField]
/// @brief Field valueMatchers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>  ___valueMatchers;

/// [Header("Output")]
/// [SerializeField]
/// @brief Field formattedValueEvents, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>  ___formattedValueEvents;

/// [SerializeField]
/// @brief Field onMultiValueEvent, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::CallbackHandlers::MultiValueEvent*  ___onMultiValueEvent;

/// [TooltipBox("Triggered if the matching conditions did not match. The parameter will be the transcription that was received. This will only trigger if there were values for intents or entities, but those values didn\'t match this matcher.")]
/// [SerializeField]
/// @brief Field onDidNotMatch, offset: 0x58, size: 0x8, def value: None
 ::Meta::WitAi::Utilities::StringEvent*  ___onDidNotMatch;

/// [TooltipBox("Triggered if a request was checked and no intents were found. This will still trigger if entities match and only applies to intents. The parameter will be the transcription.")]
/// [SerializeField]
/// @brief Field onOutOfDomain, offset: 0x60, size: 0x8, def value: None
 ::Meta::WitAi::Utilities::StringEvent*  ___onOutOfDomain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitResponseMatcher, ___valueMatchers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitResponseMatcher, ___formattedValueEvents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitResponseMatcher, ___onMultiValueEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitResponseMatcher, ___onDidNotMatch) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitResponseMatcher, ___onOutOfDomain) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::WitResponseMatcher) == 0x68, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
