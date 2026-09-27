#pragma once
// IWYU pragma private; include "GlobalNamespace/FeatherDusterHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FeatherDusterHoldable)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class FeatherDusterHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FeatherDusterHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FeatherDusterHoldable*, "", "FeatherDusterHoldable");
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FeatherDusterHoldable
class CORDL_TYPE FeatherDusterHoldable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field collideMinSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_collideMinSpeed, put=__cordl_internal_set_collideMinSpeed)) float_t  collideMinSpeed;

/// @brief Field colliderResult, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderResult, put=__cordl_internal_set_colliderResult)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliderResult;

/// @brief Field collisionLayer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionLayer, put=__cordl_internal_set_collisionLayer)) ::UnityEngine::LayerMask  collisionLayer;

/// @brief Field emissionModule, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_emissionModule, put=__cordl_internal_set_emissionModule)) ::GlobalNamespace::ParticleSystem_EmissionModule  emissionModule;

/// @brief Field initialRateOverTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialRateOverTime, put=__cordl_internal_set_initialRateOverTime)) float_t  initialRateOverTime;

/// @brief Field lastSliceTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSliceTime, put=__cordl_internal_set_lastSliceTime)) float_t  lastSliceTime;

/// @brief Field lastWorldPos, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastWorldPos, put=__cordl_internal_set_lastWorldPos)) ::UnityEngine::Vector3  lastWorldPos;

/// @brief Field overlapSphereRadius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlapSphereRadius, put=__cordl_internal_set_overlapSphereRadius)) float_t  overlapSphereRadius;

/// @brief Field particleFx, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleFx, put=__cordl_internal_set_particleFx)) ::UnityW<::UnityEngine::ParticleSystem>  particleFx;

/// @brief Field soundBankPlayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBankPlayer, put=__cordl_internal_set_soundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankPlayer;

/// @brief Field soundCooldown, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundCooldown, put=__cordl_internal_set_soundCooldown)) float_t  soundCooldown;

/// @brief Field timeSinceLastSound, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceLastSound, put=__cordl_internal_set_timeSinceLastSound)) float_t  timeSinceLastSound;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5e074a0, size 0x4c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::FeatherDusterHoldable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e07548, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e074ec, size 0x5c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5e07554, size 0x1b8, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr float_t const& __cordl_internal_get_collideMinSpeed() const;

constexpr float_t& __cordl_internal_get_collideMinSpeed() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliderResult() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliderResult() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collisionLayer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collisionLayer() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get_emissionModule() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get_emissionModule() ;

constexpr float_t const& __cordl_internal_get_initialRateOverTime() const;

constexpr float_t& __cordl_internal_get_initialRateOverTime() ;

constexpr float_t const& __cordl_internal_get_lastSliceTime() const;

constexpr float_t& __cordl_internal_get_lastSliceTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastWorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastWorldPos() ;

constexpr float_t const& __cordl_internal_get_overlapSphereRadius() const;

constexpr float_t& __cordl_internal_get_overlapSphereRadius() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleFx() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleFx() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBankPlayer() ;

constexpr float_t const& __cordl_internal_get_soundCooldown() const;

constexpr float_t& __cordl_internal_get_soundCooldown() ;

constexpr float_t const& __cordl_internal_get_timeSinceLastSound() const;

constexpr float_t& __cordl_internal_get_timeSinceLastSound() ;

constexpr void __cordl_internal_set_collideMinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_colliderResult(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_collisionLayer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_emissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set_initialRateOverTime(float_t  value) ;

constexpr void __cordl_internal_set_lastSliceTime(float_t  value) ;

constexpr void __cordl_internal_set_lastWorldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_overlapSphereRadius(float_t  value) ;

constexpr void __cordl_internal_set_particleFx(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_soundCooldown(float_t  value) ;

constexpr void __cordl_internal_set_timeSinceLastSound(float_t  value) ;

/// @brief Method .ctor, addr 0x5e0770c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatherDusterHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatherDusterHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatherDusterHoldable(FeatherDusterHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatherDusterHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatherDusterHoldable(FeatherDusterHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{533};

/// @brief Field collisionLayer, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collisionLayer;

/// @brief Field overlapSphereRadius, offset: 0x24, size: 0x4, def value: None
 float_t  ___overlapSphereRadius;

/// [Tooltip("Collision is not tested until this speed requirement is met.")]
/// @brief Field collideMinSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___collideMinSpeed;

/// @brief Field particleFx, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleFx;

/// @brief Field soundBankPlayer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBankPlayer;

/// [SerializeField]
/// @brief Field soundCooldown, offset: 0x40, size: 0x4, def value: None
 float_t  ___soundCooldown;

/// @brief Field emissionModule, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ___emissionModule;

/// @brief Field initialRateOverTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___initialRateOverTime;

/// @brief Field timeSinceLastSound, offset: 0x54, size: 0x4, def value: None
 float_t  ___timeSinceLastSound;

/// @brief Field lastWorldPos, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastWorldPos;

/// @brief Field lastSliceTime, offset: 0x64, size: 0x4, def value: None
 float_t  ___lastSliceTime;

/// @brief Field colliderResult, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliderResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___collisionLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___overlapSphereRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___collideMinSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___particleFx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___soundBankPlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___soundCooldown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___emissionModule) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___initialRateOverTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___timeSinceLastSound) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___lastWorldPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___lastSliceTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatherDusterHoldable, ___colliderResult) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FeatherDusterHoldable) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
