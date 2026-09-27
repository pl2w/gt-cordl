#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkGoogleAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkGoogleAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkGoogleAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkGoogleAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkGoogleAccountRequest*, "PlayFab.ClientModels", "LinkGoogleAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkGoogleAccountRequest
class CORDL_TYPE LinkGoogleAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ForceLink, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

/// @brief Field ServerAuthCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerAuthCode, put=__cordl_internal_set_ServerAuthCode)) ::StringW  ServerAuthCode;

static inline ::PlayFab::ClientModels::LinkGoogleAccountRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr ::StringW const& __cordl_internal_get_ServerAuthCode() const;

constexpr ::StringW& __cordl_internal_get_ServerAuthCode() ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_ServerAuthCode(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84df48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkGoogleAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkGoogleAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkGoogleAccountRequest(LinkGoogleAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkGoogleAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkGoogleAccountRequest(LinkGoogleAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20120};

/// @brief Field ForceLink, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Field ServerAuthCode, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ServerAuthCode;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkGoogleAccountRequest, ___ForceLink) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkGoogleAccountRequest, ___ServerAuthCode) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkGoogleAccountRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
