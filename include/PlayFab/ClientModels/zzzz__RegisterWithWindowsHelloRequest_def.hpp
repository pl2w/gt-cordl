#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegisterWithWindowsHelloRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RegisterWithWindowsHelloRequest)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class RegisterWithWindowsHelloRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest*, "PlayFab.ClientModels", "RegisterWithWindowsHelloRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RegisterWithWindowsHelloRequest
class CORDL_TYPE RegisterWithWindowsHelloRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field DeviceName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviceName, put=__cordl_internal_set_DeviceName)) ::StringW  DeviceName;

/// @brief Field EncryptedRequest, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EncryptedRequest, put=__cordl_internal_set_EncryptedRequest)) ::StringW  EncryptedRequest;

/// @brief Field InfoRequestParameters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoRequestParameters, put=__cordl_internal_set_InfoRequestParameters)) ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  InfoRequestParameters;

/// @brief Field PlayerSecret, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerSecret, put=__cordl_internal_set_PlayerSecret)) ::StringW  PlayerSecret;

/// @brief Field PublicKey, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PublicKey, put=__cordl_internal_set_PublicKey)) ::StringW  PublicKey;

/// @brief Field TitleId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field UserName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserName, put=__cordl_internal_set_UserName)) ::StringW  UserName;

static inline ::PlayFab::ClientModels::RegisterWithWindowsHelloRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DeviceName() const;

constexpr ::StringW& __cordl_internal_get_DeviceName() ;

constexpr ::StringW const& __cordl_internal_get_EncryptedRequest() const;

constexpr ::StringW& __cordl_internal_get_EncryptedRequest() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& __cordl_internal_get_InfoRequestParameters() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& __cordl_internal_get_InfoRequestParameters() ;

constexpr ::StringW const& __cordl_internal_get_PlayerSecret() const;

constexpr ::StringW& __cordl_internal_get_PlayerSecret() ;

constexpr ::StringW const& __cordl_internal_get_PublicKey() const;

constexpr ::StringW& __cordl_internal_get_PublicKey() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_UserName() const;

constexpr ::StringW& __cordl_internal_get_UserName() ;

constexpr void __cordl_internal_set_DeviceName(::StringW  value) ;

constexpr void __cordl_internal_set_EncryptedRequest(::StringW  value) ;

constexpr void __cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value) ;

constexpr void __cordl_internal_set_PlayerSecret(::StringW  value) ;

constexpr void __cordl_internal_set_PublicKey(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_UserName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e188, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisterWithWindowsHelloRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisterWithWindowsHelloRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisterWithWindowsHelloRequest(RegisterWithWindowsHelloRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisterWithWindowsHelloRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisterWithWindowsHelloRequest(RegisterWithWindowsHelloRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20196};

/// @brief Field DeviceName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DeviceName;

/// @brief Field EncryptedRequest, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___EncryptedRequest;

/// @brief Field InfoRequestParameters, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  ___InfoRequestParameters;

/// @brief Field PlayerSecret, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___PlayerSecret;

/// @brief Field PublicKey, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___PublicKey;

/// @brief Field TitleId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field UserName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___UserName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest, ___DeviceName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest, ___EncryptedRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest, ___InfoRequestParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest, ___PlayerSecret) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest, ___PublicKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest, ___TitleId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest, ___UserName) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RegisterWithWindowsHelloRequest) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
