#pragma once
// IWYU pragma private; include "GorillaTag/HeartRingCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeartRingCosmetic)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag {
class HeartRingCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::HeartRingCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::HeartRingCosmetic*, "GorillaTag", "HeartRingCosmetic");
// [DefaultExecutionOrder(1250)]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.HeartRingCosmetic
class CORDL_TYPE HeartRingCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field effectActivationRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectActivationRadius, put=__cordl_internal_set_effectActivationRadius)) float_t  effectActivationRadius;

/// @brief Field effects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_effects, put=__cordl_internal_set_effects)) ::UnityW<::UnityEngine::GameObject>  effects;

/// @brief Field hauntedVoicePitch, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hauntedVoicePitch, put=__cordl_internal_set_hauntedVoicePitch)) float_t  hauntedVoicePitch;

/// @brief Field headToMouthOffset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_headToMouthOffset, put=__cordl_internal_set_headToMouthOffset)) ::UnityEngine::Vector3  headToMouthOffset;

/// @brief Field isHauntedVoiceChanger, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHauntedVoiceChanger, put=__cordl_internal_set_isHauntedVoiceChanger)) bool  isHauntedVoiceChanger;

/// @brief Field maxEmissionRate, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxEmissionRate, put=__cordl_internal_set_maxEmissionRate)) float_t  maxEmissionRate;

/// @brief Field maxVolume, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVolume, put=__cordl_internal_set_maxVolume)) float_t  maxVolume;

/// @brief Field ownerHead, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerHead, put=__cordl_internal_set_ownerHead)) ::UnityW<::UnityEngine::Transform>  ownerHead;

/// @brief Field ownerRig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field particleSystem, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystem, put=__cordl_internal_set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystem;

/// @brief Method Awake, addr 0x5d1f168, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5d1f52c, size 0x1f8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::HeartRingCosmetic* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d1f20c, size 0x320, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__13_0, addr 0x5d1f744, size 0xc, virtual false, abstract: false, final false
inline void _Awake_b__13_0() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_effectActivationRadius() const;

constexpr float_t& __cordl_internal_get_effectActivationRadius() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effects() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effects() ;

constexpr float_t const& __cordl_internal_get_hauntedVoicePitch() const;

constexpr float_t& __cordl_internal_get_hauntedVoicePitch() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headToMouthOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headToMouthOffset() ;

constexpr bool const& __cordl_internal_get_isHauntedVoiceChanger() const;

constexpr bool& __cordl_internal_get_isHauntedVoiceChanger() ;

constexpr float_t const& __cordl_internal_get_maxEmissionRate() const;

constexpr float_t& __cordl_internal_get_maxEmissionRate() ;

constexpr float_t const& __cordl_internal_get_maxVolume() const;

constexpr float_t& __cordl_internal_get_maxVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ownerHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ownerHead() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_effectActivationRadius(float_t  value) ;

constexpr void __cordl_internal_set_effects(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hauntedVoicePitch(float_t  value) ;

constexpr void __cordl_internal_set_headToMouthOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_isHauntedVoiceChanger(bool  value) ;

constexpr void __cordl_internal_set_maxEmissionRate(float_t  value) ;

constexpr void __cordl_internal_set_maxVolume(float_t  value) ;

constexpr void __cordl_internal_set_ownerHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5d1f724, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeartRingCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeartRingCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HeartRingCosmetic(HeartRingCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeartRingCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeartRingCosmetic(HeartRingCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4587};

/// @brief Field emissionFadeTime offset 0xffffffff size 0x4
static constexpr float_t  emissionFadeTime{static_cast<float_t>(0.1f)};

/// @brief Field volumeFadeTime offset 0xffffffff size 0x4
static constexpr float_t  volumeFadeTime{static_cast<float_t>(2.0f)};

/// @brief Field effects, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effects;

/// [SerializeField]
/// @brief Field isHauntedVoiceChanger, offset: 0x28, size: 0x1, def value: None
 bool  ___isHauntedVoiceChanger;

/// [SerializeField]
/// @brief Field hauntedVoicePitch, offset: 0x2c, size: 0x4, def value: None
 float_t  ___hauntedVoicePitch;

/// [AssignInCorePrefab]
/// @brief Field effectActivationRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___effectActivationRadius;

/// @brief Field headToMouthOffset, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headToMouthOffset;

/// @brief Field ownerRig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field ownerHead, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ownerHead;

/// @brief Field particleSystem, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystem;

/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field maxEmissionRate, offset: 0x60, size: 0x4, def value: None
 float_t  ___maxEmissionRate;

/// @brief Field maxVolume, offset: 0x64, size: 0x4, def value: None
 float_t  ___maxVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___effects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___isHauntedVoiceChanger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___hauntedVoicePitch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___effectActivationRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___headToMouthOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___ownerRig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___ownerHead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___particleSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___maxEmissionRate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::HeartRingCosmetic, ___maxVolume) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::HeartRingCosmetic) == 0x68, "Size mismatch!");

} // namespace end def GorillaTag
