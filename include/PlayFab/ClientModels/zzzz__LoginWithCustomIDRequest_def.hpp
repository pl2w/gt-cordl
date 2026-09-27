#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithCustomIDRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoginWithCustomIDRequest)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class LoginWithCustomIDRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LoginWithCustomIDRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LoginWithCustomIDRequest*, "PlayFab.ClientModels", "LoginWithCustomIDRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LoginWithCustomIDRequest
class CORDL_TYPE LoginWithCustomIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CreateAccount, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_CreateAccount, put=__cordl_internal_set_CreateAccount)) ::System::Nullable_1<bool>  CreateAccount;

/// @brief Field CustomId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomId, put=__cordl_internal_set_CustomId)) ::StringW  CustomId;

/// @brief Field EncryptedRequest, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_EncryptedRequest, put=__cordl_internal_set_EncryptedRequest)) ::StringW  EncryptedRequest;

/// @brief Field InfoRequestParameters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoRequestParameters, put=__cordl_internal_set_InfoRequestParameters)) ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  InfoRequestParameters;

/// @brief Field PlayerSecret, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerSecret, put=__cordl_internal_set_PlayerSecret)) ::StringW  PlayerSecret;

/// @brief Field TitleId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::PlayFab::ClientModels::LoginWithCustomIDRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_CreateAccount() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_CreateAccount() ;

constexpr ::StringW const& __cordl_internal_get_CustomId() const;

constexpr ::StringW& __cordl_internal_get_CustomId() ;

constexpr ::StringW const& __cordl_internal_get_EncryptedRequest() const;

constexpr ::StringW& __cordl_internal_get_EncryptedRequest() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& __cordl_internal_get_InfoRequestParameters() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& __cordl_internal_get_InfoRequestParameters() ;

constexpr ::StringW const& __cordl_internal_get_PlayerSecret() const;

constexpr ::StringW& __cordl_internal_get_PlayerSecret() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_CreateAccount(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_CustomId(::StringW  value) ;

constexpr void __cordl_internal_set_EncryptedRequest(::StringW  value) ;

constexpr void __cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value) ;

constexpr void __cordl_internal_set_PlayerSecret(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e018, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginWithCustomIDRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginWithCustomIDRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginWithCustomIDRequest(LoginWithCustomIDRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginWithCustomIDRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginWithCustomIDRequest(LoginWithCustomIDRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20147};

/// @brief Field CreateAccount, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___CreateAccount;

/// @brief Field CustomId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___CustomId;

/// @brief Field EncryptedRequest, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___EncryptedRequest;

/// @brief Field InfoRequestParameters, offset: 0x38, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  ___InfoRequestParameters;

/// @brief Field PlayerSecret, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___PlayerSecret;

/// @brief Field TitleId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LoginWithCustomIDRequest, ___CreateAccount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithCustomIDRequest, ___CustomId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithCustomIDRequest, ___EncryptedRequest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithCustomIDRequest, ___InfoRequestParameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithCustomIDRequest, ___PlayerSecret) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithCustomIDRequest, ___TitleId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LoginWithCustomIDRequest) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
