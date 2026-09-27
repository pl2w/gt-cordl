#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PlayerProfileViewConstraints.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(PlayerProfileViewConstraints)
// Forward declare root types
namespace PlayFab::ClientModels {
class PlayerProfileViewConstraints;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PlayerProfileViewConstraints*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PlayerProfileViewConstraints*, "PlayFab.ClientModels", "PlayerProfileViewConstraints");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PlayerProfileViewConstraints
class CORDL_TYPE PlayerProfileViewConstraints : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ShowAvatarUrl, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowAvatarUrl, put=__cordl_internal_set_ShowAvatarUrl)) bool  ShowAvatarUrl;

/// @brief Field ShowBannedUntil, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowBannedUntil, put=__cordl_internal_set_ShowBannedUntil)) bool  ShowBannedUntil;

/// @brief Field ShowCampaignAttributions, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowCampaignAttributions, put=__cordl_internal_set_ShowCampaignAttributions)) bool  ShowCampaignAttributions;

/// @brief Field ShowContactEmailAddresses, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowContactEmailAddresses, put=__cordl_internal_set_ShowContactEmailAddresses)) bool  ShowContactEmailAddresses;

/// @brief Field ShowCreated, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowCreated, put=__cordl_internal_set_ShowCreated)) bool  ShowCreated;

/// @brief Field ShowDisplayName, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowDisplayName, put=__cordl_internal_set_ShowDisplayName)) bool  ShowDisplayName;

/// @brief Field ShowExperimentVariants, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowExperimentVariants, put=__cordl_internal_set_ShowExperimentVariants)) bool  ShowExperimentVariants;

/// @brief Field ShowLastLogin, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowLastLogin, put=__cordl_internal_set_ShowLastLogin)) bool  ShowLastLogin;

/// @brief Field ShowLinkedAccounts, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowLinkedAccounts, put=__cordl_internal_set_ShowLinkedAccounts)) bool  ShowLinkedAccounts;

/// @brief Field ShowLocations, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowLocations, put=__cordl_internal_set_ShowLocations)) bool  ShowLocations;

/// @brief Field ShowMemberships, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowMemberships, put=__cordl_internal_set_ShowMemberships)) bool  ShowMemberships;

/// @brief Field ShowOrigination, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowOrigination, put=__cordl_internal_set_ShowOrigination)) bool  ShowOrigination;

/// @brief Field ShowPushNotificationRegistrations, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowPushNotificationRegistrations, put=__cordl_internal_set_ShowPushNotificationRegistrations)) bool  ShowPushNotificationRegistrations;

/// @brief Field ShowStatistics, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowStatistics, put=__cordl_internal_set_ShowStatistics)) bool  ShowStatistics;

/// @brief Field ShowTags, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowTags, put=__cordl_internal_set_ShowTags)) bool  ShowTags;

/// @brief Field ShowTotalValueToDateInUsd, offset 0x1f, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowTotalValueToDateInUsd, put=__cordl_internal_set_ShowTotalValueToDateInUsd)) bool  ShowTotalValueToDateInUsd;

/// @brief Field ShowValuesToDate, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowValuesToDate, put=__cordl_internal_set_ShowValuesToDate)) bool  ShowValuesToDate;

static inline ::PlayFab::ClientModels::PlayerProfileViewConstraints* New_ctor() ;

constexpr bool const& __cordl_internal_get_ShowAvatarUrl() const;

constexpr bool& __cordl_internal_get_ShowAvatarUrl() ;

constexpr bool const& __cordl_internal_get_ShowBannedUntil() const;

constexpr bool& __cordl_internal_get_ShowBannedUntil() ;

constexpr bool const& __cordl_internal_get_ShowCampaignAttributions() const;

constexpr bool& __cordl_internal_get_ShowCampaignAttributions() ;

constexpr bool const& __cordl_internal_get_ShowContactEmailAddresses() const;

constexpr bool& __cordl_internal_get_ShowContactEmailAddresses() ;

constexpr bool const& __cordl_internal_get_ShowCreated() const;

constexpr bool& __cordl_internal_get_ShowCreated() ;

constexpr bool const& __cordl_internal_get_ShowDisplayName() const;

constexpr bool& __cordl_internal_get_ShowDisplayName() ;

constexpr bool const& __cordl_internal_get_ShowExperimentVariants() const;

constexpr bool& __cordl_internal_get_ShowExperimentVariants() ;

constexpr bool const& __cordl_internal_get_ShowLastLogin() const;

constexpr bool& __cordl_internal_get_ShowLastLogin() ;

constexpr bool const& __cordl_internal_get_ShowLinkedAccounts() const;

constexpr bool& __cordl_internal_get_ShowLinkedAccounts() ;

constexpr bool const& __cordl_internal_get_ShowLocations() const;

constexpr bool& __cordl_internal_get_ShowLocations() ;

constexpr bool const& __cordl_internal_get_ShowMemberships() const;

constexpr bool& __cordl_internal_get_ShowMemberships() ;

constexpr bool const& __cordl_internal_get_ShowOrigination() const;

constexpr bool& __cordl_internal_get_ShowOrigination() ;

constexpr bool const& __cordl_internal_get_ShowPushNotificationRegistrations() const;

constexpr bool& __cordl_internal_get_ShowPushNotificationRegistrations() ;

constexpr bool const& __cordl_internal_get_ShowStatistics() const;

constexpr bool& __cordl_internal_get_ShowStatistics() ;

constexpr bool const& __cordl_internal_get_ShowTags() const;

constexpr bool& __cordl_internal_get_ShowTags() ;

constexpr bool const& __cordl_internal_get_ShowTotalValueToDateInUsd() const;

constexpr bool& __cordl_internal_get_ShowTotalValueToDateInUsd() ;

constexpr bool const& __cordl_internal_get_ShowValuesToDate() const;

constexpr bool& __cordl_internal_get_ShowValuesToDate() ;

constexpr void __cordl_internal_set_ShowAvatarUrl(bool  value) ;

constexpr void __cordl_internal_set_ShowBannedUntil(bool  value) ;

constexpr void __cordl_internal_set_ShowCampaignAttributions(bool  value) ;

constexpr void __cordl_internal_set_ShowContactEmailAddresses(bool  value) ;

constexpr void __cordl_internal_set_ShowCreated(bool  value) ;

constexpr void __cordl_internal_set_ShowDisplayName(bool  value) ;

constexpr void __cordl_internal_set_ShowExperimentVariants(bool  value) ;

constexpr void __cordl_internal_set_ShowLastLogin(bool  value) ;

constexpr void __cordl_internal_set_ShowLinkedAccounts(bool  value) ;

constexpr void __cordl_internal_set_ShowLocations(bool  value) ;

constexpr void __cordl_internal_set_ShowMemberships(bool  value) ;

constexpr void __cordl_internal_set_ShowOrigination(bool  value) ;

constexpr void __cordl_internal_set_ShowPushNotificationRegistrations(bool  value) ;

constexpr void __cordl_internal_set_ShowStatistics(bool  value) ;

constexpr void __cordl_internal_set_ShowTags(bool  value) ;

constexpr void __cordl_internal_set_ShowTotalValueToDateInUsd(bool  value) ;

constexpr void __cordl_internal_set_ShowValuesToDate(bool  value) ;

/// @brief Method .ctor, addr 0xa84e110, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerProfileViewConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerProfileViewConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerProfileViewConstraints(PlayerProfileViewConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerProfileViewConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerProfileViewConstraints(PlayerProfileViewConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20179};

/// @brief Field ShowAvatarUrl, offset: 0x10, size: 0x1, def value: None
 bool  ___ShowAvatarUrl;

/// @brief Field ShowBannedUntil, offset: 0x11, size: 0x1, def value: None
 bool  ___ShowBannedUntil;

/// @brief Field ShowCampaignAttributions, offset: 0x12, size: 0x1, def value: None
 bool  ___ShowCampaignAttributions;

/// @brief Field ShowContactEmailAddresses, offset: 0x13, size: 0x1, def value: None
 bool  ___ShowContactEmailAddresses;

/// @brief Field ShowCreated, offset: 0x14, size: 0x1, def value: None
 bool  ___ShowCreated;

/// @brief Field ShowDisplayName, offset: 0x15, size: 0x1, def value: None
 bool  ___ShowDisplayName;

/// @brief Field ShowExperimentVariants, offset: 0x16, size: 0x1, def value: None
 bool  ___ShowExperimentVariants;

/// @brief Field ShowLastLogin, offset: 0x17, size: 0x1, def value: None
 bool  ___ShowLastLogin;

/// @brief Field ShowLinkedAccounts, offset: 0x18, size: 0x1, def value: None
 bool  ___ShowLinkedAccounts;

/// @brief Field ShowLocations, offset: 0x19, size: 0x1, def value: None
 bool  ___ShowLocations;

/// @brief Field ShowMemberships, offset: 0x1a, size: 0x1, def value: None
 bool  ___ShowMemberships;

/// @brief Field ShowOrigination, offset: 0x1b, size: 0x1, def value: None
 bool  ___ShowOrigination;

/// @brief Field ShowPushNotificationRegistrations, offset: 0x1c, size: 0x1, def value: None
 bool  ___ShowPushNotificationRegistrations;

/// @brief Field ShowStatistics, offset: 0x1d, size: 0x1, def value: None
 bool  ___ShowStatistics;

/// @brief Field ShowTags, offset: 0x1e, size: 0x1, def value: None
 bool  ___ShowTags;

/// @brief Field ShowTotalValueToDateInUsd, offset: 0x1f, size: 0x1, def value: None
 bool  ___ShowTotalValueToDateInUsd;

/// @brief Field ShowValuesToDate, offset: 0x20, size: 0x1, def value: None
 bool  ___ShowValuesToDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowAvatarUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowBannedUntil) == 0x11, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowCampaignAttributions) == 0x12, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowContactEmailAddresses) == 0x13, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowCreated) == 0x14, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowDisplayName) == 0x15, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowExperimentVariants) == 0x16, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowLastLogin) == 0x17, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowLinkedAccounts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowLocations) == 0x19, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowMemberships) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowOrigination) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowPushNotificationRegistrations) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowStatistics) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowTags) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowTotalValueToDateInUsd) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerProfileViewConstraints, ___ShowValuesToDate) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PlayerProfileViewConstraints) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
