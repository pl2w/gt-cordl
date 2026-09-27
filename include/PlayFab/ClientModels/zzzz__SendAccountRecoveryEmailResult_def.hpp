#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SendAccountRecoveryEmailResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(SendAccountRecoveryEmailResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class SendAccountRecoveryEmailResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::SendAccountRecoveryEmailResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::SendAccountRecoveryEmailResult*, "PlayFab.ClientModels", "SendAccountRecoveryEmailResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.SendAccountRecoveryEmailResult
class CORDL_TYPE SendAccountRecoveryEmailResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::SendAccountRecoveryEmailResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e220, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendAccountRecoveryEmailResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendAccountRecoveryEmailResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SendAccountRecoveryEmailResult(SendAccountRecoveryEmailResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendAccountRecoveryEmailResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendAccountRecoveryEmailResult(SendAccountRecoveryEmailResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20215};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::SendAccountRecoveryEmailResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
