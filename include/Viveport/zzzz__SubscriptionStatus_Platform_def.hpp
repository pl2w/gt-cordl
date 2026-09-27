#pragma once
// IWYU pragma private; include "Viveport/SubscriptionStatus_Platform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionStatus_Platform)
// Forward declare root types
namespace GlobalNamespace {
struct SubscriptionStatus_Platform;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SubscriptionStatus_Platform);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionStatus_Platform, "Viveport", "SubscriptionStatus/Platform");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Viveport.SubscriptionStatus/Platform
struct CORDL_TYPE SubscriptionStatus_Platform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubscriptionStatus_Platform_Unwrapped
enum struct __SubscriptionStatus_Platform_Unwrapped : int32_t {
__E_Windows = static_cast<int32_t>(0x0),
__E_Android = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubscriptionStatus_Platform_Unwrapped () const noexcept {
return static_cast<__SubscriptionStatus_Platform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionStatus_Platform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubscriptionStatus_Platform(int32_t  value__) noexcept;

/// @brief Field Android value: I32(1)
static ::GlobalNamespace::SubscriptionStatus_Platform const Android;

/// @brief Field Windows value: I32(0)
static ::GlobalNamespace::SubscriptionStatus_Platform const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionStatus_Platform, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionStatus_Platform) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
