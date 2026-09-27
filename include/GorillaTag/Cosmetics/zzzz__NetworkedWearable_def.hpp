#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/NetworkedWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkedWearable)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticCategory;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct VRRig_WearablePackedStateSlots;
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
class UnityEvent;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class NetworkedWearable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::NetworkedWearable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::NetworkedWearable*, "GorillaTag.Cosmetics", "NetworkedWearable");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticCategory, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, VRRig::WearablePackedStateSlots
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.NetworkedWearable
class CORDL_TYPE NetworkedWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field OnLeftWearableStateFalse, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLeftWearableStateFalse, put=__cordl_internal_set_OnLeftWearableStateFalse)) ::UnityEngine::Events::UnityEvent*  OnLeftWearableStateFalse;

/// @brief Field OnLeftWearableStateTrue, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLeftWearableStateTrue, put=__cordl_internal_set_OnLeftWearableStateTrue)) ::UnityEngine::Events::UnityEvent*  OnLeftWearableStateTrue;

/// @brief Field OnRightWearableStateFalse, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRightWearableStateFalse, put=__cordl_internal_set_OnRightWearableStateFalse)) ::UnityEngine::Events::UnityEvent*  OnRightWearableStateFalse;

/// @brief Field OnRightWearableStateTrue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRightWearableStateTrue, put=__cordl_internal_set_OnRightWearableStateTrue)) ::UnityEngine::Events::UnityEvent*  OnRightWearableStateTrue;

/// @brief Field OnWearableStateFalse, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnWearableStateFalse, put=__cordl_internal_set_OnWearableStateFalse)) ::UnityEngine::Events::UnityEvent*  OnWearableStateFalse;

/// @brief Field OnWearableStateTrue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnWearableStateTrue, put=__cordl_internal_set_OnWearableStateTrue)) ::UnityEngine::Events::UnityEvent*  OnWearableStateTrue;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field assignedSlot, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_assignedSlot, put=__cordl_internal_set_assignedSlot)) ::GlobalNamespace::CosmeticsController_CosmeticCategory  assignedSlot;

/// @brief Field isLocal, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field isTwoHanded, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTwoHanded, put=__cordl_internal_set_isTwoHanded)) bool  isTwoHanded;

/// @brief Field leftHandValue, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandValue, put=__cordl_internal_set_leftHandValue)) bool  leftHandValue;

/// @brief Field leftSlot, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftSlot, put=__cordl_internal_set_leftSlot)) ::GlobalNamespace::VRRig_WearablePackedStateSlots  leftSlot;

/// @brief Field listenForChangesLocal, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_listenForChangesLocal, put=__cordl_internal_set_listenForChangesLocal)) bool  listenForChangesLocal;

/// @brief Field myRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field rightHandValue, offset 0x43, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandValue, put=__cordl_internal_set_rightHandValue)) bool  rightHandValue;

/// @brief Field rightSlot, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightSlot, put=__cordl_internal_set_rightSlot)) ::GlobalNamespace::VRRig_WearablePackedStateSlots  rightSlot;

/// @brief Field startTrue, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_startTrue, put=__cordl_internal_set_startTrue)) bool  startTrue;

/// @brief Field value, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) bool  value;

/// @brief Field wearableSlot, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_wearableSlot, put=__cordl_internal_set_wearableSlot)) ::GlobalNamespace::VRRig_WearablePackedStateSlots  wearableSlot;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method Awake, addr 0x5d7d7c8, size 0x4c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CosmeticCategoryToWearableSlot, addr 0x5d7d814, size 0x158, virtual false, abstract: false, final false
inline ::GlobalNamespace::VRRig_WearablePackedStateSlots CosmeticCategoryToWearableSlot(::GlobalNamespace::CosmeticsController_CosmeticCategory  category, bool  isLeft) ;

/// @brief Method IsCategoryValid, addr 0x5d7def4, size 0x18, virtual false, abstract: false, final false
static inline bool IsCategoryValid(::GlobalNamespace::CosmeticsController_CosmeticCategory  category) ;

static inline ::GorillaTag::Cosmetics::NetworkedWearable* New_ctor() ;

/// @brief Method OnDespawn, addr 0x5d7ebc8, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x5d7e8f8, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d7d96c, size 0xac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLeftStateChanged, addr 0x5d7e3f0, size 0x24, virtual false, abstract: false, final false
inline void OnLeftStateChanged() ;

/// @brief Method OnRightStateChanged, addr 0x5d7e66c, size 0x24, virtual false, abstract: false, final false
inline void OnRightStateChanged() ;

/// @brief Method OnSpawn, addr 0x5d7e9bc, size 0x20c, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method OnWearableStateChanged, addr 0x5d7e164, size 0x24, virtual false, abstract: false, final false
inline void OnWearableStateChanged() ;

/// @brief Method SetLeftWearableStateBool, addr 0x5d7e188, size 0x268, virtual false, abstract: false, final false
inline void SetLeftWearableStateBool(bool  newState) ;

/// @brief Method SetRightWearableStateBool, addr 0x5d7e690, size 0x268, virtual false, abstract: false, final false
inline void SetRightWearableStateBool(bool  newState) ;

/// @brief Method SetWearableStateBool, addr 0x5d7da18, size 0x268, virtual false, abstract: false, final false
inline void SetWearableStateBool(bool  newState) ;

/// @brief Method Tick, addr 0x5d7ebdc, size 0x13c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method ToggleLeftWearableStateBool, addr 0x5d7df0c, size 0x258, virtual false, abstract: false, final false
inline void ToggleLeftWearableStateBool() ;

/// @brief Method ToggleRightWearableStateBool, addr 0x5d7e414, size 0x258, virtual false, abstract: false, final false
inline void ToggleRightWearableStateBool() ;

/// @brief Method ToggleWearableStateBool, addr 0x5d7dc80, size 0x274, virtual false, abstract: false, final false
inline void ToggleWearableStateBool() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLeftWearableStateFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLeftWearableStateFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLeftWearableStateTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLeftWearableStateTrue() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnRightWearableStateFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnRightWearableStateFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnRightWearableStateTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnRightWearableStateTrue() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnWearableStateFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnWearableStateFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnWearableStateTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnWearableStateTrue() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticCategory const& __cordl_internal_get_assignedSlot() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticCategory& __cordl_internal_get_assignedSlot() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr bool const& __cordl_internal_get_isTwoHanded() const;

constexpr bool& __cordl_internal_get_isTwoHanded() ;

constexpr bool const& __cordl_internal_get_leftHandValue() const;

constexpr bool& __cordl_internal_get_leftHandValue() ;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& __cordl_internal_get_leftSlot() const;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& __cordl_internal_get_leftSlot() ;

constexpr bool const& __cordl_internal_get_listenForChangesLocal() const;

constexpr bool& __cordl_internal_get_listenForChangesLocal() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr bool const& __cordl_internal_get_rightHandValue() const;

constexpr bool& __cordl_internal_get_rightHandValue() ;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& __cordl_internal_get_rightSlot() const;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& __cordl_internal_get_rightSlot() ;

constexpr bool const& __cordl_internal_get_startTrue() const;

constexpr bool& __cordl_internal_get_startTrue() ;

constexpr bool const& __cordl_internal_get_value() const;

constexpr bool& __cordl_internal_get_value() ;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& __cordl_internal_get_wearableSlot() const;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& __cordl_internal_get_wearableSlot() ;

constexpr void __cordl_internal_set_OnLeftWearableStateFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnLeftWearableStateTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnRightWearableStateFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnRightWearableStateTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnWearableStateFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnWearableStateTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_assignedSlot(::GlobalNamespace::CosmeticsController_CosmeticCategory  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_isTwoHanded(bool  value) ;

constexpr void __cordl_internal_set_leftHandValue(bool  value) ;

constexpr void __cordl_internal_set_leftSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value) ;

constexpr void __cordl_internal_set_listenForChangesLocal(bool  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rightHandValue(bool  value) ;

constexpr void __cordl_internal_set_rightSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value) ;

constexpr void __cordl_internal_set_startTrue(bool  value) ;

constexpr void __cordl_internal_set_value(bool  value) ;

constexpr void __cordl_internal_set_wearableSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value) ;

/// @brief Method .ctor, addr 0x5d7ed18, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5d7e9ac, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5d7e99c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d7ebcc, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5d7e9b4, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5d7e9a4, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d7ebd4, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedWearable(NetworkedWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedWearable(NetworkedWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4873};

/// @brief Field listenDetails offset 0xffffffff size 0x8
static constexpr ::ConstString  listenDetails{u"listenForChangesLocal should be false in most cases\nIf you have a first person part and a local rig part that both need to react to a state change\ncall the Toggle/Set functions to change the state from one prefab and check \nlistenForChangesLocal on the other prefab "};

/// @brief Field listenInfo offset 0xffffffff size 0x8
static constexpr ::ConstString  listenInfo{u"listenForChangesLocal should be false in most cases"};

/// [Tooltip("Whether the wearable state is toggled on by default.")]
/// [SerializeField]
/// @brief Field startTrue, offset: 0x20, size: 0x1, def value: None
 bool  ___startTrue;

/// [Tooltip("This is to determine what bit to change in VRRig.WearablesPackedStates.")]
/// [SerializeField]
/// @brief Field assignedSlot, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticCategory  ___assignedSlot;

/// [FormerlySerializedAs("IsTwoHanded")]
/// [SerializeField]
/// @brief Field isTwoHanded, offset: 0x28, size: 0x1, def value: None
 bool  ___isTwoHanded;

/// [SerializeField]
/// @brief Field listenForChangesLocal, offset: 0x29, size: 0x1, def value: None
 bool  ___listenForChangesLocal;

/// @brief Field wearableSlot, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::VRRig_WearablePackedStateSlots  ___wearableSlot;

/// @brief Field leftSlot, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::VRRig_WearablePackedStateSlots  ___leftSlot;

/// @brief Field rightSlot, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::VRRig_WearablePackedStateSlots  ___rightSlot;

/// @brief Field myRig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field isLocal, offset: 0x40, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field value, offset: 0x41, size: 0x1, def value: None
 bool  ___value;

/// @brief Field leftHandValue, offset: 0x42, size: 0x1, def value: None
 bool  ___leftHandValue;

/// @brief Field rightHandValue, offset: 0x43, size: 0x1, def value: None
 bool  ___rightHandValue;

/// [SerializeField]
/// @brief Field OnWearableStateTrue, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnWearableStateTrue;

/// [SerializeField]
/// @brief Field OnWearableStateFalse, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnWearableStateFalse;

/// [SerializeField]
/// @brief Field OnLeftWearableStateTrue, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLeftWearableStateTrue;

/// [SerializeField]
/// @brief Field OnLeftWearableStateFalse, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLeftWearableStateFalse;

/// [SerializeField]
/// @brief Field OnRightWearableStateTrue, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnRightWearableStateTrue;

/// [SerializeField]
/// @brief Field OnRightWearableStateFalse, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnRightWearableStateFalse;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x7c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x80, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___startTrue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___assignedSlot) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___isTwoHanded) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___listenForChangesLocal) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___wearableSlot) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___leftSlot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___rightSlot) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___myRig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___isLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___value) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___leftHandValue) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___rightHandValue) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___OnWearableStateTrue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___OnWearableStateFalse) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___OnLeftWearableStateTrue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___OnLeftWearableStateFalse) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___OnRightWearableStateTrue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ___OnRightWearableStateFalse) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ____IsSpawned_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ____CosmeticSelectedSide_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedWearable, ____TickRunning_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::NetworkedWearable) == 0x88, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
