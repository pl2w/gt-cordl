#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdatePlayerStatisticsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UpdatePlayerStatisticsResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdatePlayerStatisticsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdatePlayerStatisticsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdatePlayerStatisticsResult*, "PlayFab.ClientModels", "UpdatePlayerStatisticsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdatePlayerStatisticsResult
class CORDL_TYPE UpdatePlayerStatisticsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UpdatePlayerStatisticsResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e420, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdatePlayerStatisticsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdatePlayerStatisticsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdatePlayerStatisticsResult(UpdatePlayerStatisticsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdatePlayerStatisticsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdatePlayerStatisticsResult(UpdatePlayerStatisticsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20284};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UpdatePlayerStatisticsResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
