#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerCombinedInfoResultPayload.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoResultPayload_def.hpp"
#include "PlayFab/ClientModels/zzzz__CharacterInventory_def.hpp"
#include "PlayFab/ClientModels/zzzz__CharacterResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__StatisticValue_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserAccountInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataRecord_def.hpp"
#include "PlayFab/ClientModels/zzzz__VirtualCurrencyRechargeTime_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::*)()>(&::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::UserAccountInfo*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_AccountInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccountInfo;
}
constexpr ::PlayFab::ClientModels::UserAccountInfo* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_AccountInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccountInfo;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_AccountInfo(::PlayFab::ClientModels::UserAccountInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AccountInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterInventory*>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_CharacterInventories()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterInventories;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterInventory*>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_CharacterInventories() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterInventories;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_CharacterInventories(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterInventory*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterInventories = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_CharacterList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterList;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_CharacterList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterList;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_CharacterList(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterList = value;
}
constexpr ::PlayFab::ClientModels::PlayerProfileModel*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_PlayerProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProfile;
}
constexpr ::PlayFab::ClientModels::PlayerProfileModel* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_PlayerProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProfile;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_PlayerProfile(::PlayFab::ClientModels::PlayerProfileModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerProfile = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_PlayerStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStatistics;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_PlayerStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStatistics;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_PlayerStatistics(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerStatistics = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_TitleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_TitleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleData;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_TitleData(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserData;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_UserData(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserData = value;
}
constexpr uint32_t& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserDataVersion;
}
constexpr uint32_t const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserDataVersion;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_UserDataVersion(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserDataVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserInventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserInventory;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserInventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserInventory;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_UserInventory(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserInventory = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserReadOnlyData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserReadOnlyData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserReadOnlyData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserReadOnlyData;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_UserReadOnlyData(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserReadOnlyData = value;
}
constexpr uint32_t& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserReadOnlyDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserReadOnlyDataVersion;
}
constexpr uint32_t const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserReadOnlyDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserReadOnlyDataVersion;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_UserReadOnlyDataVersion(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserReadOnlyDataVersion = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserVirtualCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserVirtualCurrency;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserVirtualCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserVirtualCurrency;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_UserVirtualCurrency(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserVirtualCurrency = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserVirtualCurrencyRechargeTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserVirtualCurrencyRechargeTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>* const& PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_get_UserVirtualCurrencyRechargeTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserVirtualCurrencyRechargeTimes;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::__cordl_internal_set_UserVirtualCurrencyRechargeTimes(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserVirtualCurrencyRechargeTimes = value;
}
inline void PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload* PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload()   {
}
