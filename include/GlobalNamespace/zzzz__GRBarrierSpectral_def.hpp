#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBarrierSpectral.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRBarrierSpectral)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
struct GameHitType;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameHittable;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GRBarrierSpectral;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBarrierSpectral*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBarrierSpectral*, "", "GRBarrierSpectral");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBarrierSpectral
class CORDL_TYPE GRBarrierSpectral : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field collider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field destroyedFx, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_destroyedFx, put=__cordl_internal_set_destroyedFx)) ::UnityW<::UnityEngine::GameObject>  destroyedFx;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field health, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_health, put=__cordl_internal_set_health)) int32_t  health;

/// @brief Field hitFx, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitFx, put=__cordl_internal_set_hitFx)) ::UnityW<::UnityEngine::GameObject>  hitFx;

/// @brief Field lastVisualUpdateHealth, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastVisualUpdateHealth, put=__cordl_internal_set_lastVisualUpdateHealth)) int32_t  lastVisualUpdateHealth;

/// @brief Field maxHealth, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHealth, put=__cordl_internal_set_maxHealth)) int32_t  maxHealth;

/// @brief Field onDamageClip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDamageClip, put=__cordl_internal_set_onDamageClip)) ::UnityW<::UnityEngine::AudioClip>  onDamageClip;

/// @brief Field onDamageVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_onDamageVolume, put=__cordl_internal_set_onDamageVolume)) float_t  onDamageVolume;

/// @brief Field onDestroyedClip, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDestroyedClip, put=__cordl_internal_set_onDestroyedClip)) ::UnityW<::UnityEngine::AudioClip>  onDestroyedClip;

/// @brief Field onDestroyedVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_onDestroyedVolume, put=__cordl_internal_set_onDestroyedVolume)) float_t  onDestroyedVolume;

/// @brief Field visualMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_visualMesh, put=__cordl_internal_set_visualMesh)) ::UnityW<::UnityEngine::MeshRenderer>  visualMesh;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr operator  ::GlobalNamespace::IGameHittable*() noexcept;

/// @brief Method Awake, addr 0x5872308, size 0x38, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeHealth, addr 0x5872408, size 0xd4, virtual false, abstract: false, final false
inline void ChangeHealth(int32_t  nextHealth) ;

/// @brief Method IsHitValid, addr 0x5872620, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

static inline ::GlobalNamespace::GRBarrierSpectral* New_ctor() ;

/// @brief Method OnEntityDestroy, addr 0x58723fc, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5872340, size 0xbc, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5872400, size 0x8, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method OnHit, addr 0x5872628, size 0xc4, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnImpact, addr 0x58724dc, size 0x5c, virtual false, abstract: false, final false
inline void OnImpact(::GlobalNamespace::GameHitType  hitType) ;

/// @brief Method RefreshVisuals, addr 0x5872538, size 0xe8, virtual false, abstract: false, final false
inline void RefreshVisuals() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_destroyedFx() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_destroyedFx() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr int32_t const& __cordl_internal_get_health() const;

constexpr int32_t& __cordl_internal_get_health() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hitFx() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hitFx() ;

constexpr int32_t const& __cordl_internal_get_lastVisualUpdateHealth() const;

constexpr int32_t& __cordl_internal_get_lastVisualUpdateHealth() ;

constexpr int32_t const& __cordl_internal_get_maxHealth() const;

constexpr int32_t& __cordl_internal_get_maxHealth() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_onDamageClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_onDamageClip() ;

constexpr float_t const& __cordl_internal_get_onDamageVolume() const;

constexpr float_t& __cordl_internal_get_onDamageVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_onDestroyedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_onDestroyedClip() ;

constexpr float_t const& __cordl_internal_get_onDestroyedVolume() const;

constexpr float_t& __cordl_internal_get_onDestroyedVolume() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_visualMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_visualMesh() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_destroyedFx(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_health(int32_t  value) ;

constexpr void __cordl_internal_set_hitFx(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lastVisualUpdateHealth(int32_t  value) ;

constexpr void __cordl_internal_set_maxHealth(int32_t  value) ;

constexpr void __cordl_internal_set_onDamageClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_onDamageVolume(float_t  value) ;

constexpr void __cordl_internal_set_onDestroyedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_onDestroyedVolume(float_t  value) ;

constexpr void __cordl_internal_set_visualMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x58726ec, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* i___GlobalNamespace__IGameHittable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBarrierSpectral() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBarrierSpectral", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBarrierSpectral(GRBarrierSpectral && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBarrierSpectral", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBarrierSpectral(GRBarrierSpectral const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1888};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field visualMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___visualMesh;

/// @brief Field collider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___collider;

/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field onDamageClip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___onDamageClip;

/// @brief Field onDamageVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___onDamageVolume;

/// @brief Field onDestroyedClip, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___onDestroyedClip;

/// @brief Field onDestroyedVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ___onDestroyedVolume;

/// [SerializeField]
/// @brief Field hitFx, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hitFx;

/// [SerializeField]
/// @brief Field destroyedFx, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___destroyedFx;

/// @brief Field maxHealth, offset: 0x70, size: 0x4, def value: None
 int32_t  ___maxHealth;

/// [ReadOnly]
/// @brief Field health, offset: 0x74, size: 0x4, def value: None
 int32_t  ___health;

/// @brief Field lastVisualUpdateHealth, offset: 0x78, size: 0x4, def value: None
 int32_t  ___lastVisualUpdateHealth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___visualMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___collider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___onDamageClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___onDamageVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___onDestroyedClip) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___onDestroyedVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___hitFx) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___destroyedFx) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___maxHealth) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___health) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierSpectral, ___lastVisualUpdateHealth) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBarrierSpectral) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
