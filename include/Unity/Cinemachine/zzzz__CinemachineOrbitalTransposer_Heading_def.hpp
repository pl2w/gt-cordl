#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalTransposer_Heading.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_HeadingDefinition_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineOrbitalTransposer_Heading)
namespace GlobalNamespace {
struct Heading_CinemachineOrbitalTransposer_HeadingDefinition;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineOrbitalTransposer_Heading;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineOrbitalTransposer_Heading);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineOrbitalTransposer_Heading, "Unity.Cinemachine", "CinemachineOrbitalTransposer/Heading");
// Dependencies Unity.Cinemachine.CinemachineOrbitalTransposer::Heading::HeadingDefinition
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineOrbitalTransposer/Heading
struct CORDL_TYPE CinemachineOrbitalTransposer_Heading {
public:
// Declarations
using HeadingDefinition = ::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition;

/// @brief Method .ctor, addr 0xaed66a8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition  def, int32_t  filterStrength, float_t  bias) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalTransposer_Heading() ;

// Ctor Parameters [CppParam { name: "m_Definition", ty: "::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_VelocityFilterStrength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Bias", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineOrbitalTransposer_Heading(::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition  m_Definition, int32_t  m_VelocityFilterStrength, float_t  m_Bias) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22425};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [FormerlySerializedAs("m_HeadingDefinition")]
/// [Tooltip("How \'forward\' is defined.  The camera will be placed by default behind the target.  PositionDelta will consider \'forward\' to be the direction in which the target is moving.")]
/// @brief Field m_Definition, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Heading_CinemachineOrbitalTransposer_HeadingDefinition  m_Definition;

/// [Range(0, 10)]
/// [Tooltip("Size of the velocity sampling window for target heading filter.  This filters out irregularities in the target\'s movement.  Used only if deriving heading from target\'s movement (PositionDelta or Velocity)")]
/// @brief Field m_VelocityFilterStrength, offset: 0x4, size: 0x4, def value: None
 int32_t  m_VelocityFilterStrength;

/// [Range(-180, 180)]
/// [FormerlySerializedAs("m_HeadingBias")]
/// [Tooltip("Where the camera is placed when the X-axis value is zero.  This is a rotation in degrees around the Y axis.  When this value is 0, the camera will be placed behind the target.  Nonzero offsets will rotate the zero position around the target.")]
/// @brief Field m_Bias, offset: 0x8, size: 0x4, def value: None
 float_t  m_Bias;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalTransposer_Heading, m_Definition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalTransposer_Heading, m_VelocityFilterStrength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalTransposer_Heading, m_Bias) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineOrbitalTransposer_Heading) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
