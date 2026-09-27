#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveSharedGroupMembersResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(RemoveSharedGroupMembersResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class RemoveSharedGroupMembersResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RemoveSharedGroupMembersResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RemoveSharedGroupMembersResult*, "PlayFab.ClientModels", "RemoveSharedGroupMembersResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RemoveSharedGroupMembersResult
class CORDL_TYPE RemoveSharedGroupMembersResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::RemoveSharedGroupMembersResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e1c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoveSharedGroupMembersResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoveSharedGroupMembersResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoveSharedGroupMembersResult(RemoveSharedGroupMembersResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoveSharedGroupMembersResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoveSharedGroupMembersResult(RemoveSharedGroupMembersResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20204};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::RemoveSharedGroupMembersResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
