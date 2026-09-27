#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GameInfo.hpp"
#include "PlayFab/ClientModels/zzzz__GameInstanceState_impl.hpp"
#include "PlayFab/ClientModels/zzzz__Region_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GameInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GameInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GameInfo::*)()>(&::PlayFab::ClientModels::GameInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GameInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GameInfo::__cordl_internal_get_BuildVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_BuildVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_BuildVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameInfo::__cordl_internal_get_GameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr ::StringW const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_GameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_GameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameMode = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameInfo::__cordl_internal_get_GameServerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameServerData;
}
constexpr ::StringW const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_GameServerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameServerData;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_GameServerData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameServerData = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::GameInstanceState>& PlayFab::ClientModels::GameInfo::__cordl_internal_get_GameServerStateEnum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameServerStateEnum;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::GameInstanceState> const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_GameServerStateEnum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameServerStateEnum;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_GameServerStateEnum(::System::Nullable_1<::PlayFab::ClientModels::GameInstanceState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameServerStateEnum = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::GameInfo::__cordl_internal_get_LastHeartbeat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastHeartbeat;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_LastHeartbeat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastHeartbeat;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_LastHeartbeat(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastHeartbeat = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameInfo::__cordl_internal_get_LobbyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyID;
}
constexpr ::StringW const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_LobbyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyID;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_LobbyID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyID = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GameInfo::__cordl_internal_get_MaxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_MaxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_MaxPlayers(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GameInfo::__cordl_internal_get_PlayerUserIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerUserIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_PlayerUserIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerUserIds;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_PlayerUserIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerUserIds = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region>& PlayFab::ClientModels::GameInfo::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region> const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_Region(::System::Nullable_1<::PlayFab::ClientModels::Region>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr uint32_t& PlayFab::ClientModels::GameInfo::__cordl_internal_get_RunTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunTime;
}
constexpr uint32_t const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_RunTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunTime;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_RunTime(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RunTime = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameInfo::__cordl_internal_get_ServerIPV4Address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerIPV4Address;
}
constexpr ::StringW const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_ServerIPV4Address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerIPV4Address;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_ServerIPV4Address(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerIPV4Address = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameInfo::__cordl_internal_get_ServerIPV6Address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerIPV6Address;
}
constexpr ::StringW const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_ServerIPV6Address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerIPV6Address;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_ServerIPV6Address(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerIPV6Address = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GameInfo::__cordl_internal_get_ServerPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPort;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_ServerPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPort;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_ServerPort(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerPort = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameInfo::__cordl_internal_get_ServerPublicDNSName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPublicDNSName;
}
constexpr ::StringW const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_ServerPublicDNSName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPublicDNSName;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_ServerPublicDNSName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerPublicDNSName = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameInfo::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::ClientModels::GameInfo::__cordl_internal_get_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::ClientModels::GameInfo::__cordl_internal_get_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr void PlayFab::ClientModels::GameInfo::__cordl_internal_set_Tags(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tags = value;
}
inline void PlayFab::ClientModels::GameInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GameInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GameInfo* PlayFab::ClientModels::GameInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GameInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GameInfo::GameInfo()   {
}
