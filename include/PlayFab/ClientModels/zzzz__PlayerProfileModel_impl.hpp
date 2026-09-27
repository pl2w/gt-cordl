#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PlayerProfileModel.hpp"
#include "PlayFab/ClientModels/zzzz__LoginIdentityProvider_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__AdCampaignAttributionModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__ContactEmailInfoModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__LinkedPlatformAccountModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__LocationModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__MembershipModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__PushNotificationRegistrationModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__StatisticModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__TagModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__ValueToDateModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PlayerProfileModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PlayerProfileModel::*)()>(&::PlayFab::ClientModels::PlayerProfileModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PlayerProfileModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdCampaignAttributionModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_AdCampaignAttributions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdCampaignAttributions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdCampaignAttributionModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_AdCampaignAttributions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdCampaignAttributions;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_AdCampaignAttributions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdCampaignAttributionModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdCampaignAttributions = value;
}
constexpr ::StringW& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_AvatarUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvatarUrl;
}
constexpr ::StringW const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_AvatarUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvatarUrl;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_AvatarUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvatarUrl = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_BannedUntil()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BannedUntil;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_BannedUntil() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BannedUntil;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_BannedUntil(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BannedUntil = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ContactEmailInfoModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_ContactEmailAddresses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContactEmailAddresses;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ContactEmailInfoModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_ContactEmailAddresses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContactEmailAddresses;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_ContactEmailAddresses(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ContactEmailInfoModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContactEmailAddresses = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_Created(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Created = value;
}
constexpr ::StringW& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_ExperimentVariants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentVariants;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_ExperimentVariants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentVariants;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_ExperimentVariants(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExperimentVariants = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_LastLogin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLogin;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_LastLogin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLogin;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_LastLogin(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastLogin = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LinkedPlatformAccountModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_LinkedAccounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinkedAccounts;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LinkedPlatformAccountModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_LinkedAccounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinkedAccounts;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_LinkedAccounts(::System::Collections::Generic::List_1<::PlayFab::ClientModels::LinkedPlatformAccountModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinkedAccounts = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LocationModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Locations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LocationModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Locations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locations;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_Locations(::System::Collections::Generic::List_1<::PlayFab::ClientModels::LocationModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Locations = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::MembershipModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Memberships()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Memberships;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::MembershipModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Memberships() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Memberships;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_Memberships(::System::Collections::Generic::List_1<::PlayFab::ClientModels::MembershipModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Memberships = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider>& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Origination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Origination;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider> const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Origination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Origination;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_Origination(::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Origination = value;
}
constexpr ::StringW& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_PlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr ::StringW const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_PlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_PlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerId = value;
}
constexpr ::StringW& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_PublisherId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublisherId;
}
constexpr ::StringW const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_PublisherId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublisherId;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_PublisherId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PublisherId = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PushNotificationRegistrationModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_PushNotificationRegistrations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PushNotificationRegistrations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PushNotificationRegistrationModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_PushNotificationRegistrations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PushNotificationRegistrations;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_PushNotificationRegistrations(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PushNotificationRegistrationModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PushNotificationRegistrations = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Statistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statistics;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Statistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statistics;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_Statistics(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Statistics = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TagModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TagModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_Tags(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TagModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tags = value;
}
constexpr ::StringW& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_TotalValueToDateInUSD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalValueToDateInUSD;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_TotalValueToDateInUSD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalValueToDateInUSD;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_TotalValueToDateInUSD(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalValueToDateInUSD = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ValueToDateModel*>*& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_ValuesToDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValuesToDate;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ValueToDateModel*>* const& PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_get_ValuesToDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValuesToDate;
}
constexpr void PlayFab::ClientModels::PlayerProfileModel::__cordl_internal_set_ValuesToDate(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ValueToDateModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValuesToDate = value;
}
inline void PlayFab::ClientModels::PlayerProfileModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PlayerProfileModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PlayerProfileModel* PlayFab::ClientModels::PlayerProfileModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PlayerProfileModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PlayerProfileModel::PlayerProfileModel()   {
}
