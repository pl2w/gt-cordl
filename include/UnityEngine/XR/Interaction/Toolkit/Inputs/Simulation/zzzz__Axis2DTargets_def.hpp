#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Axis2DTargets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axis2DTargets)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct Axis2DTargets;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "Axis2DTargets");
// [Flags]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Axis2DTargets
struct CORDL_TYPE Axis2DTargets {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Axis2DTargets_Unwrapped
enum struct __Axis2DTargets_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Position = static_cast<int32_t>(0x1),
__E_Primary2DAxis = static_cast<int32_t>(0x2),
__E_Secondary2DAxis = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Axis2DTargets_Unwrapped () const noexcept {
return static_cast<__Axis2DTargets_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Axis2DTargets() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Axis2DTargets(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets const None;

/// @brief Field Position value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets const Position;

/// @brief Field Primary2DAxis value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets const Primary2DAxis;

/// @brief Field Secondary2DAxis value: I32(4)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets const Secondary2DAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11635};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
