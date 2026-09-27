#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithWindowsHelloRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoginWithWindowsHelloRequest)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class LoginWithWindowsHelloRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LoginWithWindowsHelloRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LoginWithWindowsHelloRequest*, "PlayFab.ClientModels", "LoginWithWindowsHelloRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LoginWithWindowsHelloRequest
class CORDL_TYPE LoginWithWindowsHelloRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ChallengeSignature, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ChallengeSignature, put=__cordl_internal_set_ChallengeSignature)) ::StringW  ChallengeSignature;

/// @brief Field InfoRequestParameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoRequestParameters, put=__cordl_internal_set_InfoRequestParameters)) ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  InfoRequestParameters;

/// @brief Field PublicKeyHint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PublicKeyHint, put=__cordl_internal_set_PublicKeyHint)) ::StringW  PublicKeyHint;

/// @brief Field TitleId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::PlayFab::ClientModels::LoginWithWindowsHelloRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ChallengeSignature() const;

constexpr ::StringW& __cordl_internal_get_ChallengeSignature() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& __cordl_internal_get_InfoRequestParameters() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& __cordl_internal_get_InfoRequestParameters() ;

constexpr ::StringW const& __cordl_internal_get_PublicKeyHint() const;

constexpr ::StringW& __cordl_internal_get_PublicKeyHint() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_ChallengeSignature(::StringW  value) ;

constexpr void __cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value) ;

constexpr void __cordl_internal_set_PublicKeyHint(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e090, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginWithWindowsHelloRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginWithWindowsHelloRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginWithWindowsHelloRequest(LoginWithWindowsHelloRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginWithWindowsHelloRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginWithWindowsHelloRequest(LoginWithWindowsHelloRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20162};

/// @brief Field ChallengeSignature, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ChallengeSignature;

/// @brief Field InfoRequestParameters, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  ___InfoRequestParameters;

/// @brief Field PublicKeyHint, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PublicKeyHint;

/// @brief Field TitleId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TitleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LoginWithWindowsHelloRequest, ___ChallengeSignature) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithWindowsHelloRequest, ___InfoRequestParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithWindowsHelloRequest, ___PublicKeyHint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithWindowsHelloRequest, ___TitleId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LoginWithWindowsHelloRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
