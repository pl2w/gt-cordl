#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/SimpleStringEntityHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/CallbackHandlers/zzzz__WitIntentMatcher_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SimpleStringEntityHandler)
namespace Meta::WitAi::CallbackHandlers {
class StringEntityMatchEvent;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class SimpleStringEntityHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler*, "Meta.WitAi.CallbackHandlers", "SimpleStringEntityHandler");
// [AddComponentMenu("Wit.ai/Response Matchers/Simple String Entity Handler")]
// Dependencies Meta.WitAi.CallbackHandlers.WitIntentMatcher
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler
class CORDL_TYPE SimpleStringEntityHandler : public ::Meta::WitAi::CallbackHandlers::WitIntentMatcher {
public:
// Declarations
 __declspec(property(get=get_OnIntentEntityTriggered)) ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*  OnIntentEntityTriggered;

/// @brief Field entity, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::StringW  entity;

/// @brief Field format, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_format, put=__cordl_internal_set_format)) ::StringW  format;

/// @brief Field onIntentEntityTriggered, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onIntentEntityTriggered, put=__cordl_internal_set_onIntentEntityTriggered)) ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*  onIntentEntityTriggered;

static inline ::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler* New_ctor() ;

/// @brief Method OnResponseInvalid, addr 0x9e9cfac, size 0x4, virtual true, abstract: false, final false
inline void OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error) ;

/// @brief Method OnResponseSuccess, addr 0x9e9cfb0, size 0xbc, virtual true, abstract: false, final false
inline void OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method OnValidateResponse, addr 0x9e9cd34, size 0xb0, virtual true, abstract: false, final false
inline ::StringW OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse) ;

constexpr ::StringW const& __cordl_internal_get_entity() const;

constexpr ::StringW& __cordl_internal_get_entity() ;

constexpr ::StringW const& __cordl_internal_get_format() const;

constexpr ::StringW& __cordl_internal_get_format() ;

constexpr ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent* const& __cordl_internal_get_onIntentEntityTriggered() const;

constexpr ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*& __cordl_internal_get_onIntentEntityTriggered() ;

constexpr void __cordl_internal_set_entity(::StringW  value) ;

constexpr void __cordl_internal_set_format(::StringW  value) ;

constexpr void __cordl_internal_set_onIntentEntityTriggered(::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*  value) ;

/// @brief Method .ctor, addr 0x9e9d06c, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnIntentEntityTriggered, addr 0x9e9cd2c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent* get_OnIntentEntityTriggered() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleStringEntityHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleStringEntityHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleStringEntityHandler(SimpleStringEntityHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleStringEntityHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleStringEntityHandler(SimpleStringEntityHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25727};

/// [SerializeField]
/// @brief Field entity, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___entity;

/// [SerializeField]
/// @brief Field format, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___format;

/// [SerializeField]
/// @brief Field onIntentEntityTriggered, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*  ___onIntentEntityTriggered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler, ___entity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler, ___format) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler, ___onIntentEntityTriggered) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::SimpleStringEntityHandler) == 0x58, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
