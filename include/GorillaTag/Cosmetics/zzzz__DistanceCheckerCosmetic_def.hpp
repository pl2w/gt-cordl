#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DistanceCheckerCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DistanceCheckerCosmetic_DistanceCondition_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DistanceCheckerCosmetic_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DistanceCheckerCosmetic)
namespace GlobalNamespace {
struct DistanceCheckerCosmetic_DistanceCondition;
}
namespace GlobalNamespace {
struct DistanceCheckerCosmetic_State;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class TransferrableObject;
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
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class DistanceCheckerCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::DistanceCheckerCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::DistanceCheckerCosmetic*, "GorillaTag.Cosmetics", "DistanceCheckerCosmetic");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, GorillaTag.Cosmetics.DistanceCheckerCosmetic::DistanceCondition, GorillaTag.Cosmetics.DistanceCheckerCosmetic::State, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.DistanceCheckerCosmetic
class CORDL_TYPE DistanceCheckerCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DistanceCondition = ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition;

using State = ::GlobalNamespace::DistanceCheckerCosmetic_State;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field closestDistance, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_closestDistance, put=__cordl_internal_set_closestDistance)) ::UnityEngine::Vector3  closestDistance;

/// @brief Field currentClosestPlayer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentClosestPlayer, put=__cordl_internal_set_currentClosestPlayer)) ::UnityW<::GlobalNamespace::VRRig>  currentClosestPlayer;

/// @brief Field currentState, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::DistanceCheckerCosmetic_State  currentState;

/// @brief Field distanceFrom, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_distanceFrom, put=__cordl_internal_set_distanceFrom)) ::UnityW<::UnityEngine::Transform>  distanceFrom;

/// @brief Field distanceThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceThreshold, put=__cordl_internal_set_distanceThreshold)) float_t  distanceThreshold;

/// @brief Field distanceTo, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceTo, put=__cordl_internal_set_distanceTo)) ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition  distanceTo;

/// @brief Field myRig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field onAllAreAboveThreshold, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAllAreAboveThreshold, put=__cordl_internal_set_onAllAreAboveThreshold)) ::UnityEngine::Events::UnityEvent*  onAllAreAboveThreshold;

/// @brief Field onClosestPlayerBelowThresholdChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onClosestPlayerBelowThresholdChanged, put=__cordl_internal_set_onClosestPlayerBelowThresholdChanged)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,float_t>*  onClosestPlayerBelowThresholdChanged;

/// @brief Field onOneIsBelowThreshold, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOneIsBelowThreshold, put=__cordl_internal_set_onOneIsBelowThreshold)) ::UnityEngine::Events::UnityEvent*  onOneIsBelowThreshold;

/// @brief Field ownerRig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field transferableObject, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferableObject, put=__cordl_internal_set_transferableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferableObject;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method IsAboveThreshold, addr 0x5d8cbb8, size 0x84, virtual false, abstract: false, final false
inline bool IsAboveThreshold(::UnityEngine::Vector3  distance) ;

/// @brief Method IsBelowThreshold, addr 0x5d8cb34, size 0x84, virtual false, abstract: false, final false
inline bool IsBelowThreshold(::UnityEngine::Vector3  distance) ;

static inline ::GorillaTag::Cosmetics::DistanceCheckerCosmetic* New_ctor() ;

/// @brief Method OnDespawn, addr 0x5d8c014, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x5d8c220, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d8c018, size 0x1a4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x5d8c00c, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ResetClosestPlayer, addr 0x5d8c1bc, size 0x64, virtual false, abstract: false, final false
inline void ResetClosestPlayer() ;

/// @brief Method SliceUpdate, addr 0x5d8c22c, size 0x4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateClosestPlayer, addr 0x5d8cc3c, size 0x60c, virtual false, abstract: false, final false
inline void UpdateClosestPlayer(bool  others) ;

/// @brief Method UpdateDistance, addr 0x5d8c230, size 0x904, virtual false, abstract: false, final false
inline void UpdateDistance() ;

/// @brief Method UpdateState, addr 0x5d8d248, size 0x38, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::DistanceCheckerCosmetic_State  newState) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_closestDistance() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_closestDistance() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_currentClosestPlayer() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_currentClosestPlayer() ;

constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_distanceFrom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_distanceFrom() ;

constexpr float_t const& __cordl_internal_get_distanceThreshold() const;

constexpr float_t& __cordl_internal_get_distanceThreshold() ;

constexpr ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition const& __cordl_internal_get_distanceTo() const;

constexpr ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition& __cordl_internal_get_distanceTo() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onAllAreAboveThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onAllAreAboveThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,float_t>* const& __cordl_internal_get_onClosestPlayerBelowThresholdChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,float_t>*& __cordl_internal_get_onClosestPlayerBelowThresholdChanged() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onOneIsBelowThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onOneIsBelowThreshold() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferableObject() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_closestDistance(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentClosestPlayer(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::DistanceCheckerCosmetic_State  value) ;

constexpr void __cordl_internal_set_distanceFrom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_distanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_distanceTo(::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_onAllAreAboveThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onClosestPlayerBelowThresholdChanged(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,float_t>*  value) ;

constexpr void __cordl_internal_set_onOneIsBelowThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_transferableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d8d280, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5d8bffc, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5d8bfec, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5d8c004, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5d8bff4, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistanceCheckerCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistanceCheckerCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistanceCheckerCosmetic(DistanceCheckerCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistanceCheckerCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistanceCheckerCosmetic(DistanceCheckerCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4913};

/// [SerializeField]
/// @brief Field distanceFrom, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___distanceFrom;

/// [SerializeField]
/// @brief Field distanceTo, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition  ___distanceTo;

/// [Tooltip("Receive events when above or below this distance")]
/// @brief Field distanceThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___distanceThreshold;

/// @brief Field onOneIsBelowThreshold, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onOneIsBelowThreshold;

/// @brief Field onAllAreAboveThreshold, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onAllAreAboveThreshold;

/// @brief Field onClosestPlayerBelowThresholdChanged, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::VRRig>,float_t>*  ___onClosestPlayerBelowThresholdChanged;

/// @brief Field myRig, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field currentState, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::DistanceCheckerCosmetic_State  ___currentState;

/// @brief Field closestDistance, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___closestDistance;

/// @brief Field currentClosestPlayer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___currentClosestPlayer;

/// @brief Field ownerRig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field transferableObject, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferableObject;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x7c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___distanceFrom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___distanceTo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___distanceThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___onOneIsBelowThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___onAllAreAboveThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___onClosestPlayerBelowThresholdChanged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___myRig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___currentState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___closestDistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___currentClosestPlayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___ownerRig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ___transferableObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ____IsSpawned_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic, ____CosmeticSelectedSide_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::DistanceCheckerCosmetic) == 0x80, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
