#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/RolloverContainerRegistryCredentialsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(RolloverContainerRegistryCredentialsRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class RolloverContainerRegistryCredentialsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsRequest*, "PlayFab.MultiplayerModels", "RolloverContainerRegistryCredentialsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.RolloverContainerRegistryCredentialsRequest
class CORDL_TYPE RolloverContainerRegistryCredentialsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840be8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RolloverContainerRegistryCredentialsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RolloverContainerRegistryCredentialsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RolloverContainerRegistryCredentialsRequest(RolloverContainerRegistryCredentialsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RolloverContainerRegistryCredentialsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RolloverContainerRegistryCredentialsRequest(RolloverContainerRegistryCredentialsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
