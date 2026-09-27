#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkPSNAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkPSNAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkPSNAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkPSNAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkPSNAccountRequest*, "PlayFab.ClientModels", "UnlinkPSNAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkPSNAccountRequest
class CORDL_TYPE UnlinkPSNAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkPSNAccountRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e388, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkPSNAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkPSNAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkPSNAccountRequest(UnlinkPSNAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkPSNAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkPSNAccountRequest(UnlinkPSNAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20265};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkPSNAccountRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
