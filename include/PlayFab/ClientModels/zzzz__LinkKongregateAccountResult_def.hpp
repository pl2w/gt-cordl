#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkKongregateAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(LinkKongregateAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkKongregateAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkKongregateAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkKongregateAccountResult*, "PlayFab.ClientModels", "LinkKongregateAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkKongregateAccountResult
class CORDL_TYPE LinkKongregateAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::LinkKongregateAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84df70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkKongregateAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkKongregateAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkKongregateAccountResult(LinkKongregateAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkKongregateAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkKongregateAccountResult(LinkKongregateAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::LinkKongregateAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
