#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePath_Waypoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachinePath_Waypoint)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachinePath_Waypoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachinePath_Waypoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachinePath_Waypoint, "Unity.Cinemachine", "CinemachinePath/Waypoint");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachinePath/Waypoint
struct CORDL_TYPE CinemachinePath_Waypoint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePath_Waypoint() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "roll", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachinePath_Waypoint(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  tangent, float_t  roll) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22429};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// [Tooltip("Position in path-local space")]
/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// [Tooltip("Offset from the position, which defines the tangent of the curve at the waypoint.  The length of the tangent encodes the strength of the bezier handle.  The same handle is used symmetrically on both sides of the waypoint, to ensure smoothness.")]
/// @brief Field tangent, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  tangent;

/// [Tooltip("Defines the roll of the path at this waypoint.  The other orientation axes are inferred from the tangent and world up.")]
/// @brief Field roll, offset: 0x18, size: 0x4, def value: None
 float_t  roll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachinePath_Waypoint, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachinePath_Waypoint, tangent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachinePath_Waypoint, roll) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachinePath_Waypoint) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
