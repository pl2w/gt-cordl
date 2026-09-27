#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserAccountInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserAccountInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserAndroidDeviceInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserAppleIdInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserCustomIdInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserFacebookInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserFacebookInstantGamesIdInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserGameCenterInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserGoogleInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserIosDeviceInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserKongregateInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserNintendoSwitchAccountIdInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserNintendoSwitchDeviceIdInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserOpenIdInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserPrivateAccountInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserPsnInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserSteamInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserTitleInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserTwitchInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserWindowsHelloInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserXboxInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserAccountInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserAccountInfo::*)()>(&::PlayFab::ClientModels::UserAccountInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserAccountInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::UserAndroidDeviceInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_AndroidDeviceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDeviceInfo;
}
constexpr ::PlayFab::ClientModels::UserAndroidDeviceInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_AndroidDeviceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDeviceInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_AndroidDeviceInfo(::PlayFab::ClientModels::UserAndroidDeviceInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AndroidDeviceInfo = value;
}
constexpr ::PlayFab::ClientModels::UserAppleIdInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_AppleAccountInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppleAccountInfo;
}
constexpr ::PlayFab::ClientModels::UserAppleIdInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_AppleAccountInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppleAccountInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_AppleAccountInfo(::PlayFab::ClientModels::UserAppleIdInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppleAccountInfo = value;
}
constexpr ::System::DateTime& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_Created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_Created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_Created(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Created = value;
}
constexpr ::PlayFab::ClientModels::UserCustomIdInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_CustomIdInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomIdInfo;
}
constexpr ::PlayFab::ClientModels::UserCustomIdInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_CustomIdInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomIdInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_CustomIdInfo(::PlayFab::ClientModels::UserCustomIdInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomIdInfo = value;
}
constexpr ::PlayFab::ClientModels::UserFacebookInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_FacebookInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInfo;
}
constexpr ::PlayFab::ClientModels::UserFacebookInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_FacebookInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_FacebookInfo(::PlayFab::ClientModels::UserFacebookInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookInfo = value;
}
constexpr ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_FacebookInstantGamesIdInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesIdInfo;
}
constexpr ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_FacebookInstantGamesIdInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesIdInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_FacebookInstantGamesIdInfo(::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookInstantGamesIdInfo = value;
}
constexpr ::PlayFab::ClientModels::UserGameCenterInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_GameCenterInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterInfo;
}
constexpr ::PlayFab::ClientModels::UserGameCenterInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_GameCenterInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_GameCenterInfo(::PlayFab::ClientModels::UserGameCenterInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCenterInfo = value;
}
constexpr ::PlayFab::ClientModels::UserGoogleInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_GoogleInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleInfo;
}
constexpr ::PlayFab::ClientModels::UserGoogleInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_GoogleInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_GoogleInfo(::PlayFab::ClientModels::UserGoogleInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleInfo = value;
}
constexpr ::PlayFab::ClientModels::UserIosDeviceInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_IosDeviceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IosDeviceInfo;
}
constexpr ::PlayFab::ClientModels::UserIosDeviceInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_IosDeviceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IosDeviceInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_IosDeviceInfo(::PlayFab::ClientModels::UserIosDeviceInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IosDeviceInfo = value;
}
constexpr ::PlayFab::ClientModels::UserKongregateInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_KongregateInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateInfo;
}
constexpr ::PlayFab::ClientModels::UserKongregateInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_KongregateInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_KongregateInfo(::PlayFab::ClientModels::UserKongregateInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KongregateInfo = value;
}
constexpr ::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_NintendoSwitchAccountInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchAccountInfo;
}
constexpr ::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_NintendoSwitchAccountInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchAccountInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_NintendoSwitchAccountInfo(::PlayFab::ClientModels::UserNintendoSwitchAccountIdInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NintendoSwitchAccountInfo = value;
}
constexpr ::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_NintendoSwitchDeviceIdInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchDeviceIdInfo;
}
constexpr ::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_NintendoSwitchDeviceIdInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchDeviceIdInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_NintendoSwitchDeviceIdInfo(::PlayFab::ClientModels::UserNintendoSwitchDeviceIdInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NintendoSwitchDeviceIdInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::UserOpenIdInfo*>*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_OpenIdInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenIdInfo;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::UserOpenIdInfo*>* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_OpenIdInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenIdInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_OpenIdInfo(::System::Collections::Generic::List_1<::PlayFab::ClientModels::UserOpenIdInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OpenIdInfo = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::PlayFab::ClientModels::UserPrivateAccountInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_PrivateInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrivateInfo;
}
constexpr ::PlayFab::ClientModels::UserPrivateAccountInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_PrivateInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrivateInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_PrivateInfo(::PlayFab::ClientModels::UserPrivateAccountInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrivateInfo = value;
}
constexpr ::PlayFab::ClientModels::UserPsnInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_PsnInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PsnInfo;
}
constexpr ::PlayFab::ClientModels::UserPsnInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_PsnInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PsnInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_PsnInfo(::PlayFab::ClientModels::UserPsnInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PsnInfo = value;
}
constexpr ::PlayFab::ClientModels::UserSteamInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_SteamInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamInfo;
}
constexpr ::PlayFab::ClientModels::UserSteamInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_SteamInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_SteamInfo(::PlayFab::ClientModels::UserSteamInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamInfo = value;
}
constexpr ::PlayFab::ClientModels::UserTitleInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_TitleInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleInfo;
}
constexpr ::PlayFab::ClientModels::UserTitleInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_TitleInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_TitleInfo(::PlayFab::ClientModels::UserTitleInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleInfo = value;
}
constexpr ::PlayFab::ClientModels::UserTwitchInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_TwitchInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwitchInfo;
}
constexpr ::PlayFab::ClientModels::UserTwitchInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_TwitchInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwitchInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_TwitchInfo(::PlayFab::ClientModels::UserTwitchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwitchInfo = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
constexpr ::PlayFab::ClientModels::UserWindowsHelloInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_WindowsHelloInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowsHelloInfo;
}
constexpr ::PlayFab::ClientModels::UserWindowsHelloInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_WindowsHelloInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowsHelloInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_WindowsHelloInfo(::PlayFab::ClientModels::UserWindowsHelloInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindowsHelloInfo = value;
}
constexpr ::PlayFab::ClientModels::UserXboxInfo*& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_XboxInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxInfo;
}
constexpr ::PlayFab::ClientModels::UserXboxInfo* const& PlayFab::ClientModels::UserAccountInfo::__cordl_internal_get_XboxInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxInfo;
}
constexpr void PlayFab::ClientModels::UserAccountInfo::__cordl_internal_set_XboxInfo(::PlayFab::ClientModels::UserXboxInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XboxInfo = value;
}
inline void PlayFab::ClientModels::UserAccountInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserAccountInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserAccountInfo* PlayFab::ClientModels::UserAccountInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserAccountInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserAccountInfo::UserAccountInfo()   {
}
