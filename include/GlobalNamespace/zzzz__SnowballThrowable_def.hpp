#pragma once
// IWYU pragma private; include "GlobalNamespace/SnowballThrowable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "GorillaTag/zzzz__GTColor_HSVRanges_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SnowballThrowable)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class IHeldItem;
}
namespace GorillaTagScripts {
class RandomProjectileThrowable;
}
namespace GorillaTag {
struct XformOffset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
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
namespace GlobalNamespace {
class SnowballThrowable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnowballThrowable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnowballThrowable*, "", "SnowballThrowable");
// Dependencies GorillaTag.GTColor::HSVRanges, GorillaTag.XformOffset, HoldableObject, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnowballThrowable
class CORDL_TYPE SnowballThrowable : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field OnEnableHasBeenCalled, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_OnEnableHasBeenCalled, put=__cordl_internal_set_OnEnableHasBeenCalled)) bool  OnEnableHasBeenCalled;

 __declspec(property(get=get_ProjectileHash)) int32_t  ProjectileHash;

 __declspec(property(get=get_SpawnOffset, put=set_SpawnOffset)) ::GorillaTag::XformOffset  SpawnOffset;

/// @brief Field awakeHasBeenCalled, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_awakeHasBeenCalled, put=__cordl_internal_set_awakeHasBeenCalled)) bool  awakeHasBeenCalled;

/// @brief Field destroyTimer, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyTimer, put=__cordl_internal_set_destroyTimer)) float_t  destroyTimer;

/// @brief Field isLeftHanded, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHanded, put=__cordl_internal_set_isLeftHanded)) bool  isLeftHanded;

/// @brief Field isOfflineRig, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOfflineRig, put=__cordl_internal_set_isOfflineRig)) bool  isOfflineRig;

/// @brief Field linSpeedMultiplier, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_linSpeedMultiplier, put=__cordl_internal_set_linSpeedMultiplier)) float_t  linSpeedMultiplier;

/// @brief Field localModels, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_localModels, put=__cordl_internal_set_localModels)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::RandomProjectileThrowable>>*  localModels;

/// @brief Field matDataIndexes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_matDataIndexes, put=__cordl_internal_set_matDataIndexes)) ::System::Collections::Generic::List_1<int32_t>*  matDataIndexes;

/// @brief Field maxLinSpeed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLinSpeed, put=__cordl_internal_set_maxLinSpeed)) float_t  maxLinSpeed;

/// @brief Field pickupHapticDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_pickupHapticDuration, put=__cordl_internal_set_pickupHapticDuration)) float_t  pickupHapticDuration;

/// @brief Field pickupHapticStrength, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pickupHapticStrength, put=__cordl_internal_set_pickupHapticStrength)) float_t  pickupHapticStrength;

/// @brief Field pickupSoundBankPlayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pickupSoundBankPlayer, put=__cordl_internal_set_pickupSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  pickupSoundBankPlayer;

/// @brief Field playHapticsOnPickup, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_playHapticsOnPickup, put=__cordl_internal_set_playHapticsOnPickup)) bool  playHapticsOnPickup;

/// @brief Field projectilePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field randModelIndex, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_randModelIndex, put=__cordl_internal_set_randModelIndex)) int32_t  randModelIndex;

/// @brief Field randomColorHSVRanges, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get_randomColorHSVRanges, put=__cordl_internal_set_randomColorHSVRanges)) ::GlobalNamespace::GTColor_HSVRanges  randomColorHSVRanges;

/// @brief Field randomModelSelection, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_randomModelSelection, put=__cordl_internal_set_randomModelSelection)) bool  randomModelSelection;

/// @brief Field randomizeColor, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_randomizeColor, put=__cordl_internal_set_randomizeColor)) bool  randomizeColor;

/// @brief Field renderers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field spawnOffset, offset 0xb0, size 0x34 
 __declspec(property(get=__cordl_internal_get_spawnOffset, put=__cordl_internal_set_spawnOffset)) ::GorillaTag::XformOffset  spawnOffset;

/// @brief Field targetRig, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

/// @brief Field throwEventName, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwEventName, put=__cordl_internal_set_throwEventName)) ::StringW  throwEventName;

/// @brief Field throwableMakerIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwableMakerIndex, put=__cordl_internal_set_throwableMakerIndex)) int32_t  throwableMakerIndex;

/// @brief Field velocityEstimator, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Convert operator to "::GorillaTag::Cosmetics::IHeldItem"
constexpr operator  ::GorillaTag::Cosmetics::IHeldItem*() noexcept;

/// @brief Method Anchor, addr 0x5e047d0, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> Anchor() ;

/// @brief Method AnchorToHand, addr 0x5e04578, size 0x170, virtual false, abstract: false, final false
inline void AnchorToHand() ;

/// @brief Method ApplyColor, addr 0x5e0428c, size 0x22c, virtual false, abstract: false, final false
inline void ApplyColor(::UnityEngine::Color  newColor) ;

/// @brief Method Awake, addr 0x5dff56c, size 0x31c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DropItemCleanup, addr 0x5e05528, size 0x44, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method EnableRandomModel, addr 0x5e044b8, size 0xc0, virtual false, abstract: false, final false
inline void EnableRandomModel(int32_t  index, bool  enable) ;

/// @brief Method GetRandomModelIndex, addr 0x5e046f0, size 0xd8, virtual false, abstract: false, final false
inline int32_t GetRandomModelIndex() ;

/// @brief Method GorillaTag.Cosmetics.IHeldItem.InHand, addr 0x5e04268, size 0x20, virtual true, abstract: false, final true
inline bool GorillaTag_Cosmetics_IHeldItem_InHand() ;

/// @brief Method GorillaTag.Cosmetics.IHeldItem.InLeftHand, addr 0x5e04234, size 0x34, virtual true, abstract: false, final true
inline bool GorillaTag_Cosmetics_IHeldItem_InLeftHand() ;

/// @brief Method GorillaTag.Cosmetics.IHeldItem.IsMyItem, addr 0x5e04288, size 0x4, virtual true, abstract: false, final true
inline bool GorillaTag_Cosmetics_IHeldItem_IsMyItem() ;

/// @brief Method HandleOnDestroyRandomProjectile, addr 0x5e0556c, size 0x4, virtual false, abstract: false, final false
inline void HandleOnDestroyRandomProjectile(bool  enable) ;

/// @brief Method IsMine, addr 0x5e041ac, size 0x88, virtual false, abstract: false, final false
inline bool IsMine() ;

/// @brief Method LateUpdate, addr 0x5e047f0, size 0x30, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LateUpdateLocal, addr 0x5e012e0, size 0x198, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x5e047c8, size 0x4, virtual false, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x5e047cc, size 0x4, virtual false, abstract: false, final false
inline void LateUpdateShared() ;

/// @brief Method LaunchSnowballLocal, addr 0x5e04d94, size 0x3a4, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> LaunchSnowballLocal(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale, bool  randomColour, ::UnityEngine::Color  colour) ;

static inline ::GlobalNamespace::SnowballThrowable* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e046ec, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5e046e8, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5dff9b4, size 0x2d8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5e05524, size 0x4, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5e05520, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnProjectileImpact, addr 0x5e05210, size 0x310, virtual true, abstract: false, final false
inline void OnProjectileImpact(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer) ;

/// @brief Method OnRelease, addr 0x5e04820, size 0x40, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnSnowballRelease, addr 0x5e04860, size 0x10, virtual true, abstract: false, final false
inline void OnSnowballRelease() ;

/// @brief Method PerformSnowballThrowAuthority, addr 0x5e04870, size 0x524, virtual true, abstract: false, final false
inline void PerformSnowballThrowAuthority() ;

/// @brief Method SetSnowballActiveLocal, addr 0x5e01478, size 0x3bc, virtual false, abstract: false, final false
inline void SetSnowballActiveLocal(bool  enabled) ;

/// @brief Method SpawnProjectile, addr 0x5e05138, size 0xd8, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> SpawnProjectile() ;

constexpr bool const& __cordl_internal_get_OnEnableHasBeenCalled() const;

constexpr bool& __cordl_internal_get_OnEnableHasBeenCalled() ;

constexpr bool const& __cordl_internal_get_awakeHasBeenCalled() const;

constexpr bool& __cordl_internal_get_awakeHasBeenCalled() ;

constexpr float_t const& __cordl_internal_get_destroyTimer() const;

constexpr float_t& __cordl_internal_get_destroyTimer() ;

constexpr bool const& __cordl_internal_get_isLeftHanded() const;

constexpr bool& __cordl_internal_get_isLeftHanded() ;

constexpr bool const& __cordl_internal_get_isOfflineRig() const;

constexpr bool& __cordl_internal_get_isOfflineRig() ;

constexpr float_t const& __cordl_internal_get_linSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get_linSpeedMultiplier() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::RandomProjectileThrowable>>* const& __cordl_internal_get_localModels() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::RandomProjectileThrowable>>*& __cordl_internal_get_localModels() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_matDataIndexes() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_matDataIndexes() ;

constexpr float_t const& __cordl_internal_get_maxLinSpeed() const;

constexpr float_t& __cordl_internal_get_maxLinSpeed() ;

constexpr float_t const& __cordl_internal_get_pickupHapticDuration() const;

constexpr float_t& __cordl_internal_get_pickupHapticDuration() ;

constexpr float_t const& __cordl_internal_get_pickupHapticStrength() const;

constexpr float_t& __cordl_internal_get_pickupHapticStrength() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_pickupSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_pickupSoundBankPlayer() ;

constexpr bool const& __cordl_internal_get_playHapticsOnPickup() const;

constexpr bool& __cordl_internal_get_playHapticsOnPickup() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr int32_t const& __cordl_internal_get_randModelIndex() const;

constexpr int32_t& __cordl_internal_get_randModelIndex() ;

constexpr ::GlobalNamespace::GTColor_HSVRanges const& __cordl_internal_get_randomColorHSVRanges() const;

constexpr ::GlobalNamespace::GTColor_HSVRanges& __cordl_internal_get_randomColorHSVRanges() ;

constexpr bool const& __cordl_internal_get_randomModelSelection() const;

constexpr bool& __cordl_internal_get_randomModelSelection() ;

constexpr bool const& __cordl_internal_get_randomizeColor() const;

constexpr bool& __cordl_internal_get_randomizeColor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr ::GorillaTag::XformOffset const& __cordl_internal_get_spawnOffset() const;

constexpr ::GorillaTag::XformOffset& __cordl_internal_get_spawnOffset() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr ::StringW const& __cordl_internal_get_throwEventName() const;

constexpr ::StringW& __cordl_internal_get_throwEventName() ;

constexpr int32_t const& __cordl_internal_get_throwableMakerIndex() const;

constexpr int32_t& __cordl_internal_get_throwableMakerIndex() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set_OnEnableHasBeenCalled(bool  value) ;

constexpr void __cordl_internal_set_awakeHasBeenCalled(bool  value) ;

constexpr void __cordl_internal_set_destroyTimer(float_t  value) ;

constexpr void __cordl_internal_set_isLeftHanded(bool  value) ;

constexpr void __cordl_internal_set_isOfflineRig(bool  value) ;

constexpr void __cordl_internal_set_linSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_localModels(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::RandomProjectileThrowable>>*  value) ;

constexpr void __cordl_internal_set_matDataIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_maxLinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_pickupHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_pickupHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_pickupSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_playHapticsOnPickup(bool  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_randModelIndex(int32_t  value) ;

constexpr void __cordl_internal_set_randomColorHSVRanges(::GlobalNamespace::GTColor_HSVRanges  value) ;

constexpr void __cordl_internal_set_randomModelSelection(bool  value) ;

constexpr void __cordl_internal_set_randomizeColor(bool  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_spawnOffset(::GorillaTag::XformOffset  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_throwEventName(::StringW  value) ;

constexpr void __cordl_internal_set_throwableMakerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x5e02ca8, size 0x164, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ProjectileHash, addr 0x5e040c4, size 0xe8, virtual false, abstract: false, final false
inline int32_t get_ProjectileHash() ;

/// @brief Method get_SpawnOffset, addr 0x5e0408c, size 0x1c, virtual false, abstract: false, final false
inline ::GorillaTag::XformOffset get_SpawnOffset() ;

/// @brief Convert to "::GorillaTag::Cosmetics::IHeldItem"
constexpr ::GorillaTag::Cosmetics::IHeldItem* i___GorillaTag__Cosmetics__IHeldItem() noexcept;

/// @brief Method set_SpawnOffset, addr 0x5e040a8, size 0x1c, virtual false, abstract: false, final false
inline void set_SpawnOffset(::GorillaTag::XformOffset  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnowballThrowable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnowballThrowable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnowballThrowable(SnowballThrowable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnowballThrowable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnowballThrowable(SnowballThrowable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{522};

/// [GorillaSoundLookup]
/// @brief Field matDataIndexes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___matDataIndexes;

/// [Tooltip("prefab to spawn from global object pools when thrown")]
/// @brief Field projectilePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// @brief Field pickupSoundBankPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___pickupSoundBankPlayer;

/// [Tooltip("If true, plays a haptic pulse on the grabbing hand when the snowball is picked up.")]
/// @brief Field playHapticsOnPickup, offset: 0x38, size: 0x1, def value: None
 bool  ___playHapticsOnPickup;

/// [Tooltip("Strength of the haptic pulse on pickup. Defaults to tapHapticStrength if left at 0.")]
/// @brief Field pickupHapticStrength, offset: 0x3c, size: 0x4, def value: None
 float_t  ___pickupHapticStrength;

/// [Tooltip("Duration of the haptic pulse on pickup. Defaults to tapHapticDuration if left at 0.")]
/// @brief Field pickupHapticDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ___pickupHapticDuration;

/// @brief Field isLeftHanded, offset: 0x44, size: 0x1, def value: None
 bool  ___isLeftHanded;

/// [Tooltip("This needs to match the index of the projectilePrefab on the Local Gorilla Player\'s BodyDockPositions LeftHandThrowables or RightHandThrowables list\nCheck the array in play mode to find the index")]
/// @brief Field throwableMakerIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___throwableMakerIndex;

/// [Tooltip("Multiplier is applied to hand speed to get launch speed of the projectile")]
/// @brief Field linSpeedMultiplier, offset: 0x4c, size: 0x4, def value: None
 float_t  ___linSpeedMultiplier;

/// [Tooltip("Maximum launch speed of the projectile")]
/// @brief Field maxLinSpeed, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxLinSpeed;

/// [Space]
/// [FormerlySerializedAs("shouldColorize")]
/// @brief Field randomizeColor, offset: 0x54, size: 0x1, def value: None
 bool  ___randomizeColor;

/// @brief Field randomColorHSVRanges, offset: 0x58, size: 0x18, def value: None
 ::GlobalNamespace::GTColor_HSVRanges  ___randomColorHSVRanges;

/// [Tooltip("Check this part only if we want to randomize the prefab meshes and projectile")]
/// @brief Field randomModelSelection, offset: 0x70, size: 0x1, def value: None
 bool  ___randomModelSelection;

/// @brief Field localModels, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::RandomProjectileThrowable>>*  ___localModels;

/// [Tooltip("projectile identifier sent out by the PlayerGameEvents.LaunchedProjectile event. Uses prefab name if empty")]
/// @brief Field throwEventName, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___throwEventName;

/// @brief Field velocityEstimator, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field targetRig, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// @brief Field isOfflineRig, offset: 0x98, size: 0x1, def value: None
 bool  ___isOfflineRig;

/// @brief Field awakeHasBeenCalled, offset: 0x99, size: 0x1, def value: None
 bool  ___awakeHasBeenCalled;

/// @brief Field OnEnableHasBeenCalled, offset: 0x9a, size: 0x1, def value: None
 bool  ___OnEnableHasBeenCalled;

/// @brief Field renderers, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field randModelIndex, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___randModelIndex;

/// @brief Field destroyTimer, offset: 0xac, size: 0x4, def value: None
 float_t  ___destroyTimer;

/// @brief Field spawnOffset, offset: 0xb0, size: 0x34, def value: None
 ::GorillaTag::XformOffset  ___spawnOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___matDataIndexes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___projectilePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___pickupSoundBankPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___playHapticsOnPickup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___pickupHapticStrength) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___pickupHapticDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___isLeftHanded) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___throwableMakerIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___linSpeedMultiplier) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___maxLinSpeed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___randomizeColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___randomColorHSVRanges) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___randomModelSelection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___localModels) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___throwEventName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___velocityEstimator) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___targetRig) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___isOfflineRig) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___awakeHasBeenCalled) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___OnEnableHasBeenCalled) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___renderers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___randModelIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___destroyTimer) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnowballThrowable, ___spawnOffset) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnowballThrowable) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
