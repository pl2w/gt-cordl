#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/VoiceSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VoiceSession)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi {
class VoiceService;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class VoiceSession;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::VoiceSession*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::VoiceSession*, "Meta.WitAi.Data", "VoiceSession");
// Dependencies System.Object
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.VoiceSession
class CORDL_TYPE VoiceSession : public ::System::Object {
public:
// Declarations
/// @brief Field response, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_response, put=__cordl_internal_set_response)) ::Meta::WitAi::Json::WitResponseNode*  response;

/// @brief Field service, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_service, put=__cordl_internal_set_service)) ::UnityW<::Meta::WitAi::VoiceService>  service;

/// @brief Field validResponse, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_validResponse, put=__cordl_internal_set_validResponse)) bool  validResponse;

static inline ::Meta::WitAi::Data::VoiceSession* New_ctor() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_response() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_response() ;

constexpr ::UnityW<::Meta::WitAi::VoiceService> const& __cordl_internal_get_service() const;

constexpr ::UnityW<::Meta::WitAi::VoiceService>& __cordl_internal_get_service() ;

constexpr bool const& __cordl_internal_get_validResponse() const;

constexpr bool& __cordl_internal_get_validResponse() ;

constexpr void __cordl_internal_set_response(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set_service(::UnityW<::Meta::WitAi::VoiceService>  value) ;

constexpr void __cordl_internal_set_validResponse(bool  value) ;

/// @brief Method .ctor, addr 0x9e9a850, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSession", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSession(VoiceSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSession", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSession(VoiceSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25701};

/// @brief Field service, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::VoiceService>  ___service;

/// @brief Field response, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___response;

/// @brief Field validResponse, offset: 0x20, size: 0x1, def value: None
 bool  ___validResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::VoiceSession, ___service) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::VoiceSession, ___response) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::VoiceSession, ___validResponse) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::VoiceSession) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
