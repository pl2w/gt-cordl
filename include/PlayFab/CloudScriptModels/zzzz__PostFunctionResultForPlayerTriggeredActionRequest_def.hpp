#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PostFunctionResultForPlayerTriggeredActionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(PostFunctionResultForPlayerTriggeredActionRequest)
namespace PlayFab::CloudScriptModels {
class EntityKey;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab::CloudScriptModels {
class PlayStreamEventEnvelopeModel;
}
namespace PlayFab::CloudScriptModels {
class PlayerProfileModel;
}
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class PostFunctionResultForPlayerTriggeredActionRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*, "PlayFab.CloudScriptModels", "PostFunctionResultForPlayerTriggeredActionRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.PostFunctionResultForPlayerTriggeredActionRequest
class CORDL_TYPE PostFunctionResultForPlayerTriggeredActionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::CloudScriptModels::EntityKey*  Entity;

/// @brief Field FunctionResult, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionResult, put=__cordl_internal_set_FunctionResult)) ::PlayFab::CloudScriptModels::ExecuteFunctionResult*  FunctionResult;

/// @brief Field PlayStreamEventEnvelope, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayStreamEventEnvelope, put=__cordl_internal_set_PlayStreamEventEnvelope)) ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*  PlayStreamEventEnvelope;

/// @brief Field PlayerProfile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerProfile, put=__cordl_internal_set_PlayerProfile)) ::PlayFab::CloudScriptModels::PlayerProfileModel*  PlayerProfile;

static inline ::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* New_ctor() ;

constexpr ::PlayFab::CloudScriptModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::CloudScriptModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult* const& __cordl_internal_get_FunctionResult() const;

constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult*& __cordl_internal_get_FunctionResult() ;

constexpr ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel* const& __cordl_internal_get_PlayStreamEventEnvelope() const;

constexpr ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*& __cordl_internal_get_PlayStreamEventEnvelope() ;

constexpr ::PlayFab::CloudScriptModels::PlayerProfileModel* const& __cordl_internal_get_PlayerProfile() const;

constexpr ::PlayFab::CloudScriptModels::PlayerProfileModel*& __cordl_internal_get_PlayerProfile() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::CloudScriptModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_FunctionResult(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  value) ;

constexpr void __cordl_internal_set_PlayStreamEventEnvelope(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*  value) ;

constexpr void __cordl_internal_set_PlayerProfile(::PlayFab::CloudScriptModels::PlayerProfileModel*  value) ;

/// @brief Method .ctor, addr 0xa842fcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostFunctionResultForPlayerTriggeredActionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostFunctionResultForPlayerTriggeredActionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PostFunctionResultForPlayerTriggeredActionRequest(PostFunctionResultForPlayerTriggeredActionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostFunctionResultForPlayerTriggeredActionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostFunctionResultForPlayerTriggeredActionRequest(PostFunctionResultForPlayerTriggeredActionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19898};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::CloudScriptModels::EntityKey*  ___Entity;

/// @brief Field FunctionResult, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::CloudScriptModels::ExecuteFunctionResult*  ___FunctionResult;

/// @brief Field PlayerProfile, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::CloudScriptModels::PlayerProfileModel*  ___PlayerProfile;

/// @brief Field PlayStreamEventEnvelope, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*  ___PlayStreamEventEnvelope;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest, ___FunctionResult) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest, ___PlayerProfile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest, ___PlayStreamEventEnvelope) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
