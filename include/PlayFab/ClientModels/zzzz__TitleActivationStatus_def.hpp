#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TitleActivationStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TitleActivationStatus)
// Forward declare root types
namespace PlayFab::ClientModels {
struct TitleActivationStatus;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::TitleActivationStatus);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::TitleActivationStatus, "PlayFab.ClientModels", "TitleActivationStatus");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.TitleActivationStatus
struct CORDL_TYPE TitleActivationStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TitleActivationStatus_Unwrapped
enum struct __TitleActivationStatus_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ActivatedTitleKey = static_cast<int32_t>(0x1),
__E_PendingSteam = static_cast<int32_t>(0x2),
__E_ActivatedSteam = static_cast<int32_t>(0x3),
__E_RevokedSteam = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TitleActivationStatus_Unwrapped () const noexcept {
return static_cast<__TitleActivationStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TitleActivationStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TitleActivationStatus(int32_t  value__) noexcept;

/// @brief Field ActivatedSteam value: I32(3)
static ::PlayFab::ClientModels::TitleActivationStatus const ActivatedSteam;

/// @brief Field ActivatedTitleKey value: I32(1)
static ::PlayFab::ClientModels::TitleActivationStatus const ActivatedTitleKey;

/// @brief Field None value: I32(0)
static ::PlayFab::ClientModels::TitleActivationStatus const None;

/// @brief Field PendingSteam value: I32(2)
static ::PlayFab::ClientModels::TitleActivationStatus const PendingSteam;

/// @brief Field RevokedSteam value: I32(4)
static ::PlayFab::ClientModels::TitleActivationStatus const RevokedSteam;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20237};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::TitleActivationStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::TitleActivationStatus) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
