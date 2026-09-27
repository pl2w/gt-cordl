#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SetPlayerSecretRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetPlayerSecretRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class SetPlayerSecretRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::SetPlayerSecretRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::SetPlayerSecretRequest*, "PlayFab.ClientModels", "SetPlayerSecretRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.SetPlayerSecretRequest
class CORDL_TYPE SetPlayerSecretRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field EncryptedRequest, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EncryptedRequest, put=__cordl_internal_set_EncryptedRequest)) ::StringW  EncryptedRequest;

/// @brief Field PlayerSecret, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerSecret, put=__cordl_internal_set_PlayerSecret)) ::StringW  PlayerSecret;

static inline ::PlayFab::ClientModels::SetPlayerSecretRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_EncryptedRequest() const;

constexpr ::StringW& __cordl_internal_get_EncryptedRequest() ;

constexpr ::StringW const& __cordl_internal_get_PlayerSecret() const;

constexpr ::StringW& __cordl_internal_get_PlayerSecret() ;

constexpr void __cordl_internal_set_EncryptedRequest(::StringW  value) ;

constexpr void __cordl_internal_set_PlayerSecret(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e238, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetPlayerSecretRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetPlayerSecretRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetPlayerSecretRequest(SetPlayerSecretRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetPlayerSecretRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetPlayerSecretRequest(SetPlayerSecretRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20218};

/// @brief Field EncryptedRequest, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EncryptedRequest;

/// @brief Field PlayerSecret, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayerSecret;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::SetPlayerSecretRequest, ___EncryptedRequest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::SetPlayerSecretRequest, ___PlayerSecret) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::SetPlayerSecretRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
