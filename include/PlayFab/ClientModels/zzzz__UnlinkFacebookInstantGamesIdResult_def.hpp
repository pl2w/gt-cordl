#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkFacebookInstantGamesIdResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkFacebookInstantGamesIdResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkFacebookInstantGamesIdResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdResult*, "PlayFab.ClientModels", "UnlinkFacebookInstantGamesIdResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkFacebookInstantGamesIdResult
class CORDL_TYPE UnlinkFacebookInstantGamesIdResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e320, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkFacebookInstantGamesIdResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkFacebookInstantGamesIdResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkFacebookInstantGamesIdResult(UnlinkFacebookInstantGamesIdResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkFacebookInstantGamesIdResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkFacebookInstantGamesIdResult(UnlinkFacebookInstantGamesIdResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
