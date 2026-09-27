#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetProjectileStretchVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetProjectileStretchVisuals)
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetProjectileStretchVisuals;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetProjectileStretchVisuals*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetProjectileStretchVisuals*, "", "SIGadgetProjectileStretchVisuals");
// [RequireComponent(typeof(SIGadgetBlasterProjectile))]
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetProjectileStretchVisuals
class CORDL_TYPE SIGadgetProjectileStretchVisuals : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field baseVisuals, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseVisuals, put=__cordl_internal_set_baseVisuals)) ::UnityW<::UnityEngine::GameObject>  baseVisuals;

/// @brief Field distancePerFrame, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_distancePerFrame, put=__cordl_internal_set_distancePerFrame)) float_t  distancePerFrame;

/// @brief Field framesPerPosition, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_framesPerPosition, put=__cordl_internal_set_framesPerPosition)) float_t  framesPerPosition;

/// @brief Field frontDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frontDistance, put=__cordl_internal_set_frontDistance)) float_t  frontDistance;

/// @brief Field frontStretch, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontStretch, put=__cordl_internal_set_frontStretch)) ::UnityW<::UnityEngine::Transform>  frontStretch;

/// @brief Field maxSizeReached, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_maxSizeReached, put=__cordl_internal_set_maxSizeReached)) bool  maxSizeReached;

/// @brief Field maxStretchRatio, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxStretchRatio, put=__cordl_internal_set_maxStretchRatio)) float_t  maxStretchRatio;

/// @brief Field projectile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectile, put=__cordl_internal_set_projectile)) ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectile;

/// @brief Field rearStretch, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rearStretch, put=__cordl_internal_set_rearStretch)) ::UnityW<::UnityEngine::Transform>  rearStretch;

/// @brief Field timeSpawned, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSpawned, put=__cordl_internal_set_timeSpawned)) float_t  timeSpawned;

/// @brief Field totalLength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalLength, put=__cordl_internal_set_totalLength)) float_t  totalLength;

static inline ::GlobalNamespace::SIGadgetProjectileStretchVisuals* New_ctor() ;

/// @brief Method OnEnable, addr 0x57fcc20, size 0x23c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x57fce5c, size 0xd8, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_baseVisuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_baseVisuals() ;

constexpr float_t const& __cordl_internal_get_distancePerFrame() const;

constexpr float_t& __cordl_internal_get_distancePerFrame() ;

constexpr float_t const& __cordl_internal_get_framesPerPosition() const;

constexpr float_t& __cordl_internal_get_framesPerPosition() ;

constexpr float_t const& __cordl_internal_get_frontDistance() const;

constexpr float_t& __cordl_internal_get_frontDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_frontStretch() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_frontStretch() ;

constexpr bool const& __cordl_internal_get_maxSizeReached() const;

constexpr bool& __cordl_internal_get_maxSizeReached() ;

constexpr float_t const& __cordl_internal_get_maxStretchRatio() const;

constexpr float_t& __cordl_internal_get_maxStretchRatio() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& __cordl_internal_get_projectile() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& __cordl_internal_get_projectile() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rearStretch() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rearStretch() ;

constexpr float_t const& __cordl_internal_get_timeSpawned() const;

constexpr float_t& __cordl_internal_get_timeSpawned() ;

constexpr float_t const& __cordl_internal_get_totalLength() const;

constexpr float_t& __cordl_internal_get_totalLength() ;

constexpr void __cordl_internal_set_baseVisuals(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_distancePerFrame(float_t  value) ;

constexpr void __cordl_internal_set_framesPerPosition(float_t  value) ;

constexpr void __cordl_internal_set_frontDistance(float_t  value) ;

constexpr void __cordl_internal_set_frontStretch(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxSizeReached(bool  value) ;

constexpr void __cordl_internal_set_maxStretchRatio(float_t  value) ;

constexpr void __cordl_internal_set_projectile(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value) ;

constexpr void __cordl_internal_set_rearStretch(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_timeSpawned(float_t  value) ;

constexpr void __cordl_internal_set_totalLength(float_t  value) ;

/// @brief Method .ctor, addr 0x57fcf34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetProjectileStretchVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetProjectileStretchVisuals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetProjectileStretchVisuals(SIGadgetProjectileStretchVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetProjectileStretchVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetProjectileStretchVisuals(SIGadgetProjectileStretchVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{231};

/// @brief Field projectile, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  ___projectile;

/// @brief Field baseVisuals, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___baseVisuals;

/// @brief Field frontStretch, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___frontStretch;

/// @brief Field rearStretch, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rearStretch;

/// @brief Field framesPerPosition, offset: 0x48, size: 0x4, def value: None
 float_t  ___framesPerPosition;

/// @brief Field totalLength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___totalLength;

/// @brief Field distancePerFrame, offset: 0x50, size: 0x4, def value: None
 float_t  ___distancePerFrame;

/// @brief Field maxStretchRatio, offset: 0x54, size: 0x4, def value: None
 float_t  ___maxStretchRatio;

/// @brief Field maxSizeReached, offset: 0x58, size: 0x1, def value: None
 bool  ___maxSizeReached;

/// @brief Field frontDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___frontDistance;

/// @brief Field timeSpawned, offset: 0x60, size: 0x4, def value: None
 float_t  ___timeSpawned;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___projectile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___baseVisuals) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___frontStretch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___rearStretch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___framesPerPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___totalLength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___distancePerFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___maxStretchRatio) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___maxSizeReached) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___frontDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetProjectileStretchVisuals, ___timeSpawned) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetProjectileStretchVisuals) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
