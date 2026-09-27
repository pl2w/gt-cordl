#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AndroidDevicePushNotificationRegistrationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AndroidDevicePushNotificationRegistrationRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class AndroidDevicePushNotificationRegistrationRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest*, "PlayFab.ClientModels", "AndroidDevicePushNotificationRegistrationRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest
class CORDL_TYPE AndroidDevicePushNotificationRegistrationRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ConfirmationMessage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConfirmationMessage, put=__cordl_internal_set_ConfirmationMessage)) ::StringW  ConfirmationMessage;

/// @brief Field DeviceToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviceToken, put=__cordl_internal_set_DeviceToken)) ::StringW  DeviceToken;

/// @brief Field SendPushNotificationConfirmation, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_SendPushNotificationConfirmation, put=__cordl_internal_set_SendPushNotificationConfirmation)) ::System::Nullable_1<bool>  SendPushNotificationConfirmation;

static inline ::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ConfirmationMessage() const;

constexpr ::StringW& __cordl_internal_get_ConfirmationMessage() ;

constexpr ::StringW const& __cordl_internal_get_DeviceToken() const;

constexpr ::StringW& __cordl_internal_get_DeviceToken() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_SendPushNotificationConfirmation() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_SendPushNotificationConfirmation() ;

constexpr void __cordl_internal_set_ConfirmationMessage(::StringW  value) ;

constexpr void __cordl_internal_set_DeviceToken(::StringW  value) ;

constexpr void __cordl_internal_set_SendPushNotificationConfirmation(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa84da60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidDevicePushNotificationRegistrationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidDevicePushNotificationRegistrationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidDevicePushNotificationRegistrationRequest(AndroidDevicePushNotificationRegistrationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidDevicePushNotificationRegistrationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidDevicePushNotificationRegistrationRequest(AndroidDevicePushNotificationRegistrationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19955};

/// @brief Field ConfirmationMessage, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ConfirmationMessage;

/// @brief Field DeviceToken, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DeviceToken;

/// @brief Field SendPushNotificationConfirmation, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___SendPushNotificationConfirmation;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest, ___ConfirmationMessage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest, ___DeviceToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest, ___SendPushNotificationConfirmation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
