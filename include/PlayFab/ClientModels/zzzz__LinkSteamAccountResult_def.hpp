#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkSteamAccountResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(LinkSteamAccountResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkSteamAccountResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkSteamAccountResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkSteamAccountResult*, "PlayFab.ClientModels", "LinkSteamAccountResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkSteamAccountResult
class CORDL_TYPE LinkSteamAccountResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::LinkSteamAccountResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84dfb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkSteamAccountResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkSteamAccountResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkSteamAccountResult(LinkSteamAccountResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkSteamAccountResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkSteamAccountResult(LinkSteamAccountResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20133};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::LinkSteamAccountResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
