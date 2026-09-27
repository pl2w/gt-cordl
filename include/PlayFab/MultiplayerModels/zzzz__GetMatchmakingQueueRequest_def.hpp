#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchmakingQueueRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetMatchmakingQueueRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetMatchmakingQueueRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetMatchmakingQueueRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetMatchmakingQueueRequest*, "PlayFab.MultiplayerModels", "GetMatchmakingQueueRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetMatchmakingQueueRequest
class CORDL_TYPE GetMatchmakingQueueRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field QueueName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

static inline ::PlayFab::MultiplayerModels::GetMatchmakingQueueRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840990, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMatchmakingQueueRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMatchmakingQueueRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMatchmakingQueueRequest(GetMatchmakingQueueRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMatchmakingQueueRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMatchmakingQueueRequest(GetMatchmakingQueueRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19652};

/// @brief Field QueueName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___QueueName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingQueueRequest, ___QueueName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetMatchmakingQueueRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
