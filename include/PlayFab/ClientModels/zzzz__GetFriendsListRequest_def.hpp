#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetFriendsListRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetFriendsListRequest)
namespace PlayFab::ClientModels {
class PlayerProfileViewConstraints;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetFriendsListRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetFriendsListRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetFriendsListRequest*, "PlayFab.ClientModels", "GetFriendsListRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetFriendsListRequest
class CORDL_TYPE GetFriendsListRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field IncludeFacebookFriends, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_IncludeFacebookFriends, put=__cordl_internal_set_IncludeFacebookFriends)) ::System::Nullable_1<bool>  IncludeFacebookFriends;

/// @brief Field IncludeSteamFriends, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_IncludeSteamFriends, put=__cordl_internal_set_IncludeSteamFriends)) ::System::Nullable_1<bool>  IncludeSteamFriends;

/// @brief Field ProfileConstraints, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProfileConstraints, put=__cordl_internal_set_ProfileConstraints)) ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ProfileConstraints;

/// @brief Field XboxToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxToken, put=__cordl_internal_set_XboxToken)) ::StringW  XboxToken;

static inline ::PlayFab::ClientModels::GetFriendsListRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_IncludeFacebookFriends() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_IncludeFacebookFriends() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_IncludeSteamFriends() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_IncludeSteamFriends() ;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& __cordl_internal_get_ProfileConstraints() const;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& __cordl_internal_get_ProfileConstraints() ;

constexpr ::StringW const& __cordl_internal_get_XboxToken() const;

constexpr ::StringW& __cordl_internal_get_XboxToken() ;

constexpr void __cordl_internal_set_IncludeFacebookFriends(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_IncludeSteamFriends(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value) ;

constexpr void __cordl_internal_set_XboxToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dc50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetFriendsListRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetFriendsListRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetFriendsListRequest(GetFriendsListRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetFriendsListRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetFriendsListRequest(GetFriendsListRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20025};

/// @brief Field IncludeFacebookFriends, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___IncludeFacebookFriends;

/// @brief Field IncludeSteamFriends, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___IncludeSteamFriends;

/// @brief Size padding 0x30 - 0x48 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

/// @brief Field ProfileConstraints, offset: 0x38, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ___ProfileConstraints;

/// @brief Field XboxToken, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___XboxToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetFriendsListRequest, ___IncludeFacebookFriends) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendsListRequest, ___IncludeSteamFriends) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendsListRequest, ___ProfileConstraints) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendsListRequest, ___XboxToken) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetFriendsListRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
