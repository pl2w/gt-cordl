#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/SetMatchmakingQueueRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(SetMatchmakingQueueRequest)
namespace PlayFab::MultiplayerModels {
class MatchmakingQueueConfig;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class SetMatchmakingQueueRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::SetMatchmakingQueueRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::SetMatchmakingQueueRequest*, "PlayFab.MultiplayerModels", "SetMatchmakingQueueRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.SetMatchmakingQueueRequest
class CORDL_TYPE SetMatchmakingQueueRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field MatchmakingQueue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchmakingQueue, put=__cordl_internal_set_MatchmakingQueue)) ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*  MatchmakingQueue;

static inline ::PlayFab::MultiplayerModels::SetMatchmakingQueueRequest* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::MatchmakingQueueConfig* const& __cordl_internal_get_MatchmakingQueue() const;

constexpr ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*& __cordl_internal_get_MatchmakingQueue() ;

constexpr void __cordl_internal_set_MatchmakingQueue(::PlayFab::MultiplayerModels::MatchmakingQueueConfig*  value) ;

/// @brief Method .ctor, addr 0xa840c08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetMatchmakingQueueRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetMatchmakingQueueRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetMatchmakingQueueRequest(SetMatchmakingQueueRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetMatchmakingQueueRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetMatchmakingQueueRequest(SetMatchmakingQueueRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19734};

/// @brief Field MatchmakingQueue, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::MatchmakingQueueConfig*  ___MatchmakingQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::SetMatchmakingQueueRequest, ___MatchmakingQueue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::SetMatchmakingQueueRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
