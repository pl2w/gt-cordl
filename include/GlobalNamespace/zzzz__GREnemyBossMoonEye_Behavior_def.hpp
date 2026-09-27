#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoonEye_Behavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyBossMoonEye_Behavior)
// Forward declare root types
namespace GlobalNamespace {
struct GREnemyBossMoonEye_Behavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GREnemyBossMoonEye_Behavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoonEye_Behavior, "", "GREnemyBossMoonEye/Behavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GREnemyBossMoonEye/Behavior
struct CORDL_TYPE GREnemyBossMoonEye_Behavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GREnemyBossMoonEye_Behavior_Unwrapped
enum struct __GREnemyBossMoonEye_Behavior_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_AttackLaser = static_cast<int32_t>(0x1),
__E_Closed = static_cast<int32_t>(0x2),
__E_GravityStart = static_cast<int32_t>(0x3),
__E_GravityEnd = static_cast<int32_t>(0x4),
__E_GravityIdle = static_cast<int32_t>(0x5),
__E_Dying = static_cast<int32_t>(0x6),
__E_None = static_cast<int32_t>(0x7),
__E_Count = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GREnemyBossMoonEye_Behavior_Unwrapped () const noexcept {
return static_cast<__GREnemyBossMoonEye_Behavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyBossMoonEye_Behavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyBossMoonEye_Behavior(int32_t  value__) noexcept;

/// @brief Field AttackLaser value: I32(1)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const AttackLaser;

/// @brief Field Closed value: I32(2)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const Closed;

/// @brief Field Count value: I32(8)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const Count;

/// @brief Field Dying value: I32(6)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const Dying;

/// @brief Field GravityEnd value: I32(4)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const GravityEnd;

/// @brief Field GravityIdle value: I32(5)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const GravityIdle;

/// @brief Field GravityStart value: I32(3)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const GravityStart;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const Idle;

/// @brief Field None value: I32(7)
static ::GlobalNamespace::GREnemyBossMoonEye_Behavior const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye_Behavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoonEye_Behavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
