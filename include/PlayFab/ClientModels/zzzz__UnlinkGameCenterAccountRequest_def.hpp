#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkGameCenterAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkGameCenterAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkGameCenterAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkGameCenterAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkGameCenterAccountRequest*, "PlayFab.ClientModels", "UnlinkGameCenterAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkGameCenterAccountRequest
class CORDL_TYPE UnlinkGameCenterAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkGameCenterAccountRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e328, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkGameCenterAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkGameCenterAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkGameCenterAccountRequest(UnlinkGameCenterAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkGameCenterAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkGameCenterAccountRequest(UnlinkGameCenterAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20253};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkGameCenterAccountRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
