#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitlePublicKeyRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetTitlePublicKeyRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTitlePublicKeyRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTitlePublicKeyRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTitlePublicKeyRequest*, "PlayFab.ClientModels", "GetTitlePublicKeyRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTitlePublicKeyRequest
class CORDL_TYPE GetTitlePublicKeyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field TitleId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field TitleSharedSecret, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleSharedSecret, put=__cordl_internal_set_TitleSharedSecret)) ::StringW  TitleSharedSecret;

static inline ::PlayFab::ClientModels::GetTitlePublicKeyRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_TitleSharedSecret() const;

constexpr ::StringW& __cordl_internal_get_TitleSharedSecret() ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_TitleSharedSecret(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84de68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitlePublicKeyRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitlePublicKeyRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitlePublicKeyRequest(GetTitlePublicKeyRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitlePublicKeyRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitlePublicKeyRequest(GetTitlePublicKeyRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20092};

/// @brief Field TitleId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field TitleSharedSecret, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TitleSharedSecret;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetTitlePublicKeyRequest, ___TitleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetTitlePublicKeyRequest, ___TitleSharedSecret) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetTitlePublicKeyRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
