#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkKongregateAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkKongregateAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkKongregateAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkKongregateAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkKongregateAccountRequest*, "PlayFab.ClientModels", "UnlinkKongregateAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkKongregateAccountRequest
class CORDL_TYPE UnlinkKongregateAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkKongregateAccountRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e358, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkKongregateAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkKongregateAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkKongregateAccountRequest(UnlinkKongregateAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkKongregateAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkKongregateAccountRequest(UnlinkKongregateAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20259};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkKongregateAccountRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
