#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchmakingTicketResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetMatchmakingTicketResult)
namespace PlayFab::MultiplayerModels {
class EntityKey;
}
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetMatchmakingTicketResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult*, "PlayFab.MultiplayerModels", "GetMatchmakingTicketResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetMatchmakingTicketResult
class CORDL_TYPE GetMatchmakingTicketResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field CancellationReasonString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CancellationReasonString, put=__cordl_internal_set_CancellationReasonString)) ::StringW  CancellationReasonString;

/// @brief Field Created, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Created, put=__cordl_internal_set_Created)) ::System::DateTime  Created;

/// @brief Field Creator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Creator, put=__cordl_internal_set_Creator)) ::PlayFab::MultiplayerModels::EntityKey*  Creator;

/// @brief Field GiveUpAfterSeconds, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_GiveUpAfterSeconds, put=__cordl_internal_set_GiveUpAfterSeconds)) int32_t  GiveUpAfterSeconds;

/// @brief Field MatchId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchId, put=__cordl_internal_set_MatchId)) ::StringW  MatchId;

/// @brief Field Members, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*  Members;

/// @brief Field MembersToMatchWith, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MembersToMatchWith, put=__cordl_internal_set_MembersToMatchWith)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*  MembersToMatchWith;

/// @brief Field QueueName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

/// @brief Field Status, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::StringW  Status;

/// @brief Field TicketId, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TicketId, put=__cordl_internal_set_TicketId)) ::StringW  TicketId;

static inline ::PlayFab::MultiplayerModels::GetMatchmakingTicketResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CancellationReasonString() const;

constexpr ::StringW& __cordl_internal_get_CancellationReasonString() ;

constexpr ::System::DateTime const& __cordl_internal_get_Created() const;

constexpr ::System::DateTime& __cordl_internal_get_Created() ;

constexpr ::PlayFab::MultiplayerModels::EntityKey* const& __cordl_internal_get_Creator() const;

constexpr ::PlayFab::MultiplayerModels::EntityKey*& __cordl_internal_get_Creator() ;

constexpr int32_t const& __cordl_internal_get_GiveUpAfterSeconds() const;

constexpr int32_t& __cordl_internal_get_GiveUpAfterSeconds() ;

constexpr ::StringW const& __cordl_internal_get_MatchId() const;

constexpr ::StringW& __cordl_internal_get_MatchId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*& __cordl_internal_get_Members() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>* const& __cordl_internal_get_MembersToMatchWith() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*& __cordl_internal_get_MembersToMatchWith() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr ::StringW const& __cordl_internal_get_Status() const;

constexpr ::StringW& __cordl_internal_get_Status() ;

constexpr ::StringW const& __cordl_internal_get_TicketId() const;

constexpr ::StringW& __cordl_internal_get_TicketId() ;

constexpr void __cordl_internal_set_CancellationReasonString(::StringW  value) ;

constexpr void __cordl_internal_set_Created(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Creator(::PlayFab::MultiplayerModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_GiveUpAfterSeconds(int32_t  value) ;

constexpr void __cordl_internal_set_MatchId(::StringW  value) ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*  value) ;

constexpr void __cordl_internal_set_MembersToMatchWith(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

constexpr void __cordl_internal_set_Status(::StringW  value) ;

constexpr void __cordl_internal_set_TicketId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8409a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMatchmakingTicketResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMatchmakingTicketResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMatchmakingTicketResult(GetMatchmakingTicketResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMatchmakingTicketResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMatchmakingTicketResult(GetMatchmakingTicketResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19655};

/// @brief Field CancellationReasonString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CancellationReasonString;

/// @brief Field Created, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___Created;

/// @brief Field Creator, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::EntityKey*  ___Creator;

/// @brief Field GiveUpAfterSeconds, offset: 0x38, size: 0x4, def value: None
 int32_t  ___GiveUpAfterSeconds;

/// @brief Field MatchId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___MatchId;

/// @brief Field Members, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*  ___Members;

/// @brief Field MembersToMatchWith, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*  ___MembersToMatchWith;

/// @brief Field QueueName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___QueueName;

/// @brief Field Status, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___Status;

/// @brief Field TicketId, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___TicketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___CancellationReasonString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___Created) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___Creator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___GiveUpAfterSeconds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___MatchId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___Members) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___MembersToMatchWith) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___QueueName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___Status) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult, ___TicketId) == 0x68, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetMatchmakingTicketResult) == 0x70, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
