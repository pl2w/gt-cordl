#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager_SubscriptionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionManager_SubscriptionStatus)
// Forward declare root types
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SubscriptionManager_SubscriptionStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionManager_SubscriptionStatus, "GorillaTagScripts", "SubscriptionManager/SubscriptionStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.SubscriptionManager/SubscriptionStatus
struct CORDL_TYPE SubscriptionManager_SubscriptionStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubscriptionManager_SubscriptionStatus_Unwrapped
enum struct __SubscriptionManager_SubscriptionStatus_Unwrapped : int32_t {
__E_Active = static_cast<int32_t>(0x0),
__E_Inactive = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubscriptionManager_SubscriptionStatus_Unwrapped () const noexcept {
return static_cast<__SubscriptionManager_SubscriptionStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionManager_SubscriptionStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubscriptionManager_SubscriptionStatus(int32_t  value__) noexcept;

/// @brief Field Active value: I32(0)
static ::GlobalNamespace::SubscriptionManager_SubscriptionStatus const Active;

/// @brief Field Inactive value: I32(1)
static ::GlobalNamespace::SubscriptionManager_SubscriptionStatus const Inactive;

/// @brief Field Unknown value: I32(2)
static ::GlobalNamespace::SubscriptionManager_SubscriptionStatus const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4014};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionManager_SubscriptionStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
