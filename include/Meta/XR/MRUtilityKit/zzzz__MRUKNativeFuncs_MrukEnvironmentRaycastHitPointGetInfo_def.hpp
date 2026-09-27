#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukEnvironmentRaycastHitPointGetInfo");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukEnvironmentRaycastHitPointGetInfo
struct CORDL_TYPE MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo() ;

// Ctor Parameters [CppParam { name: "startPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "filterCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo(::UnityEngine::Vector3  startPoint, ::UnityEngine::Vector3  direction, uint32_t  filterCount, float_t  maxDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field startPoint, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  startPoint;

/// @brief Field direction, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  direction;

/// @brief Field filterCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  filterCount;

/// @brief Field maxDistance, offset: 0x1c, size: 0x4, def value: None
 float_t  maxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo, startPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo, direction) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo, filterCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo, maxDistance) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
