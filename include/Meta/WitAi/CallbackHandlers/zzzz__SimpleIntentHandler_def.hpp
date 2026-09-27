#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/SimpleIntentHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/CallbackHandlers/zzzz__ConfidenceRange_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitIntentMatcher_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SimpleIntentHandler)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class SimpleIntentHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::SimpleIntentHandler*, "Meta.WitAi.CallbackHandlers", "SimpleIntentHandler");
// [AddComponentMenu("Wit.ai/Response Matchers/Simple Intent Handler")]
// Dependencies Meta.WitAi.CallbackHandlers.ConfidenceRange, Meta.WitAi.CallbackHandlers.WitIntentMatcher
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.SimpleIntentHandler
class CORDL_TYPE SimpleIntentHandler : public ::Meta::WitAi::CallbackHandlers::WitIntentMatcher {
public:
// Declarations
 __declspec(property(get=get_OnIntentTriggered)) ::UnityEngine::Events::UnityEvent*  OnIntentTriggered;

/// @brief Field allowConfidenceOverlap, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowConfidenceOverlap, put=__cordl_internal_set_allowConfidenceOverlap)) bool  allowConfidenceOverlap;

/// @brief Field confidenceRanges, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_confidenceRanges, put=__cordl_internal_set_confidenceRanges)) ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  confidenceRanges;

/// @brief Field onIntentTriggered, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onIntentTriggered, put=__cordl_internal_set_onIntentTriggered)) ::UnityEngine::Events::UnityEvent*  onIntentTriggered;

static inline ::Meta::WitAi::CallbackHandlers::SimpleIntentHandler* New_ctor() ;

/// @brief Method OnResponseInvalid, addr 0x9e9cbbc, size 0x4, virtual true, abstract: false, final false
inline void OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error) ;

/// @brief Method OnResponseSuccess, addr 0x9e9cac4, size 0x38, virtual true, abstract: false, final false
inline void OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method UpdateRanges, addr 0x9e9cafc, size 0xc0, virtual false, abstract: false, final false
inline void UpdateRanges(::Meta::WitAi::Json::WitResponseNode*  response) ;

constexpr bool const& __cordl_internal_get_allowConfidenceOverlap() const;

constexpr bool& __cordl_internal_get_allowConfidenceOverlap() ;

constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*> const& __cordl_internal_get_confidenceRanges() const;

constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>& __cordl_internal_get_confidenceRanges() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onIntentTriggered() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onIntentTriggered() ;

constexpr void __cordl_internal_set_allowConfidenceOverlap(bool  value) ;

constexpr void __cordl_internal_set_confidenceRanges(::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  value) ;

constexpr void __cordl_internal_set_onIntentTriggered(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9e9cca0, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnIntentTriggered, addr 0x9e9cabc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnIntentTriggered() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleIntentHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleIntentHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleIntentHandler(SimpleIntentHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleIntentHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleIntentHandler(SimpleIntentHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25726};

/// [SerializeField]
/// @brief Field onIntentTriggered, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onIntentTriggered;

/// [Tooltip("Confidence ranges are executed in order. If checked, all confidence values will be checked instead of stopping on the first one that matches.")]
/// [SerializeField]
/// @brief Field allowConfidenceOverlap, offset: 0x48, size: 0x1, def value: None
 bool  ___allowConfidenceOverlap;

/// [SerializeField]
/// @brief Field confidenceRanges, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  ___confidenceRanges;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::SimpleIntentHandler, ___onIntentTriggered) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::SimpleIntentHandler, ___allowConfidenceOverlap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::SimpleIntentHandler, ___confidenceRanges) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::SimpleIntentHandler) == 0x58, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
