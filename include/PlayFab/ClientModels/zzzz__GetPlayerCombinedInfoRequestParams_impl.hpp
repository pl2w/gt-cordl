#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerCombinedInfoRequestParams.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileViewConstraints_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::*)()>(&::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetCharacterInventories()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetCharacterInventories;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetCharacterInventories() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetCharacterInventories;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetCharacterInventories(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetCharacterInventories = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetCharacterList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetCharacterList;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetCharacterList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetCharacterList;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetCharacterList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetCharacterList = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetPlayerProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetPlayerProfile;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetPlayerProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetPlayerProfile;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetPlayerProfile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetPlayerProfile = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetPlayerStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetPlayerStatistics;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetPlayerStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetPlayerStatistics;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetPlayerStatistics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetPlayerStatistics = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetTitleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetTitleData;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetTitleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetTitleData;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetTitleData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetTitleData = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserAccountInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserAccountInfo;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserAccountInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserAccountInfo;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetUserAccountInfo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetUserAccountInfo = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserData;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserData;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetUserData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetUserData = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserInventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserInventory;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserInventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserInventory;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetUserInventory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetUserInventory = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserReadOnlyData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserReadOnlyData;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserReadOnlyData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserReadOnlyData;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetUserReadOnlyData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetUserReadOnlyData = value;
}
constexpr bool& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserVirtualCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserVirtualCurrency;
}
constexpr bool const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_GetUserVirtualCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetUserVirtualCurrency;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_GetUserVirtualCurrency(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetUserVirtualCurrency = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_PlayerStatisticNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStatisticNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_PlayerStatisticNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStatisticNames;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_PlayerStatisticNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerStatisticNames = value;
}
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_ProfileConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileConstraints;
}
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_ProfileConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileConstraints;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileConstraints = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_TitleDataKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleDataKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_TitleDataKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleDataKeys;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_TitleDataKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleDataKeys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_UserDataKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserDataKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_UserDataKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserDataKeys;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_UserDataKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserDataKeys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_UserReadOnlyDataKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserReadOnlyDataKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_get_UserReadOnlyDataKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserReadOnlyDataKeys;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::__cordl_internal_set_UserReadOnlyDataKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserReadOnlyDataKeys = value;
}
inline void PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams()   {
}
