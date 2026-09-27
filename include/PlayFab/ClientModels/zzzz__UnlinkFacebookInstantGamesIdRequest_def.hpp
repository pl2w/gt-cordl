#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkFacebookInstantGamesIdRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlinkFacebookInstantGamesIdRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkFacebookInstantGamesIdRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdRequest*, "PlayFab.ClientModels", "UnlinkFacebookInstantGamesIdRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkFacebookInstantGamesIdRequest
class CORDL_TYPE UnlinkFacebookInstantGamesIdRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field FacebookInstantGamesId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookInstantGamesId, put=__cordl_internal_set_FacebookInstantGamesId)) ::StringW  FacebookInstantGamesId;

static inline ::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FacebookInstantGamesId() const;

constexpr ::StringW& __cordl_internal_get_FacebookInstantGamesId() ;

constexpr void __cordl_internal_set_FacebookInstantGamesId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e318, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkFacebookInstantGamesIdRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkFacebookInstantGamesIdRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkFacebookInstantGamesIdRequest(UnlinkFacebookInstantGamesIdRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkFacebookInstantGamesIdRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkFacebookInstantGamesIdRequest(UnlinkFacebookInstantGamesIdRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20251};

/// @brief Field FacebookInstantGamesId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FacebookInstantGamesId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdRequest, ___FacebookInstantGamesId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlinkFacebookInstantGamesIdRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
