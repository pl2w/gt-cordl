#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterVolume_SurfaceQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(WaterVolume_SurfaceQuery)
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace GlobalNamespace {
struct WaterVolume_SurfaceQuery;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WaterVolume_SurfaceQuery);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterVolume_SurfaceQuery, "GorillaLocomotion.Swimming", "WaterVolume/SurfaceQuery");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.Swimming.WaterVolume/SurfaceQuery
struct CORDL_TYPE WaterVolume_SurfaceQuery {
public:
// Declarations
 __declspec(property(get=get_surfacePlane)) ::UnityEngine::Plane  surfacePlane;

/// @brief Method get_surfacePlane, addr 0x5ce89b0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Plane get_surfacePlane() ;

// Ctor Parameters []
// @brief default ctor
constexpr WaterVolume_SurfaceQuery() ;

// Ctor Parameters [CppParam { name: "surfacePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfaceNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr WaterVolume_SurfaceQuery(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  maxDepth) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4520};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field surfacePoint, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  surfacePoint;

/// @brief Field surfaceNormal, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  surfaceNormal;

/// @brief Field maxDepth, offset: 0x18, size: 0x4, def value: None
 float_t  maxDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterVolume_SurfaceQuery, surfacePoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterVolume_SurfaceQuery, surfaceNormal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterVolume_SurfaceQuery, maxDepth) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterVolume_SurfaceQuery) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
