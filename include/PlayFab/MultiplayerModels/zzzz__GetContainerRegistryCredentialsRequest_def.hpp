#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetContainerRegistryCredentialsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetContainerRegistryCredentialsRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetContainerRegistryCredentialsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest*, "PlayFab.MultiplayerModels", "GetContainerRegistryCredentialsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetContainerRegistryCredentialsRequest
class CORDL_TYPE GetContainerRegistryCredentialsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840980, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetContainerRegistryCredentialsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetContainerRegistryCredentialsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetContainerRegistryCredentialsRequest(GetContainerRegistryCredentialsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetContainerRegistryCredentialsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetContainerRegistryCredentialsRequest(GetContainerRegistryCredentialsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19650};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
