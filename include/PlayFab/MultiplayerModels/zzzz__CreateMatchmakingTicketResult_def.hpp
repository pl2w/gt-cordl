#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateMatchmakingTicketResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateMatchmakingTicketResult)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CreateMatchmakingTicketResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*, "PlayFab.MultiplayerModels", "CreateMatchmakingTicketResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CreateMatchmakingTicketResult
class CORDL_TYPE CreateMatchmakingTicketResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field TicketId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TicketId, put=__cordl_internal_set_TicketId)) ::StringW  TicketId;

static inline ::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TicketId() const;

constexpr ::StringW& __cordl_internal_get_TicketId() ;

constexpr void __cordl_internal_set_TicketId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840878, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateMatchmakingTicketResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateMatchmakingTicketResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateMatchmakingTicketResult(CreateMatchmakingTicketResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateMatchmakingTicketResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateMatchmakingTicketResult(CreateMatchmakingTicketResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19617};

/// @brief Field TicketId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TicketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult, ___TicketId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
