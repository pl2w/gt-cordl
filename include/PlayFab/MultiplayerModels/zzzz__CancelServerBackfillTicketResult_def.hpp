#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancelServerBackfillTicketResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(CancelServerBackfillTicketResult)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CancelServerBackfillTicketResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult*, "PlayFab.MultiplayerModels", "CancelServerBackfillTicketResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CancelServerBackfillTicketResult
class CORDL_TYPE CancelServerBackfillTicketResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa840818, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancelServerBackfillTicketResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancelServerBackfillTicketResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CancelServerBackfillTicketResult(CancelServerBackfillTicketResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancelServerBackfillTicketResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancelServerBackfillTicketResult(CancelServerBackfillTicketResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
