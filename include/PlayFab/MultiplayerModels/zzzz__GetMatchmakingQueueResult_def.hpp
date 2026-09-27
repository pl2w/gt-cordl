#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchmakingQueueResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetMatchmakingQueueResult)
namespace PlayFab::MultiplayerModels {
class MatchmakingQueueConfig;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetMatchmakingQueueResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetMatchmakingQueueResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetMatchmakingQueueResult*, "PlayFab.MultiplayerModels", "GetMatchmakingQueueResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetMatchmakingQueueResult
class CORDL_TYPE GetMatchmakingQueueResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field MatchmakingQueue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchmakingQueue, put=__cordl_internal_set_MatchmakingQueue)) ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*  MatchmakingQueue;

static inline ::PlayFab::MultiplayerModels::GetMatchmakingQueueResult* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::MatchmakingQueueConfig* const& __cordl_internal_get_MatchmakingQueue() const;

constexpr ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*& __cordl_internal_get_MatchmakingQueue() ;

constexpr void __cordl_internal_set_MatchmakingQueue(::PlayFab::MultiplayerModels::MatchmakingQueueConfig*  value) ;

/// @brief Method .ctor, addr 0xa840998, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMatchmakingQueueResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMatchmakingQueueResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMatchmakingQueueResult(GetMatchmakingQueueResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMatchmakingQueueResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMatchmakingQueueResult(GetMatchmakingQueueResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19653};

/// @brief Field MatchmakingQueue, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*  ___MatchmakingQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingQueueResult, ___MatchmakingQueue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetMatchmakingQueueResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
