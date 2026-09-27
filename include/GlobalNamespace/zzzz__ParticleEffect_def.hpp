#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleEffect)
namespace GlobalNamespace {
class ParticleEffectsPool;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleEffect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParticleEffect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleEffect*, "", "ParticleEffect");
// [RequireComponent(typeof(UnityEngine.ParticleSystem))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleEffect
class CORDL_TYPE ParticleEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _effectID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectID, put=__cordl_internal_set__effectID)) int64_t  _effectID;

 __declspec(property(get=get_effectID)) int64_t  effectID;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

/// @brief Field pool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::UnityW<::GlobalNamespace::ParticleEffectsPool>  pool;

/// @brief Field poolIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_poolIndex, put=__cordl_internal_set_poolIndex)) int32_t  poolIndex;

/// @brief Field system, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_system, put=__cordl_internal_set_system)) ::UnityW<::UnityEngine::ParticleSystem>  system;

static inline ::GlobalNamespace::ParticleEffect* New_ctor() ;

/// @brief Method OnParticleSystemStopped, addr 0x5657774, size 0x9c, virtual false, abstract: false, final false
inline void OnParticleSystemStopped() ;

/// @brief Method Play, addr 0x56576f8, size 0x3c, virtual true, abstract: false, final false
inline void Play() ;

/// @brief Method Stop, addr 0x5657734, size 0x40, virtual true, abstract: false, final false
inline void Stop() ;

constexpr int64_t const& __cordl_internal_get__effectID() const;

constexpr int64_t& __cordl_internal_get__effectID() ;

constexpr ::UnityW<::GlobalNamespace::ParticleEffectsPool> const& __cordl_internal_get_pool() const;

constexpr ::UnityW<::GlobalNamespace::ParticleEffectsPool>& __cordl_internal_get_pool() ;

constexpr int32_t const& __cordl_internal_get_poolIndex() const;

constexpr int32_t& __cordl_internal_get_poolIndex() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_system() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_system() ;

constexpr void __cordl_internal_set__effectID(int64_t  value) ;

constexpr void __cordl_internal_set_pool(::UnityW<::GlobalNamespace::ParticleEffectsPool>  value) ;

constexpr void __cordl_internal_set_poolIndex(int32_t  value) ;

constexpr void __cordl_internal_set_system(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x565788c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_effectID, addr 0x565766c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_effectID() ;

/// @brief Method get_isPlaying, addr 0x5657674, size 0x84, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleEffect(ParticleEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleEffect(ParticleEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{750};

/// @brief Field system, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___system;

/// [SerializeField]
/// @brief Field _effectID, offset: 0x28, size: 0x8, def value: None
 int64_t  ____effectID;

/// @brief Field pool, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ParticleEffectsPool>  ___pool;

/// @brief Field poolIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___poolIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleEffect, ___system) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffect, ____effectID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffect, ___pool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffect, ___poolIndex) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleEffect) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
