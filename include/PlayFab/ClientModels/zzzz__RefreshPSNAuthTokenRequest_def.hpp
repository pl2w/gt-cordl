#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RefreshPSNAuthTokenRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RefreshPSNAuthTokenRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class RefreshPSNAuthTokenRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RefreshPSNAuthTokenRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RefreshPSNAuthTokenRequest*, "PlayFab.ClientModels", "RefreshPSNAuthTokenRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RefreshPSNAuthTokenRequest
class CORDL_TYPE RefreshPSNAuthTokenRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AuthCode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthCode, put=__cordl_internal_set_AuthCode)) ::StringW  AuthCode;

/// @brief Field IssuerId, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_IssuerId, put=__cordl_internal_set_IssuerId)) ::System::Nullable_1<int32_t>  IssuerId;

/// @brief Field RedirectUri, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RedirectUri, put=__cordl_internal_set_RedirectUri)) ::StringW  RedirectUri;

static inline ::PlayFab::ClientModels::RefreshPSNAuthTokenRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AuthCode() const;

constexpr ::StringW& __cordl_internal_get_AuthCode() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_IssuerId() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_IssuerId() ;

constexpr ::StringW const& __cordl_internal_get_RedirectUri() const;

constexpr ::StringW& __cordl_internal_get_RedirectUri() ;

constexpr void __cordl_internal_set_AuthCode(::StringW  value) ;

constexpr void __cordl_internal_set_IssuerId(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_RedirectUri(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e158, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RefreshPSNAuthTokenRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RefreshPSNAuthTokenRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RefreshPSNAuthTokenRequest(RefreshPSNAuthTokenRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RefreshPSNAuthTokenRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RefreshPSNAuthTokenRequest(RefreshPSNAuthTokenRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20189};

/// @brief Field AuthCode, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AuthCode;

/// @brief Field IssuerId, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___IssuerId;

/// @brief Field RedirectUri, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___RedirectUri;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RefreshPSNAuthTokenRequest, ___AuthCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RefreshPSNAuthTokenRequest, ___IssuerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RefreshPSNAuthTokenRequest, ___RedirectUri) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RefreshPSNAuthTokenRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
