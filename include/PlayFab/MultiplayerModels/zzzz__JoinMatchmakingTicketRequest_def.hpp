#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/JoinMatchmakingTicketRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JoinMatchmakingTicketRequest)
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayer;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class JoinMatchmakingTicketRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest*, "PlayFab.MultiplayerModels", "JoinMatchmakingTicketRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.JoinMatchmakingTicketRequest
class CORDL_TYPE JoinMatchmakingTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Member, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Member, put=__cordl_internal_set_Member)) ::PlayFab::MultiplayerModels::MatchmakingPlayer*  Member;

/// @brief Field QueueName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

/// @brief Field TicketId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TicketId, put=__cordl_internal_set_TicketId)) ::StringW  TicketId;

static inline ::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayer* const& __cordl_internal_get_Member() const;

constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayer*& __cordl_internal_get_Member() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr ::StringW const& __cordl_internal_get_TicketId() const;

constexpr ::StringW& __cordl_internal_get_TicketId() ;

constexpr void __cordl_internal_set_Member(::PlayFab::MultiplayerModels::MatchmakingPlayer*  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

constexpr void __cordl_internal_set_TicketId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840a40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinMatchmakingTicketRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinMatchmakingTicketRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinMatchmakingTicketRequest(JoinMatchmakingTicketRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinMatchmakingTicketRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinMatchmakingTicketRequest(JoinMatchmakingTicketRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19674};

/// @brief Field Member, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::MatchmakingPlayer*  ___Member;

/// @brief Field QueueName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___QueueName;

/// @brief Field TicketId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TicketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest, ___Member) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest, ___QueueName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest, ___TicketId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
