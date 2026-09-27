#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoundary_BoundaryTestResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRBoundary_BoundaryTestResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRBoundary_BoundaryTestResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBoundary_BoundaryTestResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRBoundary_BoundaryTestResult, "", "OVRBoundary/BoundaryTestResult");
// [Obsolete("Deprecated. This struct will not be supported in OpenXR", false)]
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRBoundary/BoundaryTestResult
struct CORDL_TYPE OVRBoundary_BoundaryTestResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRBoundary_BoundaryTestResult() ;

// Ctor Parameters [CppParam { name: "IsTriggering", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClosestPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClosestPointNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr OVRBoundary_BoundaryTestResult(bool  IsTriggering, float_t  ClosestDistance, ::UnityEngine::Vector3  ClosestPoint, ::UnityEngine::Vector3  ClosestPointNormal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11869};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field IsTriggering, offset: 0x0, size: 0x1, def value: None
 bool  IsTriggering;

/// @brief Field ClosestDistance, offset: 0x4, size: 0x4, def value: None
 float_t  ClosestDistance;

/// @brief Field ClosestPoint, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ClosestPoint;

/// @brief Field ClosestPointNormal, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  ClosestPointNormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryTestResult, IsTriggering) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryTestResult, ClosestDistance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryTestResult, ClosestPoint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBoundary_BoundaryTestResult, ClosestPointNormal) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRBoundary_BoundaryTestResult) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
