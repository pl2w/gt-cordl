#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPhotonAuthenticationTokenResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPhotonAuthenticationTokenResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPhotonAuthenticationTokenResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult*, "PlayFab.ClientModels", "GetPhotonAuthenticationTokenResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPhotonAuthenticationTokenResult
class CORDL_TYPE GetPhotonAuthenticationTokenResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field PhotonCustomAuthenticationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PhotonCustomAuthenticationToken, put=__cordl_internal_set_PhotonCustomAuthenticationToken)) ::StringW  PhotonCustomAuthenticationToken;

static inline ::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PhotonCustomAuthenticationToken() const;

constexpr ::StringW& __cordl_internal_get_PhotonCustomAuthenticationToken() ;

constexpr void __cordl_internal_set_PhotonCustomAuthenticationToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dcb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPhotonAuthenticationTokenResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPhotonAuthenticationTokenResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPhotonAuthenticationTokenResult(GetPhotonAuthenticationTokenResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPhotonAuthenticationTokenResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPhotonAuthenticationTokenResult(GetPhotonAuthenticationTokenResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20038};

/// @brief Field PhotonCustomAuthenticationToken, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PhotonCustomAuthenticationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult, ___PhotonCustomAuthenticationToken) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
