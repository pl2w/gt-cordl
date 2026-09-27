#pragma once
// IWYU pragma private; include "GlobalNamespace/DrumsItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrumsItem)
namespace GlobalNamespace {
class Drum;
}
namespace GlobalNamespace {
class GorillaTriggerColliderHandIndicator;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace GlobalNamespace {
class DrumsItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DrumsItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrumsItem*, "", "DrumsItem");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.AudioSource, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: DrumsItem
class CORDL_TYPE DrumsItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field actualColliders, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_actualColliders, put=__cordl_internal_set_actualColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  actualColliders;

/// @brief Field collidersForThisDrum, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersForThisDrum, put=__cordl_internal_set_collidersForThisDrum)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  collidersForThisDrum;

/// @brief Field collidersForThisDrumList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersForThisDrumList, put=__cordl_internal_set_collidersForThisDrumList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  collidersForThisDrumList;

/// @brief Field collidersHit, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersHit, put=__cordl_internal_set_collidersHit)) ::ArrayW<::UnityEngine::RaycastHit>  collidersHit;

/// @brief Field collidersHitCount, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_collidersHitCount, put=__cordl_internal_set_collidersHitCount)) int32_t  collidersHitCount;

/// @brief Field drumHit, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_drumHit, put=__cordl_internal_set_drumHit)) bool  drumHit;

/// @brief Field drumsAS, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_drumsAS, put=__cordl_internal_set_drumsAS)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  drumsAS;

/// @brief Field drumsTouchable, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_drumsTouchable, put=__cordl_internal_set_drumsTouchable)) ::UnityEngine::LayerMask  drumsTouchable;

/// @brief Field hitList, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitList, put=__cordl_internal_set_hitList)) ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  hitList;

/// @brief Field leftHandIn, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandIn, put=__cordl_internal_set_leftHandIn)) bool  leftHandIn;

/// @brief Field leftHandIndicator, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandIndicator, put=__cordl_internal_set_leftHandIndicator)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  leftHandIndicator;

/// @brief Field maxDrumVolume, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDrumVolume, put=__cordl_internal_set_maxDrumVolume)) float_t  maxDrumVolume;

/// @brief Field maxDrumVolumeVelocity, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDrumVolumeVelocity, put=__cordl_internal_set_maxDrumVolumeVelocity)) float_t  maxDrumVolumeVelocity;

/// @brief Field minDrumVolume, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDrumVolume, put=__cordl_internal_set_minDrumVolume)) float_t  minDrumVolume;

/// @brief Field myRig, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field nullHit, offset 0x9c, size 0x2c 
 __declspec(property(get=__cordl_internal_get_nullHit, put=__cordl_internal_set_nullHit)) ::UnityEngine::RaycastHit  nullHit;

/// @brief Field onlineOffset, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_onlineOffset, put=__cordl_internal_set_onlineOffset)) int32_t  onlineOffset;

/// @brief Field rightHandIn, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandIn, put=__cordl_internal_set_rightHandIn)) bool  rightHandIn;

/// @brief Field rightHandIndicator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandIndicator, put=__cordl_internal_set_rightHandIndicator)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  rightHandIndicator;

/// @brief Field sphereRadius, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_sphereRadius, put=__cordl_internal_set_sphereRadius)) float_t  sphereRadius;

/// @brief Field spherecastSweep, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_spherecastSweep, put=__cordl_internal_set_spherecastSweep)) ::UnityEngine::Vector3  spherecastSweep;

/// @brief Field tempDrum, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempDrum, put=__cordl_internal_set_tempDrum)) ::UnityW<::GlobalNamespace::Drum>  tempDrum;

/// @brief Field volToPlay, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_volToPlay, put=__cordl_internal_set_volToPlay)) float_t  volToPlay;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method CheckHandHit, addr 0x5756de0, size 0x860, virtual false, abstract: false, final false
inline void CheckHandHit(::by_ref<bool>  handIn, ::by_ref<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>  handIndicator, bool  isLeftHand) ;

/// @brief Method DrumHit, addr 0x5757640, size 0x4c8, virtual false, abstract: false, final false
inline void DrumHit(::GlobalNamespace::Drum*  tempDrumInner, bool  isLeftHand, float_t  hitVelocity) ;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5756dac, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5756b3c, size 0x270, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5756b2c, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5756b1c, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x5756b34, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x5756b24, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

/// @brief Method LateUpdate, addr 0x5756db0, size 0x30, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::DrumsItem* New_ctor() ;

/// @brief Method RayCastHitCompare, addr 0x5757b08, size 0x80, virtual false, abstract: false, final false
inline int32_t RayCastHitCompare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_actualColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_actualColliders() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_collidersForThisDrum() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_collidersForThisDrum() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_collidersForThisDrumList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_collidersForThisDrumList() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_collidersHit() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_collidersHit() ;

constexpr int32_t const& __cordl_internal_get_collidersHitCount() const;

constexpr int32_t& __cordl_internal_get_collidersHitCount() ;

constexpr bool const& __cordl_internal_get_drumHit() const;

constexpr bool& __cordl_internal_get_drumHit() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_drumsAS() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_drumsAS() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_drumsTouchable() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_drumsTouchable() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* const& __cordl_internal_get_hitList() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*& __cordl_internal_get_hitList() ;

constexpr bool const& __cordl_internal_get_leftHandIn() const;

constexpr bool& __cordl_internal_get_leftHandIn() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_leftHandIndicator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_leftHandIndicator() ;

constexpr float_t const& __cordl_internal_get_maxDrumVolume() const;

constexpr float_t& __cordl_internal_get_maxDrumVolume() ;

constexpr float_t const& __cordl_internal_get_maxDrumVolumeVelocity() const;

constexpr float_t& __cordl_internal_get_maxDrumVolumeVelocity() ;

constexpr float_t const& __cordl_internal_get_minDrumVolume() const;

constexpr float_t& __cordl_internal_get_minDrumVolume() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_nullHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_nullHit() ;

constexpr int32_t const& __cordl_internal_get_onlineOffset() const;

constexpr int32_t& __cordl_internal_get_onlineOffset() ;

constexpr bool const& __cordl_internal_get_rightHandIn() const;

constexpr bool& __cordl_internal_get_rightHandIn() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_rightHandIndicator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_rightHandIndicator() ;

constexpr float_t const& __cordl_internal_get_sphereRadius() const;

constexpr float_t& __cordl_internal_get_sphereRadius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spherecastSweep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spherecastSweep() ;

constexpr ::UnityW<::GlobalNamespace::Drum> const& __cordl_internal_get_tempDrum() const;

constexpr ::UnityW<::GlobalNamespace::Drum>& __cordl_internal_get_tempDrum() ;

constexpr float_t const& __cordl_internal_get_volToPlay() const;

constexpr float_t& __cordl_internal_get_volToPlay() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_actualColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_collidersForThisDrum(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_collidersForThisDrumList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_collidersHit(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_collidersHitCount(int32_t  value) ;

constexpr void __cordl_internal_set_drumHit(bool  value) ;

constexpr void __cordl_internal_set_drumsAS(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set_drumsTouchable(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_hitList(::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  value) ;

constexpr void __cordl_internal_set_leftHandIn(bool  value) ;

constexpr void __cordl_internal_set_leftHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_maxDrumVolume(float_t  value) ;

constexpr void __cordl_internal_set_maxDrumVolumeVelocity(float_t  value) ;

constexpr void __cordl_internal_set_minDrumVolume(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_nullHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_onlineOffset(int32_t  value) ;

constexpr void __cordl_internal_set_rightHandIn(bool  value) ;

constexpr void __cordl_internal_set_rightHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_sphereRadius(float_t  value) ;

constexpr void __cordl_internal_set_spherecastSweep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tempDrum(::UnityW<::GlobalNamespace::Drum>  value) ;

constexpr void __cordl_internal_set_volToPlay(float_t  value) ;

/// @brief Method .ctor, addr 0x5757b88, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumsItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumsItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumsItem(DrumsItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumsItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumsItem(DrumsItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1321};

/// [Tooltip("Array of colliders for this specific drum.")]
/// @brief Field collidersForThisDrum, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___collidersForThisDrum;

/// @brief Field collidersForThisDrumList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___collidersForThisDrumList;

/// [Tooltip("AudioSources where each index must match the index given to the corresponding Drum component.")]
/// @brief Field drumsAS, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___drumsAS;

/// [Tooltip("Max volume a drum can reach.")]
/// @brief Field maxDrumVolume, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxDrumVolume;

/// [Tooltip("Min volume a drum can reach.")]
/// @brief Field minDrumVolume, offset: 0x3c, size: 0x4, def value: None
 float_t  ___minDrumVolume;

/// [Tooltip("Multiplies against actual velocity before capping by min & maxDrumVolume values.")]
/// @brief Field maxDrumVolumeVelocity, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxDrumVolumeVelocity;

/// @brief Field rightHandIn, offset: 0x44, size: 0x1, def value: None
 bool  ___rightHandIn;

/// @brief Field leftHandIn, offset: 0x45, size: 0x1, def value: None
 bool  ___leftHandIn;

/// @brief Field volToPlay, offset: 0x48, size: 0x4, def value: None
 float_t  ___volToPlay;

/// @brief Field rightHandIndicator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___rightHandIndicator;

/// @brief Field leftHandIndicator, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___leftHandIndicator;

/// @brief Field collidersHit, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___collidersHit;

/// @brief Field actualColliders, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___actualColliders;

/// @brief Field drumsTouchable, offset: 0x70, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___drumsTouchable;

/// @brief Field sphereRadius, offset: 0x74, size: 0x4, def value: None
 float_t  ___sphereRadius;

/// @brief Field spherecastSweep, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spherecastSweep;

/// @brief Field collidersHitCount, offset: 0x84, size: 0x4, def value: None
 int32_t  ___collidersHitCount;

/// @brief Field hitList, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  ___hitList;

/// @brief Field tempDrum, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Drum>  ___tempDrum;

/// @brief Field drumHit, offset: 0x98, size: 0x1, def value: None
 bool  ___drumHit;

/// @brief Field nullHit, offset: 0x9c, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___nullHit;

/// @brief Field onlineOffset, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___onlineOffset;

/// [Tooltip("VRRig object of the player, used to determine if it is an offline rig.")]
/// @brief Field myRig, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0xd8, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0xdc, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrumsItem, ___collidersForThisDrum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___collidersForThisDrumList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___drumsAS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___maxDrumVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___minDrumVolume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___maxDrumVolumeVelocity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___rightHandIn) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___leftHandIn) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___volToPlay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___rightHandIndicator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___leftHandIndicator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___collidersHit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___actualColliders) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___drumsTouchable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___sphereRadius) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___spherecastSweep) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___collidersHitCount) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___hitList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___tempDrum) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___drumHit) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___nullHit) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___onlineOffset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ___myRig) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrumsItem, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrumsItem) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
