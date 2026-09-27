#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkKongregateAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkKongregateAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkKongregateAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkKongregateAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkKongregateAccountRequest*, "PlayFab.ClientModels", "LinkKongregateAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkKongregateAccountRequest
class CORDL_TYPE LinkKongregateAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AuthTicket, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthTicket, put=__cordl_internal_set_AuthTicket)) ::StringW  AuthTicket;

/// @brief Field ForceLink, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

/// @brief Field KongregateId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_KongregateId, put=__cordl_internal_set_KongregateId)) ::StringW  KongregateId;

static inline ::PlayFab::ClientModels::LinkKongregateAccountRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AuthTicket() const;

constexpr ::StringW& __cordl_internal_get_AuthTicket() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr ::StringW const& __cordl_internal_get_KongregateId() const;

constexpr ::StringW& __cordl_internal_get_KongregateId() ;

constexpr void __cordl_internal_set_AuthTicket(::StringW  value) ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_KongregateId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84df68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkKongregateAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkKongregateAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkKongregateAccountRequest(LinkKongregateAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkKongregateAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkKongregateAccountRequest(LinkKongregateAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20124};

/// @brief Field AuthTicket, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AuthTicket;

/// @brief Field ForceLink, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Field KongregateId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___KongregateId;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkKongregateAccountRequest, ___AuthTicket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkKongregateAccountRequest, ___ForceLink) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkKongregateAccountRequest, ___KongregateId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkKongregateAccountRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
