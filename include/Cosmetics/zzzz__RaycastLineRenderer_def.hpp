#pragma once
// IWYU pragma private; include "Cosmetics/RaycastLineRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cosmetics/zzzz__RaycastLineRenderer_CastAxis_def.hpp"
#include "Cosmetics/zzzz__RaycastLineRenderer_DirectionSpace_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RaycastLineRenderer)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
struct RaycastLineRenderer_CastAxis;
}
namespace GlobalNamespace {
struct RaycastLineRenderer_DirectionSpace;
}
namespace GorillaTag::Reactions {
class SpawnWorldEffects;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Cosmetics {
class RaycastLineRenderer;
}
// Write type traits
MARK_REF_T(::Cosmetics::RaycastLineRenderer*);
DEFINE_IL2CPP_CLASS(::Cosmetics::RaycastLineRenderer*, "Cosmetics", "RaycastLineRenderer");
// Dependencies Cosmetics.RaycastLineRenderer::CastAxis, Cosmetics.RaycastLineRenderer::DirectionSpace, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.RaycastLineRenderer
class CORDL_TYPE RaycastLineRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CastAxis = ::GlobalNamespace::RaycastLineRenderer_CastAxis;

using DirectionSpace = ::GlobalNamespace::RaycastLineRenderer_DirectionSpace;

 __declspec(property(get=get_PostTickRunning, put=set_PostTickRunning)) bool  PostTickRunning;

/// @brief Field <PostTickRunning>k__BackingField, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__PostTickRunning_k__BackingField, put=__cordl_internal_set__PostTickRunning_k__BackingField)) bool  _PostTickRunning_k__BackingField;

/// @brief Field directionAxis, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_directionAxis, put=__cordl_internal_set_directionAxis)) ::GlobalNamespace::RaycastLineRenderer_CastAxis  directionAxis;

/// @brief Field directionSpace, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_directionSpace, put=__cordl_internal_set_directionSpace)) ::GlobalNamespace::RaycastLineRenderer_DirectionSpace  directionSpace;

/// @brief Field hit, offset 0x58, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hit, put=__cordl_internal_set_hit)) ::UnityEngine::RaycastHit  hit;

/// @brief Field hitLayers, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitLayers, put=__cordl_internal_set_hitLayers)) ::UnityEngine::LayerMask  hitLayers;

/// @brief Field impactFx, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_impactFx, put=__cordl_internal_set_impactFx)) ::UnityW<::UnityEngine::GameObject>  impactFx;

/// @brief Field impactHit, offset 0x84, size 0x2c 
 __declspec(property(get=__cordl_internal_get_impactHit, put=__cordl_internal_set_impactHit)) ::UnityEngine::RaycastHit  impactHit;

/// @brief Field impactLayers, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_impactLayers, put=__cordl_internal_set_impactLayers)) ::UnityEngine::LayerMask  impactLayers;

/// @brief Field lineRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field maxDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field orientImpactToSurface, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_orientImpactToSurface, put=__cordl_internal_set_orientImpactToSurface)) bool  orientImpactToSurface;

/// @brief Field origin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::UnityW<::UnityEngine::Transform>  origin;

/// @brief Field surfaceEffectSpawner, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceEffectSpawner, put=__cordl_internal_set_surfaceEffectSpawner)) ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  surfaceEffectSpawner;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method Awake, addr 0x5d1a40c, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisableLine, addr 0x5d1a500, size 0x108, virtual false, abstract: false, final false
inline void DisableLine() ;

/// @brief Method EnableLine, addr 0x5d1a608, size 0xc0, virtual false, abstract: false, final false
inline void EnableLine() ;

/// @brief Method GetRayDirection, addr 0x5d1aa74, size 0x258, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetRayDirection() ;

static inline ::Cosmetics::RaycastLineRenderer* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d1a4fc, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method PostTick, addr 0x5d1a6c8, size 0x4, virtual true, abstract: false, final true
inline void PostTick() ;

/// @brief Method UpdateLine, addr 0x5d1a6cc, size 0x3a8, virtual false, abstract: false, final false
inline void UpdateLine() ;

constexpr bool const& __cordl_internal_get__PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PostTickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::RaycastLineRenderer_CastAxis const& __cordl_internal_get_directionAxis() const;

constexpr ::GlobalNamespace::RaycastLineRenderer_CastAxis& __cordl_internal_get_directionAxis() ;

constexpr ::GlobalNamespace::RaycastLineRenderer_DirectionSpace const& __cordl_internal_get_directionSpace() const;

constexpr ::GlobalNamespace::RaycastLineRenderer_DirectionSpace& __cordl_internal_get_directionSpace() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hit() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_hitLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_hitLayers() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_impactFx() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_impactFx() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_impactHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_impactHit() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_impactLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_impactLayers() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr bool const& __cordl_internal_get_orientImpactToSurface() const;

constexpr bool& __cordl_internal_get_orientImpactToSurface() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_origin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_origin() ;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& __cordl_internal_get_surfaceEffectSpawner() const;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& __cordl_internal_get_surfaceEffectSpawner() ;

constexpr void __cordl_internal_set__PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_directionAxis(::GlobalNamespace::RaycastLineRenderer_CastAxis  value) ;

constexpr void __cordl_internal_set_directionSpace(::GlobalNamespace::RaycastLineRenderer_DirectionSpace  value) ;

constexpr void __cordl_internal_set_hit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_hitLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_impactFx(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_impactHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_impactLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_orientImpactToSurface(bool  value) ;

constexpr void __cordl_internal_set_origin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_surfaceEffectSpawner(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value) ;

/// @brief Method .ctor, addr 0x5d1accc, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PostTickRunning, addr 0x5d1a3fc, size 0x8, virtual true, abstract: false, final true
inline bool get_PostTickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PostTickRunning, addr 0x5d1a404, size 0x8, virtual true, abstract: false, final true
inline void set_PostTickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaycastLineRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaycastLineRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaycastLineRenderer(RaycastLineRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaycastLineRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaycastLineRenderer(RaycastLineRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4576};

/// [Tooltip("Origin of the line. The ray is cast from this transform\'s position.")]
/// [SerializeField]
/// @brief Field origin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___origin;

/// [SerializeField]
/// @brief Field directionSpace, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::RaycastLineRenderer_DirectionSpace  ___directionSpace;

/// [SerializeField]
/// @brief Field directionAxis, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::RaycastLineRenderer_CastAxis  ___directionAxis;

/// [Tooltip("Maximum length of the line in meters")]
/// [SerializeField]
/// @brief Field maxDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxDistance;

/// [SerializeField]
/// @brief Field hitLayers, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___hitLayers;

/// [Tooltip("Line renderer drawn between the origin and the hit point")]
/// [SerializeField]
/// @brief Field lineRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

/// [Tooltip("Object placed at the point of contact.\nThis must already live in the prefab")]
/// [SerializeField]
/// @brief Field impactFx, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___impactFx;

/// [SerializeField]
/// @brief Field impactLayers, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___impactLayers;

/// [Tooltip("Align the impact FX up (y+) axis to the surface normal at the hit point.")]
/// [SerializeField]
/// @brief Field orientImpactToSurface, offset: 0x4c, size: 0x1, def value: None
 bool  ___orientImpactToSurface;

/// [Tooltip("Needs to be in the object pool system")]
/// [SerializeField]
/// @brief Field surfaceEffectSpawner, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  ___surfaceEffectSpawner;

/// @brief Field hit, offset: 0x58, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hit;

/// @brief Field impactHit, offset: 0x84, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___impactHit;

/// [CompilerGenerated]
/// @brief Field <PostTickRunning>k__BackingField, offset: 0xb0, size: 0x1, def value: None
 bool  ____PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___origin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___directionSpace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___directionAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___maxDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___hitLayers) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___lineRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___impactFx) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___impactLayers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___orientImpactToSurface) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___surfaceEffectSpawner) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___hit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ___impactHit) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::RaycastLineRenderer, ____PostTickRunning_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Cosmetics::RaycastLineRenderer) == 0xb8, "Size mismatch!");

} // namespace end def Cosmetics
