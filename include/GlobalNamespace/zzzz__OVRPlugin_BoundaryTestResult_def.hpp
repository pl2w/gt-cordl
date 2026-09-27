#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BoundaryTestResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_BoundaryTestResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BoundaryTestResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BoundaryTestResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BoundaryTestResult, "", "OVRPlugin/BoundaryTestResult");
// [Obsolete("Deprecated. This struct will not be supported in OpenXR", false)]
// Dependencies OVRPlugin::Bool, OVRPlugin::Vector3f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BoundaryTestResult
struct CORDL_TYPE OVRPlugin_BoundaryTestResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BoundaryTestResult() ;

// Ctor Parameters [CppParam { name: "IsTriggering", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClosestPoint", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClosestPointNormal", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BoundaryTestResult(::GlobalNamespace::OVRPlugin_Bool  IsTriggering, float_t  ClosestDistance, ::GlobalNamespace::OVRPlugin_Vector3f  ClosestPoint, ::GlobalNamespace::OVRPlugin_Vector3f  ClosestPointNormal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field IsTriggering, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  IsTriggering;

/// @brief Field ClosestDistance, offset: 0x4, size: 0x4, def value: None
 float_t  ClosestDistance;

/// @brief Field ClosestPoint, offset: 0x8, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  ClosestPoint;

/// @brief Field ClosestPointNormal, offset: 0x14, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  ClosestPointNormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoundaryTestResult, IsTriggering) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoundaryTestResult, ClosestDistance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoundaryTestResult, ClosestPoint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoundaryTestResult, ClosestPointNormal) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BoundaryTestResult) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
