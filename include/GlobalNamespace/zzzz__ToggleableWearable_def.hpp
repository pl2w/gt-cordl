#pragma once
// IWYU pragma private; include "GlobalNamespace/ToggleableWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ToggleableWearable)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class ToggleableWearable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ToggleableWearable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ToggleableWearable*, "", "ToggleableWearable");
// Dependencies UnityEngine.Animator, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Renderer, UnityEngine.Vector2, UnityEngine.Vector3, VRRig::WearablePackedStateSlots
namespace GlobalNamespace {
// Is value type: false
// CS Name: ToggleableWearable
class CORDL_TYPE ToggleableWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animParam_Progress, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_animParam_Progress, put=setStaticF_animParam_Progress)) int32_t  animParam_Progress;

/// @brief Field animationTransitionDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationTransitionDuration, put=__cordl_internal_set_animationTransitionDuration)) float_t  animationTransitionDuration;

/// @brief Field animators, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_animators, put=__cordl_internal_set_animators)) ::ArrayW<::UnityW<::UnityEngine::Animator>>  animators;

/// @brief Field assignedSlot, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_assignedSlot, put=__cordl_internal_set_assignedSlot)) ::GlobalNamespace::VRRig_WearablePackedStateSlots  assignedSlot;

/// @brief Field assignedSlotBitIndex, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_assignedSlotBitIndex, put=__cordl_internal_set_assignedSlotBitIndex)) int32_t  assignedSlotBitIndex;

/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field colliders, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliders;

/// @brief Field framesSinceCooldownAndExitingVolume, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_framesSinceCooldownAndExitingVolume, put=__cordl_internal_set_framesSinceCooldownAndExitingVolume)) int32_t  framesSinceCooldownAndExitingVolume;

/// @brief Field hasAudioSource, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasAudioSource, put=__cordl_internal_set_hasAudioSource)) bool  hasAudioSource;

/// @brief Field isOn, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field layerMask, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field oneShot, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_oneShot, put=__cordl_internal_set_oneShot)) bool  oneShot;

/// @brief Field ownerIsLocal, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_ownerIsLocal, put=__cordl_internal_set_ownerIsLocal)) bool  ownerIsLocal;

/// @brief Field ownerRig, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field progress, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field renderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field resetTimer, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_resetTimer, put=__cordl_internal_set_resetTimer)) float_t  resetTimer;

/// @brief Field startOn, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_startOn, put=__cordl_internal_set_startOn)) bool  startOn;

/// @brief Field toggleCooldownRange, offset 0x84, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleCooldownRange, put=__cordl_internal_set_toggleCooldownRange)) ::UnityEngine::Vector2  toggleCooldownRange;

/// @brief Field toggleCooldownTimer, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_toggleCooldownTimer, put=__cordl_internal_set_toggleCooldownTimer)) float_t  toggleCooldownTimer;

/// @brief Field toggleOffSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleOffSound, put=__cordl_internal_set_toggleOffSound)) ::UnityW<::UnityEngine::AudioClip>  toggleOffSound;

/// @brief Field toggleOnSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleOnSound, put=__cordl_internal_set_toggleOnSound)) ::UnityW<::UnityEngine::AudioClip>  toggleOnSound;

/// @brief Field toggleTimer, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_toggleTimer, put=__cordl_internal_set_toggleTimer)) float_t  toggleTimer;

/// @brief Field triggerOffset, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_triggerOffset, put=__cordl_internal_set_triggerOffset)) ::UnityEngine::Vector3  triggerOffset;

/// @brief Field triggerRadius, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerRadius, put=__cordl_internal_set_triggerRadius)) float_t  triggerRadius;

/// @brief Field turnOffVibrationDuration, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnOffVibrationDuration, put=__cordl_internal_set_turnOffVibrationDuration)) float_t  turnOffVibrationDuration;

/// @brief Field turnOffVibrationStrength, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnOffVibrationStrength, put=__cordl_internal_set_turnOffVibrationStrength)) float_t  turnOffVibrationStrength;

/// @brief Field turnOnVibrationDuration, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnOnVibrationDuration, put=__cordl_internal_set_turnOnVibrationDuration)) float_t  turnOnVibrationDuration;

/// @brief Field turnOnVibrationStrength, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnOnVibrationStrength, put=__cordl_internal_set_turnOnVibrationStrength)) float_t  turnOnVibrationStrength;

/// @brief Method Awake, addr 0x56b1368, size 0x2cc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x56b1634, size 0x3bc, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LocalToggle, addr 0x56b19f0, size 0x1c4, virtual false, abstract: false, final false
inline void LocalToggle(bool  isLeftHand, bool  playAudio, bool  playHaptics) ;

static inline ::GlobalNamespace::ToggleableWearable* New_ctor() ;

/// @brief Method SharedSetState, addr 0x56b1bb4, size 0x144, virtual false, abstract: false, final false
inline void SharedSetState(bool  state, bool  playAudio) ;

constexpr float_t const& __cordl_internal_get_animationTransitionDuration() const;

constexpr float_t& __cordl_internal_get_animationTransitionDuration() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& __cordl_internal_get_animators() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& __cordl_internal_get_animators() ;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& __cordl_internal_get_assignedSlot() const;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& __cordl_internal_get_assignedSlot() ;

constexpr int32_t const& __cordl_internal_get_assignedSlotBitIndex() const;

constexpr int32_t& __cordl_internal_get_assignedSlotBitIndex() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliders() ;

constexpr int32_t const& __cordl_internal_get_framesSinceCooldownAndExitingVolume() const;

constexpr int32_t& __cordl_internal_get_framesSinceCooldownAndExitingVolume() ;

constexpr bool const& __cordl_internal_get_hasAudioSource() const;

constexpr bool& __cordl_internal_get_hasAudioSource() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_oneShot() const;

constexpr bool& __cordl_internal_get_oneShot() ;

constexpr bool const& __cordl_internal_get_ownerIsLocal() const;

constexpr bool& __cordl_internal_get_ownerIsLocal() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr float_t const& __cordl_internal_get_resetTimer() const;

constexpr float_t& __cordl_internal_get_resetTimer() ;

constexpr bool const& __cordl_internal_get_startOn() const;

constexpr bool& __cordl_internal_get_startOn() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_toggleCooldownRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_toggleCooldownRange() ;

constexpr float_t const& __cordl_internal_get_toggleCooldownTimer() const;

constexpr float_t& __cordl_internal_get_toggleCooldownTimer() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_toggleOffSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_toggleOffSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_toggleOnSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_toggleOnSound() ;

constexpr float_t const& __cordl_internal_get_toggleTimer() const;

constexpr float_t& __cordl_internal_get_toggleTimer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_triggerOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_triggerOffset() ;

constexpr float_t const& __cordl_internal_get_triggerRadius() const;

constexpr float_t& __cordl_internal_get_triggerRadius() ;

constexpr float_t const& __cordl_internal_get_turnOffVibrationDuration() const;

constexpr float_t& __cordl_internal_get_turnOffVibrationDuration() ;

constexpr float_t const& __cordl_internal_get_turnOffVibrationStrength() const;

constexpr float_t& __cordl_internal_get_turnOffVibrationStrength() ;

constexpr float_t const& __cordl_internal_get_turnOnVibrationDuration() const;

constexpr float_t& __cordl_internal_get_turnOnVibrationDuration() ;

constexpr float_t const& __cordl_internal_get_turnOnVibrationStrength() const;

constexpr float_t& __cordl_internal_get_turnOnVibrationStrength() ;

constexpr void __cordl_internal_set_animationTransitionDuration(float_t  value) ;

constexpr void __cordl_internal_set_animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value) ;

constexpr void __cordl_internal_set_assignedSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value) ;

constexpr void __cordl_internal_set_assignedSlotBitIndex(int32_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_framesSinceCooldownAndExitingVolume(int32_t  value) ;

constexpr void __cordl_internal_set_hasAudioSource(bool  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_oneShot(bool  value) ;

constexpr void __cordl_internal_set_ownerIsLocal(bool  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_resetTimer(float_t  value) ;

constexpr void __cordl_internal_set_startOn(bool  value) ;

constexpr void __cordl_internal_set_toggleCooldownRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_toggleCooldownTimer(float_t  value) ;

constexpr void __cordl_internal_set_toggleOffSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_toggleOnSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_toggleTimer(float_t  value) ;

constexpr void __cordl_internal_set_triggerOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_triggerRadius(float_t  value) ;

constexpr void __cordl_internal_set_turnOffVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set_turnOffVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set_turnOnVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set_turnOnVibrationStrength(float_t  value) ;

/// @brief Method .ctor, addr 0x56b1cf8, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_animParam_Progress() ;

static inline void setStaticF_animParam_Progress(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleableWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleableWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleableWearable(ToggleableWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleableWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleableWearable(ToggleableWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{940};

/// @brief Field renderers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field animators, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Animator>>  ___animators;

/// @brief Field animationTransitionDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___animationTransitionDuration;

/// [Tooltip("Whether the wearable state is toggled on by default.")]
/// @brief Field startOn, offset: 0x34, size: 0x1, def value: None
 bool  ___startOn;

/// [Tooltip("AudioSource to play toggle sounds.")]
/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [Tooltip("Sound to play when toggled on.")]
/// @brief Field toggleOnSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___toggleOnSound;

/// [Tooltip("Sound to play when toggled off.")]
/// @brief Field toggleOffSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___toggleOffSound;

/// [Tooltip("Layer to check for trigger sphere collisions.")]
/// @brief Field layerMask, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// [Tooltip("Radius of the trigger sphere.")]
/// @brief Field triggerRadius, offset: 0x54, size: 0x4, def value: None
 float_t  ___triggerRadius;

/// [Tooltip("Position in local space to move the trigger sphere.")]
/// @brief Field triggerOffset, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___triggerOffset;

/// [Tooltip("This is to determine what bit to change in VRRig.WearablesPackedStates.")]
/// @brief Field assignedSlot, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::VRRig_WearablePackedStateSlots  ___assignedSlot;

/// [Header("Vibration")]
/// @brief Field turnOnVibrationDuration, offset: 0x68, size: 0x4, def value: None
 float_t  ___turnOnVibrationDuration;

/// @brief Field turnOnVibrationStrength, offset: 0x6c, size: 0x4, def value: None
 float_t  ___turnOnVibrationStrength;

/// @brief Field turnOffVibrationDuration, offset: 0x70, size: 0x4, def value: None
 float_t  ___turnOffVibrationDuration;

/// @brief Field turnOffVibrationStrength, offset: 0x74, size: 0x4, def value: None
 float_t  ___turnOffVibrationStrength;

/// @brief Field ownerRig, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field ownerIsLocal, offset: 0x80, size: 0x1, def value: None
 bool  ___ownerIsLocal;

/// @brief Field isOn, offset: 0x81, size: 0x1, def value: None
 bool  ___isOn;

/// [SerializeField]
/// @brief Field toggleCooldownRange, offset: 0x84, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___toggleCooldownRange;

/// @brief Field hasAudioSource, offset: 0x8c, size: 0x1, def value: None
 bool  ___hasAudioSource;

/// @brief Field colliders, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliders;

/// @brief Field framesSinceCooldownAndExitingVolume, offset: 0x98, size: 0x4, def value: None
 int32_t  ___framesSinceCooldownAndExitingVolume;

/// @brief Field toggleCooldownTimer, offset: 0x9c, size: 0x4, def value: None
 float_t  ___toggleCooldownTimer;

/// @brief Field assignedSlotBitIndex, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___assignedSlotBitIndex;

/// @brief Field progress, offset: 0xa4, size: 0x4, def value: None
 float_t  ___progress;

/// [SerializeField]
/// @brief Field oneShot, offset: 0xa8, size: 0x1, def value: None
 bool  ___oneShot;

/// [SerializeField]
/// [Tooltip("Seconds before reverting to its default state, as defined by \'Start On.\' A value of 0 or less means never.")]
/// @brief Field resetTimer, offset: 0xac, size: 0x4, def value: None
 float_t  ___resetTimer;

/// @brief Field toggleTimer, offset: 0xb0, size: 0x4, def value: None
 float_t  ___toggleTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___animators) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___animationTransitionDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___startOn) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___toggleOnSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___toggleOffSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___layerMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___triggerRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___triggerOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___assignedSlot) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___turnOnVibrationDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___turnOnVibrationStrength) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___turnOffVibrationDuration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___turnOffVibrationStrength) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___ownerRig) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___ownerIsLocal) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___isOn) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___toggleCooldownRange) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___hasAudioSource) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___colliders) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___framesSinceCooldownAndExitingVolume) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___toggleCooldownTimer) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___assignedSlotBitIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___progress) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___oneShot) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___resetTimer) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableWearable, ___toggleTimer) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ToggleableWearable) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
