#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/SpawnWorldEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Reactions/zzzz__SpawnWorldEffects_TransformAxis_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpawnWorldEffects)
namespace GlobalNamespace {
class SinglePool;
}
namespace GlobalNamespace {
struct SpawnWorldEffects_TransformAxis;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Reactions {
class SpawnWorldEffects;
}
// Write type traits
MARK_REF_T(::GorillaTag::Reactions::SpawnWorldEffects*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Reactions::SpawnWorldEffects*, "GorillaTag.Reactions", "SpawnWorldEffects");
// Dependencies GorillaTag.Reactions.SpawnWorldEffects::TransformAxis, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GorillaTag::Reactions {
// Is value type: false
// CS Name: GorillaTag.Reactions.SpawnWorldEffects
class CORDL_TYPE SpawnWorldEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TransformAxis = ::GlobalNamespace::SpawnWorldEffects_TransformAxis;

/// @brief Field _forwardOrientationSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__forwardOrientationSource, put=__cordl_internal_set__forwardOrientationSource)) ::UnityW<::UnityEngine::Transform>  _forwardOrientationSource;

/// @brief Field _forwardSourceAxis, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__forwardSourceAxis, put=__cordl_internal_set__forwardSourceAxis)) ::GlobalNamespace::SpawnWorldEffects_TransformAxis  _forwardSourceAxis;

/// @brief Field _hasPrefabToSpawn, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasPrefabToSpawn, put=__cordl_internal_set__hasPrefabToSpawn)) bool  _hasPrefabToSpawn;

/// @brief Field _isPrefabInPool, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPrefabInPool, put=__cordl_internal_set__isPrefabInPool)) bool  _isPrefabInPool;

/// @brief Field _lastCollisionTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastCollisionTime, put=__cordl_internal_set__lastCollisionTime)) double_t  _lastCollisionTime;

/// @brief Field _maxParticleHitReactionRate, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxParticleHitReactionRate, put=__cordl_internal_set__maxParticleHitReactionRate)) float_t  _maxParticleHitReactionRate;

/// @brief Field _normalRaycastDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalRaycastDistance, put=__cordl_internal_set__normalRaycastDistance)) float_t  _normalRaycastDistance;

/// @brief Field _normalRaycastLayers, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalRaycastLayers, put=__cordl_internal_set__normalRaycastLayers)) ::UnityEngine::LayerMask  _normalRaycastLayers;

/// @brief Field _pool, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::GlobalNamespace::SinglePool*  _pool;

/// @brief Field _prefabToSpawn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefabToSpawn, put=__cordl_internal_set__prefabToSpawn)) ::UnityW<::UnityEngine::GameObject>  _prefabToSpawn;

/// @brief Field _raycastDirectionSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastDirectionSource, put=__cordl_internal_set__raycastDirectionSource)) ::UnityW<::UnityEngine::Transform>  _raycastDirectionSource;

/// @brief Field _raycastDirectionUseNegativeForward, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__raycastDirectionUseNegativeForward, put=__cordl_internal_set__raycastDirectionUseNegativeForward)) bool  _raycastDirectionUseNegativeForward;

/// @brief Field _requireSurfaceLayer, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__requireSurfaceLayer, put=__cordl_internal_set__requireSurfaceLayer)) bool  _requireSurfaceLayer;

/// @brief Field _useNormalOrientation, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__useNormalOrientation, put=__cordl_internal_set__useNormalOrientation)) bool  _useNormalOrientation;

/// @brief Method GetAxisVector, addr 0x5d42688, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetAxisVector(::UnityEngine::Transform*  source, ::GlobalNamespace::SpawnWorldEffects_TransformAxis  axis) ;

static inline ::GorillaTag::Reactions::SpawnWorldEffects* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d41bd0, size 0x324, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RequestSpawn, addr 0x5d41ef4, size 0x7c, virtual false, abstract: false, final false
inline void RequestSpawn(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method RequestSpawn, addr 0x5d41f70, size 0x358, virtual false, abstract: false, final false
inline void RequestSpawn(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  normal) ;

/// @brief Method TryGetSurfaceNormal, addr 0x5d422c8, size 0x3c0, virtual false, abstract: false, final false
inline bool TryGetSurfaceNormal(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  hitNormal, ::by_ref<::UnityEngine::Vector3>  surfaceNormal) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__forwardOrientationSource() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__forwardOrientationSource() ;

constexpr ::GlobalNamespace::SpawnWorldEffects_TransformAxis const& __cordl_internal_get__forwardSourceAxis() const;

constexpr ::GlobalNamespace::SpawnWorldEffects_TransformAxis& __cordl_internal_get__forwardSourceAxis() ;

constexpr bool const& __cordl_internal_get__hasPrefabToSpawn() const;

constexpr bool& __cordl_internal_get__hasPrefabToSpawn() ;

constexpr bool const& __cordl_internal_get__isPrefabInPool() const;

constexpr bool& __cordl_internal_get__isPrefabInPool() ;

constexpr double_t const& __cordl_internal_get__lastCollisionTime() const;

constexpr double_t& __cordl_internal_get__lastCollisionTime() ;

constexpr float_t const& __cordl_internal_get__maxParticleHitReactionRate() const;

constexpr float_t& __cordl_internal_get__maxParticleHitReactionRate() ;

constexpr float_t const& __cordl_internal_get__normalRaycastDistance() const;

constexpr float_t& __cordl_internal_get__normalRaycastDistance() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__normalRaycastLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__normalRaycastLayers() ;

constexpr ::GlobalNamespace::SinglePool* const& __cordl_internal_get__pool() const;

constexpr ::GlobalNamespace::SinglePool*& __cordl_internal_get__pool() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__prefabToSpawn() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__prefabToSpawn() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__raycastDirectionSource() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__raycastDirectionSource() ;

constexpr bool const& __cordl_internal_get__raycastDirectionUseNegativeForward() const;

constexpr bool& __cordl_internal_get__raycastDirectionUseNegativeForward() ;

constexpr bool const& __cordl_internal_get__requireSurfaceLayer() const;

constexpr bool& __cordl_internal_get__requireSurfaceLayer() ;

constexpr bool const& __cordl_internal_get__useNormalOrientation() const;

constexpr bool& __cordl_internal_get__useNormalOrientation() ;

constexpr void __cordl_internal_set__forwardOrientationSource(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__forwardSourceAxis(::GlobalNamespace::SpawnWorldEffects_TransformAxis  value) ;

constexpr void __cordl_internal_set__hasPrefabToSpawn(bool  value) ;

constexpr void __cordl_internal_set__isPrefabInPool(bool  value) ;

constexpr void __cordl_internal_set__lastCollisionTime(double_t  value) ;

constexpr void __cordl_internal_set__maxParticleHitReactionRate(float_t  value) ;

constexpr void __cordl_internal_set__normalRaycastDistance(float_t  value) ;

constexpr void __cordl_internal_set__normalRaycastLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__pool(::GlobalNamespace::SinglePool*  value) ;

constexpr void __cordl_internal_set__prefabToSpawn(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__raycastDirectionSource(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__raycastDirectionUseNegativeForward(bool  value) ;

constexpr void __cordl_internal_set__requireSurfaceLayer(bool  value) ;

constexpr void __cordl_internal_set__useNormalOrientation(bool  value) ;

/// @brief Method .ctor, addr 0x5d42734, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnWorldEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnWorldEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnWorldEffects(SpawnWorldEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnWorldEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnWorldEffects(SpawnWorldEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4710};

/// [Tooltip("The defaults are numbers for the flamethrower hair dryer.")]
/// @brief Field _maxParticleHitReactionRate, offset: 0x20, size: 0x4, def value: None
 float_t  ____maxParticleHitReactionRate;

/// [Tooltip("Must be in the global object pool and have a tag.")]
/// [SerializeField]
/// @brief Field _prefabToSpawn, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____prefabToSpawn;

/// [Tooltip("When enabled, a short raycast is fired from the spawn position to find the exact surface normal. The spawned object\'s Up vector will be aligned to that normal instead of world Up.")]
/// [SerializeField]
/// @brief Field _useNormalOrientation, offset: 0x30, size: 0x1, def value: None
 bool  ____useNormalOrientation;

/// [Tooltip("When enabled, the spawn only happens if the surface raycast hits a collider on Normal Raycast Layers. If the raycast misses (surface not on an allowed layer, or out of range), the effect is not spawned. Independent of Use Normal Orientation.")]
/// [SerializeField]
/// @brief Field _requireSurfaceLayer, offset: 0x31, size: 0x1, def value: None
 bool  ____requireSurfaceLayer;

/// [SerializeField]
/// @brief Field _normalRaycastDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ____normalRaycastDistance;

/// [SerializeField]
/// @brief Field _normalRaycastLayers, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____normalRaycastLayers;

/// [Header("Raycast Direction Override")]
/// [Tooltip("Optional. When assigned, the raycast used for normal-orientation will shoot along this transform\'s forward axis instead of along the incoming hit normal.")]
/// [SerializeField]
/// @brief Field _raycastDirectionSource, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____raycastDirectionSource;

/// [Tooltip("If true, uses -forward instead of forward from Raycast Direction Source.")]
/// [SerializeField]
/// @brief Field _raycastDirectionUseNegativeForward, offset: 0x48, size: 0x1, def value: None
 bool  ____raycastDirectionUseNegativeForward;

/// [Header("Forward Orientation")]
/// [Tooltip("Optional. When assigned, the spawned object\'s forward vector will be aligned to the chosen axis of this transform, projected onto the spawn surface.")]
/// [SerializeField]
/// @brief Field _forwardOrientationSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____forwardOrientationSource;

/// [Tooltip("Which local axis of the Forward Orientation Source to use as the spawned object\'s forward.")]
/// [SerializeField]
/// @brief Field _forwardSourceAxis, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::SpawnWorldEffects_TransformAxis  ____forwardSourceAxis;

/// @brief Field _hasPrefabToSpawn, offset: 0x5c, size: 0x1, def value: None
 bool  ____hasPrefabToSpawn;

/// @brief Field _isPrefabInPool, offset: 0x5d, size: 0x1, def value: None
 bool  ____isPrefabInPool;

/// @brief Field _lastCollisionTime, offset: 0x60, size: 0x8, def value: None
 double_t  ____lastCollisionTime;

/// @brief Field _pool, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::SinglePool*  ____pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____maxParticleHitReactionRate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____prefabToSpawn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____useNormalOrientation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____requireSurfaceLayer) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____normalRaycastDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____normalRaycastLayers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____raycastDirectionSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____raycastDirectionUseNegativeForward) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____forwardOrientationSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____forwardSourceAxis) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____hasPrefabToSpawn) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____isPrefabInPool) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____lastCollisionTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::SpawnWorldEffects, ____pool) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Reactions::SpawnWorldEffects) == 0x70, "Size mismatch!");

} // namespace end def GorillaTag::Reactions
