#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AndroidDevicePushNotificationRegistrationResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(AndroidDevicePushNotificationRegistrationResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class AndroidDevicePushNotificationRegistrationResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult*, "PlayFab.ClientModels", "AndroidDevicePushNotificationRegistrationResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationResult
class CORDL_TYPE AndroidDevicePushNotificationRegistrationResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84da68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidDevicePushNotificationRegistrationResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidDevicePushNotificationRegistrationResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidDevicePushNotificationRegistrationResult(AndroidDevicePushNotificationRegistrationResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidDevicePushNotificationRegistrationResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidDevicePushNotificationRegistrationResult(AndroidDevicePushNotificationRegistrationResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19956};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
