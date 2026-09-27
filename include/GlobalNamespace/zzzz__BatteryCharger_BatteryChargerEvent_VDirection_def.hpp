#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryCharger_BatteryChargerEvent_VDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatteryCharger_BatteryChargerEvent_VDirection)
// Forward declare root types
namespace GlobalNamespace {
struct BatteryChargerEvent_BatteryCharger_VDirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection, "", "BatteryCharger/BatteryChargerEvent/VDirection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BatteryCharger/BatteryChargerEvent/VDirection
struct CORDL_TYPE BatteryChargerEvent_BatteryCharger_VDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BatteryChargerEvent_BatteryCharger_VDirection_Unwrapped
enum struct __BatteryChargerEvent_BatteryCharger_VDirection_Unwrapped : int32_t {
__E_Up = static_cast<int32_t>(0x0),
__E_Down = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BatteryChargerEvent_BatteryCharger_VDirection_Unwrapped () const noexcept {
return static_cast<__BatteryChargerEvent_BatteryCharger_VDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BatteryChargerEvent_BatteryCharger_VDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BatteryChargerEvent_BatteryCharger_VDirection(int32_t  value__) noexcept;

/// @brief Field Down value: I32(1)
static ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection const Down;

/// @brief Field Up value: I32(0)
static ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
