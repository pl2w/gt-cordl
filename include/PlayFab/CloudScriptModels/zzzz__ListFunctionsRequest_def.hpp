#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ListFunctionsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(ListFunctionsRequest)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class ListFunctionsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::ListFunctionsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::ListFunctionsRequest*, "PlayFab.CloudScriptModels", "ListFunctionsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.ListFunctionsRequest
class CORDL_TYPE ListFunctionsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::CloudScriptModels::ListFunctionsRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa842f6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListFunctionsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListFunctionsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListFunctionsRequest(ListFunctionsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListFunctionsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListFunctionsRequest(ListFunctionsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19885};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::CloudScriptModels::ListFunctionsRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
