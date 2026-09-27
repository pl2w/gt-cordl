#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersPawn_CreatureState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersPawn_CreatureState)
// Forward declare root types
namespace GlobalNamespace {
struct CrittersPawn_CreatureState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrittersPawn_CreatureState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersPawn_CreatureState, "", "CrittersPawn/CreatureState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CrittersPawn/CreatureState
struct CORDL_TYPE CrittersPawn_CreatureState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CrittersPawn_CreatureState_Unwrapped
enum struct __CrittersPawn_CreatureState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Eating = static_cast<int32_t>(0x1),
__E_AttractedTo = static_cast<int32_t>(0x2),
__E_Running = static_cast<int32_t>(0x3),
__E_Grabbed = static_cast<int32_t>(0x4),
__E_Sleeping = static_cast<int32_t>(0x5),
__E_SeekingFood = static_cast<int32_t>(0x6),
__E_Captured = static_cast<int32_t>(0x7),
__E_Stunned = static_cast<int32_t>(0x8),
__E_WaitingToDespawn = static_cast<int32_t>(0x9),
__E_Despawning = static_cast<int32_t>(0xa),
__E_Spawning = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CrittersPawn_CreatureState_Unwrapped () const noexcept {
return static_cast<__CrittersPawn_CreatureState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CrittersPawn_CreatureState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CrittersPawn_CreatureState(int32_t  value__) noexcept;

/// @brief Field AttractedTo value: I32(2)
static ::GlobalNamespace::CrittersPawn_CreatureState const AttractedTo;

/// @brief Field Captured value: I32(7)
static ::GlobalNamespace::CrittersPawn_CreatureState const Captured;

/// @brief Field Despawning value: I32(10)
static ::GlobalNamespace::CrittersPawn_CreatureState const Despawning;

/// @brief Field Eating value: I32(1)
static ::GlobalNamespace::CrittersPawn_CreatureState const Eating;

/// @brief Field Grabbed value: I32(4)
static ::GlobalNamespace::CrittersPawn_CreatureState const Grabbed;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::CrittersPawn_CreatureState const Idle;

/// @brief Field Running value: I32(3)
static ::GlobalNamespace::CrittersPawn_CreatureState const Running;

/// @brief Field SeekingFood value: I32(6)
static ::GlobalNamespace::CrittersPawn_CreatureState const SeekingFood;

/// @brief Field Sleeping value: I32(5)
static ::GlobalNamespace::CrittersPawn_CreatureState const Sleeping;

/// @brief Field Spawning value: I32(11)
static ::GlobalNamespace::CrittersPawn_CreatureState const Spawning;

/// @brief Field Stunned value: I32(8)
static ::GlobalNamespace::CrittersPawn_CreatureState const Stunned;

/// @brief Field WaitingToDespawn value: I32(9)
static ::GlobalNamespace::CrittersPawn_CreatureState const WaitingToDespawn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersPawn_CreatureState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersPawn_CreatureState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
