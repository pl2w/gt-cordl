#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PostFunctionResultForEntityTriggeredActionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(PostFunctionResultForEntityTriggeredActionRequest)
namespace PlayFab::CloudScriptModels {
class EntityKey;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class PostFunctionResultForEntityTriggeredActionRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*, "PlayFab.CloudScriptModels", "PostFunctionResultForEntityTriggeredActionRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.PostFunctionResultForEntityTriggeredActionRequest
class CORDL_TYPE PostFunctionResultForEntityTriggeredActionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::CloudScriptModels::EntityKey*  Entity;

/// @brief Field FunctionResult, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionResult, put=__cordl_internal_set_FunctionResult)) ::PlayFab::CloudScriptModels::ExecuteFunctionResult*  FunctionResult;

static inline ::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* New_ctor() ;

constexpr ::PlayFab::CloudScriptModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::CloudScriptModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult* const& __cordl_internal_get_FunctionResult() const;

constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult*& __cordl_internal_get_FunctionResult() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::CloudScriptModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_FunctionResult(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  value) ;

/// @brief Method .ctor, addr 0xa842fbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostFunctionResultForEntityTriggeredActionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostFunctionResultForEntityTriggeredActionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PostFunctionResultForEntityTriggeredActionRequest(PostFunctionResultForEntityTriggeredActionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostFunctionResultForEntityTriggeredActionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostFunctionResultForEntityTriggeredActionRequest(PostFunctionResultForEntityTriggeredActionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19896};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::CloudScriptModels::EntityKey*  ___Entity;

/// @brief Field FunctionResult, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::CloudScriptModels::ExecuteFunctionResult*  ___FunctionResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest, ___FunctionResult) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
