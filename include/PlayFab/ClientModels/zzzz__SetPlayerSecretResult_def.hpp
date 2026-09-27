#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SetPlayerSecretResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(SetPlayerSecretResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class SetPlayerSecretResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::SetPlayerSecretResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::SetPlayerSecretResult*, "PlayFab.ClientModels", "SetPlayerSecretResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.SetPlayerSecretResult
class CORDL_TYPE SetPlayerSecretResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::SetPlayerSecretResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e240, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetPlayerSecretResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetPlayerSecretResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetPlayerSecretResult(SetPlayerSecretResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetPlayerSecretResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetPlayerSecretResult(SetPlayerSecretResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20219};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::SetPlayerSecretResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
