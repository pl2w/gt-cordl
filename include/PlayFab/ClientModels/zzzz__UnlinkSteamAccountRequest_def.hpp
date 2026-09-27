#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkSteamAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkSteamAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkSteamAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkSteamAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkSteamAccountRequest*, "PlayFab.ClientModels", "UnlinkSteamAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkSteamAccountRequest
class CORDL_TYPE UnlinkSteamAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkSteamAccountRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e398, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkSteamAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkSteamAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkSteamAccountRequest(UnlinkSteamAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkSteamAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkSteamAccountRequest(UnlinkSteamAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20267};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkSteamAccountRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
