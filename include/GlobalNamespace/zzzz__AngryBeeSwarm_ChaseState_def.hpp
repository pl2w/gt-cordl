#pragma once
// IWYU pragma private; include "GlobalNamespace/AngryBeeSwarm_ChaseState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AngryBeeSwarm_ChaseState)
// Forward declare root types
namespace GlobalNamespace {
struct AngryBeeSwarm_ChaseState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AngryBeeSwarm_ChaseState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AngryBeeSwarm_ChaseState, "", "AngryBeeSwarm/ChaseState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AngryBeeSwarm/ChaseState
struct CORDL_TYPE AngryBeeSwarm_ChaseState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AngryBeeSwarm_ChaseState_Unwrapped
enum struct __AngryBeeSwarm_ChaseState_Unwrapped : int32_t {
__E_Dormant = static_cast<int32_t>(0x1),
__E_InitialEmerge = static_cast<int32_t>(0x2),
__E_Chasing = static_cast<int32_t>(0x4),
__E_Grabbing = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AngryBeeSwarm_ChaseState_Unwrapped () const noexcept {
return static_cast<__AngryBeeSwarm_ChaseState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AngryBeeSwarm_ChaseState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AngryBeeSwarm_ChaseState(int32_t  value__) noexcept;

/// @brief Field Chasing value: I32(4)
static ::GlobalNamespace::AngryBeeSwarm_ChaseState const Chasing;

/// @brief Field Dormant value: I32(1)
static ::GlobalNamespace::AngryBeeSwarm_ChaseState const Dormant;

/// @brief Field Grabbing value: I32(8)
static ::GlobalNamespace::AngryBeeSwarm_ChaseState const Grabbing;

/// @brief Field InitialEmerge value: I32(2)
static ::GlobalNamespace::AngryBeeSwarm_ChaseState const InitialEmerge;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm_ChaseState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AngryBeeSwarm_ChaseState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
