#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkPSNAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkPSNAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkPSNAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkPSNAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkPSNAccountRequest*, "PlayFab.ClientModels", "LinkPSNAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkPSNAccountRequest
class CORDL_TYPE LinkPSNAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AuthCode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthCode, put=__cordl_internal_set_AuthCode)) ::StringW  AuthCode;

/// @brief Field ForceLink, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

/// @brief Field IssuerId, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_IssuerId, put=__cordl_internal_set_IssuerId)) ::System::Nullable_1<int32_t>  IssuerId;

/// @brief Field RedirectUri, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RedirectUri, put=__cordl_internal_set_RedirectUri)) ::StringW  RedirectUri;

static inline ::PlayFab::ClientModels::LinkPSNAccountRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AuthCode() const;

constexpr ::StringW& __cordl_internal_get_AuthCode() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_IssuerId() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_IssuerId() ;

constexpr ::StringW const& __cordl_internal_get_RedirectUri() const;

constexpr ::StringW& __cordl_internal_get_RedirectUri() ;

constexpr void __cordl_internal_set_AuthCode(::StringW  value) ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_IssuerId(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_RedirectUri(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84df98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkPSNAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkPSNAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkPSNAccountRequest(LinkPSNAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkPSNAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkPSNAccountRequest(LinkPSNAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20130};

/// @brief Field AuthCode, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AuthCode;

/// @brief Field ForceLink, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Field IssuerId, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___IssuerId;

/// @brief Size padding 0x38 - 0x48 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field RedirectUri, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___RedirectUri;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkPSNAccountRequest, ___AuthCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkPSNAccountRequest, ___ForceLink) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkPSNAccountRequest, ___IssuerId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkPSNAccountRequest, ___RedirectUri) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkPSNAccountRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
