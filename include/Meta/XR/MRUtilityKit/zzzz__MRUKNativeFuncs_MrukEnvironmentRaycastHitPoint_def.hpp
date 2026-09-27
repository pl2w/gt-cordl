#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEnvironmentRaycastStatus_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukEnvironmentRaycastHitPoint");
// Dependencies Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukEnvironmentRaycastStatus, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukEnvironmentRaycastHitPoint
struct CORDL_TYPE MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint() ;

// Ctor Parameters [CppParam { name: "status", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  status, ::UnityEngine::Vector3  point, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  normal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25812};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field status, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus  status;

/// @brief Field point, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  point;

/// @brief Field orientation, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  orientation;

/// @brief Field normal, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  normal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint, status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint, point) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint, orientation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint, normal) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
