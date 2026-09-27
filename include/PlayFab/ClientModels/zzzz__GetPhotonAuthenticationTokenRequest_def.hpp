#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPhotonAuthenticationTokenRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPhotonAuthenticationTokenRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPhotonAuthenticationTokenRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest*, "PlayFab.ClientModels", "GetPhotonAuthenticationTokenRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPhotonAuthenticationTokenRequest
class CORDL_TYPE GetPhotonAuthenticationTokenRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field PhotonApplicationId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PhotonApplicationId, put=__cordl_internal_set_PhotonApplicationId)) ::StringW  PhotonApplicationId;

static inline ::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PhotonApplicationId() const;

constexpr ::StringW& __cordl_internal_get_PhotonApplicationId() ;

constexpr void __cordl_internal_set_PhotonApplicationId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dcb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPhotonAuthenticationTokenRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPhotonAuthenticationTokenRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPhotonAuthenticationTokenRequest(GetPhotonAuthenticationTokenRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPhotonAuthenticationTokenRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPhotonAuthenticationTokenRequest(GetPhotonAuthenticationTokenRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20037};

/// @brief Field PhotonApplicationId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PhotonApplicationId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest, ___PhotonApplicationId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
