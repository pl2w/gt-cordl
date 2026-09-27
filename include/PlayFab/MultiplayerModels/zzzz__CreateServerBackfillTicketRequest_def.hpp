#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateServerBackfillTicketRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateServerBackfillTicketRequest)
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
class CreateServerBackfillTicketRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest*, "PlayFab.MultiplayerModels", "CreateServerBackfillTicketRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CreateServerBackfillTicketRequest
class CORDL_TYPE CreateServerBackfillTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field GiveUpAfterSeconds, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_GiveUpAfterSeconds, put=__cordl_internal_set_GiveUpAfterSeconds)) int32_t  GiveUpAfterSeconds;

/// @brief Field Members, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  Members;

/// @brief Field QueueName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

/// @brief Field ServerDetails, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerDetails, put=__cordl_internal_set_ServerDetails)) ::PlayFab::MultiplayerModels::ServerDetails*  ServerDetails;

static inline ::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_GiveUpAfterSeconds() const;

constexpr int32_t& __cordl_internal_get_GiveUpAfterSeconds() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*& __cordl_internal_get_Members() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr ::PlayFab::MultiplayerModels::ServerDetails* const& __cordl_internal_get_ServerDetails() const;

constexpr ::PlayFab::MultiplayerModels::ServerDetails*& __cordl_internal_get_ServerDetails() ;

constexpr void __cordl_internal_set_GiveUpAfterSeconds(int32_t  value) ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

constexpr void __cordl_internal_set_ServerDetails(::PlayFab::MultiplayerModels::ServerDetails*  value) ;

/// @brief Method .ctor, addr 0xa840890, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateServerBackfillTicketRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateServerBackfillTicketRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateServerBackfillTicketRequest(CreateServerBackfillTicketRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerBackfillTicketRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateServerBackfillTicketRequest(CreateServerBackfillTicketRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19620};

/// @brief Field GiveUpAfterSeconds, offset: 0x18, size: 0x4, def value: None
 int32_t  ___GiveUpAfterSeconds;

/// @brief Field Members, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  ___Members;

/// @brief Field QueueName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___QueueName;

/// @brief Field ServerDetails, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::ServerDetails*  ___ServerDetails;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest, ___GiveUpAfterSeconds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest, ___Members) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest, ___QueueName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest, ___ServerDetails) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
