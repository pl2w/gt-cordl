#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/EmailVerificationStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmailVerificationStatus)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
struct EmailVerificationStatus;
}
// Write type traits
MARK_VAL_T(::PlayFab::CloudScriptModels::EmailVerificationStatus);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::EmailVerificationStatus, "PlayFab.CloudScriptModels", "EmailVerificationStatus");
// Dependencies 
namespace PlayFab::CloudScriptModels {
// Is value type: true
// CS Name: PlayFab.CloudScriptModels.EmailVerificationStatus
struct CORDL_TYPE EmailVerificationStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EmailVerificationStatus_Unwrapped
enum struct __EmailVerificationStatus_Unwrapped : int32_t {
__E_Unverified = static_cast<int32_t>(0x0),
__E_Pending = static_cast<int32_t>(0x1),
__E_Confirmed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EmailVerificationStatus_Unwrapped () const noexcept {
return static_cast<__EmailVerificationStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EmailVerificationStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EmailVerificationStatus(int32_t  value__) noexcept;

/// @brief Field Confirmed value: I32(2)
static ::PlayFab::CloudScriptModels::EmailVerificationStatus const Confirmed;

/// @brief Field Pending value: I32(1)
static ::PlayFab::CloudScriptModels::EmailVerificationStatus const Pending;

/// @brief Field Unverified value: I32(0)
static ::PlayFab::CloudScriptModels::EmailVerificationStatus const Unverified;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19874};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::EmailVerificationStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::EmailVerificationStatus) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
