#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/OutOfScopeUtteranceHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/CallbackHandlers/zzzz__WitResponseHandler_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OutOfScopeUtteranceHandler)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Utilities {
class StringEvent;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class OutOfScopeUtteranceHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler*, "Meta.WitAi.CallbackHandlers", "OutOfScopeUtteranceHandler");
// [AddComponentMenu("Wit.ai/Response Matchers/Out Of Domain")]
// Dependencies Meta.WitAi.CallbackHandlers.WitResponseHandler
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler
class CORDL_TYPE OutOfScopeUtteranceHandler : public ::Meta::WitAi::CallbackHandlers::WitResponseHandler {
public:
// Declarations
/// @brief Field confidenceThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_confidenceThreshold, put=__cordl_internal_set_confidenceThreshold)) float_t  confidenceThreshold;

/// @brief Field onOutOfDomain, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOutOfDomain, put=__cordl_internal_set_onOutOfDomain)) ::Meta::WitAi::Utilities::StringEvent*  onOutOfDomain;

static inline ::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler* New_ctor() ;

/// @brief Method OnResponseInvalid, addr 0x9e9c9d4, size 0x4, virtual true, abstract: false, final false
inline void OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error) ;

/// @brief Method OnResponseSuccess, addr 0x9e9c9d8, size 0x70, virtual true, abstract: false, final false
inline void OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method OnValidateResponse, addr 0x9e9c8b0, size 0x124, virtual true, abstract: false, final false
inline ::StringW OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse) ;

constexpr float_t const& __cordl_internal_get_confidenceThreshold() const;

constexpr float_t& __cordl_internal_get_confidenceThreshold() ;

constexpr ::Meta::WitAi::Utilities::StringEvent* const& __cordl_internal_get_onOutOfDomain() const;

constexpr ::Meta::WitAi::Utilities::StringEvent*& __cordl_internal_get_onOutOfDomain() ;

constexpr void __cordl_internal_set_confidenceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_onOutOfDomain(::Meta::WitAi::Utilities::StringEvent*  value) ;

/// @brief Method .ctor, addr 0x9e9ca48, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutOfScopeUtteranceHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutOfScopeUtteranceHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OutOfScopeUtteranceHandler(OutOfScopeUtteranceHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutOfScopeUtteranceHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutOfScopeUtteranceHandler(OutOfScopeUtteranceHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25725};

/// [Tooltip("If set to a value greater than zero, any intent that returns with a confidence lower than this value will be treated as out of domain/scope.")]
/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field confidenceThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___confidenceThreshold;

/// [Space(8)]
/// [TooltipBox("Triggered when a activation on the associated AppVoiceExperience does not return any intents.")]
/// [SerializeField]
/// @brief Field onOutOfDomain, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Utilities::StringEvent*  ___onOutOfDomain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler, ___confidenceThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler, ___onOutOfDomain) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::OutOfScopeUtteranceHandler) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
