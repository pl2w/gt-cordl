#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PlayerProfileModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/CloudScriptModels/zzzz__LoginIdentityProvider_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerProfileModel)
namespace PlayFab::CloudScriptModels {
class AdCampaignAttributionModel;
}
namespace PlayFab::CloudScriptModels {
class ContactEmailInfoModel;
}
namespace PlayFab::CloudScriptModels {
class LinkedPlatformAccountModel;
}
namespace PlayFab::CloudScriptModels {
class LocationModel;
}
namespace PlayFab::CloudScriptModels {
class MembershipModel;
}
namespace PlayFab::CloudScriptModels {
class PushNotificationRegistrationModel;
}
namespace PlayFab::CloudScriptModels {
class StatisticModel;
}
namespace PlayFab::CloudScriptModels {
class TagModel;
}
namespace PlayFab::CloudScriptModels {
class ValueToDateModel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class PlayerProfileModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::PlayerProfileModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::PlayerProfileModel*, "PlayFab.CloudScriptModels", "PlayerProfileModel");
// Dependencies PlayFab.CloudScriptModels.LoginIdentityProvider, PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.PlayerProfileModel
class CORDL_TYPE PlayerProfileModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AdCampaignAttributions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdCampaignAttributions, put=__cordl_internal_set_AdCampaignAttributions)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>*  AdCampaignAttributions;

/// @brief Field AvatarUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AvatarUrl, put=__cordl_internal_set_AvatarUrl)) ::StringW  AvatarUrl;

/// @brief Field BannedUntil, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_BannedUntil, put=__cordl_internal_set_BannedUntil)) ::System::Nullable_1<::System::DateTime>  BannedUntil;

/// @brief Field ContactEmailAddresses, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContactEmailAddresses, put=__cordl_internal_set_ContactEmailAddresses)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>*  ContactEmailAddresses;

/// @brief Field Created, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_Created, put=__cordl_internal_set_Created)) ::System::Nullable_1<::System::DateTime>  Created;

/// @brief Field DisplayName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field ExperimentVariants, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExperimentVariants, put=__cordl_internal_set_ExperimentVariants)) ::System::Collections::Generic::List_1<::StringW>*  ExperimentVariants;

/// @brief Field LastLogin, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_LastLogin, put=__cordl_internal_set_LastLogin)) ::System::Nullable_1<::System::DateTime>  LastLogin;

/// @brief Field LinkedAccounts, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_LinkedAccounts, put=__cordl_internal_set_LinkedAccounts)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*>*  LinkedAccounts;

/// @brief Field Locations, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Locations, put=__cordl_internal_set_Locations)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LocationModel*>*  Locations;

/// @brief Field Memberships, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Memberships, put=__cordl_internal_set_Memberships)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::MembershipModel*>*  Memberships;

/// @brief Field Origination, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_Origination, put=__cordl_internal_set_Origination)) ::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider>  Origination;

/// @brief Field PlayerId, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerId, put=__cordl_internal_set_PlayerId)) ::StringW  PlayerId;

/// @brief Field PublisherId, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_PublisherId, put=__cordl_internal_set_PublisherId)) ::StringW  PublisherId;

/// @brief Field PushNotificationRegistrations, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PushNotificationRegistrations, put=__cordl_internal_set_PushNotificationRegistrations)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>*  PushNotificationRegistrations;

/// @brief Field Statistics, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Statistics, put=__cordl_internal_set_Statistics)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::StatisticModel*>*  Statistics;

/// @brief Field Tags, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::TagModel*>*  Tags;

/// @brief Field TitleId, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field TotalValueToDateInUSD, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_TotalValueToDateInUSD, put=__cordl_internal_set_TotalValueToDateInUSD)) ::System::Nullable_1<uint32_t>  TotalValueToDateInUSD;

/// @brief Field ValuesToDate, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ValuesToDate, put=__cordl_internal_set_ValuesToDate)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ValueToDateModel*>*  ValuesToDate;

static inline ::PlayFab::CloudScriptModels::PlayerProfileModel* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>* const& __cordl_internal_get_AdCampaignAttributions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>*& __cordl_internal_get_AdCampaignAttributions() ;

constexpr ::StringW const& __cordl_internal_get_AvatarUrl() const;

constexpr ::StringW& __cordl_internal_get_AvatarUrl() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_BannedUntil() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_BannedUntil() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>* const& __cordl_internal_get_ContactEmailAddresses() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>*& __cordl_internal_get_ContactEmailAddresses() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_Created() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_Created() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_ExperimentVariants() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ExperimentVariants() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_LastLogin() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_LastLogin() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*>* const& __cordl_internal_get_LinkedAccounts() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*>*& __cordl_internal_get_LinkedAccounts() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LocationModel*>* const& __cordl_internal_get_Locations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LocationModel*>*& __cordl_internal_get_Locations() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::MembershipModel*>* const& __cordl_internal_get_Memberships() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::MembershipModel*>*& __cordl_internal_get_Memberships() ;

constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider> const& __cordl_internal_get_Origination() const;

constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider>& __cordl_internal_get_Origination() ;

constexpr ::StringW const& __cordl_internal_get_PlayerId() const;

constexpr ::StringW& __cordl_internal_get_PlayerId() ;

constexpr ::StringW const& __cordl_internal_get_PublisherId() const;

constexpr ::StringW& __cordl_internal_get_PublisherId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>* const& __cordl_internal_get_PushNotificationRegistrations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>*& __cordl_internal_get_PushNotificationRegistrations() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::StatisticModel*>* const& __cordl_internal_get_Statistics() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::StatisticModel*>*& __cordl_internal_get_Statistics() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::TagModel*>* const& __cordl_internal_get_Tags() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::TagModel*>*& __cordl_internal_get_Tags() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_TotalValueToDateInUSD() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_TotalValueToDateInUSD() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ValueToDateModel*>* const& __cordl_internal_get_ValuesToDate() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ValueToDateModel*>*& __cordl_internal_get_ValuesToDate() ;

constexpr void __cordl_internal_set_AdCampaignAttributions(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>*  value) ;

constexpr void __cordl_internal_set_AvatarUrl(::StringW  value) ;

constexpr void __cordl_internal_set_BannedUntil(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_ContactEmailAddresses(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>*  value) ;

constexpr void __cordl_internal_set_Created(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_ExperimentVariants(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_LastLogin(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_LinkedAccounts(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*>*  value) ;

constexpr void __cordl_internal_set_Locations(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LocationModel*>*  value) ;

constexpr void __cordl_internal_set_Memberships(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::MembershipModel*>*  value) ;

constexpr void __cordl_internal_set_Origination(::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider>  value) ;

constexpr void __cordl_internal_set_PlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_PublisherId(::StringW  value) ;

constexpr void __cordl_internal_set_PushNotificationRegistrations(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>*  value) ;

constexpr void __cordl_internal_set_Statistics(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::StatisticModel*>*  value) ;

constexpr void __cordl_internal_set_Tags(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::TagModel*>*  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_TotalValueToDateInUSD(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_ValuesToDate(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ValueToDateModel*>*  value) ;

/// @brief Method .ctor, addr 0xa842fac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerProfileModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerProfileModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerProfileModel(PlayerProfileModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerProfileModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerProfileModel(PlayerProfileModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19894};

/// @brief Field AdCampaignAttributions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>*  ___AdCampaignAttributions;

/// @brief Field AvatarUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AvatarUrl;

/// @brief Field BannedUntil, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___BannedUntil;

/// @brief Field ContactEmailAddresses, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>*  ___ContactEmailAddresses;

/// @brief Field Created, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___Created;

/// @brief Field DisplayName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field ExperimentVariants, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___ExperimentVariants;

/// @brief Field LastLogin, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___LastLogin;

/// @brief Field LinkedAccounts, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*>*  ___LinkedAccounts;

/// @brief Field Locations, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::LocationModel*>*  ___Locations;

/// @brief Field Memberships, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::MembershipModel*>*  ___Memberships;

/// @brief Field Origination, offset: 0x80, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider>  ___Origination;

/// @brief Field PlayerId, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___PlayerId;

/// @brief Field PublisherId, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___PublisherId;

/// @brief Field PushNotificationRegistrations, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>*  ___PushNotificationRegistrations;

/// @brief Field Statistics, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::StatisticModel*>*  ___Statistics;

/// @brief Field Tags, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::TagModel*>*  ___Tags;

/// @brief Field TitleId, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field TotalValueToDateInUSD, offset: 0xc0, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___TotalValueToDateInUSD;

/// @brief Size padding 0xc8 - 0xd8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field ValuesToDate, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::ValueToDateModel*>*  ___ValuesToDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___AdCampaignAttributions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___AvatarUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___BannedUntil) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___ContactEmailAddresses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___Created) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___DisplayName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___ExperimentVariants) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___LastLogin) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___LinkedAccounts) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___Locations) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___Memberships) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___Origination) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___PlayerId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___PublisherId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___PushNotificationRegistrations) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___Statistics) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___Tags) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___TitleId) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___TotalValueToDateInUSD) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayerProfileModel, ___ValuesToDate) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::PlayerProfileModel) == 0xc8, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
