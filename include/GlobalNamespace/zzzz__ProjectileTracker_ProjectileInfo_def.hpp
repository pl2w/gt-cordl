#pragma once
// IWYU pragma private; include "GlobalNamespace/ProjectileTracker_ProjectileInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ProjectileTracker_ProjectileInfo)
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProjectileTracker_ProjectileInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProjectileTracker_ProjectileInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProjectileTracker_ProjectileInfo, "", "ProjectileTracker/ProjectileInfo");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProjectileTracker/ProjectileInfo
struct CORDL_TYPE ProjectileTracker_ProjectileInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x5ad9360, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(double_t  newTime, ::UnityEngine::Vector3  newVel, ::UnityEngine::Vector3  origin, float_t  newScale, ::GlobalNamespace::SlingshotProjectile*  projectile) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProjectileTracker_ProjectileInfo() ;

// Ctor Parameters [CppParam { name: "timeLaunched", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "shotVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "launchOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "projectileInstance", ty: "::UnityW<::GlobalNamespace::SlingshotProjectile>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasImpactOverride", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ProjectileTracker_ProjectileInfo(double_t  timeLaunched, ::UnityEngine::Vector3  shotVelocity, ::UnityEngine::Vector3  launchOrigin, float_t  scale, ::UnityW<::GlobalNamespace::SlingshotProjectile>  projectileInstance, bool  hasImpactOverride) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field timeLaunched, offset: 0x0, size: 0x8, def value: None
 double_t  timeLaunched;

/// @brief Field shotVelocity, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  shotVelocity;

/// @brief Field launchOrigin, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  launchOrigin;

/// @brief Field scale, offset: 0x20, size: 0x4, def value: None
 float_t  scale;

/// @brief Field projectileInstance, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectile>  projectileInstance;

/// @brief Field hasImpactOverride, offset: 0x30, size: 0x1, def value: None
 bool  hasImpactOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProjectileTracker_ProjectileInfo, timeLaunched) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileTracker_ProjectileInfo, shotVelocity) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileTracker_ProjectileInfo, launchOrigin) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileTracker_ProjectileInfo, scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileTracker_ProjectileInfo, projectileInstance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileTracker_ProjectileInfo, hasImpactOverride) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProjectileTracker_ProjectileInfo) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
