#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateMatchmakingTicketRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateMatchmakingTicketRequest)
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
class CreateMatchmakingTicketRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest*, "PlayFab.MultiplayerModels", "CreateMatchmakingTicketRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CreateMatchmakingTicketRequest
class CORDL_TYPE CreateMatchmakingTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Creator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Creator, put=__cordl_internal_set_Creator)) ::PlayFab::MultiplayerModels::MatchmakingPlayer*  Creator;

/// @brief Field GiveUpAfterSeconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_GiveUpAfterSeconds, put=__cordl_internal_set_GiveUpAfterSeconds)) int32_t  GiveUpAfterSeconds;

/// @brief Field MembersToMatchWith, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MembersToMatchWith, put=__cordl_internal_set_MembersToMatchWith)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*  MembersToMatchWith;

/// @brief Field QueueName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

static inline ::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayer* const& __cordl_internal_get_Creator() const;

constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayer*& __cordl_internal_get_Creator() ;

constexpr int32_t const& __cordl_internal_get_GiveUpAfterSeconds() const;

constexpr int32_t& __cordl_internal_get_GiveUpAfterSeconds() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>* const& __cordl_internal_get_MembersToMatchWith() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*& __cordl_internal_get_MembersToMatchWith() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr void __cordl_internal_set_Creator(::PlayFab::MultiplayerModels::MatchmakingPlayer*  value) ;

constexpr void __cordl_internal_set_GiveUpAfterSeconds(int32_t  value) ;

constexpr void __cordl_internal_set_MembersToMatchWith(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840870, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateMatchmakingTicketRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateMatchmakingTicketRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateMatchmakingTicketRequest(CreateMatchmakingTicketRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateMatchmakingTicketRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateMatchmakingTicketRequest(CreateMatchmakingTicketRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19616};

/// @brief Field Creator, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::MatchmakingPlayer*  ___Creator;

/// @brief Field GiveUpAfterSeconds, offset: 0x20, size: 0x4, def value: None
 int32_t  ___GiveUpAfterSeconds;

/// @brief Field MembersToMatchWith, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*  ___MembersToMatchWith;

/// @brief Field QueueName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___QueueName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest, ___Creator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest, ___GiveUpAfterSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest, ___MembersToMatchWith) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest, ___QueueName) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
