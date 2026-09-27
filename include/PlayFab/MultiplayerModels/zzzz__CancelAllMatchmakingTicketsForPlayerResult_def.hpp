#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancelAllMatchmakingTicketsForPlayerResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(CancelAllMatchmakingTicketsForPlayerResult)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CancelAllMatchmakingTicketsForPlayerResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*, "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CancelAllMatchmakingTicketsForPlayerResult
class CORDL_TYPE CancelAllMatchmakingTicketsForPlayerResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa8407e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancelAllMatchmakingTicketsForPlayerResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancelAllMatchmakingTicketsForPlayerResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CancelAllMatchmakingTicketsForPlayerResult(CancelAllMatchmakingTicketsForPlayerResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancelAllMatchmakingTicketsForPlayerResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancelAllMatchmakingTicketsForPlayerResult(CancelAllMatchmakingTicketsForPlayerResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19597};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
