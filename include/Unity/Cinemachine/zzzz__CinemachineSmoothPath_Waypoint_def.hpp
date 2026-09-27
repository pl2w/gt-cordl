#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSmoothPath_Waypoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineSmoothPath_Waypoint)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSmoothPath_Waypoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSmoothPath_Waypoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSmoothPath_Waypoint, "Unity.Cinemachine", "CinemachineSmoothPath/Waypoint");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSmoothPath/Waypoint
struct CORDL_TYPE CinemachineSmoothPath_Waypoint {
public:
// Declarations
 __declspec(property(get=get_AsVector4)) ::UnityEngine::Vector4  AsVector4;

/// @brief Method FromVector4, addr 0xaed99fc, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CinemachineSmoothPath_Waypoint FromVector4(::UnityEngine::Vector4  v) ;

/// @brief Method get_AsVector4, addr 0xaed99f0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_AsVector4() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSmoothPath_Waypoint() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "roll", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineSmoothPath_Waypoint(::UnityEngine::Vector3  position, float_t  roll) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("Position in path-local space")]
/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// [Tooltip("Defines the roll of the path at this waypoint.  The other orientation axes are inferred from the tangent and world up.")]
/// @brief Field roll, offset: 0xc, size: 0x4, def value: None
 float_t  roll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineSmoothPath_Waypoint, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineSmoothPath_Waypoint, roll) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineSmoothPath_Waypoint) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
