#pragma once
// IWYU pragma private; include "GlobalNamespace/FingerTorch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerTorch)
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
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FingerTorch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FingerTorch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerTorch*, "", "FingerTorch");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: FingerTorch
class CORDL_TYPE FingerTorch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field attachedToLeftHand, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_attachedToLeftHand, put=__cordl_internal_set_attachedToLeftHand)) bool  attachedToLeftHand;

/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field extendAudioClip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendAudioClip, put=__cordl_internal_set_extendAudioClip)) ::UnityW<::UnityEngine::AudioClip>  extendAudioClip;

/// @brief Field extendVibrationDuration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendVibrationDuration, put=__cordl_internal_set_extendVibrationDuration)) float_t  extendVibrationDuration;

/// @brief Field extendVibrationStrength, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendVibrationStrength, put=__cordl_internal_set_extendVibrationStrength)) float_t  extendVibrationStrength;

/// @brief Field extended, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_extended, put=__cordl_internal_set_extended)) bool  extended;

/// @brief Field inputDevice, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputDevice, put=__cordl_internal_set_inputDevice)) ::UnityEngine::XR::InputDevice  inputDevice;

/// @brief Field myRig, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field networkedExtended, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_networkedExtended, put=__cordl_internal_set_networkedExtended)) bool  networkedExtended;

/// @brief Field particleFX, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleFX, put=__cordl_internal_set_particleFX)) ::UnityW<::UnityEngine::GameObject>  particleFX;

/// @brief Field pinkyRingBone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pinkyRingBone, put=__cordl_internal_set_pinkyRingBone)) ::UnityW<::UnityEngine::Transform>  pinkyRingBone;

/// @brief Field retractAudioClip, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_retractAudioClip, put=__cordl_internal_set_retractAudioClip)) ::UnityW<::UnityEngine::AudioClip>  retractAudioClip;

/// @brief Field retractVibrationDuration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractVibrationDuration, put=__cordl_internal_set_retractVibrationDuration)) float_t  retractVibrationDuration;

/// @brief Field retractVibrationStrength, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractVibrationStrength, put=__cordl_internal_set_retractVibrationStrength)) float_t  retractVibrationStrength;

/// @brief Field stateBitIndex, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateBitIndex, put=__cordl_internal_set_stateBitIndex)) int32_t  stateBitIndex;

/// @brief Field thumbRingBone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_thumbRingBone, put=__cordl_internal_set_thumbRingBone)) ::UnityW<::UnityEngine::Transform>  thumbRingBone;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5e089e0, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5e08930, size 0xb0, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5e08920, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5e08910, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x5e08928, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x5e08918, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

/// @brief Method IsMyItem, addr 0x5e08e7c, size 0x88, virtual false, abstract: false, final false
inline bool IsMyItem() ;

/// @brief Method LateUpdate, addr 0x5e08f04, size 0x30, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::FingerTorch* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e08c28, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e089e4, size 0x9c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnExtendStateChanged, addr 0x5e08a80, size 0x1a8, virtual false, abstract: false, final false
inline void OnExtendStateChanged(bool  playAudio) ;

/// @brief Method UpdateLocal, addr 0x5e08c2c, size 0x174, virtual false, abstract: false, final false
inline void UpdateLocal() ;

/// @brief Method UpdateReplicated, addr 0x5e08de8, size 0x94, virtual false, abstract: false, final false
inline void UpdateReplicated() ;

/// @brief Method UpdateShared, addr 0x5e08da0, size 0x48, virtual false, abstract: false, final false
inline void UpdateShared() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get_attachedToLeftHand() const;

constexpr bool& __cordl_internal_get_attachedToLeftHand() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_extendAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_extendAudioClip() ;

constexpr float_t const& __cordl_internal_get_extendVibrationDuration() const;

constexpr float_t& __cordl_internal_get_extendVibrationDuration() ;

constexpr float_t const& __cordl_internal_get_extendVibrationStrength() const;

constexpr float_t& __cordl_internal_get_extendVibrationStrength() ;

constexpr bool const& __cordl_internal_get_extended() const;

constexpr bool& __cordl_internal_get_extended() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_inputDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_inputDevice() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr bool const& __cordl_internal_get_networkedExtended() const;

constexpr bool& __cordl_internal_get_networkedExtended() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_particleFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_particleFX() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pinkyRingBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pinkyRingBone() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_retractAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_retractAudioClip() ;

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

constexpr void __cordl_internal_set_attachedToLeftHand(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_extendAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_extendVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set_extendVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set_extended(bool  value) ;

constexpr void __cordl_internal_set_inputDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_networkedExtended(bool  value) ;

constexpr void __cordl_internal_set_particleFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_pinkyRingBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_retractAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_retractVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set_retractVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set_stateBitIndex(int32_t  value) ;

constexpr void __cordl_internal_set_thumbRingBone(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5e08f34, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerTorch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerTorch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerTorch(FingerTorch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerTorch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerTorch(FingerTorch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{539};

/// [Header("Wearable Settings")]
/// @brief Field attachedToLeftHand, offset: 0x20, size: 0x1, def value: None
 bool  ___attachedToLeftHand;

/// [Header("Bones")]
/// @brief Field pinkyRingBone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pinkyRingBone;

/// @brief Field thumbRingBone, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___thumbRingBone;

/// [Header("Audio")]
/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field extendAudioClip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___extendAudioClip;

/// @brief Field retractAudioClip, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___retractAudioClip;

/// [Header("Vibration")]
/// @brief Field extendVibrationDuration, offset: 0x50, size: 0x4, def value: None
 float_t  ___extendVibrationDuration;

/// @brief Field extendVibrationStrength, offset: 0x54, size: 0x4, def value: None
 float_t  ___extendVibrationStrength;

/// @brief Field retractVibrationDuration, offset: 0x58, size: 0x4, def value: None
 float_t  ___retractVibrationDuration;

/// @brief Field retractVibrationStrength, offset: 0x5c, size: 0x4, def value: None
 float_t  ___retractVibrationStrength;

/// [Header("Particle FX")]
/// @brief Field particleFX, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___particleFX;

/// @brief Field networkedExtended, offset: 0x68, size: 0x1, def value: None
 bool  ___networkedExtended;

/// @brief Field extended, offset: 0x69, size: 0x1, def value: None
 bool  ___extended;

/// @brief Field inputDevice, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___inputDevice;

/// @brief Field myRig, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field stateBitIndex, offset: 0x88, size: 0x4, def value: None
 int32_t  ___stateBitIndex;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x8c, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x90, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerTorch, ___attachedToLeftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___pinkyRingBone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___thumbRingBone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___extendAudioClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___retractAudioClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___extendVibrationDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___extendVibrationStrength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___retractVibrationDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___retractVibrationStrength) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___particleFX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___networkedExtended) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___extended) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___inputDevice) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___myRig) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ___stateBitIndex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerTorch, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerTorch) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
