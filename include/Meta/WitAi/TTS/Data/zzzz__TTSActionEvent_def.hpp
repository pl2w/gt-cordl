#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSActionEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__TTSStringEvent_def.hpp"
CORDL_MODULE_EXPORT(TTSActionEvent)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
class TTSActionEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Data::TTSActionEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSActionEvent*, "Meta.WitAi.TTS.Data", "TTSActionEvent");
// Dependencies Meta.WitAi.TTS.Data.TTSStringEvent
namespace Meta::WitAi::TTS::Data {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.TTSActionEvent
class CORDL_TYPE TTSActionEvent : public ::Meta::WitAi::TTS::Data::TTSStringEvent {
public:
// Declarations
/// @brief Field EMPTY_RESPONSE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EMPTY_RESPONSE, put=setStaticF_EMPTY_RESPONSE)) ::Meta::WitAi::Json::WitResponseNode*  EMPTY_RESPONSE;

 __declspec(property(get=get_Response)) ::Meta::WitAi::Json::WitResponseNode*  Response;

/// @brief Field response, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_response, put=__cordl_internal_set_response)) ::Meta::WitAi::Json::WitResponseNode*  response;

static inline ::Meta::WitAi::TTS::Data::TTSActionEvent* New_ctor() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_response() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_response() ;

constexpr void __cordl_internal_set_response(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method .ctor, addr 0x9e6842c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::WitAi::Json::WitResponseNode* getStaticF_EMPTY_RESPONSE() ;

/// @brief Method get_Response, addr 0x9e6659c, size 0xb0, virtual false, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Response() ;

static inline void setStaticF_EMPTY_RESPONSE(::Meta::WitAi::Json::WitResponseNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSActionEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSActionEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSActionEvent(TTSActionEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSActionEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSActionEvent(TTSActionEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29185};

/// @brief Field response, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___response;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSActionEvent, ___response) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSActionEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
