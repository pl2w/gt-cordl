#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGameEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerGameEvents)
namespace GlobalNamespace {
struct PlayerGameEvents_EventType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerGameEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerGameEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGameEvents*, "", "PlayerGameEvents");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerGameEvents
class CORDL_TYPE PlayerGameEvents : public ::System::Object {
public:
// Declarations
using EventType = ::GlobalNamespace::PlayerGameEvents_EventType;

/// @brief Field OnCritterEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCritterEvent, put=setStaticF_OnCritterEvent)) ::System::Action_1<::StringW>*  OnCritterEvent;

/// @brief Field OnDroppedObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDroppedObject, put=setStaticF_OnDroppedObject)) ::System::Action_1<::StringW>*  OnDroppedObject;

/// @brief Field OnEatObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEatObject, put=setStaticF_OnEatObject)) ::System::Action_1<::StringW>*  OnEatObject;

/// @brief Field OnEnterLocation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEnterLocation, put=setStaticF_OnEnterLocation)) ::System::Action_1<::StringW>*  OnEnterLocation;

/// @brief Field OnGameModeCompleteRound, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGameModeCompleteRound, put=setStaticF_OnGameModeCompleteRound)) ::System::Action_1<::StringW>*  OnGameModeCompleteRound;

/// @brief Field OnGameModeObjectiveTrigger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGameModeObjectiveTrigger, put=setStaticF_OnGameModeObjectiveTrigger)) ::System::Action_1<::StringW>*  OnGameModeObjectiveTrigger;

/// @brief Field OnGrabbedObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGrabbedObject, put=setStaticF_OnGrabbedObject)) ::System::Action_1<::StringW>*  OnGrabbedObject;

/// @brief Field OnLaunchedProjectile, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLaunchedProjectile, put=setStaticF_OnLaunchedProjectile)) ::System::Action_1<::StringW>*  OnLaunchedProjectile;

/// @brief Field OnMiscEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMiscEvent, put=setStaticF_OnMiscEvent)) ::System::Action_2<::StringW,int32_t>*  OnMiscEvent;

/// @brief Field OnPlayerMoved, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerMoved, put=setStaticF_OnPlayerMoved)) ::System::Action_2<float_t,float_t>*  OnPlayerMoved;

/// @brief Field OnPlayerSwam, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerSwam, put=setStaticF_OnPlayerSwam)) ::System::Action_2<float_t,float_t>*  OnPlayerSwam;

/// @brief Field OnTapObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTapObject, put=setStaticF_OnTapObject)) ::System::Action_1<::StringW>*  OnTapObject;

/// @brief Field OnTriggerHandEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTriggerHandEffect, put=setStaticF_OnTriggerHandEffect)) ::System::Action_1<::StringW>*  OnTriggerHandEffect;

/// @brief Method CritterEvent, addr 0x5628810, size 0x6c, virtual false, abstract: false, final false
static inline void CritterEvent(::StringW  eventName) ;

/// @brief Method DroppedObject, addr 0x5628474, size 0x6c, virtual false, abstract: false, final false
static inline void DroppedObject(::StringW  objectName) ;

/// @brief Method EatObject, addr 0x56284e0, size 0x6c, virtual false, abstract: false, final false
static inline void EatObject(::StringW  objectName) ;

/// @brief Method GameModeCompleteRound, addr 0x562838c, size 0x7c, virtual false, abstract: false, final false
static inline void GameModeCompleteRound() ;

/// @brief Method GameModeObjectiveTriggered, addr 0x5628310, size 0x7c, virtual false, abstract: false, final false
static inline void GameModeObjectiveTriggered() ;

/// @brief Method GrabbedObject, addr 0x5628408, size 0x6c, virtual false, abstract: false, final false
static inline void GrabbedObject(::StringW  objectName) ;

/// @brief Method LaunchedProjectile, addr 0x56285b8, size 0x6c, virtual false, abstract: false, final false
static inline void LaunchedProjectile(::StringW  objectName) ;

/// @brief Method MiscEvent, addr 0x5628790, size 0x80, virtual false, abstract: false, final false
static inline void MiscEvent(::StringW  eventName, int32_t  count) ;

static inline ::GlobalNamespace::PlayerGameEvents* New_ctor() ;

/// @brief Method PlayerMoved, addr 0x5628624, size 0x80, virtual false, abstract: false, final false
static inline void PlayerMoved(float_t  distance, float_t  speed) ;

/// @brief Method PlayerSwam, addr 0x56286a4, size 0x80, virtual false, abstract: false, final false
static inline void PlayerSwam(float_t  distance, float_t  speed) ;

/// @brief Method TapObject, addr 0x562854c, size 0x6c, virtual false, abstract: false, final false
static inline void TapObject(::StringW  objectName) ;

/// @brief Method TriggerEnterLocation, addr 0x56280fc, size 0x6c, virtual false, abstract: false, final false
static inline void TriggerEnterLocation(::StringW  locationName) ;

/// @brief Method TriggerHandEffect, addr 0x5628724, size 0x6c, virtual false, abstract: false, final false
static inline void TriggerHandEffect(::StringW  effectName) ;

/// @brief Method .ctor, addr 0x562887c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCritterEvent, addr 0x5628170, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnCritterEvent(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnDroppedObject, addr 0x5626d74, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnDroppedObject(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEatObject, addr 0x5626e44, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnEatObject(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEnterLocation, addr 0x5627324, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnEnterLocation(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGameModeCompleteRound, addr 0x5626bd4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnGameModeCompleteRound(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGameModeObjectiveTrigger, addr 0x5626b08, size 0xcc, virtual false, abstract: false, final false
static inline void add_OnGameModeObjectiveTrigger(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGrabbedObject, addr 0x5626ca4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnGrabbedObject(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnLaunchedProjectile, addr 0x5626fe4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnLaunchedProjectile(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMiscEvent, addr 0x56273f4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnMiscEvent(::System::Action_2<::StringW,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerMoved, addr 0x56270b4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnPlayerMoved(::System::Action_2<float_t,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerSwam, addr 0x5627184, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnPlayerSwam(::System::Action_2<float_t,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTapObject, addr 0x5626f14, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnTapObject(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTriggerHandEffect, addr 0x5627254, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnTriggerHandEffect(::System::Action_1<::StringW>*  value) ;

static inline ::System::Action_1<::StringW>* getStaticF_OnCritterEvent() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnDroppedObject() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnEatObject() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnEnterLocation() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnGameModeCompleteRound() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnGameModeObjectiveTrigger() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnGrabbedObject() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnLaunchedProjectile() ;

static inline ::System::Action_2<::StringW,int32_t>* getStaticF_OnMiscEvent() ;

static inline ::System::Action_2<float_t,float_t>* getStaticF_OnPlayerMoved() ;

static inline ::System::Action_2<float_t,float_t>* getStaticF_OnPlayerSwam() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnTapObject() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnTriggerHandEffect() ;

/// [CompilerGenerated]
/// @brief Method remove_OnCritterEvent, addr 0x5628240, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnCritterEvent(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnDroppedObject, addr 0x5627730, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnDroppedObject(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEatObject, addr 0x5627800, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnEatObject(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEnterLocation, addr 0x5627ce0, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnEnterLocation(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGameModeCompleteRound, addr 0x5627590, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnGameModeCompleteRound(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGameModeObjectiveTrigger, addr 0x56274c4, size 0xcc, virtual false, abstract: false, final false
static inline void remove_OnGameModeObjectiveTrigger(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGrabbedObject, addr 0x5627660, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnGrabbedObject(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnLaunchedProjectile, addr 0x56279a0, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnLaunchedProjectile(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMiscEvent, addr 0x5627db0, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnMiscEvent(::System::Action_2<::StringW,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerMoved, addr 0x5627a70, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnPlayerMoved(::System::Action_2<float_t,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerSwam, addr 0x5627b40, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnPlayerSwam(::System::Action_2<float_t,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTapObject, addr 0x56278d0, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnTapObject(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTriggerHandEffect, addr 0x5627c10, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnTriggerHandEffect(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnCritterEvent(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnDroppedObject(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnEatObject(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnEnterLocation(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnGameModeCompleteRound(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnGameModeObjectiveTrigger(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnGrabbedObject(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnLaunchedProjectile(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnMiscEvent(::System::Action_2<::StringW,int32_t>*  value) ;

static inline void setStaticF_OnPlayerMoved(::System::Action_2<float_t,float_t>*  value) ;

static inline void setStaticF_OnPlayerSwam(::System::Action_2<float_t,float_t>*  value) ;

static inline void setStaticF_OnTapObject(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnTriggerHandEffect(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerGameEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerGameEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerGameEvents(PlayerGameEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerGameEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerGameEvents(PlayerGameEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{596};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayerGameEvents) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
