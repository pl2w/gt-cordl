#pragma once
// IWYU pragma private; include "GlobalNamespace/RubberDuck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RubberDuck)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class SoundEffects;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class RubberDuck;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RubberDuck*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RubberDuck*, "", "RubberDuck");
// Dependencies TransferrableObject, UnityEngine.ParticleSystem::EmissionModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: RubberDuck
class CORDL_TYPE RubberDuck : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
 __declspec(property(get=get_SqueezeReleaseSound)) int32_t  SqueezeReleaseSound;

 __declspec(property(get=get_SqueezeSound)) int32_t  SqueezeSound;

/// @brief Field _events, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field _fxActive, offset 0x3b0, size 0x1 
 __declspec(property(get=__cordl_internal_get__fxActive, put=__cordl_internal_set__fxActive)) bool  _fxActive;

/// @brief Field _raiseActivate, offset 0x3a0, size 0x1 
 __declspec(property(get=__cordl_internal_get__raiseActivate, put=__cordl_internal_set__raiseActivate)) bool  _raiseActivate;

/// @brief Field _raiseDeactivate, offset 0x3a1, size 0x1 
 __declspec(property(get=__cordl_internal_get__raiseDeactivate, put=__cordl_internal_set__raiseDeactivate)) bool  _raiseDeactivate;

/// @brief Field _sfxActivate, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sfxActivate, put=__cordl_internal_set__sfxActivate)) ::UnityW<::GlobalNamespace::SoundEffects>  _sfxActivate;

/// @brief Field blendShapeMaxWeight, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendShapeMaxWeight, put=__cordl_internal_set_blendShapeMaxWeight)) float_t  blendShapeMaxWeight;

/// @brief Field disableActivation, offset 0x331, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableActivation, put=__cordl_internal_set_disableActivation)) bool  disableActivation;

/// @brief Field disableDeactivation, offset 0x332, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableDeactivation, put=__cordl_internal_set_disableDeactivation)) bool  disableDeactivation;

 __declspec(property(get=get_fxActive, put=set_fxActive)) bool  fxActive;

/// @brief Field hasParticleFX, offset 0x390, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasParticleFX, put=__cordl_internal_set_hasParticleFX)) bool  hasParticleFX;

/// @brief Field hasSkinRenderer, offset 0x380, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasSkinRenderer, put=__cordl_internal_set_hasSkinRenderer)) bool  hasSkinRenderer;

/// @brief Field pFXEmissionModule, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_pFXEmissionModule, put=__cordl_internal_set_pFXEmissionModule)) ::GlobalNamespace::ParticleSystem_EmissionModule  pFXEmissionModule;

/// @brief Field particleFX, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleFX, put=__cordl_internal_set_particleFX)) ::UnityW<::UnityEngine::ParticleSystem>  particleFX;

/// @brief Field particleFXEmissionCooldownCurve, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleFXEmissionCooldownCurve, put=__cordl_internal_set_particleFXEmissionCooldownCurve)) ::UnityEngine::AnimationCurve*  particleFXEmissionCooldownCurve;

/// @brief Field particleFXEmissionIdle, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_particleFXEmissionIdle, put=__cordl_internal_set_particleFXEmissionIdle)) float_t  particleFXEmissionIdle;

/// @brief Field particleFXEmissionSqueeze, offset 0x374, size 0x4 
 __declspec(property(get=__cordl_internal_get_particleFXEmissionSqueeze, put=__cordl_internal_set_particleFXEmissionSqueeze)) float_t  particleFXEmissionSqueeze;

/// @brief Field releaseStrength, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseStrength, put=__cordl_internal_set_releaseStrength)) float_t  releaseStrength;

/// @brief Field skinRenderer, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinRenderer, put=__cordl_internal_set_skinRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinRenderer;

/// @brief Field squeezeReleaseSound, offset 0x34c, size 0x4 
 __declspec(property(get=__cordl_internal_get_squeezeReleaseSound, put=__cordl_internal_set_squeezeReleaseSound)) int32_t  squeezeReleaseSound;

/// @brief Field squeezeReleaseSoundBank, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_squeezeReleaseSoundBank, put=__cordl_internal_set_squeezeReleaseSoundBank)) ::ArrayW<int32_t>  squeezeReleaseSoundBank;

/// @brief Field squeezeSound, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_squeezeSound, put=__cordl_internal_set_squeezeSound)) int32_t  squeezeSound;

/// @brief Field squeezeSoundBank, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_squeezeSoundBank, put=__cordl_internal_set_squeezeSoundBank)) ::ArrayW<int32_t>  squeezeSoundBank;

/// @brief Field squeezeStrength, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_squeezeStrength, put=__cordl_internal_set_squeezeStrength)) float_t  squeezeStrength;

/// @brief Field squeezeTimeElapsed, offset 0x394, size 0x4 
 __declspec(property(get=__cordl_internal_get_squeezeTimeElapsed, put=__cordl_internal_set_squeezeTimeElapsed)) float_t  squeezeTimeElapsed;

/// @brief Field tempHandPos, offset 0x344, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempHandPos, put=__cordl_internal_set_tempHandPos)) int32_t  tempHandPos;

/// @brief Method CanActivate, addr 0x5794cfc, size 0x10, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x5794d0c, size 0x10, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

static inline ::GlobalNamespace::RubberDuck* New_ctor() ;

/// @brief Method OnActivate, addr 0x57943a8, size 0x41c, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDeactivate, addr 0x57947c4, size 0x538, virtual true, abstract: false, final false
inline void OnDeactivate() ;

/// @brief Method OnDisable, addr 0x5793cf8, size 0x1a8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5793730, size 0x328, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x57935b0, size 0x180, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method OnSqueezeActivate, addr 0x5793ef8, size 0x5c, virtual false, abstract: false, final false
inline void OnSqueezeActivate(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnSqueezeDeactivate, addr 0x57942ac, size 0xf4, virtual false, abstract: false, final false
inline void OnSqueezeDeactivate(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayParticleFX, addr 0x579401c, size 0x94, virtual false, abstract: false, final false
inline void PlayParticleFX(float_t  rate) ;

/// @brief Method SqueezeActivateLocal, addr 0x5793f54, size 0xc8, virtual false, abstract: false, final false
inline void SqueezeActivateLocal() ;

/// @brief Method SqueezeDeactivateLocal, addr 0x57943a0, size 0x8, virtual false, abstract: false, final false
inline void SqueezeDeactivateLocal() ;

/// @brief Method TriggeredLateUpdate, addr 0x5793020, size 0x2cc, virtual true, abstract: false, final false
inline void TriggeredLateUpdate() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr bool const& __cordl_internal_get__fxActive() const;

constexpr bool& __cordl_internal_get__fxActive() ;

constexpr bool const& __cordl_internal_get__raiseActivate() const;

constexpr bool& __cordl_internal_get__raiseActivate() ;

constexpr bool const& __cordl_internal_get__raiseDeactivate() const;

constexpr bool& __cordl_internal_get__raiseDeactivate() ;

constexpr ::UnityW<::GlobalNamespace::SoundEffects> const& __cordl_internal_get__sfxActivate() const;

constexpr ::UnityW<::GlobalNamespace::SoundEffects>& __cordl_internal_get__sfxActivate() ;

constexpr float_t const& __cordl_internal_get_blendShapeMaxWeight() const;

constexpr float_t& __cordl_internal_get_blendShapeMaxWeight() ;

constexpr bool const& __cordl_internal_get_disableActivation() const;

constexpr bool& __cordl_internal_get_disableActivation() ;

constexpr bool const& __cordl_internal_get_disableDeactivation() const;

constexpr bool& __cordl_internal_get_disableDeactivation() ;

constexpr bool const& __cordl_internal_get_hasParticleFX() const;

constexpr bool& __cordl_internal_get_hasParticleFX() ;

constexpr bool const& __cordl_internal_get_hasSkinRenderer() const;

constexpr bool& __cordl_internal_get_hasSkinRenderer() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get_pFXEmissionModule() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get_pFXEmissionModule() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleFX() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_particleFXEmissionCooldownCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_particleFXEmissionCooldownCurve() ;

constexpr float_t const& __cordl_internal_get_particleFXEmissionIdle() const;

constexpr float_t& __cordl_internal_get_particleFXEmissionIdle() ;

constexpr float_t const& __cordl_internal_get_particleFXEmissionSqueeze() const;

constexpr float_t& __cordl_internal_get_particleFXEmissionSqueeze() ;

constexpr float_t const& __cordl_internal_get_releaseStrength() const;

constexpr float_t& __cordl_internal_get_releaseStrength() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinRenderer() ;

constexpr int32_t const& __cordl_internal_get_squeezeReleaseSound() const;

constexpr int32_t& __cordl_internal_get_squeezeReleaseSound() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_squeezeReleaseSoundBank() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_squeezeReleaseSoundBank() ;

constexpr int32_t const& __cordl_internal_get_squeezeSound() const;

constexpr int32_t& __cordl_internal_get_squeezeSound() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_squeezeSoundBank() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_squeezeSoundBank() ;

constexpr float_t const& __cordl_internal_get_squeezeStrength() const;

constexpr float_t& __cordl_internal_get_squeezeStrength() ;

constexpr float_t const& __cordl_internal_get_squeezeTimeElapsed() const;

constexpr float_t& __cordl_internal_get_squeezeTimeElapsed() ;

constexpr int32_t const& __cordl_internal_get_tempHandPos() const;

constexpr int32_t& __cordl_internal_get_tempHandPos() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set__fxActive(bool  value) ;

constexpr void __cordl_internal_set__raiseActivate(bool  value) ;

constexpr void __cordl_internal_set__raiseDeactivate(bool  value) ;

constexpr void __cordl_internal_set__sfxActivate(::UnityW<::GlobalNamespace::SoundEffects>  value) ;

constexpr void __cordl_internal_set_blendShapeMaxWeight(float_t  value) ;

constexpr void __cordl_internal_set_disableActivation(bool  value) ;

constexpr void __cordl_internal_set_disableDeactivation(bool  value) ;

constexpr void __cordl_internal_set_hasParticleFX(bool  value) ;

constexpr void __cordl_internal_set_hasSkinRenderer(bool  value) ;

constexpr void __cordl_internal_set_pFXEmissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set_particleFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_particleFXEmissionCooldownCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_particleFXEmissionIdle(float_t  value) ;

constexpr void __cordl_internal_set_particleFXEmissionSqueeze(float_t  value) ;

constexpr void __cordl_internal_set_releaseStrength(float_t  value) ;

constexpr void __cordl_internal_set_skinRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_squeezeReleaseSound(int32_t  value) ;

constexpr void __cordl_internal_set_squeezeReleaseSoundBank(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_squeezeSound(int32_t  value) ;

constexpr void __cordl_internal_set_squeezeSoundBank(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_squeezeStrength(float_t  value) ;

constexpr void __cordl_internal_set_squeezeTimeElapsed(float_t  value) ;

constexpr void __cordl_internal_set_tempHandPos(int32_t  value) ;

/// @brief Method .ctor, addr 0x57933f4, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SqueezeReleaseSound, addr 0x5793544, size 0x6c, virtual false, abstract: false, final false
inline int32_t get_SqueezeReleaseSound() ;

/// @brief Method get_SqueezeSound, addr 0x57934d8, size 0x6c, virtual false, abstract: false, final false
inline int32_t get_SqueezeSound() ;

/// @brief Method get_fxActive, addr 0x5793480, size 0x20, virtual false, abstract: false, final false
inline bool get_fxActive() ;

/// @brief Method set_fxActive, addr 0x57934a0, size 0x38, virtual false, abstract: false, final false
inline void set_fxActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RubberDuck() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RubberDuck", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RubberDuck(RubberDuck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RubberDuck", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RubberDuck(RubberDuck const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1452};

/// [DebugOption]
/// @brief Field disableActivation, offset: 0x331, size: 0x1, def value: None
 bool  ___disableActivation;

/// [DebugOption]
/// @brief Field disableDeactivation, offset: 0x332, size: 0x1, def value: None
 bool  ___disableDeactivation;

/// @brief Field skinRenderer, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinRenderer;

/// [FormerlySerializedAs("duckieLerp")]
/// @brief Field blendShapeMaxWeight, offset: 0x340, size: 0x4, def value: None
 float_t  ___blendShapeMaxWeight;

/// @brief Field tempHandPos, offset: 0x344, size: 0x4, def value: None
 int32_t  ___tempHandPos;

/// [GorillaSoundLookup]
/// [SerializeField]
/// @brief Field squeezeSound, offset: 0x348, size: 0x4, def value: None
 int32_t  ___squeezeSound;

/// [GorillaSoundLookup]
/// [SerializeField]
/// @brief Field squeezeReleaseSound, offset: 0x34c, size: 0x4, def value: None
 int32_t  ___squeezeReleaseSound;

/// [GorillaSoundLookup]
/// @brief Field squeezeSoundBank, offset: 0x350, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___squeezeSoundBank;

/// [GorillaSoundLookup]
/// @brief Field squeezeReleaseSoundBank, offset: 0x358, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___squeezeReleaseSoundBank;

/// @brief Field squeezeStrength, offset: 0x360, size: 0x4, def value: None
 float_t  ___squeezeStrength;

/// @brief Field releaseStrength, offset: 0x364, size: 0x4, def value: None
 float_t  ___releaseStrength;

/// @brief Field particleFX, offset: 0x368, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleFX;

/// [Tooltip("The emission rate of the particle effect when not squeezed.")]
/// @brief Field particleFXEmissionIdle, offset: 0x370, size: 0x4, def value: None
 float_t  ___particleFXEmissionIdle;

/// [Tooltip("The emission rate of the particle effect when squeezed.")]
/// @brief Field particleFXEmissionSqueeze, offset: 0x374, size: 0x4, def value: None
 float_t  ___particleFXEmissionSqueeze;

/// [Tooltip("The animation of the particle effect returning to the idle emission rate. X axis is time, Y axis is the emission lerp value where 0 is idle, 1 is squeezed.")]
/// @brief Field particleFXEmissionCooldownCurve, offset: 0x378, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___particleFXEmissionCooldownCurve;

/// @brief Field hasSkinRenderer, offset: 0x380, size: 0x1, def value: None
 bool  ___hasSkinRenderer;

/// @brief Field pFXEmissionModule, offset: 0x388, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ___pFXEmissionModule;

/// @brief Field hasParticleFX, offset: 0x390, size: 0x1, def value: None
 bool  ___hasParticleFX;

/// @brief Field squeezeTimeElapsed, offset: 0x394, size: 0x4, def value: None
 float_t  ___squeezeTimeElapsed;

/// [SerializeField]
/// @brief Field _events, offset: 0x398, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// [SerializeField]
/// @brief Field _raiseActivate, offset: 0x3a0, size: 0x1, def value: None
 bool  ____raiseActivate;

/// [SerializeField]
/// @brief Field _raiseDeactivate, offset: 0x3a1, size: 0x1, def value: None
 bool  ____raiseDeactivate;

/// [SerializeField]
/// @brief Field _sfxActivate, offset: 0x3a8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundEffects>  ____sfxActivate;

/// [SerializeField]
/// @brief Field _fxActive, offset: 0x3b0, size: 0x1, def value: None
 bool  ____fxActive;

/// @brief Size padding 0x3e8 - 0x3b8 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RubberDuck, ___disableActivation) == 0x331, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___disableDeactivation) == 0x332, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___skinRenderer) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___blendShapeMaxWeight) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___tempHandPos) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___squeezeSound) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___squeezeReleaseSound) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___squeezeSoundBank) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___squeezeReleaseSoundBank) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___squeezeStrength) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___releaseStrength) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___particleFX) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___particleFXEmissionIdle) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___particleFXEmissionSqueeze) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___particleFXEmissionCooldownCurve) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___hasSkinRenderer) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___pFXEmissionModule) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___hasParticleFX) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ___squeezeTimeElapsed) == 0x394, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ____events) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ____raiseActivate) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ____raiseDeactivate) == 0x3a1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ____sfxActivate) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RubberDuck, ____fxActive) == 0x3b0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RubberDuck) == 0x3e8, "Size mismatch!");

} // namespace end def GlobalNamespace
