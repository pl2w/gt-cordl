#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancelMatchmakingTicketRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CancelMatchmakingTicketRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CancelMatchmakingTicketRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest*, "PlayFab.MultiplayerModels", "CancelMatchmakingTicketRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CancelMatchmakingTicketRequest
class CORDL_TYPE CancelMatchmakingTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field QueueName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

/// @brief Field TicketId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TicketId, put=__cordl_internal_set_TicketId)) ::StringW  TicketId;

static inline ::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr ::StringW const& __cordl_internal_get_TicketId() const;

constexpr ::StringW& __cordl_internal_get_TicketId() ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

constexpr void __cordl_internal_set_TicketId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840800, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancelMatchmakingTicketRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancelMatchmakingTicketRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CancelMatchmakingTicketRequest(CancelMatchmakingTicketRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancelMatchmakingTicketRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancelMatchmakingTicketRequest(CancelMatchmakingTicketRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19601};

/// @brief Field QueueName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___QueueName;

/// @brief Field TicketId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TicketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest, ___QueueName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest, ___TicketId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
