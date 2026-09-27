#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserAccountInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserAccountInfo)
namespace PlayFab::ClientModels {
class UserAndroidDeviceInfo;
}
namespace PlayFab::ClientModels {
class UserAppleIdInfo;
}
namespace PlayFab::ClientModels {
class UserCustomIdInfo;
}
namespace PlayFab::ClientModels {
class UserFacebookInfo;
}
namespace PlayFab::ClientModels {
class UserFacebookInstantGamesIdInfo;
}
namespace PlayFab::ClientModels {
class UserGameCenterInfo;
}
namespace PlayFab::ClientModels {
class UserGoogleInfo;
}
namespace PlayFab::ClientModels {
class UserIosDeviceInfo;
}
namespace PlayFab::ClientModels {
class UserKongregateInfo;
}
namespace PlayFab::ClientModels {
class UserNintendoSwitchAccountIdInfo;
}
namespace PlayFab::ClientModels {
class UserNintendoSwitchDeviceIdInfo;
}
namespace PlayFab::ClientModels {
class UserOpenIdInfo;
}
namespace PlayFab::ClientModels {
class UserPrivateAccountInfo;
}
namespace PlayFab::ClientModels {
class UserPsnInfo;
}
namespace PlayFab::ClientModels {
class UserSteamInfo;
}
namespace PlayFab::ClientModels {
class UserTitleInfo;
}
namespace PlayFab::ClientModels {
class UserTwitchInfo;
}
namespace PlayFab::ClientModels {
class UserWindowsHelloInfo;
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
class UserAccountInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserAccountInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserAccountInfo*, "PlayFab.ClientModels", "UserAccountInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserAccountInfo
class CORDL_TYPE UserAccountInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AndroidDeviceInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AndroidDeviceInfo, put=__cordl_internal_set_AndroidDeviceInfo)) ::PlayFab::ClientModels::UserAndroidDeviceInfo*  AndroidDeviceInfo;

/// @brief Field AppleAccountInfo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppleAccountInfo, put=__cordl_internal_set_AppleAccountInfo)) ::PlayFab::ClientModels::UserAppleIdInfo*  AppleAccountInfo;

/// @brief Field Created, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Created, put=__cordl_internal_set_Created)) ::System::DateTime  Created;

/// @brief Field CustomIdInfo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomIdInfo, put=__cordl_internal_set_CustomIdInfo)) ::PlayFab::ClientModels::UserCustomIdInfo*  CustomIdInfo;

/// @brief Field FacebookInfo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookInfo, put=__cordl_internal_set_FacebookInfo)) ::PlayFab::ClientModels::UserFacebookInfo*  FacebookInfo;

/// @brief Field FacebookInstantGamesIdInfo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookInstantGamesIdInfo, put=__cordl_internal_set_FacebookInstantGamesIdInfo)) ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*  FacebookInstantGamesIdInfo;

/// @brief Field GameCenterInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameCenterInfo, put=__cordl_internal_set_GameCenterInfo)) ::PlayFab::ClientModels::UserGameCenterInfo*  GameCenterInfo;

/// @brief Field GoogleInfo, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleInfo, put=__cordl_internal_set_GoogleInfo)) ::PlayFab::ClientModels::UserGoogleInfo*  GoogleInfo;

/// @brief Field IosDeviceInfo, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_IosDeviceInfo, put=__cordl_internal_set_IosDeviceInfo)) ::PlayFab::ClientModels::UserIosDeviceInfo*  IosDeviceInfo;

/// @brief Field KongregateInfo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_KongregateInfo, put=__cordl_internal_set_KongregateInfo)) ::PlayFab::ClientModels::UserKongregateInfo*  KongregateInfo;

/// @brief Field NintendoSwitchAccountInfo, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_NintendoSwitchAccountInfo, put=__cordl_internal_set_NintendoSwitchAccountInfo)) ::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo*  NintendoSwitchAccountInfo;

/// @brief Field NintendoSwitchDeviceIdInfo, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_NintendoSwitchDeviceIdInfo, put=__cordl_internal_set_NintendoSwitchDeviceIdInfo)) ::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo*  NintendoSwitchDeviceIdInfo;

/// @brief Field OpenIdInfo, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OpenIdInfo, put=__cordl_internal_set_OpenIdInfo)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::UserOpenIdInfo*>*  OpenIdInfo;

/// @brief Field PlayFabId, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field PrivateInfo, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrivateInfo, put=__cordl_internal_set_PrivateInfo)) ::PlayFab::ClientModels::UserPrivateAccountInfo*  PrivateInfo;

/// @brief Field PsnInfo, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_PsnInfo, put=__cordl_internal_set_PsnInfo)) ::PlayFab::ClientModels::UserPsnInfo*  PsnInfo;

/// @brief Field SteamInfo, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamInfo, put=__cordl_internal_set_SteamInfo)) ::PlayFab::ClientModels::UserSteamInfo*  SteamInfo;

/// @brief Field TitleInfo, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleInfo, put=__cordl_internal_set_TitleInfo)) ::PlayFab::ClientModels::UserTitleInfo*  TitleInfo;

/// @brief Field TwitchInfo, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_TwitchInfo, put=__cordl_internal_set_TwitchInfo)) ::PlayFab::ClientModels::UserTwitchInfo*  TwitchInfo;

/// @brief Field Username, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

/// @brief Field WindowsHelloInfo, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WindowsHelloInfo, put=__cordl_internal_set_WindowsHelloInfo)) ::PlayFab::ClientModels::UserWindowsHelloInfo*  WindowsHelloInfo;

/// @brief Field XboxInfo, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxInfo, put=__cordl_internal_set_XboxInfo)) ::PlayFab::ClientModels::UserXboxInfo*  XboxInfo;

static inline ::PlayFab::ClientModels::UserAccountInfo* New_ctor() ;

constexpr ::PlayFab::ClientModels::UserAndroidDeviceInfo* const& __cordl_internal_get_AndroidDeviceInfo() const;

constexpr ::PlayFab::ClientModels::UserAndroidDeviceInfo*& __cordl_internal_get_AndroidDeviceInfo() ;

constexpr ::PlayFab::ClientModels::UserAppleIdInfo* const& __cordl_internal_get_AppleAccountInfo() const;

constexpr ::PlayFab::ClientModels::UserAppleIdInfo*& __cordl_internal_get_AppleAccountInfo() ;

constexpr ::System::DateTime const& __cordl_internal_get_Created() const;

constexpr ::System::DateTime& __cordl_internal_get_Created() ;

constexpr ::PlayFab::ClientModels::UserCustomIdInfo* const& __cordl_internal_get_CustomIdInfo() const;

constexpr ::PlayFab::ClientModels::UserCustomIdInfo*& __cordl_internal_get_CustomIdInfo() ;

constexpr ::PlayFab::ClientModels::UserFacebookInfo* const& __cordl_internal_get_FacebookInfo() const;

constexpr ::PlayFab::ClientModels::UserFacebookInfo*& __cordl_internal_get_FacebookInfo() ;

constexpr ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo* const& __cordl_internal_get_FacebookInstantGamesIdInfo() const;

constexpr ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*& __cordl_internal_get_FacebookInstantGamesIdInfo() ;

constexpr ::PlayFab::ClientModels::UserGameCenterInfo* const& __cordl_internal_get_GameCenterInfo() const;

constexpr ::PlayFab::ClientModels::UserGameCenterInfo*& __cordl_internal_get_GameCenterInfo() ;

constexpr ::PlayFab::ClientModels::UserGoogleInfo* const& __cordl_internal_get_GoogleInfo() const;

constexpr ::PlayFab::ClientModels::UserGoogleInfo*& __cordl_internal_get_GoogleInfo() ;

constexpr ::PlayFab::ClientModels::UserIosDeviceInfo* const& __cordl_internal_get_IosDeviceInfo() const;

constexpr ::PlayFab::ClientModels::UserIosDeviceInfo*& __cordl_internal_get_IosDeviceInfo() ;

constexpr ::PlayFab::ClientModels::UserKongregateInfo* const& __cordl_internal_get_KongregateInfo() const;

constexpr ::PlayFab::ClientModels::UserKongregateInfo*& __cordl_internal_get_KongregateInfo() ;

constexpr ::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo* const& __cordl_internal_get_NintendoSwitchAccountInfo() const;

constexpr ::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo*& __cordl_internal_get_NintendoSwitchAccountInfo() ;

constexpr ::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo* const& __cordl_internal_get_NintendoSwitchDeviceIdInfo() const;

constexpr ::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo*& __cordl_internal_get_NintendoSwitchDeviceIdInfo() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::UserOpenIdInfo*>* const& __cordl_internal_get_OpenIdInfo() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::UserOpenIdInfo*>*& __cordl_internal_get_OpenIdInfo() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::PlayFab::ClientModels::UserPrivateAccountInfo* const& __cordl_internal_get_PrivateInfo() const;

constexpr ::PlayFab::ClientModels::UserPrivateAccountInfo*& __cordl_internal_get_PrivateInfo() ;

constexpr ::PlayFab::ClientModels::UserPsnInfo* const& __cordl_internal_get_PsnInfo() const;

constexpr ::PlayFab::ClientModels::UserPsnInfo*& __cordl_internal_get_PsnInfo() ;

constexpr ::PlayFab::ClientModels::UserSteamInfo* const& __cordl_internal_get_SteamInfo() const;

constexpr ::PlayFab::ClientModels::UserSteamInfo*& __cordl_internal_get_SteamInfo() ;

constexpr ::PlayFab::ClientModels::UserTitleInfo* const& __cordl_internal_get_TitleInfo() const;

constexpr ::PlayFab::ClientModels::UserTitleInfo*& __cordl_internal_get_TitleInfo() ;

constexpr ::PlayFab::ClientModels::UserTwitchInfo* const& __cordl_internal_get_TwitchInfo() const;

constexpr ::PlayFab::ClientModels::UserTwitchInfo*& __cordl_internal_get_TwitchInfo() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr ::PlayFab::ClientModels::UserWindowsHelloInfo* const& __cordl_internal_get_WindowsHelloInfo() const;

constexpr ::PlayFab::ClientModels::UserWindowsHelloInfo*& __cordl_internal_get_WindowsHelloInfo() ;

constexpr ::PlayFab::ClientModels::UserXboxInfo* const& __cordl_internal_get_XboxInfo() const;

constexpr ::PlayFab::ClientModels::UserXboxInfo*& __cordl_internal_get_XboxInfo() ;

constexpr void __cordl_internal_set_AndroidDeviceInfo(::PlayFab::ClientModels::UserAndroidDeviceInfo*  value) ;

constexpr void __cordl_internal_set_AppleAccountInfo(::PlayFab::ClientModels::UserAppleIdInfo*  value) ;

constexpr void __cordl_internal_set_Created(::System::DateTime  value) ;

constexpr void __cordl_internal_set_CustomIdInfo(::PlayFab::ClientModels::UserCustomIdInfo*  value) ;

constexpr void __cordl_internal_set_FacebookInfo(::PlayFab::ClientModels::UserFacebookInfo*  value) ;

constexpr void __cordl_internal_set_FacebookInstantGamesIdInfo(::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*  value) ;

constexpr void __cordl_internal_set_GameCenterInfo(::PlayFab::ClientModels::UserGameCenterInfo*  value) ;

constexpr void __cordl_internal_set_GoogleInfo(::PlayFab::ClientModels::UserGoogleInfo*  value) ;

constexpr void __cordl_internal_set_IosDeviceInfo(::PlayFab::ClientModels::UserIosDeviceInfo*  value) ;

constexpr void __cordl_internal_set_KongregateInfo(::PlayFab::ClientModels::UserKongregateInfo*  value) ;

constexpr void __cordl_internal_set_NintendoSwitchAccountInfo(::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo*  value) ;

constexpr void __cordl_internal_set_NintendoSwitchDeviceIdInfo(::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo*  value) ;

constexpr void __cordl_internal_set_OpenIdInfo(::System::Collections::Generic::List_1<::PlayFab::ClientModels::UserOpenIdInfo*>*  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_PrivateInfo(::PlayFab::ClientModels::UserPrivateAccountInfo*  value) ;

constexpr void __cordl_internal_set_PsnInfo(::PlayFab::ClientModels::UserPsnInfo*  value) ;

constexpr void __cordl_internal_set_SteamInfo(::PlayFab::ClientModels::UserSteamInfo*  value) ;

constexpr void __cordl_internal_set_TitleInfo(::PlayFab::ClientModels::UserTitleInfo*  value) ;

constexpr void __cordl_internal_set_TwitchInfo(::PlayFab::ClientModels::UserTwitchInfo*  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

constexpr void __cordl_internal_set_WindowsHelloInfo(::PlayFab::ClientModels::UserWindowsHelloInfo*  value) ;

constexpr void __cordl_internal_set_XboxInfo(::PlayFab::ClientModels::UserXboxInfo*  value) ;

/// @brief Method .ctor, addr 0xa84e458, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserAccountInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserAccountInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserAccountInfo(UserAccountInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserAccountInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserAccountInfo(UserAccountInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20291};

/// @brief Field AndroidDeviceInfo, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserAndroidDeviceInfo*  ___AndroidDeviceInfo;

/// @brief Field AppleAccountInfo, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserAppleIdInfo*  ___AppleAccountInfo;

/// @brief Field Created, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___Created;

/// @brief Field CustomIdInfo, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserCustomIdInfo*  ___CustomIdInfo;

/// @brief Field FacebookInfo, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserFacebookInfo*  ___FacebookInfo;

/// @brief Field FacebookInstantGamesIdInfo, offset: 0x38, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*  ___FacebookInstantGamesIdInfo;

/// @brief Field GameCenterInfo, offset: 0x40, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserGameCenterInfo*  ___GameCenterInfo;

/// @brief Field GoogleInfo, offset: 0x48, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserGoogleInfo*  ___GoogleInfo;

/// @brief Field IosDeviceInfo, offset: 0x50, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserIosDeviceInfo*  ___IosDeviceInfo;

/// @brief Field KongregateInfo, offset: 0x58, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserKongregateInfo*  ___KongregateInfo;

/// @brief Field NintendoSwitchAccountInfo, offset: 0x60, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo*  ___NintendoSwitchAccountInfo;

/// @brief Field NintendoSwitchDeviceIdInfo, offset: 0x68, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo*  ___NintendoSwitchDeviceIdInfo;

/// @brief Field OpenIdInfo, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::UserOpenIdInfo*>*  ___OpenIdInfo;

/// @brief Field PlayFabId, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field PrivateInfo, offset: 0x80, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserPrivateAccountInfo*  ___PrivateInfo;

/// @brief Field PsnInfo, offset: 0x88, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserPsnInfo*  ___PsnInfo;

/// @brief Field SteamInfo, offset: 0x90, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserSteamInfo*  ___SteamInfo;

/// @brief Field TitleInfo, offset: 0x98, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserTitleInfo*  ___TitleInfo;

/// @brief Field TwitchInfo, offset: 0xa0, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserTwitchInfo*  ___TwitchInfo;

/// @brief Field Username, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Field WindowsHelloInfo, offset: 0xb0, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserWindowsHelloInfo*  ___WindowsHelloInfo;

/// @brief Field XboxInfo, offset: 0xb8, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserXboxInfo*  ___XboxInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___AndroidDeviceInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___AppleAccountInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___Created) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___CustomIdInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___FacebookInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___FacebookInstantGamesIdInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___GameCenterInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___GoogleInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___IosDeviceInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___KongregateInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___NintendoSwitchAccountInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___NintendoSwitchDeviceIdInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___OpenIdInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___PlayFabId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___PrivateInfo) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___PsnInfo) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___SteamInfo) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___TitleInfo) == 0x98, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___TwitchInfo) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___Username) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___WindowsHelloInfo) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserAccountInfo, ___XboxInfo) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserAccountInfo) == 0xc0, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
