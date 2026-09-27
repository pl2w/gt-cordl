#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkKongregateAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkKongregateAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkKongregateAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkKongregateAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkKongregateAccountResult*, "PlayFab.ClientModels", "UnlinkKongregateAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkKongregateAccountResult
class CORDL_TYPE UnlinkKongregateAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkKongregateAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e360, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkKongregateAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkKongregateAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkKongregateAccountResult(UnlinkKongregateAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkKongregateAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkKongregateAccountResult(UnlinkKongregateAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20260};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkKongregateAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
