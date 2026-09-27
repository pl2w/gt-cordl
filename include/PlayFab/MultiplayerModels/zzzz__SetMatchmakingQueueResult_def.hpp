#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/SetMatchmakingQueueResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(SetMatchmakingQueueResult)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class SetMatchmakingQueueResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::SetMatchmakingQueueResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::SetMatchmakingQueueResult*, "PlayFab.MultiplayerModels", "SetMatchmakingQueueResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.SetMatchmakingQueueResult
class CORDL_TYPE SetMatchmakingQueueResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::SetMatchmakingQueueResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa840c10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetMatchmakingQueueResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetMatchmakingQueueResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetMatchmakingQueueResult(SetMatchmakingQueueResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetMatchmakingQueueResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetMatchmakingQueueResult(SetMatchmakingQueueResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19735};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::SetMatchmakingQueueResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
