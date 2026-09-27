#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EdibleWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTBitOps_BitWriteInfo_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EdibleWearable_EdibleStateInfo_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EdibleWearable)
namespace GlobalNamespace {
struct EdibleWearable_EdibleStateInfo;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class EdibleWearable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::EdibleWearable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EdibleWearable*, "GorillaTag.Cosmetics", "EdibleWearable");
// Dependencies GTBitOps::BitWriteInfo, GorillaTag.Cosmetics.EdibleWearable::EdibleStateInfo, UnityEngine.MonoBehaviour, UnityEngine.Vector3, VRRig::WearablePackedStateSlots
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EdibleWearable
class CORDL_TYPE EdibleWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EdibleStateInfo = ::GlobalNamespace::EdibleWearable_EdibleStateInfo;

/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field biteCooldown, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_biteCooldown, put=__cordl_internal_set_biteCooldown)) float_t  biteCooldown;

/// @brief Field biteDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_biteDistance, put=__cordl_internal_set_biteDistance)) float_t  biteDistance;

/// @brief Field edibleBiteOffset, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_edibleBiteOffset, put=__cordl_internal_set_edibleBiteOffset)) ::UnityEngine::Vector3  edibleBiteOffset;

/// @brief Field edibleState, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_edibleState, put=__cordl_internal_set_edibleState)) int32_t  edibleState;

/// @brief Field edibleStateInfos, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_edibleStateInfos, put=__cordl_internal_set_edibleStateInfos)) ::ArrayW<::GlobalNamespace::EdibleWearable_EdibleStateInfo>  edibleStateInfos;

/// @brief Field gorillaHeadMouthOffset, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_gorillaHeadMouthOffset, put=__cordl_internal_set_gorillaHeadMouthOffset)) ::UnityEngine::Vector3  gorillaHeadMouthOffset;

/// @brief Field isHandSlot, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHandSlot, put=__cordl_internal_set_isHandSlot)) bool  isHandSlot;

/// @brief Field isLeftHand, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field isLocal, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field isNonRespawnable, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isNonRespawnable, put=__cordl_internal_set_isNonRespawnable)) bool  isNonRespawnable;

/// @brief Field lastEatTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastEatTime, put=__cordl_internal_set_lastEatTime)) float_t  lastEatTime;

/// @brief Field lastFullyEatenTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFullyEatenTime, put=__cordl_internal_set_lastFullyEatenTime)) float_t  lastFullyEatenTime;

/// @brief Field ownerRig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field previousEdibleState, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousEdibleState, put=__cordl_internal_set_previousEdibleState)) int32_t  previousEdibleState;

/// @brief Field respawnTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnTime, put=__cordl_internal_set_respawnTime)) float_t  respawnTime;

/// @brief Field stateBitsWriteInfo, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_stateBitsWriteInfo, put=__cordl_internal_set_stateBitsWriteInfo)) ::GlobalNamespace::GTBitOps_BitWriteInfo  stateBitsWriteInfo;

/// @brief Field volume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

/// @brief Field wasInBiteZoneLastFrame, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInBiteZoneLastFrame, put=__cordl_internal_set_wasInBiteZoneLastFrame)) bool  wasInBiteZoneLastFrame;

/// @brief Field wearablePackedStateSlot, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_wearablePackedStateSlot, put=__cordl_internal_set_wearablePackedStateSlot)) ::GlobalNamespace::VRRig_WearablePackedStateSlots  wearablePackedStateSlot;

/// @brief Method Awake, addr 0x5d7bd58, size 0x14c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5d7c050, size 0x4c, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LateUpdateLocal, addr 0x5d7c09c, size 0x7c8, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x5d7c864, size 0x34, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x5d7c898, size 0x38, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GorillaTag::Cosmetics::EdibleWearable* New_ctor() ;

/// @brief Method OnEdibleHoldableStateChange, addr 0x5d7c8d0, size 0x2a8, virtual true, abstract: false, final false
inline void OnEdibleHoldableStateChange() ;

/// @brief Method OnEnable, addr 0x5d7bea4, size 0x1ac, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_biteCooldown() const;

constexpr float_t& __cordl_internal_get_biteCooldown() ;

constexpr float_t const& __cordl_internal_get_biteDistance() const;

constexpr float_t& __cordl_internal_get_biteDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_edibleBiteOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_edibleBiteOffset() ;

constexpr int32_t const& __cordl_internal_get_edibleState() const;

constexpr int32_t& __cordl_internal_get_edibleState() ;

constexpr ::ArrayW<::GlobalNamespace::EdibleWearable_EdibleStateInfo> const& __cordl_internal_get_edibleStateInfos() const;

constexpr ::ArrayW<::GlobalNamespace::EdibleWearable_EdibleStateInfo>& __cordl_internal_get_edibleStateInfos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gorillaHeadMouthOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gorillaHeadMouthOffset() ;

constexpr bool const& __cordl_internal_get_isHandSlot() const;

constexpr bool& __cordl_internal_get_isHandSlot() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr bool const& __cordl_internal_get_isNonRespawnable() const;

constexpr bool& __cordl_internal_get_isNonRespawnable() ;

constexpr float_t const& __cordl_internal_get_lastEatTime() const;

constexpr float_t& __cordl_internal_get_lastEatTime() ;

constexpr float_t const& __cordl_internal_get_lastFullyEatenTime() const;

constexpr float_t& __cordl_internal_get_lastFullyEatenTime() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr int32_t const& __cordl_internal_get_previousEdibleState() const;

constexpr int32_t& __cordl_internal_get_previousEdibleState() ;

constexpr float_t const& __cordl_internal_get_respawnTime() const;

constexpr float_t& __cordl_internal_get_respawnTime() ;

constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo const& __cordl_internal_get_stateBitsWriteInfo() const;

constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo& __cordl_internal_get_stateBitsWriteInfo() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr bool const& __cordl_internal_get_wasInBiteZoneLastFrame() const;

constexpr bool& __cordl_internal_get_wasInBiteZoneLastFrame() ;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& __cordl_internal_get_wearablePackedStateSlot() const;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& __cordl_internal_get_wearablePackedStateSlot() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_biteCooldown(float_t  value) ;

constexpr void __cordl_internal_set_biteDistance(float_t  value) ;

constexpr void __cordl_internal_set_edibleBiteOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_edibleState(int32_t  value) ;

constexpr void __cordl_internal_set_edibleStateInfos(::ArrayW<::GlobalNamespace::EdibleWearable_EdibleStateInfo>  value) ;

constexpr void __cordl_internal_set_gorillaHeadMouthOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_isHandSlot(bool  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_isNonRespawnable(bool  value) ;

constexpr void __cordl_internal_set_lastEatTime(float_t  value) ;

constexpr void __cordl_internal_set_lastFullyEatenTime(float_t  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_previousEdibleState(int32_t  value) ;

constexpr void __cordl_internal_set_respawnTime(float_t  value) ;

constexpr void __cordl_internal_set_stateBitsWriteInfo(::GlobalNamespace::GTBitOps_BitWriteInfo  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

constexpr void __cordl_internal_set_wasInBiteZoneLastFrame(bool  value) ;

constexpr void __cordl_internal_set_wearablePackedStateSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value) ;

/// @brief Method .ctor, addr 0x5d7cb78, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdibleWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdibleWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdibleWearable(EdibleWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdibleWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdibleWearable(EdibleWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4871};

/// [Tooltip("Check when using non cosmetic edible items like honeycomb")]
/// @brief Field isNonRespawnable, offset: 0x20, size: 0x1, def value: None
 bool  ___isNonRespawnable;

/// [Tooltip("Eating sounds are played through this AudioSource using PlayOneShot.")]
/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [Tooltip("Volume each bite should play at.")]
/// @brief Field volume, offset: 0x30, size: 0x4, def value: None
 float_t  ___volume;

/// [Tooltip("The slot this cosmetic resides.")]
/// @brief Field wearablePackedStateSlot, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::VRRig_WearablePackedStateSlots  ___wearablePackedStateSlot;

/// [Tooltip("Time between bites.")]
/// @brief Field biteCooldown, offset: 0x38, size: 0x4, def value: None
 float_t  ___biteCooldown;

/// [Tooltip("How long it takes to pop back to the uneaten state after being fully eaten.")]
/// @brief Field respawnTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___respawnTime;

/// [Tooltip("Distance from mouth to item required to trigger a bite.")]
/// @brief Field biteDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ___biteDistance;

/// [Tooltip("Offset from Gorilla\'s head to mouth.")]
/// @brief Field gorillaHeadMouthOffset, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gorillaHeadMouthOffset;

/// [Tooltip("Offset from edible\'s transform to the bite point.")]
/// @brief Field edibleBiteOffset, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___edibleBiteOffset;

/// @brief Field edibleStateInfos, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::EdibleWearable_EdibleStateInfo>  ___edibleStateInfos;

/// @brief Field ownerRig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field isLocal, offset: 0x70, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field isHandSlot, offset: 0x71, size: 0x1, def value: None
 bool  ___isHandSlot;

/// @brief Field isLeftHand, offset: 0x72, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field stateBitsWriteInfo, offset: 0x74, size: 0xc, def value: None
 ::GlobalNamespace::GTBitOps_BitWriteInfo  ___stateBitsWriteInfo;

/// @brief Field edibleState, offset: 0x80, size: 0x4, def value: None
 int32_t  ___edibleState;

/// @brief Field previousEdibleState, offset: 0x84, size: 0x4, def value: None
 int32_t  ___previousEdibleState;

/// @brief Field lastEatTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___lastEatTime;

/// @brief Field lastFullyEatenTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ___lastFullyEatenTime;

/// @brief Field wasInBiteZoneLastFrame, offset: 0x90, size: 0x1, def value: None
 bool  ___wasInBiteZoneLastFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___isNonRespawnable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___volume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___wearablePackedStateSlot) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___biteCooldown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___respawnTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___biteDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___gorillaHeadMouthOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___edibleBiteOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___edibleStateInfos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___ownerRig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___isLocal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___isHandSlot) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___isLeftHand) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___stateBitsWriteInfo) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___edibleState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___previousEdibleState) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___lastEatTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___lastFullyEatenTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EdibleWearable, ___wasInBiteZoneLastFrame) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EdibleWearable) == 0x98, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
