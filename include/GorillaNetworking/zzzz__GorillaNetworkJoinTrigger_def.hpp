#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkJoinTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneA_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneB_def.hpp"
#include "GorillaNetworking/zzzz__AdditionalCustomProperty_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaNetworkJoinTrigger)
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
struct GroupJoinZoneAB;
}
namespace GlobalNamespace {
class JoinTriggerUI;
}
namespace GorillaGameModes {
struct GameModeType;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaNetworkJoinTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaNetworkJoinTrigger*, "GorillaNetworking", "GorillaNetworkJoinTrigger");
// Dependencies GTZone, GorillaNetworking.AdditionalCustomProperty, GorillaTriggerBox, GroupJoinZoneA, GroupJoinZoneB, UnityEngine.GameObject
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaNetworkJoinTrigger
class CORDL_TYPE GorillaNetworkJoinTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field additionalJoinCustomProperties, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_additionalJoinCustomProperties, put=__cordl_internal_set_additionalJoinCustomProperties)) ::ArrayW<::GorillaNetworking::AdditionalCustomProperty>  additionalJoinCustomProperties;

/// @brief Field didRegisterForCallbacks, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_didRegisterForCallbacks, put=__cordl_internal_set_didRegisterForCallbacks)) bool  didRegisterForCallbacks;

/// @brief Field groupJoinRequiredZones, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupJoinRequiredZones, put=__cordl_internal_set_groupJoinRequiredZones)) ::GlobalNamespace::GroupJoinZoneA  groupJoinRequiredZones;

 __declspec(property(get=get_groupJoinRequiredZonesAB)) ::GlobalNamespace::GroupJoinZoneAB  groupJoinRequiredZonesAB;

/// @brief Field groupJoinRequiredZonesB, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupJoinRequiredZonesB, put=__cordl_internal_set_groupJoinRequiredZonesB)) ::GlobalNamespace::GroupJoinZoneB  groupJoinRequiredZonesB;

/// @brief Field ignoredIfInParty, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoredIfInParty, put=__cordl_internal_set_ignoredIfInParty)) bool  ignoredIfInParty;

/// @brief Field isSubsOnly, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSubsOnly, put=__cordl_internal_set_isSubsOnly)) bool  isSubsOnly;

/// @brief Field makeSureThisIsDisabled, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsDisabled, put=__cordl_internal_set_makeSureThisIsDisabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureThisIsDisabled;

/// @brief Field makeSureThisIsEnabled, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsEnabled, put=__cordl_internal_set_makeSureThisIsEnabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureThisIsEnabled;

/// @brief Field myCollider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCollider, put=__cordl_internal_set_myCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  myCollider;

/// @brief Field networkZone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkZone, put=__cordl_internal_set_networkZone)) ::StringW  networkZone;

/// @brief Field primaryTriggerForMyZone, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_primaryTriggerForMyZone, put=__cordl_internal_set_primaryTriggerForMyZone)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  primaryTriggerForMyZone;

/// @brief Field triggerJoinsDisabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_triggerJoinsDisabled, put=setStaticF_triggerJoinsDisabled)) bool  triggerJoinsDisabled;

/// @brief Field ui, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ui, put=__cordl_internal_set_ui)) ::UnityW<::GlobalNamespace::JoinTriggerUI>  ui;

/// @brief Field zone, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Method CanPartyJoin, addr 0x5c8a904, size 0xb0, virtual false, abstract: false, final false
inline bool CanPartyJoin() ;

/// @brief Method CanPartyJoin, addr 0x5c8aecc, size 0x24, virtual false, abstract: false, final false
inline bool CanPartyJoin(::GlobalNamespace::GroupJoinZoneAB  zone) ;

/// @brief Method DisableTriggerJoins, addr 0x5c8b964, size 0x90, virtual false, abstract: false, final false
static inline void DisableTriggerJoins() ;

/// @brief Method EnableTriggerJoins, addr 0x5c8b9f4, size 0x8c, virtual false, abstract: false, final false
static inline void EnableTriggerJoins() ;

/// @brief Method GetActiveGameType, addr 0x5c8aa34, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW GetActiveGameType() ;

/// @brief Method GetActiveNetworkZone, addr 0x5c8a9b4, size 0x68, virtual false, abstract: false, final false
inline ::StringW GetActiveNetworkZone() ;

/// @brief Method GetDesiredGameModeType, addr 0x5c8aaf0, size 0x1f8, virtual false, abstract: false, final false
inline ::GorillaGameModes::GameModeType GetDesiredGameModeType() ;

/// @brief Method GetDesiredGameType, addr 0x5c88340, size 0x6c, virtual false, abstract: false, final false
inline ::StringW GetDesiredGameType() ;

/// @brief Method GetDesiredGameTypeLocalized, addr 0x5c8ace8, size 0x14, virtual false, abstract: false, final false
inline ::StringW GetDesiredGameTypeLocalized() ;

/// @brief Method GetDesiredNetworkZone, addr 0x5c8aa1c, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetDesiredNetworkZone() ;

/// @brief Method GetFullDesiredGameModeString, addr 0x5c8acfc, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GetFullDesiredGameModeString() ;

/// @brief Method GetRoomSize, addr 0x5c8ae48, size 0x84, virtual true, abstract: false, final false
inline uint8_t GetRoomSize(bool  subscribed) ;

static inline ::GorillaNetworking::GorillaNetworkJoinTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5c8aef0, size 0x8b8, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

/// @brief Method OnDestroy, addr 0x5c8a7fc, size 0x104, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGroupPositionsChanged, addr 0x5c8a900, size 0x4, virtual false, abstract: false, final false
inline void OnGroupPositionsChanged(::GlobalNamespace::GroupJoinZoneAB  groupZone) ;

/// @brief Method RegisterUI, addr 0x5c89dfc, size 0x1a0, virtual false, abstract: false, final false
inline void RegisterUI(::GlobalNamespace::JoinTriggerUI*  ui) ;

/// @brief Method SameZoneAsOverride, addr 0x5c8add4, size 0x74, virtual true, abstract: false, final false
inline bool SameZoneAsOverride() ;

/// @brief Method Start, addr 0x5c89b28, size 0x228, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SubsPublicJoin, addr 0x5c8b7a8, size 0x174, virtual false, abstract: false, final false
inline void SubsPublicJoin() ;

/// @brief Method UnregisterUI, addr 0x5c8a7f0, size 0xc, virtual false, abstract: false, final false
inline void UnregisterUI(::GlobalNamespace::JoinTriggerUI*  ui) ;

/// @brief Method UpdateUI, addr 0x5c89f9c, size 0x854, virtual false, abstract: false, final false
inline void UpdateUI() ;

constexpr ::ArrayW<::GorillaNetworking::AdditionalCustomProperty> const& __cordl_internal_get_additionalJoinCustomProperties() const;

constexpr ::ArrayW<::GorillaNetworking::AdditionalCustomProperty>& __cordl_internal_get_additionalJoinCustomProperties() ;

constexpr bool const& __cordl_internal_get_didRegisterForCallbacks() const;

constexpr bool& __cordl_internal_get_didRegisterForCallbacks() ;

constexpr ::GlobalNamespace::GroupJoinZoneA const& __cordl_internal_get_groupJoinRequiredZones() const;

constexpr ::GlobalNamespace::GroupJoinZoneA& __cordl_internal_get_groupJoinRequiredZones() ;

constexpr ::GlobalNamespace::GroupJoinZoneB const& __cordl_internal_get_groupJoinRequiredZonesB() const;

constexpr ::GlobalNamespace::GroupJoinZoneB& __cordl_internal_get_groupJoinRequiredZonesB() ;

constexpr bool const& __cordl_internal_get_ignoredIfInParty() const;

constexpr bool& __cordl_internal_get_ignoredIfInParty() ;

constexpr bool const& __cordl_internal_get_isSubsOnly() const;

constexpr bool& __cordl_internal_get_isSubsOnly() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureThisIsDisabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureThisIsDisabled() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureThisIsEnabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureThisIsEnabled() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_myCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_myCollider() ;

constexpr ::StringW const& __cordl_internal_get_networkZone() const;

constexpr ::StringW& __cordl_internal_get_networkZone() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_primaryTriggerForMyZone() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_primaryTriggerForMyZone() ;

constexpr ::UnityW<::GlobalNamespace::JoinTriggerUI> const& __cordl_internal_get_ui() const;

constexpr ::UnityW<::GlobalNamespace::JoinTriggerUI>& __cordl_internal_get_ui() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_additionalJoinCustomProperties(::ArrayW<::GorillaNetworking::AdditionalCustomProperty>  value) ;

constexpr void __cordl_internal_set_didRegisterForCallbacks(bool  value) ;

constexpr void __cordl_internal_set_groupJoinRequiredZones(::GlobalNamespace::GroupJoinZoneA  value) ;

constexpr void __cordl_internal_set_groupJoinRequiredZonesB(::GlobalNamespace::GroupJoinZoneB  value) ;

constexpr void __cordl_internal_set_ignoredIfInParty(bool  value) ;

constexpr void __cordl_internal_set_isSubsOnly(bool  value) ;

constexpr void __cordl_internal_set_makeSureThisIsDisabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_makeSureThisIsEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_myCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_networkZone(::StringW  value) ;

constexpr void __cordl_internal_set_primaryTriggerForMyZone(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_ui(::UnityW<::GlobalNamespace::JoinTriggerUI>  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5c88404, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_triggerJoinsDisabled() ;

/// @brief Method get_groupJoinRequiredZonesAB, addr 0x5c89b20, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GroupJoinZoneAB get_groupJoinRequiredZonesAB() ;

static inline void setStaticF_triggerJoinsDisabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkJoinTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkJoinTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkJoinTrigger(GorillaNetworkJoinTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkJoinTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkJoinTrigger(GorillaNetworkJoinTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4344};

/// @brief Field makeSureThisIsDisabled, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureThisIsDisabled;

/// @brief Field makeSureThisIsEnabled, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureThisIsEnabled;

/// @brief Field zone, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// @brief Field groupJoinRequiredZones, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::GroupJoinZoneA  ___groupJoinRequiredZones;

/// @brief Field groupJoinRequiredZonesB, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::GroupJoinZoneB  ___groupJoinRequiredZonesB;

/// [FormerlySerializedAs("gameModeName")]
/// @brief Field networkZone, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___networkZone;

/// @brief Field myCollider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___myCollider;

/// @brief Field primaryTriggerForMyZone, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___primaryTriggerForMyZone;

/// @brief Field ignoredIfInParty, offset: 0x58, size: 0x1, def value: None
 bool  ___ignoredIfInParty;

/// @brief Field isSubsOnly, offset: 0x59, size: 0x1, def value: None
 bool  ___isSubsOnly;

/// @brief Field ui, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::JoinTriggerUI>  ___ui;

/// @brief Field didRegisterForCallbacks, offset: 0x68, size: 0x1, def value: None
 bool  ___didRegisterForCallbacks;

/// @brief Field additionalJoinCustomProperties, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::GorillaNetworking::AdditionalCustomProperty>  ___additionalJoinCustomProperties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___makeSureThisIsDisabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___makeSureThisIsEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___zone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___groupJoinRequiredZones) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___groupJoinRequiredZonesB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___networkZone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___myCollider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___primaryTriggerForMyZone) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___ignoredIfInParty) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___isSubsOnly) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___ui) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___didRegisterForCallbacks) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkJoinTrigger, ___additionalJoinCustomProperties) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaNetworkJoinTrigger) == 0x78, "Size mismatch!");

} // namespace end def GorillaNetworking
