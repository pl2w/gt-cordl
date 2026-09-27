#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/FriendInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__FriendInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserFacebookInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserGameCenterInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserPsnInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserSteamInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserXboxInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::FriendInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::FriendInfo::*)()>(&::PlayFab::ClientModels::FriendInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::FriendInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::UserFacebookInfo*& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_FacebookInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInfo;
}
constexpr ::PlayFab::ClientModels::UserFacebookInfo* const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_FacebookInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInfo;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_FacebookInfo(::PlayFab::ClientModels::UserFacebookInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookInfo = value;
}
constexpr ::StringW& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_FriendPlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendPlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_FriendPlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FriendPlayFabId;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_FriendPlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FriendPlayFabId = value;
}
constexpr ::PlayFab::ClientModels::UserGameCenterInfo*& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_GameCenterInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterInfo;
}
constexpr ::PlayFab::ClientModels::UserGameCenterInfo* const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_GameCenterInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterInfo;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_GameCenterInfo(::PlayFab::ClientModels::UserGameCenterInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCenterInfo = value;
}
constexpr ::PlayFab::ClientModels::PlayerProfileModel*& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_Profile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profile;
}
constexpr ::PlayFab::ClientModels::PlayerProfileModel* const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_Profile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profile;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_Profile(::PlayFab::ClientModels::PlayerProfileModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Profile = value;
}
constexpr ::PlayFab::ClientModels::UserPsnInfo*& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_PSNInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PSNInfo;
}
constexpr ::PlayFab::ClientModels::UserPsnInfo* const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_PSNInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PSNInfo;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_PSNInfo(::PlayFab::ClientModels::UserPsnInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PSNInfo = value;
}
constexpr ::PlayFab::ClientModels::UserSteamInfo*& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_SteamInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamInfo;
}
constexpr ::PlayFab::ClientModels::UserSteamInfo* const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_SteamInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamInfo;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_SteamInfo(::PlayFab::ClientModels::UserSteamInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tags = value;
}
constexpr ::StringW& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_TitleDisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleDisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_TitleDisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleDisplayName;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_TitleDisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleDisplayName = value;
}
constexpr ::StringW& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
constexpr ::PlayFab::ClientModels::UserXboxInfo*& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_XboxInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxInfo;
}
constexpr ::PlayFab::ClientModels::UserXboxInfo* const& PlayFab::ClientModels::FriendInfo::__cordl_internal_get_XboxInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxInfo;
}
constexpr void PlayFab::ClientModels::FriendInfo::__cordl_internal_set_XboxInfo(::PlayFab::ClientModels::UserXboxInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XboxInfo = value;
}
inline void PlayFab::ClientModels::FriendInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::FriendInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::FriendInfo* PlayFab::ClientModels::FriendInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::FriendInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::FriendInfo::FriendInfo()   {
}
