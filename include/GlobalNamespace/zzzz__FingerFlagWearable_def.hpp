#pragma once
// IWYU pragma private; include "GlobalNamespace/FingerFlagWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlagWearable)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
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
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FingerFlagWearable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FingerFlagWearable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerFlagWearable*, "", "FingerFlagWearable");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: FingerFlagWearable
class CORDL_TYPE FingerFlagWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field animator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field attachedToLeftHand, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_attachedToLeftHand, put=__cordl_internal_set_attachedToLeftHand)) bool  attachedToLeftHand;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field clothBones, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_clothBones, put=__cordl_internal_set_clothBones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  clothBones;

/// @brief Field clothRigidbodies, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_clothRigidbodies, put=__cordl_internal_set_clothRigidbodies)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  clothRigidbodies;

/// @brief Field extendAudioClip, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendAudioClip, put=__cordl_internal_set_extendAudioClip)) ::UnityW<::UnityEngine::AudioClip>  extendAudioClip;

/// @brief Field extendSpeed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendSpeed, put=__cordl_internal_set_extendSpeed)) float_t  extendSpeed;

/// @brief Field extendVibrationDuration, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendVibrationDuration, put=__cordl_internal_set_extendVibrationDuration)) float_t  extendVibrationDuration;

/// @brief Field extendVibrationStrength, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendVibrationStrength, put=__cordl_internal_set_extendVibrationStrength)) float_t  extendVibrationStrength;

/// @brief Field extended, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get_extended, put=__cordl_internal_set_extended)) bool  extended;

/// @brief Field fullyRetracted, offset 0x86, size 0x1 
 __declspec(property(get=__cordl_internal_get_fullyRetracted, put=__cordl_internal_set_fullyRetracted)) bool  fullyRetracted;

/// @brief Field inputDevice, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputDevice, put=__cordl_internal_set_inputDevice)) ::UnityEngine::XR::InputDevice  inputDevice;

/// @brief Field myRig, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field networkedExtended, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_networkedExtended, put=__cordl_internal_set_networkedExtended)) bool  networkedExtended;

/// @brief Field pinkyRingBone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pinkyRingBone, put=__cordl_internal_set_pinkyRingBone)) ::UnityW<::UnityEngine::Transform>  pinkyRingBone;

/// @brief Field retractAudioClip, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_retractAudioClip, put=__cordl_internal_set_retractAudioClip)) ::UnityW<::UnityEngine::AudioClip>  retractAudioClip;

/// @brief Field retractExtendTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractExtendTime, put=__cordl_internal_set_retractExtendTime)) float_t  retractExtendTime;

/// @brief Field retractExtendTimeAnimParam, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractExtendTimeAnimParam, put=__cordl_internal_set_retractExtendTimeAnimParam)) int32_t  retractExtendTimeAnimParam;

/// @brief Field retractSpeed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractSpeed, put=__cordl_internal_set_retractSpeed)) float_t  retractSpeed;

/// @brief Field retractVibrationDuration, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractVibrationDuration, put=__cordl_internal_set_retractVibrationDuration)) float_t  retractVibrationDuration;

/// @brief Field retractVibrationStrength, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractVibrationStrength, put=__cordl_internal_set_retractVibrationStrength)) float_t  retractVibrationStrength;

/// @brief Field stateBitIndex, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateBitIndex, put=__cordl_internal_set_stateBitIndex)) int32_t  stateBitIndex;

/// @brief Field thumbRingBone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_thumbRingBone, put=__cordl_internal_set_thumbRingBone)) ::UnityW<::UnityEngine::Transform>  thumbRingBone;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5dfcd50, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5dfcc80, size 0xd0, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5dfcc70, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5dfcc60, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x5dfcc78, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x5dfcc68, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

/// @brief Method IsMyItem, addr 0x5dfd2e0, size 0x88, virtual false, abstract: false, final false
inline bool IsMyItem() ;

/// @brief Method LateUpdate, addr 0x5dfd368, size 0x30, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::FingerFlagWearable* New_ctor() ;

/// @brief Method OnEnable, addr 0x5dfcd54, size 0x9c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnExtendStateChanged, addr 0x5dfcdf0, size 0x1a8, virtual false, abstract: false, final false
inline void OnExtendStateChanged(bool  playAudio) ;

/// @brief Method UpdateAnimation, addr 0x5dfd1d8, size 0x74, virtual false, abstract: false, final false
inline void UpdateAnimation() ;

/// @brief Method UpdateLocal, addr 0x5dfcf98, size 0x174, virtual false, abstract: false, final false
inline void UpdateLocal() ;

/// @brief Method UpdateReplicated, addr 0x5dfd24c, size 0x94, virtual false, abstract: false, final false
inline void UpdateReplicated() ;

/// @brief Method UpdateShared, addr 0x5dfd10c, size 0xcc, virtual false, abstract: false, final false
inline void UpdateShared() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr bool const& __cordl_internal_get_attachedToLeftHand() const;

constexpr bool& __cordl_internal_get_attachedToLeftHand() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_clothBones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_clothBones() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_clothRigidbodies() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_clothRigidbodies() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_extendAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_extendAudioClip() ;

constexpr float_t const& __cordl_internal_get_extendSpeed() const;

constexpr float_t& __cordl_internal_get_extendSpeed() ;

constexpr float_t const& __cordl_internal_get_extendVibrationDuration() const;

constexpr float_t& __cordl_internal_get_extendVibrationDuration() ;

constexpr float_t const& __cordl_internal_get_extendVibrationStrength() const;

constexpr float_t& __cordl_internal_get_extendVibrationStrength() ;

constexpr bool const& __cordl_internal_get_extended() const;

constexpr bool& __cordl_internal_get_extended() ;

constexpr bool const& __cordl_internal_get_fullyRetracted() const;

constexpr bool& __cordl_internal_get_fullyRetracted() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_inputDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_inputDevice() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr bool const& __cordl_internal_get_networkedExtended() const;

constexpr bool& __cordl_internal_get_networkedExtended() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pinkyRingBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pinkyRingBone() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_retractAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_retractAudioClip() ;

constexpr float_t const& __cordl_internal_get_retractExtendTime() const;

constexpr float_t& __cordl_internal_get_retractExtendTime() ;

constexpr int32_t const& __cordl_internal_get_retractExtendTimeAnimParam() const;

constexpr int32_t& __cordl_internal_get_retractExtendTimeAnimParam() ;

constexpr float_t const& __cordl_internal_get_retractSpeed() const;

constexpr float_t& __cordl_internal_get_retractSpeed() ;

constexpr float_t const& __cordl_internal_get_retractVibrationDuration() const;

constexpr float_t& __cordl_internal_get_retractVibrationDuration() ;

constexpr float_t const& __cordl_internal_get_retractVibrationStrength() const;

constexpr float_t& __cordl_internal_get_retractVibrationStrength() ;

constexpr int32_t const& __cordl_internal_get_stateBitIndex() const;

constexpr int32_t& __cordl_internal_get_stateBitIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_thumbRingBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_thumbRingBone() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_attachedToLeftHand(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_clothBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_clothRigidbodies(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_extendAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_extendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_extendVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set_extendVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set_extended(bool  value) ;

constexpr void __cordl_internal_set_fullyRetracted(bool  value) ;

constexpr void __cordl_internal_set_inputDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_networkedExtended(bool  value) ;

constexpr void __cordl_internal_set_pinkyRingBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_retractAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_retractExtendTime(float_t  value) ;

constexpr void __cordl_internal_set_retractExtendTimeAnimParam(int32_t  value) ;

constexpr void __cordl_internal_set_retractSpeed(float_t  value) ;

constexpr void __cordl_internal_set_retractVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set_retractVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set_stateBitIndex(int32_t  value) ;

constexpr void __cordl_internal_set_thumbRingBone(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5dfd398, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFlagWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFlagWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFlagWearable(FingerFlagWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFlagWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFlagWearable(FingerFlagWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{508};

/// [Header("Wearable Settings")]
/// @brief Field attachedToLeftHand, offset: 0x20, size: 0x1, def value: None
 bool  ___attachedToLeftHand;

/// [Header("Bones")]
/// @brief Field pinkyRingBone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pinkyRingBone;

/// @brief Field thumbRingBone, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___thumbRingBone;

/// @brief Field clothBones, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___clothBones;

/// @brief Field clothRigidbodies, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___clothRigidbodies;

/// [Header("Animation")]
/// @brief Field animator, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field extendSpeed, offset: 0x50, size: 0x4, def value: None
 float_t  ___extendSpeed;

/// @brief Field retractSpeed, offset: 0x54, size: 0x4, def value: None
 float_t  ___retractSpeed;

/// [Header("Audio")]
/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field extendAudioClip, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___extendAudioClip;

/// @brief Field retractAudioClip, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___retractAudioClip;

/// [Header("Vibration")]
/// @brief Field extendVibrationDuration, offset: 0x70, size: 0x4, def value: None
 float_t  ___extendVibrationDuration;

/// @brief Field extendVibrationStrength, offset: 0x74, size: 0x4, def value: None
 float_t  ___extendVibrationStrength;

/// @brief Field retractVibrationDuration, offset: 0x78, size: 0x4, def value: None
 float_t  ___retractVibrationDuration;

/// @brief Field retractVibrationStrength, offset: 0x7c, size: 0x4, def value: None
 float_t  ___retractVibrationStrength;

/// @brief Field retractExtendTimeAnimParam, offset: 0x80, size: 0x4, def value: None
 int32_t  ___retractExtendTimeAnimParam;

/// @brief Field networkedExtended, offset: 0x84, size: 0x1, def value: None
 bool  ___networkedExtended;

/// @brief Field extended, offset: 0x85, size: 0x1, def value: None
 bool  ___extended;

/// @brief Field fullyRetracted, offset: 0x86, size: 0x1, def value: None
 bool  ___fullyRetracted;

/// @brief Field retractExtendTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___retractExtendTime;

/// @brief Field inputDevice, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___inputDevice;

/// @brief Field myRig, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field stateBitIndex, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___stateBitIndex;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0xac, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___attachedToLeftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___pinkyRingBone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___thumbRingBone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___clothBones) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___clothRigidbodies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___animator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___extendSpeed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___retractSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___extendAudioClip) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___retractAudioClip) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___extendVibrationDuration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___extendVibrationStrength) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___retractVibrationDuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___retractVibrationStrength) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___retractExtendTimeAnimParam) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___networkedExtended) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___extended) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___fullyRetracted) == 0x86, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___retractExtendTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___inputDevice) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___myRig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ___stateBitIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagWearable, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerFlagWearable) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
