#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkAppleRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkAppleRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkAppleRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkAppleRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkAppleRequest*, "PlayFab.ClientModels", "UnlinkAppleRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkAppleRequest
class CORDL_TYPE UnlinkAppleRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkAppleRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e2f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkAppleRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkAppleRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkAppleRequest(UnlinkAppleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkAppleRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkAppleRequest(UnlinkAppleRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20246};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkAppleRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
