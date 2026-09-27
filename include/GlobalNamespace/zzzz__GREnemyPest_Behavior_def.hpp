#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyPest_Behavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyPest_Behavior)
// Forward declare root types
namespace GlobalNamespace {
struct GREnemyPest_Behavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GREnemyPest_Behavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyPest_Behavior, "", "GREnemyPest/Behavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GREnemyPest/Behavior
struct CORDL_TYPE GREnemyPest_Behavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GREnemyPest_Behavior_Unwrapped
enum struct __GREnemyPest_Behavior_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Wander = static_cast<int32_t>(0x1),
__E_Chase = static_cast<int32_t>(0x2),
__E_Attack = static_cast<int32_t>(0x3),
__E_Stagger = static_cast<int32_t>(0x4),
__E_Grabbed = static_cast<int32_t>(0x5),
__E_Thrown = static_cast<int32_t>(0x6),
__E_Destroyed = static_cast<int32_t>(0x7),
__E_Investigate = static_cast<int32_t>(0x8),
__E_Jump = static_cast<int32_t>(0x9),
__E_Flashed = static_cast<int32_t>(0xa),
__E_Count = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GREnemyPest_Behavior_Unwrapped () const noexcept {
return static_cast<__GREnemyPest_Behavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyPest_Behavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyPest_Behavior(int32_t  value__) noexcept;

/// @brief Field Attack value: I32(3)
static ::GlobalNamespace::GREnemyPest_Behavior const Attack;

/// @brief Field Chase value: I32(2)
static ::GlobalNamespace::GREnemyPest_Behavior const Chase;

/// @brief Field Count value: I32(11)
static ::GlobalNamespace::GREnemyPest_Behavior const Count;

/// @brief Field Destroyed value: I32(7)
static ::GlobalNamespace::GREnemyPest_Behavior const Destroyed;

/// @brief Field Flashed value: I32(10)
static ::GlobalNamespace::GREnemyPest_Behavior const Flashed;

/// @brief Field Grabbed value: I32(5)
static ::GlobalNamespace::GREnemyPest_Behavior const Grabbed;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GREnemyPest_Behavior const Idle;

/// @brief Field Investigate value: I32(8)
static ::GlobalNamespace::GREnemyPest_Behavior const Investigate;

/// @brief Field Jump value: I32(9)
static ::GlobalNamespace::GREnemyPest_Behavior const Jump;

/// @brief Field Stagger value: I32(4)
static ::GlobalNamespace::GREnemyPest_Behavior const Stagger;

/// @brief Field Thrown value: I32(6)
static ::GlobalNamespace::GREnemyPest_Behavior const Thrown;

/// @brief Field Wander value: I32(1)
static ::GlobalNamespace::GREnemyPest_Behavior const Wander;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1956};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyPest_Behavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyPest_Behavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
