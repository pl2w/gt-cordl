#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/FriendInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FriendInfo)
namespace PlayFab::ClientModels {
class PlayerProfileModel;
}
namespace PlayFab::ClientModels {
class UserFacebookInfo;
}
namespace PlayFab::ClientModels {
class UserGameCenterInfo;
}
namespace PlayFab::ClientModels {
class UserPsnInfo;
}
namespace PlayFab::ClientModels {
class UserSteamInfo;
}
namespace PlayFab::ClientModels {
class UserXboxInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class FriendInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::FriendInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::FriendInfo*, "PlayFab.ClientModels", "FriendInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.FriendInfo
class CORDL_TYPE FriendInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FacebookInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookInfo, put=__cordl_internal_set_FacebookInfo)) ::PlayFab::ClientModels::UserFacebookInfo*  FacebookInfo;

/// @brief Field FriendPlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendPlayFabId, put=__cordl_internal_set_FriendPlayFabId)) ::StringW  FriendPlayFabId;

/// @brief Field GameCenterInfo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameCenterInfo, put=__cordl_internal_set_GameCenterInfo)) ::PlayFab::ClientModels::UserGameCenterInfo*  GameCenterInfo;

/// @brief Field PSNInfo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PSNInfo, put=__cordl_internal_set_PSNInfo)) ::PlayFab::ClientModels::UserPsnInfo*  PSNInfo;

/// @brief Field Profile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Profile, put=__cordl_internal_set_Profile)) ::PlayFab::ClientModels::PlayerProfileModel*  Profile;

/// @brief Field SteamInfo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamInfo, put=__cordl_internal_set_SteamInfo)) ::PlayFab::ClientModels::UserSteamInfo*  SteamInfo;

/// @brief Field Tags, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::System::Collections::Generic::List_1<::StringW>*  Tags;

/// @brief Field TitleDisplayName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleDisplayName, put=__cordl_internal_set_TitleDisplayName)) ::StringW  TitleDisplayName;

/// @brief Field Username, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

/// @brief Field XboxInfo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxInfo, put=__cordl_internal_set_XboxInfo)) ::PlayFab::ClientModels::UserXboxInfo*  XboxInfo;

static inline ::PlayFab::ClientModels::FriendInfo* New_ctor() ;

constexpr ::PlayFab::ClientModels::UserFacebookInfo* const& __cordl_internal_get_FacebookInfo() const;

constexpr ::PlayFab::ClientModels::UserFacebookInfo*& __cordl_internal_get_FacebookInfo() ;

constexpr ::StringW const& __cordl_internal_get_FriendPlayFabId() const;

constexpr ::StringW& __cordl_internal_get_FriendPlayFabId() ;

constexpr ::PlayFab::ClientModels::UserGameCenterInfo* const& __cordl_internal_get_GameCenterInfo() const;

constexpr ::PlayFab::ClientModels::UserGameCenterInfo*& __cordl_internal_get_GameCenterInfo() ;

constexpr ::PlayFab::ClientModels::UserPsnInfo* const& __cordl_internal_get_PSNInfo() const;

constexpr ::PlayFab::ClientModels::UserPsnInfo*& __cordl_internal_get_PSNInfo() ;

constexpr ::PlayFab::ClientModels::PlayerProfileModel* const& __cordl_internal_get_Profile() const;

constexpr ::PlayFab::ClientModels::PlayerProfileModel*& __cordl_internal_get_Profile() ;

constexpr ::PlayFab::ClientModels::UserSteamInfo* const& __cordl_internal_get_SteamInfo() const;

constexpr ::PlayFab::ClientModels::UserSteamInfo*& __cordl_internal_get_SteamInfo() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Tags() ;

constexpr ::StringW const& __cordl_internal_get_TitleDisplayName() const;

constexpr ::StringW& __cordl_internal_get_TitleDisplayName() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr ::PlayFab::ClientModels::UserXboxInfo* const& __cordl_internal_get_XboxInfo() const;

constexpr ::PlayFab::ClientModels::UserXboxInfo*& __cordl_internal_get_XboxInfo() ;

constexpr void __cordl_internal_set_FacebookInfo(::PlayFab::ClientModels::UserFacebookInfo*  value) ;

constexpr void __cordl_internal_set_FriendPlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_GameCenterInfo(::PlayFab::ClientModels::UserGameCenterInfo*  value) ;

constexpr void __cordl_internal_set_PSNInfo(::PlayFab::ClientModels::UserPsnInfo*  value) ;

constexpr void __cordl_internal_set_Profile(::PlayFab::ClientModels::PlayerProfileModel*  value) ;

constexpr void __cordl_internal_set_SteamInfo(::PlayFab::ClientModels::UserSteamInfo*  value) ;

constexpr void __cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TitleDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

constexpr void __cordl_internal_set_XboxInfo(::PlayFab::ClientModels::UserXboxInfo*  value) ;

/// @brief Method .ctor, addr 0xa84db80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendInfo(FriendInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendInfo(FriendInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19998};

/// @brief Field FacebookInfo, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserFacebookInfo*  ___FacebookInfo;

/// @brief Field FriendPlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FriendPlayFabId;

/// @brief Field GameCenterInfo, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserGameCenterInfo*  ___GameCenterInfo;

/// @brief Field Profile, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileModel*  ___Profile;

/// @brief Field PSNInfo, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserPsnInfo*  ___PSNInfo;

/// @brief Field SteamInfo, offset: 0x38, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserSteamInfo*  ___SteamInfo;

/// @brief Field Tags, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Tags;

/// @brief Field TitleDisplayName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___TitleDisplayName;

/// @brief Field Username, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Field XboxInfo, offset: 0x58, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserXboxInfo*  ___XboxInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___FacebookInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___FriendPlayFabId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___GameCenterInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___Profile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___PSNInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___SteamInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___Tags) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___TitleDisplayName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___Username) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FriendInfo, ___XboxInfo) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::FriendInfo) == 0x60, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
