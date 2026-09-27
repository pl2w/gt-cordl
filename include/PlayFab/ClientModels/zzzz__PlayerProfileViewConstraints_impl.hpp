#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PlayerProfileViewConstraints.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileViewConstraints_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PlayerProfileViewConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PlayerProfileViewConstraints::*)()>(&::PlayFab::ClientModels::PlayerProfileViewConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PlayerProfileViewConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowAvatarUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowAvatarUrl;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowAvatarUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowAvatarUrl;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowAvatarUrl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowAvatarUrl = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowBannedUntil()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowBannedUntil;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowBannedUntil() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowBannedUntil;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowBannedUntil(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowBannedUntil = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowCampaignAttributions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowCampaignAttributions;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowCampaignAttributions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowCampaignAttributions;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowCampaignAttributions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowCampaignAttributions = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowContactEmailAddresses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowContactEmailAddresses;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowContactEmailAddresses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowContactEmailAddresses;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowContactEmailAddresses(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowContactEmailAddresses = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowCreated;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowCreated;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowCreated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowCreated = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowDisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDisplayName;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowDisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDisplayName;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowDisplayName(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowDisplayName = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowExperimentVariants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowExperimentVariants;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowExperimentVariants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowExperimentVariants;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowExperimentVariants(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowExperimentVariants = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowLastLogin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowLastLogin;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowLastLogin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowLastLogin;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowLastLogin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowLastLogin = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowLinkedAccounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowLinkedAccounts;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowLinkedAccounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowLinkedAccounts;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowLinkedAccounts(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowLinkedAccounts = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowLocations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowLocations;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowLocations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowLocations;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowLocations(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowLocations = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowMemberships()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowMemberships;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowMemberships() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowMemberships;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowMemberships(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowMemberships = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowOrigination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowOrigination;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowOrigination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowOrigination;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowOrigination(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowOrigination = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowPushNotificationRegistrations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowPushNotificationRegistrations;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowPushNotificationRegistrations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowPushNotificationRegistrations;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowPushNotificationRegistrations(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowPushNotificationRegistrations = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowStatistics;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowStatistics;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowStatistics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowStatistics = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowTags;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowTags;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowTags(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowTags = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowTotalValueToDateInUsd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowTotalValueToDateInUsd;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowTotalValueToDateInUsd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowTotalValueToDateInUsd;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowTotalValueToDateInUsd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowTotalValueToDateInUsd = value;
}
constexpr bool& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowValuesToDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowValuesToDate;
}
constexpr bool const& PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_get_ShowValuesToDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowValuesToDate;
}
constexpr void PlayFab::ClientModels::PlayerProfileViewConstraints::__cordl_internal_set_ShowValuesToDate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowValuesToDate = value;
}
inline void PlayFab::ClientModels::PlayerProfileViewConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PlayerProfileViewConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PlayerProfileViewConstraints* PlayFab::ClientModels::PlayerProfileViewConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PlayerProfileViewConstraints*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints::PlayerProfileViewConstraints()   {
}
