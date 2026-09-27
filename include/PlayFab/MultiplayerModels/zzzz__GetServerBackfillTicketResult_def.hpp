#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetServerBackfillTicketResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetServerBackfillTicketResult)
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayerWithTeamAssignment;
}
namespace PlayFab::MultiplayerModels {
class ServerDetails;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetServerBackfillTicketResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult*, "PlayFab.MultiplayerModels", "GetServerBackfillTicketResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetServerBackfillTicketResult
class CORDL_TYPE GetServerBackfillTicketResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field CancellationReasonString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CancellationReasonString, put=__cordl_internal_set_CancellationReasonString)) ::StringW  CancellationReasonString;

/// @brief Field Created, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Created, put=__cordl_internal_set_Created)) ::System::DateTime  Created;

/// @brief Field GiveUpAfterSeconds, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_GiveUpAfterSeconds, put=__cordl_internal_set_GiveUpAfterSeconds)) int32_t  GiveUpAfterSeconds;

/// @brief Field MatchId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchId, put=__cordl_internal_set_MatchId)) ::StringW  MatchId;

/// @brief Field Members, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  Members;

/// @brief Field QueueName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

/// @brief Field ServerDetails, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerDetails, put=__cordl_internal_set_ServerDetails)) ::PlayFab::MultiplayerModels::ServerDetails*  ServerDetails;

/// @brief Field Status, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::StringW  Status;

/// @brief Field TicketId, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_TicketId, put=__cordl_internal_set_TicketId)) ::StringW  TicketId;

static inline ::PlayFab::MultiplayerModels::GetServerBackfillTicketResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CancellationReasonString() const;

constexpr ::StringW& __cordl_internal_get_CancellationReasonString() ;

constexpr ::System::DateTime const& __cordl_internal_get_Created() const;

constexpr ::System::DateTime& __cordl_internal_get_Created() ;

constexpr int32_t const& __cordl_internal_get_GiveUpAfterSeconds() const;

constexpr int32_t& __cordl_internal_get_GiveUpAfterSeconds() ;

constexpr ::StringW const& __cordl_internal_get_MatchId() const;

constexpr ::StringW& __cordl_internal_get_MatchId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*& __cordl_internal_get_Members() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr ::PlayFab::MultiplayerModels::ServerDetails* const& __cordl_internal_get_ServerDetails() const;

constexpr ::PlayFab::MultiplayerModels::ServerDetails*& __cordl_internal_get_ServerDetails() ;

constexpr ::StringW const& __cordl_internal_get_Status() const;

constexpr ::StringW& __cordl_internal_get_Status() ;

constexpr ::StringW const& __cordl_internal_get_TicketId() const;

constexpr ::StringW& __cordl_internal_get_TicketId() ;

constexpr void __cordl_internal_set_CancellationReasonString(::StringW  value) ;

constexpr void __cordl_internal_set_Created(::System::DateTime  value) ;

constexpr void __cordl_internal_set_GiveUpAfterSeconds(int32_t  value) ;

constexpr void __cordl_internal_set_MatchId(::StringW  value) ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

constexpr void __cordl_internal_set_ServerDetails(::PlayFab::MultiplayerModels::ServerDetails*  value) ;

constexpr void __cordl_internal_set_Status(::StringW  value) ;

constexpr void __cordl_internal_set_TicketId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840a10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetServerBackfillTicketResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetServerBackfillTicketResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetServerBackfillTicketResult(GetServerBackfillTicketResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetServerBackfillTicketResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetServerBackfillTicketResult(GetServerBackfillTicketResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19668};

/// @brief Field CancellationReasonString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CancellationReasonString;

/// @brief Field Created, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___Created;

/// @brief Field GiveUpAfterSeconds, offset: 0x30, size: 0x4, def value: None
 int32_t  ___GiveUpAfterSeconds;

/// @brief Field MatchId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___MatchId;

/// @brief Field Members, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  ___Members;

/// @brief Field QueueName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___QueueName;

/// @brief Field ServerDetails, offset: 0x50, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::ServerDetails*  ___ServerDetails;

/// @brief Field Status, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___Status;

/// @brief Field TicketId, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___TicketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___CancellationReasonString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___Created) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___GiveUpAfterSeconds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___MatchId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___Members) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___QueueName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___ServerDetails) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___Status) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult, ___TicketId) == 0x60, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult) == 0x68, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
