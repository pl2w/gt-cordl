#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkFacebookAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkFacebookAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkFacebookAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkFacebookAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkFacebookAccountRequest*, "PlayFab.ClientModels", "LinkFacebookAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkFacebookAccountRequest
class CORDL_TYPE LinkFacebookAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AccessToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AccessToken, put=__cordl_internal_set_AccessToken)) ::StringW  AccessToken;

/// @brief Field ForceLink, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

static inline ::PlayFab::ClientModels::LinkFacebookAccountRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AccessToken() const;

constexpr ::StringW& __cordl_internal_get_AccessToken() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr void __cordl_internal_set_AccessToken(::StringW  value) ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa84df18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkFacebookAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkFacebookAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkFacebookAccountRequest(LinkFacebookAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkFacebookAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkFacebookAccountRequest(LinkFacebookAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20114};

/// @brief Field AccessToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AccessToken;

/// @brief Field ForceLink, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkFacebookAccountRequest, ___AccessToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkFacebookAccountRequest, ___ForceLink) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkFacebookAccountRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
