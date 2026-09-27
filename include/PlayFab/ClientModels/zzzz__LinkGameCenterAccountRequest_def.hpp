#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkGameCenterAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkGameCenterAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkGameCenterAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkGameCenterAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkGameCenterAccountRequest*, "PlayFab.ClientModels", "LinkGameCenterAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkGameCenterAccountRequest
class CORDL_TYPE LinkGameCenterAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ForceLink, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

/// @brief Field GameCenterId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameCenterId, put=__cordl_internal_set_GameCenterId)) ::StringW  GameCenterId;

/// @brief Field PublicKeyUrl, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PublicKeyUrl, put=__cordl_internal_set_PublicKeyUrl)) ::StringW  PublicKeyUrl;

/// @brief Field Salt, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Salt, put=__cordl_internal_set_Salt)) ::StringW  Salt;

/// @brief Field Signature, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Signature, put=__cordl_internal_set_Signature)) ::StringW  Signature;

/// @brief Field Timestamp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Timestamp, put=__cordl_internal_set_Timestamp)) ::StringW  Timestamp;

static inline ::PlayFab::ClientModels::LinkGameCenterAccountRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr ::StringW const& __cordl_internal_get_GameCenterId() const;

constexpr ::StringW& __cordl_internal_get_GameCenterId() ;

constexpr ::StringW const& __cordl_internal_get_PublicKeyUrl() const;

constexpr ::StringW& __cordl_internal_get_PublicKeyUrl() ;

constexpr ::StringW const& __cordl_internal_get_Salt() const;

constexpr ::StringW& __cordl_internal_get_Salt() ;

constexpr ::StringW const& __cordl_internal_get_Signature() const;

constexpr ::StringW& __cordl_internal_get_Signature() ;

constexpr ::StringW const& __cordl_internal_get_Timestamp() const;

constexpr ::StringW& __cordl_internal_get_Timestamp() ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_GameCenterId(::StringW  value) ;

constexpr void __cordl_internal_set_PublicKeyUrl(::StringW  value) ;

constexpr void __cordl_internal_set_Salt(::StringW  value) ;

constexpr void __cordl_internal_set_Signature(::StringW  value) ;

constexpr void __cordl_internal_set_Timestamp(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84df38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkGameCenterAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkGameCenterAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkGameCenterAccountRequest(LinkGameCenterAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkGameCenterAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkGameCenterAccountRequest(LinkGameCenterAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20118};

/// @brief Field ForceLink, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Field GameCenterId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___GameCenterId;

/// @brief Field PublicKeyUrl, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___PublicKeyUrl;

/// @brief Field Salt, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Salt;

/// @brief Field Signature, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Signature;

/// @brief Field Timestamp, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___Timestamp;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkGameCenterAccountRequest, ___ForceLink) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkGameCenterAccountRequest, ___GameCenterId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkGameCenterAccountRequest, ___PublicKeyUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkGameCenterAccountRequest, ___Salt) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkGameCenterAccountRequest, ___Signature) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkGameCenterAccountRequest, ___Timestamp) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkGameCenterAccountRequest) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
