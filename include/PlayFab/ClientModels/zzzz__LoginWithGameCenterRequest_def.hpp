#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithGameCenterRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoginWithGameCenterRequest)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class LoginWithGameCenterRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LoginWithGameCenterRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LoginWithGameCenterRequest*, "PlayFab.ClientModels", "LoginWithGameCenterRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LoginWithGameCenterRequest
class CORDL_TYPE LoginWithGameCenterRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CreateAccount, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_CreateAccount, put=__cordl_internal_set_CreateAccount)) ::System::Nullable_1<bool>  CreateAccount;

/// @brief Field EncryptedRequest, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EncryptedRequest, put=__cordl_internal_set_EncryptedRequest)) ::StringW  EncryptedRequest;

/// @brief Field InfoRequestParameters, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoRequestParameters, put=__cordl_internal_set_InfoRequestParameters)) ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  InfoRequestParameters;

/// @brief Field PlayerId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerId, put=__cordl_internal_set_PlayerId)) ::StringW  PlayerId;

/// @brief Field PlayerSecret, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerSecret, put=__cordl_internal_set_PlayerSecret)) ::StringW  PlayerSecret;

/// @brief Field PublicKeyUrl, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PublicKeyUrl, put=__cordl_internal_set_PublicKeyUrl)) ::StringW  PublicKeyUrl;

/// @brief Field Salt, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Salt, put=__cordl_internal_set_Salt)) ::StringW  Salt;

/// @brief Field Signature, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Signature, put=__cordl_internal_set_Signature)) ::StringW  Signature;

/// @brief Field Timestamp, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Timestamp, put=__cordl_internal_set_Timestamp)) ::StringW  Timestamp;

/// @brief Field TitleId, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::PlayFab::ClientModels::LoginWithGameCenterRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_CreateAccount() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_CreateAccount() ;

constexpr ::StringW const& __cordl_internal_get_EncryptedRequest() const;

constexpr ::StringW& __cordl_internal_get_EncryptedRequest() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& __cordl_internal_get_InfoRequestParameters() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& __cordl_internal_get_InfoRequestParameters() ;

constexpr ::StringW const& __cordl_internal_get_PlayerId() const;

constexpr ::StringW& __cordl_internal_get_PlayerId() ;

constexpr ::StringW const& __cordl_internal_get_PlayerSecret() const;

constexpr ::StringW& __cordl_internal_get_PlayerSecret() ;

constexpr ::StringW const& __cordl_internal_get_PublicKeyUrl() const;

constexpr ::StringW& __cordl_internal_get_PublicKeyUrl() ;

constexpr ::StringW const& __cordl_internal_get_Salt() const;

constexpr ::StringW& __cordl_internal_get_Salt() ;

constexpr ::StringW const& __cordl_internal_get_Signature() const;

constexpr ::StringW& __cordl_internal_get_Signature() ;

constexpr ::StringW const& __cordl_internal_get_Timestamp() const;

constexpr ::StringW& __cordl_internal_get_Timestamp() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_CreateAccount(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_EncryptedRequest(::StringW  value) ;

constexpr void __cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value) ;

constexpr void __cordl_internal_set_PlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayerSecret(::StringW  value) ;

constexpr void __cordl_internal_set_PublicKeyUrl(::StringW  value) ;

constexpr void __cordl_internal_set_Salt(::StringW  value) ;

constexpr void __cordl_internal_set_Signature(::StringW  value) ;

constexpr void __cordl_internal_set_Timestamp(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e038, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginWithGameCenterRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginWithGameCenterRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginWithGameCenterRequest(LoginWithGameCenterRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginWithGameCenterRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginWithGameCenterRequest(LoginWithGameCenterRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20151};

/// @brief Field CreateAccount, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___CreateAccount;

/// @brief Field EncryptedRequest, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___EncryptedRequest;

/// @brief Field InfoRequestParameters, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  ___InfoRequestParameters;

/// @brief Field PlayerId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___PlayerId;

/// @brief Field PlayerSecret, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___PlayerSecret;

/// @brief Field PublicKeyUrl, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___PublicKeyUrl;

/// @brief Field Salt, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___Salt;

/// @brief Field Signature, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___Signature;

/// @brief Field Timestamp, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___Timestamp;

/// @brief Field TitleId, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Size padding 0x68 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___CreateAccount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___EncryptedRequest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___InfoRequestParameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___PlayerId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___PlayerSecret) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___PublicKeyUrl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___Salt) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___Signature) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___Timestamp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithGameCenterRequest, ___TitleId) == 0x68, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LoginWithGameCenterRequest) == 0x68, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
