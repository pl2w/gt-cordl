#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkGoogleAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkGoogleAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkGoogleAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkGoogleAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkGoogleAccountRequest*, "PlayFab.ClientModels", "UnlinkGoogleAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkGoogleAccountRequest
class CORDL_TYPE UnlinkGoogleAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkGoogleAccountRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e338, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkGoogleAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkGoogleAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkGoogleAccountRequest(UnlinkGoogleAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkGoogleAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkGoogleAccountRequest(UnlinkGoogleAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20255};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkGoogleAccountRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
