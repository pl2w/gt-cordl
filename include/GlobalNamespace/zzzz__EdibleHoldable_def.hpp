#pragma once
// IWYU pragma private; include "GlobalNamespace/EdibleHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EdibleHoldable_EdibleHoldableStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GorillaTag/zzzz__IResettableItem_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EdibleHoldable)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class EdibleHoldable_BiteEvent;
}
namespace GlobalNamespace {
struct EdibleHoldable_EdibleHoldableStates;
}
namespace GlobalNamespace {
class InteractionPoint;
}
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
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class EdibleHoldable;
}
namespace GlobalNamespace {
class EdibleHoldable_BiteEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EdibleHoldable*);
MARK_REF_T(::GlobalNamespace::EdibleHoldable_BiteEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdibleHoldable*, "", "EdibleHoldable");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdibleHoldable_BiteEvent*, "", "EdibleHoldable/BiteEvent");
// Dependencies EdibleHoldable::EdibleHoldableStates, GorillaTag.IResettableItem, TransferrableObject, UnityEngine.AudioClip, UnityEngine.GameObject, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: EdibleHoldable
class CORDL_TYPE EdibleHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using BiteEvent = ::GlobalNamespace::EdibleHoldable_BiteEvent;

using EdibleHoldableStates = ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates;

/// @brief Field <lastBiterActorID>k__BackingField, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastBiterActorID_k__BackingField, put=__cordl_internal_set__lastBiterActorID_k__BackingField)) int32_t  _lastBiterActorID_k__BackingField;

/// @brief Field biteDistance, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_biteDistance, put=__cordl_internal_set_biteDistance)) float_t  biteDistance;

/// @brief Field biteOffset, offset 0x374, size 0xc 
 __declspec(property(get=__cordl_internal_get_biteOffset, put=__cordl_internal_set_biteOffset)) ::UnityEngine::Vector3  biteOffset;

/// @brief Field biteSpot, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_biteSpot, put=__cordl_internal_set_biteSpot)) ::UnityW<::UnityEngine::Transform>  biteSpot;

/// @brief Field eatMinimumCooldown, offset 0x368, size 0x4 
 __declspec(property(get=__cordl_internal_get_eatMinimumCooldown, put=__cordl_internal_set_eatMinimumCooldown)) float_t  eatMinimumCooldown;

/// @brief Field eatSoundSource, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_eatSoundSource, put=__cordl_internal_set_eatSoundSource)) ::UnityW<::UnityEngine::AudioSource>  eatSoundSource;

/// @brief Field eatSounds, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_eatSounds, put=__cordl_internal_set_eatSounds)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  eatSounds;

/// @brief Field edibleMeshObjects, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_edibleMeshObjects, put=__cordl_internal_set_edibleMeshObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  edibleMeshObjects;

/// @brief Field iResettableItems, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_iResettableItems, put=__cordl_internal_set_iResettableItems)) ::ArrayW<::GorillaTag::IResettableItem*>  iResettableItems;

/// @brief Field inBiteZone, offset 0x388, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBiteZone, put=__cordl_internal_set_inBiteZone)) bool  inBiteZone;

 __declspec(property(get=get_lastBiterActorID, put=set_lastBiterActorID)) int32_t  lastBiterActorID;

/// @brief Field lastEatTime, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastEatTime, put=__cordl_internal_set_lastEatTime)) float_t  lastEatTime;

/// @brief Field lastFullyEatenTime, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFullyEatenTime, put=__cordl_internal_set_lastFullyEatenTime)) float_t  lastFullyEatenTime;

/// @brief Field onBiteView, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBiteView, put=__cordl_internal_set_onBiteView)) ::GlobalNamespace::EdibleHoldable_BiteEvent*  onBiteView;

/// @brief Field onBiteWorld, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBiteWorld, put=__cordl_internal_set_onBiteWorld)) ::GlobalNamespace::EdibleHoldable_BiteEvent*  onBiteWorld;

/// @brief Field previousEdibleState, offset 0x398, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousEdibleState, put=__cordl_internal_set_previousEdibleState)) ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates  previousEdibleState;

/// @brief Field respawnTime, offset 0x36c, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnTime, put=__cordl_internal_set_respawnTime)) float_t  respawnTime;

/// @brief Method CanActivate, addr 0x5758bd8, size 0x8, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x5758be0, size 0x8, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

/// @brief Method LateUpdateLocal, addr 0x5757df8, size 0x664, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateShared, addr 0x575845c, size 0x48, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::EdibleHoldable* New_ctor() ;

/// @brief Method OnActivate, addr 0x5757da0, size 0x8, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDisable, addr 0x5757db0, size 0x8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEdibleHoldableStateChange, addr 0x57584a4, size 0x734, virtual true, abstract: false, final false
inline void OnEdibleHoldableStateChange() ;

/// @brief Method OnEnable, addr 0x5757da8, size 0x8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5757d74, size 0x2c, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x5757dc0, size 0x38, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method ResetToDefaultState, addr 0x5757db8, size 0x8, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

/// @brief Method Start, addr 0x5757cf4, size 0x80, virtual true, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get__lastBiterActorID_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__lastBiterActorID_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_biteDistance() const;

constexpr float_t& __cordl_internal_get_biteDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_biteOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_biteOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_biteSpot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_biteSpot() ;

constexpr float_t const& __cordl_internal_get_eatMinimumCooldown() const;

constexpr float_t& __cordl_internal_get_eatMinimumCooldown() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_eatSoundSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_eatSoundSource() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_eatSounds() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_eatSounds() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_edibleMeshObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_edibleMeshObjects() ;

constexpr ::ArrayW<::GorillaTag::IResettableItem*> const& __cordl_internal_get_iResettableItems() const;

constexpr ::ArrayW<::GorillaTag::IResettableItem*>& __cordl_internal_get_iResettableItems() ;

constexpr bool const& __cordl_internal_get_inBiteZone() const;

constexpr bool& __cordl_internal_get_inBiteZone() ;

constexpr float_t const& __cordl_internal_get_lastEatTime() const;

constexpr float_t& __cordl_internal_get_lastEatTime() ;

constexpr float_t const& __cordl_internal_get_lastFullyEatenTime() const;

constexpr float_t& __cordl_internal_get_lastFullyEatenTime() ;

constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent* const& __cordl_internal_get_onBiteView() const;

constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent*& __cordl_internal_get_onBiteView() ;

constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent* const& __cordl_internal_get_onBiteWorld() const;

constexpr ::GlobalNamespace::EdibleHoldable_BiteEvent*& __cordl_internal_get_onBiteWorld() ;

constexpr ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates const& __cordl_internal_get_previousEdibleState() const;

constexpr ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates& __cordl_internal_get_previousEdibleState() ;

constexpr float_t const& __cordl_internal_get_respawnTime() const;

constexpr float_t& __cordl_internal_get_respawnTime() ;

constexpr void __cordl_internal_set__lastBiterActorID_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_biteDistance(float_t  value) ;

constexpr void __cordl_internal_set_biteOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_biteSpot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_eatMinimumCooldown(float_t  value) ;

constexpr void __cordl_internal_set_eatSoundSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_eatSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_edibleMeshObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_iResettableItems(::ArrayW<::GorillaTag::IResettableItem*>  value) ;

constexpr void __cordl_internal_set_inBiteZone(bool  value) ;

constexpr void __cordl_internal_set_lastEatTime(float_t  value) ;

constexpr void __cordl_internal_set_lastFullyEatenTime(float_t  value) ;

constexpr void __cordl_internal_set_onBiteView(::GlobalNamespace::EdibleHoldable_BiteEvent*  value) ;

constexpr void __cordl_internal_set_onBiteWorld(::GlobalNamespace::EdibleHoldable_BiteEvent*  value) ;

constexpr void __cordl_internal_set_previousEdibleState(::GlobalNamespace::EdibleHoldable_EdibleHoldableStates  value) ;

constexpr void __cordl_internal_set_respawnTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5758be8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_lastBiterActorID, addr 0x5757ce4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_lastBiterActorID() ;

/// [CompilerGenerated]
/// @brief Method set_lastBiterActorID, addr 0x5757cec, size 0x8, virtual false, abstract: false, final false
inline void set_lastBiterActorID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdibleHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdibleHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdibleHoldable(EdibleHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdibleHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdibleHoldable(EdibleHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1324};

/// @brief Field eatSounds, offset: 0x338, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___eatSounds;

/// @brief Field edibleMeshObjects, offset: 0x340, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___edibleMeshObjects;

/// [CompilerGenerated]
/// @brief Field <lastBiterActorID>k__BackingField, offset: 0x348, size: 0x4, def value: None
 int32_t  ____lastBiterActorID_k__BackingField;

/// @brief Field onBiteView, offset: 0x350, size: 0x8, def value: None
 ::GlobalNamespace::EdibleHoldable_BiteEvent*  ___onBiteView;

/// @brief Field onBiteWorld, offset: 0x358, size: 0x8, def value: None
 ::GlobalNamespace::EdibleHoldable_BiteEvent*  ___onBiteWorld;

/// [DebugReadout]
/// @brief Field lastEatTime, offset: 0x360, size: 0x4, def value: None
 float_t  ___lastEatTime;

/// [DebugReadout]
/// @brief Field lastFullyEatenTime, offset: 0x364, size: 0x4, def value: None
 float_t  ___lastFullyEatenTime;

/// @brief Field eatMinimumCooldown, offset: 0x368, size: 0x4, def value: None
 float_t  ___eatMinimumCooldown;

/// @brief Field respawnTime, offset: 0x36c, size: 0x4, def value: None
 float_t  ___respawnTime;

/// @brief Field biteDistance, offset: 0x370, size: 0x4, def value: None
 float_t  ___biteDistance;

/// @brief Field biteOffset, offset: 0x374, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___biteOffset;

/// @brief Field biteSpot, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___biteSpot;

/// @brief Field inBiteZone, offset: 0x388, size: 0x1, def value: None
 bool  ___inBiteZone;

/// @brief Field eatSoundSource, offset: 0x390, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___eatSoundSource;

/// @brief Field previousEdibleState, offset: 0x398, size: 0x4, def value: None
 ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates  ___previousEdibleState;

/// @brief Field iResettableItems, offset: 0x3a0, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::IResettableItem*>  ___iResettableItems;

/// @brief Size padding 0x3d8 - 0x3a8 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___eatSounds) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___edibleMeshObjects) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ____lastBiterActorID_k__BackingField) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___onBiteView) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___onBiteWorld) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___lastEatTime) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___lastFullyEatenTime) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___eatMinimumCooldown) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___respawnTime) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___biteDistance) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___biteOffset) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___biteSpot) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___inBiteZone) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___eatSoundSource) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___previousEdibleState) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleHoldable, ___iResettableItems) == 0x3a0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EdibleHoldable) == 0x3d8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace GlobalNamespace {
// Is value type: false
// CS Name: EdibleHoldable/BiteEvent
class CORDL_TYPE EdibleHoldable_BiteEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,int32_t> {
public:
// Declarations
static inline ::GlobalNamespace::EdibleHoldable_BiteEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5758c64, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdibleHoldable_BiteEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdibleHoldable_BiteEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdibleHoldable_BiteEvent(EdibleHoldable_BiteEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdibleHoldable_BiteEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdibleHoldable_BiteEvent(EdibleHoldable_BiteEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EdibleHoldable_BiteEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
