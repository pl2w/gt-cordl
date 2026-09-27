#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkWindowsHelloAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkWindowsHelloAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkWindowsHelloAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkWindowsHelloAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkWindowsHelloAccountRequest*, "PlayFab.ClientModels", "LinkWindowsHelloAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkWindowsHelloAccountRequest
class CORDL_TYPE LinkWindowsHelloAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field DeviceName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviceName, put=__cordl_internal_set_DeviceName)) ::StringW  DeviceName;

/// @brief Field ForceLink, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

/// @brief Field PublicKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PublicKey, put=__cordl_internal_set_PublicKey)) ::StringW  PublicKey;

/// @brief Field UserName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserName, put=__cordl_internal_set_UserName)) ::StringW  UserName;

static inline ::PlayFab::ClientModels::LinkWindowsHelloAccountRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DeviceName() const;

constexpr ::StringW& __cordl_internal_get_DeviceName() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr ::StringW const& __cordl_internal_get_PublicKey() const;

constexpr ::StringW& __cordl_internal_get_PublicKey() ;

constexpr ::StringW const& __cordl_internal_get_UserName() const;

constexpr ::StringW& __cordl_internal_get_UserName() ;

constexpr void __cordl_internal_set_DeviceName(::StringW  value) ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_PublicKey(::StringW  value) ;

constexpr void __cordl_internal_set_UserName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dfc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkWindowsHelloAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkWindowsHelloAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkWindowsHelloAccountRequest(LinkWindowsHelloAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkWindowsHelloAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkWindowsHelloAccountRequest(LinkWindowsHelloAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20136};

/// @brief Field DeviceName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DeviceName;

/// @brief Field ForceLink, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Field PublicKey, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___PublicKey;

/// @brief Field UserName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___UserName;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkWindowsHelloAccountRequest, ___DeviceName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkWindowsHelloAccountRequest, ___ForceLink) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkWindowsHelloAccountRequest, ___PublicKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkWindowsHelloAccountRequest, ___UserName) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkWindowsHelloAccountRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
