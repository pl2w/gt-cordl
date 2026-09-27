#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegisterForIOSPushNotificationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RegisterForIOSPushNotificationRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class RegisterForIOSPushNotificationRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest*, "PlayFab.ClientModels", "RegisterForIOSPushNotificationRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RegisterForIOSPushNotificationRequest
class CORDL_TYPE RegisterForIOSPushNotificationRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ConfirmationMessage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConfirmationMessage, put=__cordl_internal_set_ConfirmationMessage)) ::StringW  ConfirmationMessage;

/// @brief Field DeviceToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviceToken, put=__cordl_internal_set_DeviceToken)) ::StringW  DeviceToken;

/// @brief Field SendPushNotificationConfirmation, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_SendPushNotificationConfirmation, put=__cordl_internal_set_SendPushNotificationConfirmation)) ::System::Nullable_1<bool>  SendPushNotificationConfirmation;

static inline ::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ConfirmationMessage() const;

constexpr ::StringW& __cordl_internal_get_ConfirmationMessage() ;

constexpr ::StringW const& __cordl_internal_get_DeviceToken() const;

constexpr ::StringW& __cordl_internal_get_DeviceToken() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_SendPushNotificationConfirmation() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_SendPushNotificationConfirmation() ;

constexpr void __cordl_internal_set_ConfirmationMessage(::StringW  value) ;

constexpr void __cordl_internal_set_DeviceToken(::StringW  value) ;

constexpr void __cordl_internal_set_SendPushNotificationConfirmation(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa84e168, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisterForIOSPushNotificationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisterForIOSPushNotificationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisterForIOSPushNotificationRequest(RegisterForIOSPushNotificationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisterForIOSPushNotificationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisterForIOSPushNotificationRequest(RegisterForIOSPushNotificationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20192};

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
static_assert(offsetof(::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest, ___ConfirmationMessage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest, ___DeviceToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest, ___SendPushNotificationConfirmation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
