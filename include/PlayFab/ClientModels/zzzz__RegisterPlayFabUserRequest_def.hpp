#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegisterPlayFabUserRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RegisterPlayFabUserRequest)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class RegisterPlayFabUserRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RegisterPlayFabUserRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RegisterPlayFabUserRequest*, "PlayFab.ClientModels", "RegisterPlayFabUserRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RegisterPlayFabUserRequest
class CORDL_TYPE RegisterPlayFabUserRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field DisplayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field Email, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

/// @brief Field EncryptedRequest, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EncryptedRequest, put=__cordl_internal_set_EncryptedRequest)) ::StringW  EncryptedRequest;

/// @brief Field InfoRequestParameters, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoRequestParameters, put=__cordl_internal_set_InfoRequestParameters)) ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  InfoRequestParameters;

/// @brief Field Password, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Password, put=__cordl_internal_set_Password)) ::StringW  Password;

/// @brief Field PlayerSecret, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerSecret, put=__cordl_internal_set_PlayerSecret)) ::StringW  PlayerSecret;

/// @brief Field RequireBothUsernameAndEmail, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_RequireBothUsernameAndEmail, put=__cordl_internal_set_RequireBothUsernameAndEmail)) ::System::Nullable_1<bool>  RequireBothUsernameAndEmail;

/// @brief Field TitleId, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field Username, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::ClientModels::RegisterPlayFabUserRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::StringW const& __cordl_internal_get_EncryptedRequest() const;

constexpr ::StringW& __cordl_internal_get_EncryptedRequest() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& __cordl_internal_get_InfoRequestParameters() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& __cordl_internal_get_InfoRequestParameters() ;

constexpr ::StringW const& __cordl_internal_get_Password() const;

constexpr ::StringW& __cordl_internal_get_Password() ;

constexpr ::StringW const& __cordl_internal_get_PlayerSecret() const;

constexpr ::StringW& __cordl_internal_get_PlayerSecret() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_RequireBothUsernameAndEmail() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_RequireBothUsernameAndEmail() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_EncryptedRequest(::StringW  value) ;

constexpr void __cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value) ;

constexpr void __cordl_internal_set_Password(::StringW  value) ;

constexpr void __cordl_internal_set_PlayerSecret(::StringW  value) ;

constexpr void __cordl_internal_set_RequireBothUsernameAndEmail(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e178, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisterPlayFabUserRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisterPlayFabUserRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisterPlayFabUserRequest(RegisterPlayFabUserRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisterPlayFabUserRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisterPlayFabUserRequest(RegisterPlayFabUserRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20194};

/// @brief Field DisplayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field Email, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field EncryptedRequest, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___EncryptedRequest;

/// @brief Field InfoRequestParameters, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  ___InfoRequestParameters;

/// @brief Field Password, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Password;

/// @brief Field PlayerSecret, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___PlayerSecret;

/// @brief Field RequireBothUsernameAndEmail, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___RequireBothUsernameAndEmail;

/// @brief Field TitleId, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field Username, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Size padding 0x60 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___Email) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___EncryptedRequest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___InfoRequestParameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___Password) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___PlayerSecret) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___RequireBothUsernameAndEmail) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___TitleId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterPlayFabUserRequest, ___Username) == 0x60, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RegisterPlayFabUserRequest) == 0x60, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
