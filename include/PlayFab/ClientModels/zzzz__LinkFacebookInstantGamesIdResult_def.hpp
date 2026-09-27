#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkFacebookInstantGamesIdResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(LinkFacebookInstantGamesIdResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkFacebookInstantGamesIdResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkFacebookInstantGamesIdResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkFacebookInstantGamesIdResult*, "PlayFab.ClientModels", "LinkFacebookInstantGamesIdResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkFacebookInstantGamesIdResult
class CORDL_TYPE LinkFacebookInstantGamesIdResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::LinkFacebookInstantGamesIdResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84df30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkFacebookInstantGamesIdResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkFacebookInstantGamesIdResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkFacebookInstantGamesIdResult(LinkFacebookInstantGamesIdResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkFacebookInstantGamesIdResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkFacebookInstantGamesIdResult(LinkFacebookInstantGamesIdResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::LinkFacebookInstantGamesIdResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
