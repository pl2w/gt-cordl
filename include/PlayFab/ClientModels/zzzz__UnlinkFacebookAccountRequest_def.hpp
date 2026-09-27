#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkFacebookAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkFacebookAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkFacebookAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkFacebookAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkFacebookAccountRequest*, "PlayFab.ClientModels", "UnlinkFacebookAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkFacebookAccountRequest
class CORDL_TYPE UnlinkFacebookAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkFacebookAccountRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e308, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkFacebookAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkFacebookAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkFacebookAccountRequest(UnlinkFacebookAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkFacebookAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkFacebookAccountRequest(UnlinkFacebookAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20249};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkFacebookAccountRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
