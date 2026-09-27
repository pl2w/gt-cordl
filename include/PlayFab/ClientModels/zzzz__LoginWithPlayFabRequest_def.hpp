#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithPlayFabRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoginWithPlayFabRequest)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class LoginWithPlayFabRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LoginWithPlayFabRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LoginWithPlayFabRequest*, "PlayFab.ClientModels", "LoginWithPlayFabRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LoginWithPlayFabRequest
class CORDL_TYPE LoginWithPlayFabRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field InfoRequestParameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoRequestParameters, put=__cordl_internal_set_InfoRequestParameters)) ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  InfoRequestParameters;

/// @brief Field Password, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Password, put=__cordl_internal_set_Password)) ::StringW  Password;

/// @brief Field TitleId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field Username, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::ClientModels::LoginWithPlayFabRequest* New_ctor() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& __cordl_internal_get_InfoRequestParameters() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& __cordl_internal_get_InfoRequestParameters() ;

constexpr ::StringW const& __cordl_internal_get_Password() const;

constexpr ::StringW& __cordl_internal_get_Password() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value) ;

constexpr void __cordl_internal_set_Password(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginWithPlayFabRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginWithPlayFabRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginWithPlayFabRequest(LoginWithPlayFabRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginWithPlayFabRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginWithPlayFabRequest(LoginWithPlayFabRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20158};

/// @brief Field InfoRequestParameters, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  ___InfoRequestParameters;

/// @brief Field Password, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Password;

/// @brief Field TitleId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field Username, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Username;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LoginWithPlayFabRequest, ___InfoRequestParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithPlayFabRequest, ___Password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithPlayFabRequest, ___TitleId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LoginWithPlayFabRequest, ___Username) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LoginWithPlayFabRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
