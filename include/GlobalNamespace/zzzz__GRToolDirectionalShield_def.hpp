#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolDirectionalShield.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolDirectionalShield_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRToolDirectionalShield)
namespace GlobalNamespace {
class AbilityHaptic;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRShieldCollider;
}
namespace GlobalNamespace {
struct GRToolDirectionalShield_State;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
class GameHittable;
}
namespace GlobalNamespace {
class GameHitter;
}
namespace GlobalNamespace {
class IGameHitter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolDirectionalShield;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolDirectionalShield*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolDirectionalShield*, "", "GRToolDirectionalShield");
// Dependencies GRToolDirectionalShield::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolDirectionalShield
class CORDL_TYPE GRToolDirectionalShield : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GRToolDirectionalShield_State;

/// @brief Field attributes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field closeAudio, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeAudio, put=__cordl_internal_set_closeAudio)) ::UnityW<::UnityEngine::AudioClip>  closeAudio;

/// @brief Field closeHaptic, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeHaptic, put=__cordl_internal_set_closeHaptic)) ::GlobalNamespace::AbilityHaptic*  closeHaptic;

/// @brief Field closeVolume, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeVolume, put=__cordl_internal_set_closeVolume)) float_t  closeVolume;

/// @brief Field deflectAudio, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_deflectAudio, put=__cordl_internal_set_deflectAudio)) ::UnityW<::UnityEngine::AudioClip>  deflectAudio;

/// @brief Field deflectVolume, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_deflectVolume, put=__cordl_internal_set_deflectVolume)) float_t  deflectVolume;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field hitter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitter, put=__cordl_internal_set_hitter)) ::UnityW<::GlobalNamespace::GameHitter>  hitter;

/// @brief Field openAudio, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_openAudio, put=__cordl_internal_set_openAudio)) ::UnityW<::UnityEngine::AudioClip>  openAudio;

/// @brief Field openCollidersParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_openCollidersParent, put=__cordl_internal_set_openCollidersParent)) ::UnityW<::UnityEngine::Transform>  openCollidersParent;

/// @brief Field openHaptic, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_openHaptic, put=__cordl_internal_set_openHaptic)) ::GlobalNamespace::AbilityHaptic*  openHaptic;

/// @brief Field openVolume, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_openVolume, put=__cordl_internal_set_openVolume)) float_t  openVolume;

/// @brief Field reflectsProjectiles, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_reflectsProjectiles, put=__cordl_internal_set_reflectsProjectiles)) bool  reflectsProjectiles;

/// @brief Field rigidBody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field shieldAnimators, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldAnimators, put=__cordl_internal_set_shieldAnimators)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*  shieldAnimators;

/// @brief Field shieldArcCenterRadius, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_shieldArcCenterRadius, put=__cordl_internal_set_shieldArcCenterRadius)) float_t  shieldArcCenterRadius;

/// @brief Field shieldArcCenterReferencePoint, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldArcCenterReferencePoint, put=__cordl_internal_set_shieldArcCenterReferencePoint)) ::UnityW<::UnityEngine::Transform>  shieldArcCenterReferencePoint;

/// @brief Field shieldDeflectImpactPointVFX, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldDeflectImpactPointVFX, put=__cordl_internal_set_shieldDeflectImpactPointVFX)) ::UnityW<::UnityEngine::ParticleSystem>  shieldDeflectImpactPointVFX;

/// @brief Field shieldDeflectVFX, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldDeflectVFX, put=__cordl_internal_set_shieldDeflectVFX)) ::UnityW<::UnityEngine::ParticleSystem>  shieldDeflectVFX;

/// @brief Field state, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRToolDirectionalShield_State  state;

/// @brief Field tool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Field upgrade1DeflectAudio, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade1DeflectAudio, put=__cordl_internal_set_upgrade1DeflectAudio)) ::UnityW<::UnityEngine::AudioClip>  upgrade1DeflectAudio;

/// @brief Field upgrade1ShieldDeflectVFX, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade1ShieldDeflectVFX, put=__cordl_internal_set_upgrade1ShieldDeflectVFX)) ::UnityW<::UnityEngine::ParticleSystem>  upgrade1ShieldDeflectVFX;

/// @brief Field upgrade2DeflectAudio, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade2DeflectAudio, put=__cordl_internal_set_upgrade2DeflectAudio)) ::UnityW<::UnityEngine::AudioClip>  upgrade2DeflectAudio;

/// @brief Field upgrade2ShieldDeflectVFX, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade2ShieldDeflectVFX, put=__cordl_internal_set_upgrade2ShieldDeflectVFX)) ::UnityW<::UnityEngine::ParticleSystem>  upgrade2ShieldDeflectVFX;

/// @brief Field upgrade3DeflectAudio, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade3DeflectAudio, put=__cordl_internal_set_upgrade3DeflectAudio)) ::UnityW<::UnityEngine::AudioClip>  upgrade3DeflectAudio;

/// @brief Field upgrade3ShieldDeflectVFX, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade3ShieldDeflectVFX, put=__cordl_internal_set_upgrade3ShieldDeflectVFX)) ::UnityW<::UnityEngine::ParticleSystem>  upgrade3ShieldDeflectVFX;

/// @brief Convert operator to "::GlobalNamespace::IGameHitter"
constexpr operator  ::GlobalNamespace::IGameHitter*() noexcept;

/// @brief Method Awake, addr 0x58bc92c, size 0x144, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BlockHittable, addr 0x58b3a0c, size 0x2f0, virtual false, abstract: false, final false
inline void BlockHittable(::UnityEngine::Vector3  enemyPosition, ::UnityEngine::Vector3  enemyAttackDirection, ::GlobalNamespace::GameHittable*  hittable, ::GlobalNamespace::GRShieldCollider*  shieldCollider) ;

/// @brief Method IsButtonHeld, addr 0x58bd064, size 0x108, virtual false, abstract: false, final false
inline bool IsButtonHeld() ;

/// @brief Method IsHeld, addr 0x58bcdac, size 0x20, virtual false, abstract: false, final false
inline bool IsHeld() ;

/// @brief Method IsHeldLocal, addr 0x58bcd34, size 0x78, virtual false, abstract: false, final false
inline bool IsHeldLocal() ;

static inline ::GlobalNamespace::GRToolDirectionalShield* New_ctor() ;

/// @brief Method OnEnable, addr 0x58bcb30, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnemyBlocked, addr 0x58b3844, size 0x4c, virtual false, abstract: false, final false
inline void OnEnemyBlocked(::UnityEngine::Vector3  enemyPosition) ;

/// @brief Method OnSuccessfulHit, addr 0x58bcf18, size 0x38, virtual true, abstract: false, final true
inline void OnSuccessfulHit(::GlobalNamespace::GameHitData  hitData) ;

/// @brief Method OnToolUpgraded, addr 0x58bca70, size 0xc0, virtual false, abstract: false, final false
inline void OnToolUpgraded(::GlobalNamespace::GRTool*  tool) ;

/// @brief Method OnUpdateAuthority, addr 0x58bcfac, size 0x90, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58bd03c, size 0x28, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PlayBlockEffects, addr 0x58bcdcc, size 0x14c, virtual false, abstract: false, final false
inline void PlayBlockEffects(::UnityEngine::Vector3  enemyPosition) ;

/// @brief Method SetState, addr 0x58bcb38, size 0x1fc, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRToolDirectionalShield_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58bd16c, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::GRToolDirectionalShield_State  newState) ;

/// @brief Method Update, addr 0x58bcf50, size 0x5c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_closeAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_closeAudio() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_closeHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_closeHaptic() ;

constexpr float_t const& __cordl_internal_get_closeVolume() const;

constexpr float_t& __cordl_internal_get_closeVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_deflectAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_deflectAudio() ;

constexpr float_t const& __cordl_internal_get_deflectVolume() const;

constexpr float_t& __cordl_internal_get_deflectVolume() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::GlobalNamespace::GameHitter> const& __cordl_internal_get_hitter() const;

constexpr ::UnityW<::GlobalNamespace::GameHitter>& __cordl_internal_get_hitter() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_openAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_openAudio() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_openCollidersParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_openCollidersParent() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_openHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_openHaptic() ;

constexpr float_t const& __cordl_internal_get_openVolume() const;

constexpr float_t& __cordl_internal_get_openVolume() ;

constexpr bool const& __cordl_internal_get_reflectsProjectiles() const;

constexpr bool& __cordl_internal_get_reflectsProjectiles() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>* const& __cordl_internal_get_shieldAnimators() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*& __cordl_internal_get_shieldAnimators() ;

constexpr float_t const& __cordl_internal_get_shieldArcCenterRadius() const;

constexpr float_t& __cordl_internal_get_shieldArcCenterRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shieldArcCenterReferencePoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shieldArcCenterReferencePoint() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_shieldDeflectImpactPointVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_shieldDeflectImpactPointVFX() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_shieldDeflectVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_shieldDeflectVFX() ;

constexpr ::GlobalNamespace::GRToolDirectionalShield_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRToolDirectionalShield_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade1DeflectAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade1DeflectAudio() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_upgrade1ShieldDeflectVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_upgrade1ShieldDeflectVFX() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade2DeflectAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade2DeflectAudio() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_upgrade2ShieldDeflectVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_upgrade2ShieldDeflectVFX() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade3DeflectAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade3DeflectAudio() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_upgrade3ShieldDeflectVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_upgrade3ShieldDeflectVFX() ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_closeAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_closeHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_closeVolume(float_t  value) ;

constexpr void __cordl_internal_set_deflectAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_deflectVolume(float_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_hitter(::UnityW<::GlobalNamespace::GameHitter>  value) ;

constexpr void __cordl_internal_set_openAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_openCollidersParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_openHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_openVolume(float_t  value) ;

constexpr void __cordl_internal_set_reflectsProjectiles(bool  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_shieldAnimators(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*  value) ;

constexpr void __cordl_internal_set_shieldArcCenterRadius(float_t  value) ;

constexpr void __cordl_internal_set_shieldArcCenterReferencePoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shieldDeflectImpactPointVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_shieldDeflectVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRToolDirectionalShield_State  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_upgrade1DeflectAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade1ShieldDeflectVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_upgrade2DeflectAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade2ShieldDeflectVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_upgrade3DeflectAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade3ShieldDeflectVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x58bd1a4, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameHitter"
constexpr ::GlobalNamespace::IGameHitter* i___GlobalNamespace__IGameHitter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolDirectionalShield() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolDirectionalShield", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolDirectionalShield(GRToolDirectionalShield && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolDirectionalShield", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolDirectionalShield(GRToolDirectionalShield const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2064};

/// [Header("References")]
/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field tool, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field rigidBody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field shieldAnimators, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*  ___shieldAnimators;

/// @brief Field openCollidersParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___openCollidersParent;

/// @brief Field hitter, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameHitter>  ___hitter;

/// @brief Field attributes, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// [Header("Audio")]
/// @brief Field openAudio, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___openAudio;

/// @brief Field openVolume, offset: 0x68, size: 0x4, def value: None
 float_t  ___openVolume;

/// @brief Field closeAudio, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___closeAudio;

/// @brief Field closeVolume, offset: 0x78, size: 0x4, def value: None
 float_t  ___closeVolume;

/// @brief Field deflectAudio, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___deflectAudio;

/// @brief Field upgrade1DeflectAudio, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade1DeflectAudio;

/// @brief Field upgrade2DeflectAudio, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade2DeflectAudio;

/// @brief Field upgrade3DeflectAudio, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade3DeflectAudio;

/// @brief Field deflectVolume, offset: 0xa0, size: 0x4, def value: None
 float_t  ___deflectVolume;

/// [Header("VFX")]
/// @brief Field shieldDeflectVFX, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___shieldDeflectVFX;

/// @brief Field upgrade1ShieldDeflectVFX, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___upgrade1ShieldDeflectVFX;

/// @brief Field upgrade2ShieldDeflectVFX, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___upgrade2ShieldDeflectVFX;

/// @brief Field upgrade3ShieldDeflectVFX, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___upgrade3ShieldDeflectVFX;

/// @brief Field shieldDeflectImpactPointVFX, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___shieldDeflectImpactPointVFX;

/// @brief Field shieldArcCenterReferencePoint, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shieldArcCenterReferencePoint;

/// @brief Field shieldArcCenterRadius, offset: 0xd8, size: 0x4, def value: None
 float_t  ___shieldArcCenterRadius;

/// [Header("Haptic")]
/// @brief Field openHaptic, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___openHaptic;

/// @brief Field closeHaptic, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___closeHaptic;

/// @brief Field reflectsProjectiles, offset: 0xf0, size: 0x1, def value: None
 bool  ___reflectsProjectiles;

/// @brief Field state, offset: 0xf4, size: 0x4, def value: None
 ::GlobalNamespace::GRToolDirectionalShield_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___tool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___rigidBody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___shieldAnimators) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___openCollidersParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___hitter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___attributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___openAudio) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___openVolume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___closeAudio) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___closeVolume) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___deflectAudio) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___upgrade1DeflectAudio) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___upgrade2DeflectAudio) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___upgrade3DeflectAudio) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___deflectVolume) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___shieldDeflectVFX) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___upgrade1ShieldDeflectVFX) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___upgrade2ShieldDeflectVFX) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___upgrade3ShieldDeflectVFX) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___shieldDeflectImpactPointVFX) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___shieldArcCenterReferencePoint) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___shieldArcCenterRadius) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___openHaptic) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___closeHaptic) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___reflectsProjectiles) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolDirectionalShield, ___state) == 0xf4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolDirectionalShield) == 0xf8, "Size mismatch!");

} // namespace end def GlobalNamespace
