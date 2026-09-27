#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancelAllMatchmakingTicketsForPlayerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CancelAllMatchmakingTicketsForPlayerRequest)
namespace PlayFab::MultiplayerModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CancelAllMatchmakingTicketsForPlayerRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest*, "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CancelAllMatchmakingTicketsForPlayerRequest
class CORDL_TYPE CancelAllMatchmakingTicketsForPlayerRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::MultiplayerModels::EntityKey*  Entity;

/// @brief Field QueueName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

static inline ::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::MultiplayerModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::MultiplayerModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8407e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancelAllMatchmakingTicketsForPlayerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancelAllMatchmakingTicketsForPlayerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CancelAllMatchmakingTicketsForPlayerRequest(CancelAllMatchmakingTicketsForPlayerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancelAllMatchmakingTicketsForPlayerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancelAllMatchmakingTicketsForPlayerRequest(CancelAllMatchmakingTicketsForPlayerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19596};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::EntityKey*  ___Entity;

/// @brief Field QueueName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___QueueName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest, ___QueueName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
