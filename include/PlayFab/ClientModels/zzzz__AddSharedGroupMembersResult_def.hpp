#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddSharedGroupMembersResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(AddSharedGroupMembersResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class AddSharedGroupMembersResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddSharedGroupMembersResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddSharedGroupMembersResult*, "PlayFab.ClientModels", "AddSharedGroupMembersResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddSharedGroupMembersResult
class CORDL_TYPE AddSharedGroupMembersResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::AddSharedGroupMembersResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84da28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddSharedGroupMembersResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddSharedGroupMembersResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddSharedGroupMembersResult(AddSharedGroupMembersResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddSharedGroupMembersResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddSharedGroupMembersResult(AddSharedGroupMembersResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19948};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::AddSharedGroupMembersResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
