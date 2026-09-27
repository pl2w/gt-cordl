#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalTransposer_Heading_HeadingDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineOrbitalTransposer_Heading_HeadingDefinition)
// Forward declare root types
namespace GlobalNamespace {
struct Heading_CinemachineOrbitalTransposer_HeadingDefinition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition, "Unity.Cinemachine", "CinemachineOrbitalTransposer/Heading/HeadingDefinition");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition
struct CORDL_TYPE Heading_CinemachineOrbitalTransposer_HeadingDefinition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Heading_CinemachineOrbitalTransposer_HeadingDefinition_Unwrapped
enum struct __Heading_CinemachineOrbitalTransposer_HeadingDefinition_Unwrapped : int32_t {
__E_PositionDelta = static_cast<int32_t>(0x0),
__E_Velocity = static_cast<int32_t>(0x1),
__E_TargetForward = static_cast<int32_t>(0x2),
__E_WorldForward = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Heading_CinemachineOrbitalTransposer_HeadingDefinition_Unwrapped () const noexcept {
return static_cast<__Heading_CinemachineOrbitalTransposer_HeadingDefinition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Heading_CinemachineOrbitalTransposer_HeadingDefinition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Heading_CinemachineOrbitalTransposer_HeadingDefinition(int32_t  value__) noexcept;

/// @brief Field PositionDelta value: I32(0)
static ::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition const PositionDelta;

/// @brief Field TargetForward value: I32(2)
static ::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition const TargetForward;

/// @brief Field Velocity value: I32(1)
static ::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition const Velocity;

/// @brief Field WorldForward value: I32(3)
static ::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition const WorldForward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
