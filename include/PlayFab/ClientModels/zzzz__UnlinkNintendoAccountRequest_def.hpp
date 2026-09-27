#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkNintendoAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkNintendoAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkNintendoAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkNintendoAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkNintendoAccountRequest*, "PlayFab.ClientModels", "UnlinkNintendoAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkNintendoAccountRequest
class CORDL_TYPE UnlinkNintendoAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkNintendoAccountRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e368, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkNintendoAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkNintendoAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkNintendoAccountRequest(UnlinkNintendoAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkNintendoAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkNintendoAccountRequest(UnlinkNintendoAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20261};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkNintendoAccountRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
