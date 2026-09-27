#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PushNotificationRegistrationModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__PushNotificationPlatform_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PushNotificationRegistrationModel)
// Forward declare root types
namespace PlayFab::ClientModels {
class PushNotificationRegistrationModel;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PushNotificationRegistrationModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PushNotificationRegistrationModel*, "PlayFab.ClientModels", "PushNotificationRegistrationModel");
// Dependencies PlayFab.ClientModels.PushNotificationPlatform, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PushNotificationRegistrationModel
class CORDL_TYPE PushNotificationRegistrationModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field NotificationEndpointARN, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NotificationEndpointARN, put=__cordl_internal_set_NotificationEndpointARN)) ::StringW  NotificationEndpointARN;

/// @brief Field Platform, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::System::Nullable_1<::PlayFab::ClientModels::PushNotificationPlatform>  Platform;

static inline ::PlayFab::ClientModels::PushNotificationRegistrationModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_NotificationEndpointARN() const;

constexpr ::StringW& __cordl_internal_get_NotificationEndpointARN() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::PushNotificationPlatform> const& __cordl_internal_get_Platform() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::PushNotificationPlatform>& __cordl_internal_get_Platform() ;

constexpr void __cordl_internal_set_NotificationEndpointARN(::StringW  value) ;

constexpr void __cordl_internal_set_Platform(::System::Nullable_1<::PlayFab::ClientModels::PushNotificationPlatform>  value) ;

/// @brief Method .ctor, addr 0xa84e140, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PushNotificationRegistrationModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PushNotificationRegistrationModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PushNotificationRegistrationModel(PushNotificationRegistrationModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PushNotificationRegistrationModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PushNotificationRegistrationModel(PushNotificationRegistrationModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20186};

/// @brief Field NotificationEndpointARN, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___NotificationEndpointARN;

/// @brief Field Platform, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::PushNotificationPlatform>  ___Platform;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PushNotificationRegistrationModel, ___NotificationEndpointARN) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PushNotificationRegistrationModel, ___Platform) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PushNotificationRegistrationModel) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
