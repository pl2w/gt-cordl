#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SquirtingFlowerBadgeCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SquirtingFlowerBadgeCosmetic)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag::Cosmetics {
class IFingerFlexListener;
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
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class SquirtingFlowerBadgeCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic*, "GorillaTag.Cosmetics", "SquirtingFlowerBadgeCosmetic");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.SquirtingFlowerBadgeCosmetic
class CORDL_TYPE SquirtingFlowerBadgeCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

 __declspec(property(get=get_MyRig, put=set_MyRig)) ::UnityW<::GlobalNamespace::VRRig>  MyRig;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field <MyRig>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__MyRig_k__BackingField, put=__cordl_internal_set__MyRig_k__BackingField)) ::UnityW<::GlobalNamespace::VRRig>  _MyRig_k__BackingField;

/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field audioToPlay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioToPlay, put=__cordl_internal_set_audioToPlay)) ::UnityW<::UnityEngine::AudioClip>  audioToPlay;

/// @brief Field buttonReleased, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonReleased, put=__cordl_internal_set_buttonReleased)) bool  buttonReleased;

/// @brief Field coolDownTimer, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDownTimer, put=__cordl_internal_set_coolDownTimer)) float_t  coolDownTimer;

/// @brief Field leftHand, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) bool  leftHand;

/// @brief Field objectToEnable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectToEnable, put=__cordl_internal_set_objectToEnable)) ::UnityW<::UnityEngine::GameObject>  objectToEnable;

/// @brief Field particlesToPlay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_particlesToPlay, put=__cordl_internal_set_particlesToPlay)) ::UnityW<::UnityEngine::ParticleSystem>  particlesToPlay;

/// @brief Field restartTimer, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_restartTimer, put=__cordl_internal_set_restartTimer)) bool  restartTimer;

/// @brief Field triggeredTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggeredTime, put=__cordl_internal_set_triggeredTime)) float_t  triggeredTime;

/// @brief Convert operator to "::GorillaTag::Cosmetics::IFingerFlexListener"
constexpr operator  ::GorillaTag::Cosmetics::IFingerFlexListener*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method FingerFlexValidation, addr 0x5d778b8, size 0x18, virtual true, abstract: false, final true
inline bool FingerFlexValidation(bool  isLeftHand) ;

static inline ::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic* New_ctor() ;

/// @brief Method OnButtonPressStayed, addr 0x5d778f4, size 0x4, virtual true, abstract: false, final true
inline void OnButtonPressStayed(bool  isLeftHand, float_t  value) ;

/// @brief Method OnButtonPressed, addr 0x5d77874, size 0x44, virtual true, abstract: false, final true
inline void OnButtonPressed(bool  isLeftHand, float_t  value) ;

/// @brief Method OnButtonReleased, addr 0x5d778d0, size 0x24, virtual true, abstract: false, final true
inline void OnButtonReleased(bool  isLeftHand, float_t  value) ;

/// @brief Method OnDespawn, addr 0x5d77700, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnPlayEffectLocal, addr 0x5d77744, size 0x130, virtual false, abstract: false, final false
inline void OnPlayEffectLocal() ;

/// @brief Method OnSpawn, addr 0x5d776f8, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Update, addr 0x5d77704, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__MyRig_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__MyRig_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioToPlay() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioToPlay() ;

constexpr bool const& __cordl_internal_get_buttonReleased() const;

constexpr bool& __cordl_internal_get_buttonReleased() ;

constexpr float_t const& __cordl_internal_get_coolDownTimer() const;

constexpr float_t& __cordl_internal_get_coolDownTimer() ;

constexpr bool const& __cordl_internal_get_leftHand() const;

constexpr bool& __cordl_internal_get_leftHand() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_objectToEnable() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_objectToEnable() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particlesToPlay() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particlesToPlay() ;

constexpr bool const& __cordl_internal_get_restartTimer() const;

constexpr bool& __cordl_internal_get_restartTimer() ;

constexpr float_t const& __cordl_internal_get_triggeredTime() const;

constexpr float_t& __cordl_internal_get_triggeredTime() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MyRig_k__BackingField(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_audioToPlay(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_buttonReleased(bool  value) ;

constexpr void __cordl_internal_set_coolDownTimer(float_t  value) ;

constexpr void __cordl_internal_set_leftHand(bool  value) ;

constexpr void __cordl_internal_set_objectToEnable(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_particlesToPlay(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_restartTimer(bool  value) ;

constexpr void __cordl_internal_set_triggeredTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5d778f8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5d776e8, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5d776d8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method get_MyRig, addr 0x5d776c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_MyRig() ;

/// @brief Convert to "::GorillaTag::Cosmetics::IFingerFlexListener"
constexpr ::GorillaTag::Cosmetics::IFingerFlexListener* i___GorillaTag__Cosmetics__IFingerFlexListener() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5d776f0, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5d776e0, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MyRig, addr 0x5d776d0, size 0x8, virtual false, abstract: false, final false
inline void set_MyRig(::GlobalNamespace::VRRig*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SquirtingFlowerBadgeCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SquirtingFlowerBadgeCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SquirtingFlowerBadgeCosmetic(SquirtingFlowerBadgeCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SquirtingFlowerBadgeCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SquirtingFlowerBadgeCosmetic(SquirtingFlowerBadgeCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4862};

/// [SerializeField]
/// @brief Field particlesToPlay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particlesToPlay;

/// [SerializeField]
/// @brief Field objectToEnable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___objectToEnable;

/// [SerializeField]
/// @brief Field audioToPlay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioToPlay;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field coolDownTimer, offset: 0x40, size: 0x4, def value: None
 float_t  ___coolDownTimer;

/// [SerializeField]
/// @brief Field leftHand, offset: 0x44, size: 0x1, def value: None
 bool  ___leftHand;

/// @brief Field triggeredTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___triggeredTime;

/// @brief Field restartTimer, offset: 0x4c, size: 0x1, def value: None
 bool  ___restartTimer;

/// @brief Field buttonReleased, offset: 0x4d, size: 0x1, def value: None
 bool  ___buttonReleased;

/// [CompilerGenerated]
/// @brief Field <MyRig>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____MyRig_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___particlesToPlay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___objectToEnable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___audioToPlay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___coolDownTimer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___leftHand) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___triggeredTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___restartTimer) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ___buttonReleased) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ____MyRig_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ____IsSpawned_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic, ____CosmeticSelectedSide_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::SquirtingFlowerBadgeCosmetic) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
