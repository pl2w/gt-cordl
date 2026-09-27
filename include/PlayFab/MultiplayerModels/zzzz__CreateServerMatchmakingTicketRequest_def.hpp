#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateServerMatchmakingTicketRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateServerMatchmakingTicketRequest)
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CreateServerMatchmakingTicketRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest*, "PlayFab.MultiplayerModels", "CreateServerMatchmakingTicketRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CreateServerMatchmakingTicketRequest
class CORDL_TYPE CreateServerMatchmakingTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field GiveUpAfterSeconds, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_GiveUpAfterSeconds, put=__cordl_internal_set_GiveUpAfterSeconds)) int32_t  GiveUpAfterSeconds;

/// @brief Field Members, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*  Members;

/// @brief Field QueueName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

static inline ::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_GiveUpAfterSeconds() const;

constexpr int32_t& __cordl_internal_get_GiveUpAfterSeconds() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*& __cordl_internal_get_Members() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr void __cordl_internal_set_GiveUpAfterSeconds(int32_t  value) ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8408a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateServerMatchmakingTicketRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateServerMatchmakingTicketRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateServerMatchmakingTicketRequest(CreateServerMatchmakingTicketRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerMatchmakingTicketRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateServerMatchmakingTicketRequest(CreateServerMatchmakingTicketRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19622};

/// @brief Field GiveUpAfterSeconds, offset: 0x18, size: 0x4, def value: None
 int32_t  ___GiveUpAfterSeconds;

/// @brief Field Members, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*  ___Members;

/// @brief Field QueueName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___QueueName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest, ___GiveUpAfterSeconds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest, ___Members) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest, ___QueueName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
