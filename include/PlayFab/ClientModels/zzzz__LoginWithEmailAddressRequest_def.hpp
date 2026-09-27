#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithEmailAddressRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoginWithEmailAddressRequest)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class LoginWithEmailAddressRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LoginWithEmailAddressRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LoginWithEmailAddressRequest*, "PlayFab.ClientModels", "LoginWithEmailAddressRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LoginWithEmailAddressRequest
class CORDL_TYPE LoginWithEmailAddressRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

/// @brief Field InfoRequestParameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoRequestParameters, put=__cordl_internal_set_InfoRequestParameters)) ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  InfoRequestParameters;

/// @brief Field Password, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Password, put=__cordl_internal_set_Password)) ::StringW  Password;

/// @brief Field TitleId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::PlayFab::ClientModels::LoginWithEmailAddressRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& __cordl_internal_get_InfoRequestParameters() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& __cordl_internal_get_InfoRequestParameters() ;

constexpr ::StringW const& __cordl_internal_get_Password() const;

constexpr ::StringW& __cordl_internal_get_Password() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value) ;

constexpr void __cordl_internal_set_Password(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e020, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginWithEmailAddressRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginWithEmailAddressRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginWithEmailAddressRequest(LoginWithEmailAddressRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginWithEmailAddressRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginWithEmailAddressRequest(LoginWithEmailAddressRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20148};

/// @brief Field Email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field InfoRequestParameters, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  ___InfoRequestParameters;

/// @brief Field Password, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Password;

/// @brief Field TitleId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TitleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LoginWithEmailAddressRequest, ___Email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithEmailAddressRequest, ___InfoRequestParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithEmailAddressRequest, ___Password) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithEmailAddressRequest, ___TitleId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LoginWithEmailAddressRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
