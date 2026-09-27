#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviourRuntimeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationBehaviourRuntimeFlags)
// Forward declare root types
namespace Fusion {
struct SimulationBehaviourRuntimeFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationBehaviourRuntimeFlags);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationBehaviourRuntimeFlags, "Fusion", "SimulationBehaviourRuntimeFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationBehaviourRuntimeFlags
struct CORDL_TYPE SimulationBehaviourRuntimeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulationBehaviourRuntimeFlags_Unwrapped
enum struct __SimulationBehaviourRuntimeFlags_Unwrapped : int32_t {
__E_IsGlobal = static_cast<int32_t>(0x1),
__E_InSimulation = static_cast<int32_t>(0x2),
__E_PendingRemoval = static_cast<int32_t>(0x4),
__E_IsUnityDestroyed = static_cast<int32_t>(0x8),
__E_IsUnityDisabled = static_cast<int32_t>(0x10),
__E_SkipNextUpdate = static_cast<int32_t>(0x20),
__E_ClearMask = static_cast<int32_t>(0x27),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulationBehaviourRuntimeFlags_Unwrapped () const noexcept {
return static_cast<__SimulationBehaviourRuntimeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulationBehaviourRuntimeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationBehaviourRuntimeFlags(int32_t  value__) noexcept;

/// @brief Field ClearMask value: I32(39)
static ::Fusion::SimulationBehaviourRuntimeFlags const ClearMask;

/// @brief Field InSimulation value: I32(2)
static ::Fusion::SimulationBehaviourRuntimeFlags const InSimulation;

/// @brief Field IsGlobal value: I32(1)
static ::Fusion::SimulationBehaviourRuntimeFlags const IsGlobal;

/// @brief Field IsUnityDestroyed value: I32(8)
static ::Fusion::SimulationBehaviourRuntimeFlags const IsUnityDestroyed;

/// @brief Field IsUnityDisabled value: I32(16)
static ::Fusion::SimulationBehaviourRuntimeFlags const IsUnityDisabled;

/// @brief Field PendingRemoval value: I32(4)
static ::Fusion::SimulationBehaviourRuntimeFlags const PendingRemoval;

/// @brief Field SkipNextUpdate value: I32(32)
static ::Fusion::SimulationBehaviourRuntimeFlags const SkipNextUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18927};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationBehaviourRuntimeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationBehaviourRuntimeFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion
