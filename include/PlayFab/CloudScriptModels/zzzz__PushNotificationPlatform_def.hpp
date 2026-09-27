#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PushNotificationPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PushNotificationPlatform)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
struct PushNotificationPlatform;
}
// Write type traits
MARK_VAL_T(::PlayFab::CloudScriptModels::PushNotificationPlatform);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::PushNotificationPlatform, "PlayFab.CloudScriptModels", "PushNotificationPlatform");
// Dependencies 
namespace PlayFab::CloudScriptModels {
// Is value type: true
// CS Name: PlayFab.CloudScriptModels.PushNotificationPlatform
struct CORDL_TYPE PushNotificationPlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PushNotificationPlatform_Unwrapped
enum struct __PushNotificationPlatform_Unwrapped : int32_t {
__E_ApplePushNotificationService = static_cast<int32_t>(0x0),
__E_GoogleCloudMessaging = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PushNotificationPlatform_Unwrapped () const noexcept {
return static_cast<__PushNotificationPlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PushNotificationPlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PushNotificationPlatform(int32_t  value__) noexcept;

/// @brief Field ApplePushNotificationService value: I32(0)
static ::PlayFab::CloudScriptModels::PushNotificationPlatform const ApplePushNotificationService;

/// @brief Field GoogleCloudMessaging value: I32(1)
static ::PlayFab::CloudScriptModels::PushNotificationPlatform const GoogleCloudMessaging;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19900};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::PushNotificationPlatform, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::PushNotificationPlatform) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
