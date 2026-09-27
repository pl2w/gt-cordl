#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/JoinMatchmakingTicketResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(JoinMatchmakingTicketResult)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class JoinMatchmakingTicketResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::JoinMatchmakingTicketResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::JoinMatchmakingTicketResult*, "PlayFab.MultiplayerModels", "JoinMatchmakingTicketResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.JoinMatchmakingTicketResult
class CORDL_TYPE JoinMatchmakingTicketResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::JoinMatchmakingTicketResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa840a48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinMatchmakingTicketResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinMatchmakingTicketResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinMatchmakingTicketResult(JoinMatchmakingTicketResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinMatchmakingTicketResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinMatchmakingTicketResult(JoinMatchmakingTicketResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19675};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::JoinMatchmakingTicketResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
