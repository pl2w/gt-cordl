#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BatteryStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_BatteryStatus)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BatteryStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BatteryStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BatteryStatus, "", "OVRPlugin/BatteryStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BatteryStatus
struct CORDL_TYPE OVRPlugin_BatteryStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_BatteryStatus_Unwrapped
enum struct __OVRPlugin_BatteryStatus_Unwrapped : int32_t {
__E_Charging = static_cast<int32_t>(0x0),
__E_Discharging = static_cast<int32_t>(0x1),
__E_Full = static_cast<int32_t>(0x2),
__E_NotCharging = static_cast<int32_t>(0x3),
__E_Unknown = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_BatteryStatus_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_BatteryStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BatteryStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BatteryStatus(int32_t  value__) noexcept;

/// @brief Field Charging value: I32(0)
static ::GlobalNamespace::OVRPlugin_BatteryStatus const Charging;

/// @brief Field Discharging value: I32(1)
static ::GlobalNamespace::OVRPlugin_BatteryStatus const Discharging;

/// @brief Field Full value: I32(2)
static ::GlobalNamespace::OVRPlugin_BatteryStatus const Full;

/// @brief Field NotCharging value: I32(3)
static ::GlobalNamespace::OVRPlugin_BatteryStatus const NotCharging;

/// @brief Field Unknown value: I32(4)
static ::GlobalNamespace::OVRPlugin_BatteryStatus const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12063};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BatteryStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BatteryStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
