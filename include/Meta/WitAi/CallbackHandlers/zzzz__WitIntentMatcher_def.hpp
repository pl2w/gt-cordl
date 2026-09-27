#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/WitIntentMatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/CallbackHandlers/zzzz__WitResponseHandler_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WitIntentMatcher)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class WitIntentMatcher;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::WitIntentMatcher*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::WitIntentMatcher*, "Meta.WitAi.CallbackHandlers", "WitIntentMatcher");
// Dependencies Meta.WitAi.CallbackHandlers.WitResponseHandler
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.WitIntentMatcher
class CORDL_TYPE WitIntentMatcher : public ::Meta::WitAi::CallbackHandlers::WitResponseHandler {
public:
// Declarations
/// @brief Field confidenceThreshold, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_confidenceThreshold, put=__cordl_internal_set_confidenceThreshold)) float_t  confidenceThreshold;

/// @brief Field intent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_intent, put=__cordl_internal_set_intent)) ::StringW  intent;

static inline ::Meta::WitAi::CallbackHandlers::WitIntentMatcher* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e9d514, size 0x88, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e9d128, size 0xd4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidateResponse, addr 0x9e9cde4, size 0x1c8, virtual true, abstract: false, final false
inline ::StringW OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse) ;

constexpr float_t const& __cordl_internal_get_confidenceThreshold() const;

constexpr float_t& __cordl_internal_get_confidenceThreshold() ;

constexpr ::StringW const& __cordl_internal_get_intent() const;

constexpr ::StringW& __cordl_internal_get_intent() ;

constexpr void __cordl_internal_set_confidenceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_intent(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e9cd18, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitIntentMatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitIntentMatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitIntentMatcher(WitIntentMatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitIntentMatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitIntentMatcher(WitIntentMatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25729};

/// [Header("Intent Settings")]
/// [SerializeField]
/// @brief Field intent, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___intent;

/// [FormerlySerializedAs("confidence")]
/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field confidenceThreshold, offset: 0x38, size: 0x4, def value: None
 float_t  ___confidenceThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitIntentMatcher, ___intent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitIntentMatcher, ___confidenceThreshold) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::WitIntentMatcher) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
