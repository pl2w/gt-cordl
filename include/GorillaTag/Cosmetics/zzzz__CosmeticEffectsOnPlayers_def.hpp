#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticEffectsOnPlayers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_EFFECTTYPE_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_TargetType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticEffectsOnPlayers)
namespace GlobalNamespace {
struct CosmeticEffectsOnPlayers_EFFECTTYPE;
}
namespace GlobalNamespace {
struct CosmeticEffectsOnPlayers_TargetType;
}
namespace GlobalNamespace {
class GorillaSkin;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag::Cosmetics {
class CosmeticEffectsOnPlayers_CosmeticEffect;
}
namespace GorillaTag {
class ISpawnable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class CosmeticEffectsOnPlayers;
}
namespace GorillaTag::Cosmetics {
class CosmeticEffectsOnPlayers_CosmeticEffect;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*);
MARK_REF_T(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*, "GorillaTag.Cosmetics", "CosmeticEffectsOnPlayers");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*, "GorillaTag.Cosmetics", "CosmeticEffectsOnPlayers/CosmeticEffect");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, GorillaTag.Cosmetics.CosmeticEffectsOnPlayers::CosmeticEffect, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CosmeticEffectsOnPlayers
class CORDL_TYPE CosmeticEffectsOnPlayers : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EFFECTTYPE = ::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE;

using TargetType = ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType;

using CosmeticEffect = ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field allEffects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_allEffects, put=__cordl_internal_set_allEffects)) ::ArrayW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  allEffects;

/// @brief Field allEffectsDict, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_allEffectsDict, put=__cordl_internal_set_allEffectsDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*  allEffectsDict;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method ApplyAllEffects, addr 0x5d6e1c0, size 0x2c, virtual false, abstract: false, final false
inline void ApplyAllEffects() ;

/// @brief Method ApplyAllEffectsByDistance, addr 0x5d6e3ec, size 0x28, virtual false, abstract: false, final false
inline void ApplyAllEffectsByDistance(::UnityEngine::Transform*  _transform) ;

/// @brief Method ApplyAllEffectsByDistance, addr 0x5d6e1ec, size 0x200, virtual false, abstract: false, final false
inline void ApplyAllEffectsByDistance(::UnityEngine::Vector3  position) ;

/// @brief Method ApplyAllEffectsForRig, addr 0x5d7012c, size 0x1dc, virtual false, abstract: false, final false
inline void ApplyAllEffectsForRig(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ApplyInstantKnockbackByDistance, addr 0x5d6eef4, size 0x758, virtual false, abstract: false, final false
inline void ApplyInstantKnockbackByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position) ;

/// @brief Method ApplyInstantKnockbackForRig, addr 0x5d704d8, size 0x344, virtual false, abstract: false, final false
inline void ApplyInstantKnockbackForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig) ;

/// @brief Method ApplySkinByDistance, addr 0x5d6e414, size 0x570, virtual false, abstract: false, final false
inline void ApplySkinByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position) ;

/// @brief Method ApplySkinForRig, addr 0x5d70308, size 0xe8, virtual false, abstract: false, final false
inline void ApplySkinForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig) ;

/// @brief Method ApplyTagWithKnockbackByDistance, addr 0x5d6e984, size 0x570, virtual false, abstract: false, final false
inline void ApplyTagWithKnockbackByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position) ;

/// @brief Method ApplyTagWithKnockbackForRig, addr 0x5d703f0, size 0xe8, virtual false, abstract: false, final false
inline void ApplyTagWithKnockbackForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig) ;

/// @brief Method ApplyVOForRig, addr 0x5d7081c, size 0xe8, virtual false, abstract: false, final false
inline void ApplyVOForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Awake, addr 0x5d6dfdc, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers* New_ctor() ;

/// @brief Method OnDespawn, addr 0x5d70c60, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnSpawn, addr 0x5d70c58, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method PlaySfxByDistance, addr 0x5d6f64c, size 0x570, virtual false, abstract: false, final false
inline void PlaySfxByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position) ;

/// @brief Method PlaySfxForRig, addr 0x5d70904, size 0xe8, virtual false, abstract: false, final false
inline void PlaySfxForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig) ;

/// @brief Method PlayVFXByDistance, addr 0x5d6fbbc, size 0x570, virtual false, abstract: false, final false
inline void PlayVFXByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position) ;

/// @brief Method PlayVFXForRig, addr 0x5d709ec, size 0xe8, virtual false, abstract: false, final false
inline void PlayVFXForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig) ;

/// @brief Method SetKnockbackStrengthMultiplier, addr 0x5d6e07c, size 0x144, virtual false, abstract: false, final false
inline void SetKnockbackStrengthMultiplier(float_t  value) ;

/// @brief Method ShouldAffectRig, addr 0x5d6df3c, size 0xa0, virtual false, abstract: false, final false
inline bool ShouldAffectRig(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType  target) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*> const& __cordl_internal_get_allEffects() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>& __cordl_internal_get_allEffects() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* const& __cordl_internal_get_allEffectsDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*& __cordl_internal_get_allEffectsDict() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_allEffects(::ArrayW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  value) ;

constexpr void __cordl_internal_set_allEffectsDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5d70c64, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5d70c48, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5d70c38, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5d70c50, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5d70c40, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticEffectsOnPlayers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticEffectsOnPlayers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticEffectsOnPlayers(CosmeticEffectsOnPlayers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticEffectsOnPlayers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticEffectsOnPlayers(CosmeticEffectsOnPlayers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4851};

/// @brief Field allEffects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  ___allEffects;

/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field allEffectsDict, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*  ___allEffectsDict;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers, ___allEffects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers, ___allEffectsDict) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers, ____IsSpawned_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers, ____CosmeticSelectedSide_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaGameModes.GameModeType, GorillaTag.Cosmetics.CosmeticEffectsOnPlayers::EFFECTTYPE, GorillaTag.Cosmetics.CosmeticEffectsOnPlayers::TargetType, System.Object, UnityEngine.AudioClip
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CosmeticEffectsOnPlayers/CosmeticEffect
class CORDL_TYPE CosmeticEffectsOnPlayers_CosmeticEffect : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EffectDuration, put=set_EffectDuration)) float_t  EffectDuration;

 __declspec(property(get=get_EffectStartedTime, put=set_EffectStartedTime)) float_t  EffectStartedTime;

 __declspec(property(get=get_Modes)) ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  Modes;

/// @brief Field VFXGameObject, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_VFXGameObject, put=__cordl_internal_set_VFXGameObject)) ::UnityW<::UnityEngine::GameObject>  VFXGameObject;

/// @brief Field <EffectStartedTime>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__EffectStartedTime_k__BackingField, put=__cordl_internal_set__EffectStartedTime_k__BackingField)) float_t  _EffectStartedTime_k__BackingField;

/// @brief Field <knockbackStrengthMultiplier>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__knockbackStrengthMultiplier_k__BackingField, put=__cordl_internal_set__knockbackStrengthMultiplier_k__BackingField)) float_t  _knockbackStrengthMultiplier_k__BackingField;

/// @brief Field applyScaleToKnockbackStrength, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyScaleToKnockbackStrength, put=__cordl_internal_set_applyScaleToKnockbackStrength)) bool  applyScaleToKnockbackStrength;

/// @brief Field effectDistanceRadius, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectDistanceRadius, put=__cordl_internal_set_effectDistanceRadius)) float_t  effectDistanceRadius;

/// @brief Field effectDurationOthers, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectDurationOthers, put=__cordl_internal_set_effectDurationOthers)) float_t  effectDurationOthers;

/// @brief Field effectDurationOwner, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectDurationOwner, put=__cordl_internal_set_effectDurationOwner)) float_t  effectDurationOwner;

/// @brief Field effectType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectType, put=__cordl_internal_set_effectType)) ::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE  effectType;

/// @brief Field excludeForGameModes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_excludeForGameModes, put=__cordl_internal_set_excludeForGameModes)) ::ArrayW<::GorillaGameModes::GameModeType>  excludeForGameModes;

/// @brief Field forceOffTheGround, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceOffTheGround, put=__cordl_internal_set_forceOffTheGround)) bool  forceOffTheGround;

/// @brief Field knockbackStrength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackStrength, put=__cordl_internal_set_knockbackStrength)) float_t  knockbackStrength;

 __declspec(property(get=get_knockbackStrengthMultiplier, put=set_knockbackStrengthMultiplier)) float_t  knockbackStrengthMultiplier;

/// @brief Field knockbackVFX, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_knockbackVFX, put=__cordl_internal_set_knockbackVFX)) ::UnityW<::UnityEngine::GameObject>  knockbackVFX;

/// @brief Field maxKnockbackStrength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxKnockbackStrength, put=__cordl_internal_set_maxKnockbackStrength)) float_t  maxKnockbackStrength;

/// @brief Field minKnockbackStrength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_minKnockbackStrength, put=__cordl_internal_set_minKnockbackStrength)) float_t  minKnockbackStrength;

/// @brief Field modesHash, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_modesHash, put=__cordl_internal_set_modesHash)) ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  modesHash;

/// @brief Field newSkin, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_newSkin, put=__cordl_internal_set_newSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  newSkin;

/// @brief Field sfxAudioClip, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_sfxAudioClip, put=__cordl_internal_set_sfxAudioClip)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  sfxAudioClip;

/// @brief Field specialVerticalForce, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get_specialVerticalForce, put=__cordl_internal_set_specialVerticalForce)) bool  specialVerticalForce;

/// @brief Field target, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType  target;

/// @brief Field voiceOverrideLoudClips, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceOverrideLoudClips, put=__cordl_internal_set_voiceOverrideLoudClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  voiceOverrideLoudClips;

/// @brief Field voiceOverrideLoudThreshold, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_voiceOverrideLoudThreshold, put=__cordl_internal_set_voiceOverrideLoudThreshold)) float_t  voiceOverrideLoudThreshold;

/// @brief Field voiceOverrideLoudVolume, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_voiceOverrideLoudVolume, put=__cordl_internal_set_voiceOverrideLoudVolume)) float_t  voiceOverrideLoudVolume;

/// @brief Field voiceOverrideNormalClips, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceOverrideNormalClips, put=__cordl_internal_set_voiceOverrideNormalClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  voiceOverrideNormalClips;

/// @brief Field voiceOverrideNormalVolume, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_voiceOverrideNormalVolume, put=__cordl_internal_set_voiceOverrideNormalVolume)) float_t  voiceOverrideNormalVolume;

/// @brief Method HasKnockback, addr 0x5d70d7c, size 0x14, virtual false, abstract: false, final false
inline bool HasKnockback() ;

/// @brief Method IsGameModeAllowed, addr 0x5d70ad4, size 0x164, virtual false, abstract: false, final false
inline bool IsGameModeAllowed() ;

/// @brief Method IsInstantKnockback, addr 0x5d70d6c, size 0x10, virtual false, abstract: false, final false
inline bool IsInstantKnockback() ;

/// @brief Method IsSFX, addr 0x5d70da0, size 0x10, virtual false, abstract: false, final false
inline bool IsSFX() ;

/// @brief Method IsSkin, addr 0x5d70d4c, size 0x10, virtual false, abstract: false, final false
inline bool IsSkin() ;

/// @brief Method IsTagKnockback, addr 0x5d70d5c, size 0x10, virtual false, abstract: false, final false
inline bool IsTagKnockback() ;

/// @brief Method IsVFX, addr 0x5d70db0, size 0x10, virtual false, abstract: false, final false
inline bool IsVFX() ;

/// @brief Method IsVO, addr 0x5d70d90, size 0x10, virtual false, abstract: false, final false
inline bool IsVO() ;

static inline ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_VFXGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_VFXGameObject() ;

constexpr float_t const& __cordl_internal_get__EffectStartedTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__EffectStartedTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__knockbackStrengthMultiplier_k__BackingField() const;

constexpr float_t& __cordl_internal_get__knockbackStrengthMultiplier_k__BackingField() ;

constexpr bool const& __cordl_internal_get_applyScaleToKnockbackStrength() const;

constexpr bool& __cordl_internal_get_applyScaleToKnockbackStrength() ;

constexpr float_t const& __cordl_internal_get_effectDistanceRadius() const;

constexpr float_t& __cordl_internal_get_effectDistanceRadius() ;

constexpr float_t const& __cordl_internal_get_effectDurationOthers() const;

constexpr float_t& __cordl_internal_get_effectDurationOthers() ;

constexpr float_t const& __cordl_internal_get_effectDurationOwner() const;

constexpr float_t& __cordl_internal_get_effectDurationOwner() ;

constexpr ::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE const& __cordl_internal_get_effectType() const;

constexpr ::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE& __cordl_internal_get_effectType() ;

constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& __cordl_internal_get_excludeForGameModes() const;

constexpr ::ArrayW<::GorillaGameModes::GameModeType>& __cordl_internal_get_excludeForGameModes() ;

constexpr bool const& __cordl_internal_get_forceOffTheGround() const;

constexpr bool& __cordl_internal_get_forceOffTheGround() ;

constexpr float_t const& __cordl_internal_get_knockbackStrength() const;

constexpr float_t& __cordl_internal_get_knockbackStrength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_knockbackVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_knockbackVFX() ;

constexpr float_t const& __cordl_internal_get_maxKnockbackStrength() const;

constexpr float_t& __cordl_internal_get_maxKnockbackStrength() ;

constexpr float_t const& __cordl_internal_get_minKnockbackStrength() const;

constexpr float_t& __cordl_internal_get_minKnockbackStrength() ;

constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* const& __cordl_internal_get_modesHash() const;

constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*& __cordl_internal_get_modesHash() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get_newSkin() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get_newSkin() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_sfxAudioClip() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_sfxAudioClip() ;

constexpr bool const& __cordl_internal_get_specialVerticalForce() const;

constexpr bool& __cordl_internal_get_specialVerticalForce() ;

constexpr ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType const& __cordl_internal_get_target() const;

constexpr ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType& __cordl_internal_get_target() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_voiceOverrideLoudClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_voiceOverrideLoudClips() ;

constexpr float_t const& __cordl_internal_get_voiceOverrideLoudThreshold() const;

constexpr float_t& __cordl_internal_get_voiceOverrideLoudThreshold() ;

constexpr float_t const& __cordl_internal_get_voiceOverrideLoudVolume() const;

constexpr float_t& __cordl_internal_get_voiceOverrideLoudVolume() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_voiceOverrideNormalClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_voiceOverrideNormalClips() ;

constexpr float_t const& __cordl_internal_get_voiceOverrideNormalVolume() const;

constexpr float_t& __cordl_internal_get_voiceOverrideNormalVolume() ;

constexpr void __cordl_internal_set_VFXGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__EffectStartedTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__knockbackStrengthMultiplier_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_applyScaleToKnockbackStrength(bool  value) ;

constexpr void __cordl_internal_set_effectDistanceRadius(float_t  value) ;

constexpr void __cordl_internal_set_effectDurationOthers(float_t  value) ;

constexpr void __cordl_internal_set_effectDurationOwner(float_t  value) ;

constexpr void __cordl_internal_set_effectType(::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE  value) ;

constexpr void __cordl_internal_set_excludeForGameModes(::ArrayW<::GorillaGameModes::GameModeType>  value) ;

constexpr void __cordl_internal_set_forceOffTheGround(bool  value) ;

constexpr void __cordl_internal_set_knockbackStrength(float_t  value) ;

constexpr void __cordl_internal_set_knockbackVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_maxKnockbackStrength(float_t  value) ;

constexpr void __cordl_internal_set_minKnockbackStrength(float_t  value) ;

constexpr void __cordl_internal_set_modesHash(::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  value) ;

constexpr void __cordl_internal_set_newSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set_sfxAudioClip(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_specialVerticalForce(bool  value) ;

constexpr void __cordl_internal_set_target(::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType  value) ;

constexpr void __cordl_internal_set_voiceOverrideLoudClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_voiceOverrideLoudThreshold(float_t  value) ;

constexpr void __cordl_internal_set_voiceOverrideLoudVolume(float_t  value) ;

constexpr void __cordl_internal_set_voiceOverrideNormalClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_voiceOverrideNormalVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x5d70e58, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EffectDuration, addr 0x5d70d2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_EffectDuration() ;

/// [CompilerGenerated]
/// @brief Method get_EffectStartedTime, addr 0x5d70d3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_EffectStartedTime() ;

/// @brief Method get_Modes, addr 0x5d70dc0, size 0x98, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* get_Modes() ;

/// [CompilerGenerated]
/// @brief Method get_knockbackStrengthMultiplier, addr 0x5d70d1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_knockbackStrengthMultiplier() ;

/// @brief Method set_EffectDuration, addr 0x5d70d34, size 0x8, virtual false, abstract: false, final false
inline void set_EffectDuration(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_EffectStartedTime, addr 0x5d70d44, size 0x8, virtual false, abstract: false, final false
inline void set_EffectStartedTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_knockbackStrengthMultiplier, addr 0x5d70d24, size 0x8, virtual false, abstract: false, final false
inline void set_knockbackStrengthMultiplier(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticEffectsOnPlayers_CosmeticEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticEffectsOnPlayers_CosmeticEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticEffectsOnPlayers_CosmeticEffect(CosmeticEffectsOnPlayers_CosmeticEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticEffectsOnPlayers_CosmeticEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticEffectsOnPlayers_CosmeticEffect(CosmeticEffectsOnPlayers_CosmeticEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4849};

/// @brief Field excludeForGameModes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeType>  ___excludeForGameModes;

/// @brief Field effectType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE  ___effectType;

/// @brief Field effectDistanceRadius, offset: 0x1c, size: 0x4, def value: None
 float_t  ___effectDistanceRadius;

/// @brief Field target, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType  ___target;

/// @brief Field effectDurationOthers, offset: 0x24, size: 0x4, def value: None
 float_t  ___effectDurationOthers;

/// @brief Field effectDurationOwner, offset: 0x28, size: 0x4, def value: None
 float_t  ___effectDurationOwner;

/// @brief Field newSkin, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ___newSkin;

/// [Tooltip("Use object pools")]
/// @brief Field knockbackVFX, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___knockbackVFX;

/// [FormerlySerializedAs("knockbackStrengthMultiplier")]
/// @brief Field knockbackStrength, offset: 0x40, size: 0x4, def value: None
 float_t  ___knockbackStrength;

/// @brief Field applyScaleToKnockbackStrength, offset: 0x44, size: 0x1, def value: None
 bool  ___applyScaleToKnockbackStrength;

/// [Tooltip("force pushing players with hands on the ground")]
/// @brief Field forceOffTheGround, offset: 0x45, size: 0x1, def value: None
 bool  ___forceOffTheGround;

/// [Tooltip("Take the horizontal magnitude of the knockback, and add it opposite gravity. For example, being hit sideways will also impart a large upwards force. Breaks conservation of energy, but feels better to the player.")]
/// @brief Field specialVerticalForce, offset: 0x46, size: 0x1, def value: None
 bool  ___specialVerticalForce;

/// [FormerlySerializedAs("minStrengthClamp")]
/// @brief Field minKnockbackStrength, offset: 0x48, size: 0x4, def value: None
 float_t  ___minKnockbackStrength;

/// [FormerlySerializedAs("maxStrengthClamp")]
/// @brief Field maxKnockbackStrength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___maxKnockbackStrength;

/// [CompilerGenerated]
/// @brief Field <knockbackStrengthMultiplier>k__BackingField, offset: 0x50, size: 0x4, def value: None
 float_t  ____knockbackStrengthMultiplier_k__BackingField;

/// @brief Field voiceOverrideNormalClips, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___voiceOverrideNormalClips;

/// @brief Field voiceOverrideLoudClips, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___voiceOverrideLoudClips;

/// @brief Field voiceOverrideNormalVolume, offset: 0x68, size: 0x4, def value: None
 float_t  ___voiceOverrideNormalVolume;

/// @brief Field voiceOverrideLoudVolume, offset: 0x6c, size: 0x4, def value: None
 float_t  ___voiceOverrideLoudVolume;

/// @brief Field voiceOverrideLoudThreshold, offset: 0x70, size: 0x4, def value: None
 float_t  ___voiceOverrideLoudThreshold;

/// [Tooltip("plays sfx on player")]
/// @brief Field sfxAudioClip, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___sfxAudioClip;

/// [Tooltip("plays vfx on player, must be in the global object pool and have a tag.")]
/// @brief Field VFXGameObject, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___VFXGameObject;

/// @brief Field modesHash, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  ___modesHash;

/// [CompilerGenerated]
/// @brief Field <EffectStartedTime>k__BackingField, offset: 0x90, size: 0x4, def value: None
 float_t  ____EffectStartedTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___excludeForGameModes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___effectType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___effectDistanceRadius) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___effectDurationOthers) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___effectDurationOwner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___newSkin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___knockbackVFX) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___knockbackStrength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___applyScaleToKnockbackStrength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___forceOffTheGround) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___specialVerticalForce) == 0x46, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___minKnockbackStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___maxKnockbackStrength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ____knockbackStrengthMultiplier_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___voiceOverrideNormalClips) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___voiceOverrideLoudClips) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___voiceOverrideNormalVolume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___voiceOverrideLoudVolume) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___voiceOverrideLoudThreshold) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___sfxAudioClip) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___VFXGameObject) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ___modesHash) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect, ____EffectStartedTime_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect) == 0x98, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
