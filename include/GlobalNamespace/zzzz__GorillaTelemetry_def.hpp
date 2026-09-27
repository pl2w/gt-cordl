#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTelemetry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorTelemetryData_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionTelemetryData_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTelemetry)
namespace GlobalNamespace {
class BatchRunner_GorillaTelemetry__Start_d__0;
}
namespace GlobalNamespace {
struct BuilderSetManager_BuilderSetStoreItem;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
struct GTGameModeEventType;
}
namespace GlobalNamespace {
struct GTKidEventType;
}
namespace GlobalNamespace {
struct GTShopEventType;
}
namespace GlobalNamespace {
struct GTZoneEventType;
}
namespace GlobalNamespace {
class GorillaTelemetry_BatchRunner;
}
namespace GlobalNamespace {
class GorillaTelemetry___c;
}
namespace GlobalNamespace {
class GorillaTelemetry_k;
}
namespace GlobalNamespace {
class MothershipAnalyticsEvent;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipWriteEventsResponse;
}
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace GlobalNamespace {
struct SITechTreePageId;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
struct ZoneClearReason;
}
namespace GlobalNamespace {
class ZoneDef;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaNetworking {
class PlayFabAuthenticator;
}
namespace KID::Model {
struct AgeStatusType;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BatchRunner_GorillaTelemetry__Start_d__0;
}
namespace GlobalNamespace {
class GorillaTelemetry;
}
namespace GlobalNamespace {
class GorillaTelemetry_BatchRunner;
}
namespace GlobalNamespace {
class GorillaTelemetry___c;
}
namespace GlobalNamespace {
class GorillaTelemetry_k;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*);
MARK_REF_T(::GlobalNamespace::GorillaTelemetry*);
MARK_REF_T(::GlobalNamespace::GorillaTelemetry_BatchRunner*);
MARK_REF_T(::GlobalNamespace::GorillaTelemetry___c*);
MARK_REF_T(::GlobalNamespace::GorillaTelemetry_k*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*, "", "GorillaTelemetry/BatchRunner/<Start>d__0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTelemetry*, "", "GorillaTelemetry");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTelemetry_BatchRunner*, "", "GorillaTelemetry/BatchRunner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTelemetry___c*, "", "GorillaTelemetry/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTelemetry_k*, "", "GorillaTelemetry/k");
// Dependencies BuilderSetManager::BuilderSetStoreItem, GhostReactorTelemetryData, GorillaNetworking.CosmeticsController::CosmeticItem, SuperInfectionTelemetryData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTelemetry
class CORDL_TYPE GorillaTelemetry : public ::System::Object {
public:
// Declarations
using BatchRunner = ::GlobalNamespace::GorillaTelemetry_BatchRunner;

using __c = ::GlobalNamespace::GorillaTelemetry___c;

using k = ::GlobalNamespace::GorillaTelemetry_k;

/// @brief Field TELEMETRY_FLUSH_SEC, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TELEMETRY_FLUSH_SEC, put=setStaticF_TELEMETRY_FLUSH_SEC)) float_t  TELEMETRY_FLUSH_SEC;

/// @brief Field gCustomMapDownloadMetrics, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gCustomMapDownloadMetrics, put=setStaticF_gCustomMapDownloadMetrics)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gCustomMapDownloadMetrics;

/// @brief Field gCustomMapPerfArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gCustomMapPerfArgs, put=setStaticF_gCustomMapPerfArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gCustomMapPerfArgs;

/// @brief Field gCustomMapRegistryMetrics, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gCustomMapRegistryMetrics, put=setStaticF_gCustomMapRegistryMetrics)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gCustomMapRegistryMetrics;

/// @brief Field gCustomMapTrackingMetrics, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gCustomMapTrackingMetrics, put=setStaticF_gCustomMapTrackingMetrics)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gCustomMapTrackingMetrics;

/// @brief Field gCustomMapZoneEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gCustomMapZoneEventArgs, put=setStaticF_gCustomMapZoneEventArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gCustomMapZoneEventArgs;

/// @brief Field gGameModeStartEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gGameModeStartEventArgs, put=setStaticF_gGameModeStartEventArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gGameModeStartEventArgs;

/// @brief Field gGhostReactorChaosJuiceCollectedArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorChaosJuiceCollectedArgs, put=setStaticF_gGhostReactorChaosJuiceCollectedArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorChaosJuiceCollectedArgs;

/// @brief Field gGhostReactorChaosSeedStartArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorChaosSeedStartArgs, put=setStaticF_gGhostReactorChaosSeedStartArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorChaosSeedStartArgs;

/// @brief Field gGhostReactorCreditsRefillPurchasedArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorCreditsRefillPurchasedArgs, put=setStaticF_gGhostReactorCreditsRefillPurchasedArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorCreditsRefillPurchasedArgs;

/// @brief Field gGhostReactorFloorEndArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorFloorEndArgs, put=setStaticF_gGhostReactorFloorEndArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorFloorEndArgs;

/// @brief Field gGhostReactorFloorStartArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorFloorStartArgs, put=setStaticF_gGhostReactorFloorStartArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorFloorStartArgs;

/// @brief Field gGhostReactorOverdrivePurchasedArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorOverdrivePurchasedArgs, put=setStaticF_gGhostReactorOverdrivePurchasedArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorOverdrivePurchasedArgs;

/// @brief Field gGhostReactorPodUpgradePurchasedArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorPodUpgradePurchasedArgs, put=setStaticF_gGhostReactorPodUpgradePurchasedArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorPodUpgradePurchasedArgs;

/// @brief Field gGhostReactorRankUpArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorRankUpArgs, put=setStaticF_gGhostReactorRankUpArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorRankUpArgs;

/// @brief Field gGhostReactorShiftEndArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorShiftEndArgs, put=setStaticF_gGhostReactorShiftEndArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorShiftEndArgs;

/// @brief Field gGhostReactorShiftStartArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorShiftStartArgs, put=setStaticF_gGhostReactorShiftStartArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorShiftStartArgs;

/// @brief Field gGhostReactorToolPurchasedArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorToolPurchasedArgs, put=setStaticF_gGhostReactorToolPurchasedArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorToolPurchasedArgs;

/// @brief Field gGhostReactorToolUnlockArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorToolUnlockArgs, put=setStaticF_gGhostReactorToolUnlockArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorToolUnlockArgs;

/// @brief Field gGhostReactorToolUpgradeArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gGhostReactorToolUpgradeArgs, put=setStaticF_gGhostReactorToolUpgradeArgs)) ::GlobalNamespace::GhostReactorTelemetryData  gGhostReactorToolUpgradeArgs;

/// @brief Field gKidEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gKidEventArgs, put=setStaticF_gKidEventArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gKidEventArgs;

/// @brief Field gListPoolMothership, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gListPoolMothership, put=setStaticF_gListPoolMothership)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>*  gListPoolMothership;

/// @brief Field gNotifEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gNotifEventArgs, put=setStaticF_gNotifEventArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gNotifEventArgs;

/// @brief Field gPlayFabAuth, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gPlayFabAuth, put=setStaticF_gPlayFabAuth)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  gPlayFabAuth;

/// @brief Field gShopEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gShopEventArgs, put=setStaticF_gShopEventArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gShopEventArgs;

/// @brief Field gSingleItemBuilderParam, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSingleItemBuilderParam, put=setStaticF_gSingleItemBuilderParam)) ::ArrayW<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>  gSingleItemBuilderParam;

/// @brief Field gSingleItemParam, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSingleItemParam, put=setStaticF_gSingleItemParam)) ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>  gSingleItemParam;

/// @brief Field gSuperInfectionArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gSuperInfectionArgs, put=setStaticF_gSuperInfectionArgs)) ::GlobalNamespace::SuperInfectionTelemetryData  gSuperInfectionArgs;

/// @brief Field gSuperInfectionPurchaseArgs, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_gSuperInfectionPurchaseArgs, put=setStaticF_gSuperInfectionPurchaseArgs)) ::GlobalNamespace::SuperInfectionTelemetryData  gSuperInfectionPurchaseArgs;

/// @brief Field gWamGameStartArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gWamGameStartArgs, put=setStaticF_gWamGameStartArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gWamGameStartArgs;

/// @brief Field gWamLevelEndArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gWamLevelEndArgs, put=setStaticF_gWamLevelEndArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gWamLevelEndArgs;

/// @brief Field gZoneEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gZoneEventArgs, put=setStaticF_gZoneEventArgs)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  gZoneEventArgs;

/// @brief Field nextStayTimestamp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nextStayTimestamp, put=setStaticF_nextStayTimestamp)) float_t  nextStayTimestamp;

/// @brief Field telemetryEventsQueueMothership, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_telemetryEventsQueueMothership, put=setStaticF_telemetryEventsQueueMothership)) ::System::Collections::Concurrent::ConcurrentQueue_1<::GlobalNamespace::MothershipAnalyticsEvent*>*  telemetryEventsQueueMothership;

/// @brief Method BuilderItemsToStrings, addr 0x594207c, size 0x330, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> BuilderItemsToStrings(::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  items) ;

/// @brief Method EnqueueTelemetryEvent, addr 0x593ff10, size 0x310, virtual false, abstract: false, final false
static inline void EnqueueTelemetryEvent(::StringW  eventName, ::System::Object*  content, /* [CanBeNull] */ ::ArrayW<::StringW>  customTags) ;

/// @brief Method EnqueueZoneEvent, addr 0x5940fb4, size 0x3f8, virtual false, abstract: false, final false
static inline void EnqueueZoneEvent(::GlobalNamespace::ZoneDef*  zone, ::GlobalNamespace::GTZoneEventType  zoneEventType) ;

/// @brief Method FetchItemArgs, addr 0x5941ad4, size 0x330, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> FetchItemArgs(::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  items) ;

/// @brief Method FlushMothershipTelemetry, addr 0x5940390, size 0x5e4, virtual false, abstract: false, final false
static inline void FlushMothershipTelemetry() ;

/// @brief Method GetEventListForArrayMothership, addr 0x5940974, size 0x288, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>* GetEventListForArrayMothership(::ArrayW<::GlobalNamespace::MothershipAnalyticsEvent*>  array, int32_t  count) ;

/// @brief Method GhostReactorChaosJuiceCollected, addr 0x5945704, size 0x1b4, virtual false, abstract: false, final false
static inline void GhostReactorChaosJuiceCollected(::StringW  gameId, int32_t  juiceCollected, int32_t  coresProcessedByOverdrive) ;

/// @brief Method GhostReactorChaosSeedStart, addr 0x59454f0, size 0x214, virtual false, abstract: false, final false
static inline void GhostReactorChaosSeedStart(::StringW  gameId, ::StringW  unlockTime, int32_t  chaosSeedsInQueue, int32_t  floor, ::StringW  preset) ;

/// @brief Method GhostReactorCreditsRefillPurchased, addr 0x5945ad4, size 0x21c, virtual false, abstract: false, final false
static inline void GhostReactorCreditsRefillPurchased(::StringW  gameId, int32_t  shinyRocksSpent, int32_t  finalCredits, int32_t  floor, ::StringW  preset) ;

/// @brief Method GhostReactorFloorComplete, addr 0x5944318, size 0x708, virtual false, abstract: false, final false
static inline void GhostReactorFloorComplete(::StringW  gameId, int32_t  finalCores, int32_t  totalCoresCollectedByPlayer, int32_t  totalCoresCollectedByGroup, int32_t  totalCoresSpentByPlayer, int32_t  totalCoresSpentByGroup, int32_t  gatesUnlocked, int32_t  deaths, ::System::Collections::Generic::List_1<::StringW>*  itemsPurchased, int32_t  shiftCut, bool  isShiftActuallyEnding, float_t  timeIntoShiftAtJoin, float_t  playDuration, bool  wasPlayerInAtStart, ::GlobalNamespace::ZoneClearReason  zoneClearReason, int32_t  maxNumberOfPlayersInShift, int32_t  endNumberOfPlayers, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  itemTypesHeldThisShift, int32_t  revives, int32_t  floor, ::StringW  preset, ::StringW  modifier, int32_t  chaosSeedsCollected, bool  objectivesCompleted, ::StringW  section, int32_t  xpGained) ;

/// @brief Method GhostReactorFloorStart, addr 0x5943f8c, size 0x38c, virtual false, abstract: false, final false
static inline void GhostReactorFloorStart(::StringW  gameId, int32_t  initialCores, float_t  timeIntoShift, bool  wasPlayerInAtStart, int32_t  numPlayers, ::StringW  playerRank, int32_t  floor, ::StringW  preset, ::StringW  modifier) ;

/// @brief Method GhostReactorGameEnd, addr 0x59439a4, size 0x5e8, virtual false, abstract: false, final false
static inline void GhostReactorGameEnd(::StringW  gameId, int32_t  finalCores, int32_t  totalCoresCollectedByPlayer, int32_t  totalCoresCollectedByGroup, int32_t  totalCoresSpentByPlayer, int32_t  totalCoresSpentByGroup, int32_t  gatesUnlocked, int32_t  deaths, ::System::Collections::Generic::List_1<::StringW>*  itemsPurchased, int32_t  shiftCut, bool  isShiftActuallyEnding, float_t  timeIntoShiftAtJoin, float_t  playDuration, bool  wasPlayerInAtStart, ::GlobalNamespace::ZoneClearReason  zoneClearReason, int32_t  maxNumberOfPlayersInShift, int32_t  endNumberOfPlayers, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  itemTypesHeldThisShift, int32_t  revives, int32_t  numShiftsPlayed) ;

/// @brief Method GhostReactorOverdrivePurchased, addr 0x59458b8, size 0x21c, virtual false, abstract: false, final false
static inline void GhostReactorOverdrivePurchased(::StringW  gameId, int32_t  shinyRocksUsed, int32_t  chaosSeedsInQueue, int32_t  floor, ::StringW  preset) ;

/// @brief Method GhostReactorPodUpgradePurchased, addr 0x5944fec, size 0x21c, virtual false, abstract: false, final false
static inline void GhostReactorPodUpgradePurchased(::StringW  gameId, ::StringW  toolName, int32_t  level, int32_t  shinyRocksSpent, int32_t  juiceSpent) ;

/// @brief Method GhostReactorRankUp, addr 0x5944ca0, size 0x1dc, virtual false, abstract: false, final false
static inline void GhostReactorRankUp(::StringW  gameId, ::StringW  newRank, int32_t  floor, ::StringW  preset) ;

/// @brief Method GhostReactorShiftStart, addr 0x5943678, size 0x32c, virtual false, abstract: false, final false
static inline void GhostReactorShiftStart(::StringW  gameId, int32_t  initialCores, float_t  timeIntoShift, bool  wasPlayerInAtStart, int32_t  numPlayers, int32_t  floorJoined, ::StringW  playerRank) ;

/// @brief Method GhostReactorToolPurchased, addr 0x5944a20, size 0x280, virtual false, abstract: false, final false
static inline void GhostReactorToolPurchased(::StringW  gameId, ::StringW  toolName, int32_t  toolLevel, int32_t  coresSpent, int32_t  shinyRocksSpent, int32_t  floor, ::StringW  preset) ;

/// @brief Method GhostReactorToolUnlock, addr 0x5944e7c, size 0x170, virtual false, abstract: false, final false
static inline void GhostReactorToolUnlock(::StringW  gameId, ::StringW  toolName) ;

/// @brief Method GhostReactorToolUpgrade, addr 0x5945208, size 0x2e8, virtual false, abstract: false, final false
static inline void GhostReactorToolUpgrade(::StringW  gameId, ::StringW  upgradeType, ::StringW  toolName, int32_t  newLevel, int32_t  juiceSpent, int32_t  griftSpent, int32_t  coresSpent, int32_t  floor, ::StringW  preset) ;

/// @brief Method IsConnected, addr 0x5940bfc, size 0x154, virtual false, abstract: false, final false
static inline bool IsConnected() ;

/// @brief Method IsConnectedIgnoreRoom, addr 0x5940e50, size 0x100, virtual false, abstract: false, final false
static inline bool IsConnectedIgnoreRoom() ;

/// @brief Method IsConnectedToPlayfab, addr 0x5940d50, size 0x100, virtual false, abstract: false, final false
static inline bool IsConnectedToPlayfab() ;

/// @brief Method PlayFabUserId, addr 0x5940f50, size 0x64, virtual false, abstract: false, final false
static inline ::StringW PlayFabUserId() ;

/// @brief Method PostBuilderKioskEvent, addr 0x5941e04, size 0xe4, virtual false, abstract: false, final false
static inline void PostBuilderKioskEvent(::GlobalNamespace::VRRig*  playerRig, ::GlobalNamespace::GTShopEventType  shopEvent, ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  item) ;

/// @brief Method PostBuilderKioskEvent, addr 0x5941ee8, size 0x194, virtual false, abstract: false, final false
static inline void PostBuilderKioskEvent(::GlobalNamespace::VRRig*  playerRig, ::GlobalNamespace::GTShopEventType  shopEvent, ::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  items) ;

/// @brief Method PostCustomMapDownloadEvent, addr 0x59431d0, size 0x4, virtual false, abstract: false, final false
static inline void PostCustomMapDownloadEvent(::StringW  mapName, int64_t  mapModId, ::StringW  mapCreatorUsername) ;

/// @brief Method PostCustomMapPerformance, addr 0x5942b2c, size 0x334, virtual false, abstract: false, final false
static inline void PostCustomMapPerformance(::StringW  mapName, int64_t  mapModId, int32_t  lowestFPS, int32_t  lowestDC, int32_t  lowestPC, int32_t  avgFPS, int32_t  avgDC, int32_t  avgPC, int32_t  highestFPS, int32_t  highestDC, int32_t  highestPC, int32_t  playtime) ;

/// @brief Method PostCustomMapRegistryEvent, addr 0x59431d4, size 0x4a4, virtual false, abstract: false, final false
static inline void PostCustomMapRegistryEvent(int64_t  mapModId, ::StringW  mapName, int64_t  creatorId, ::StringW  creatorUsername, ::System::DateTime  dateLive, ::System::DateTime  dateUpdated, ::ArrayW<::StringW>  tags, int32_t  mapSupportVersion, int32_t  maxPlayers, bool  hasCustomGameMode, int32_t  gravityZoneCount, int32_t  sizeChangerCount, int32_t  handHoldCount, int32_t  mapperAssetCount) ;

/// @brief Method PostCustomMapTracking, addr 0x5942e60, size 0x370, virtual false, abstract: false, final false
static inline void PostCustomMapTracking(::StringW  mapName, int64_t  mapModId, ::StringW  mapCreatorUsername, int32_t  minPlayers, int32_t  maxPlayers, int32_t  playtime, bool  privateRoom) ;

/// @brief Method PostCustomMapZoneEvent, addr 0x59413ac, size 0x328, virtual false, abstract: false, final false
static inline bool PostCustomMapZoneEvent(::GlobalNamespace::GTZoneEventType  zoneEventType, int64_t  mapId, ::StringW  mapSource) ;

/// @brief Method PostGameModeEvent, addr 0x59416d4, size 0x194, virtual false, abstract: false, final false
static inline void PostGameModeEvent(::GlobalNamespace::GTGameModeEventType  gameModeEvent, ::GorillaGameModes::GameModeType  gameMode) ;

/// @brief Method PostKidEvent, addr 0x59423ac, size 0x2d4, virtual false, abstract: false, final false
static inline void PostKidEvent(bool  joinGroupsEnabled, bool  voiceChatEnabled, bool  customUsernamesEnabled, ::KID::Model::AgeStatusType  ageCategory, ::GlobalNamespace::GTKidEventType  kidEvent) ;

/// @brief Method PostNotificationEvent, addr 0x5946d78, size 0x110, virtual false, abstract: false, final false
static inline void PostNotificationEvent(::StringW  notificationType) ;

/// @brief Method PostShopEvent, addr 0x5941868, size 0xd8, virtual false, abstract: false, final false
static inline void PostShopEvent(::GlobalNamespace::VRRig*  playerRig, ::GlobalNamespace::GTShopEventType  shopEvent, ::GlobalNamespace::CosmeticsController_CosmeticItem  item) ;

/// @brief Method PostShopEvent, addr 0x5941940, size 0x194, virtual false, abstract: false, final false
static inline void PostShopEvent(::GlobalNamespace::VRRig*  playerRig, ::GlobalNamespace::GTShopEventType  shopEvent, ::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  items) ;

/// @brief Method SerializeCustomTags, addr 0x5940220, size 0x170, virtual false, abstract: false, final false
static inline ::StringW SerializeCustomTags(::ArrayW<::StringW>  customTags) ;

/// @brief Method SuperInfectionEvent, addr 0x5946b20, size 0x258, virtual false, abstract: false, final false
static inline void SuperInfectionEvent(::StringW  purchaseType, int32_t  shinyRockCost, int32_t  techPointsPurchased, float_t  totalPlayTime, float_t  roomPlayTime, float_t  sessionPlayTime) ;

/// @brief Method SuperInfectionEvent, addr 0x5945cf0, size 0xe30, virtual false, abstract: false, final false
static inline void SuperInfectionEvent(bool  roomDisconnect, float_t  totalPlayTime, float_t  roomPlayTime, float_t  sessionPlayTime, float_t  intervalPlayTime, float_t  terminalTotalTime, float_t  terminalIntervalTime, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  timeUsingGadgetsTotal, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  timeUsingGadgetsInterval, float_t  timeUsingOwnGadgetsTotal, float_t  timeUsingOwnGadgetsInterval, float_t  timeUsingOthersGadgetsTotal, float_t  timeUsingOthersGadgetsInterval, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  tagsUsingGadgetsTotal, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  tagsUsingGadgetsInterval, int32_t  tagsHoldingOwnGadgetsTotal, int32_t  tagsHoldingOwnGadgetsInterval, int32_t  tagsHoldingOthersGadgetsTotal, int32_t  tagsHoldingOthersGadgetsInterval, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  resourcesGatheredTotal, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  resourcesGatheredInterval, int32_t  roundsPlayedTotal, int32_t  roundsPlayedInterval, ::ArrayW<::ArrayW<bool>>  unlockedNodes, int32_t  numberOfPlayers) ;

/// @brief Method WamGameStart, addr 0x5942680, size 0x164, virtual false, abstract: false, final false
static inline void WamGameStart(::StringW  playerId, ::StringW  gameId, ::StringW  machineId) ;

/// @brief Method WamLevelEnd, addr 0x59427e4, size 0x348, virtual false, abstract: false, final false
static inline void WamLevelEnd(::StringW  playerId, int32_t  gameId, ::StringW  machineId, int32_t  currentLevelNumber, int32_t  levelGoodMolesShown, int32_t  levelHazardMolesShown, int32_t  levelMinScore, int32_t  currentScore, int32_t  levelHazardMolesHit, ::StringW  currentGameResult) ;

static inline float_t getStaticF_TELEMETRY_FLUSH_SEC() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gCustomMapDownloadMetrics() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gCustomMapPerfArgs() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gCustomMapRegistryMetrics() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gCustomMapTrackingMetrics() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gCustomMapZoneEventArgs() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gGameModeStartEventArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorChaosJuiceCollectedArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorChaosSeedStartArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorCreditsRefillPurchasedArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorFloorEndArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorFloorStartArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorOverdrivePurchasedArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorPodUpgradePurchasedArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorRankUpArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorShiftEndArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorShiftStartArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorToolPurchasedArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorToolUnlockArgs() ;

static inline ::GlobalNamespace::GhostReactorTelemetryData getStaticF_gGhostReactorToolUpgradeArgs() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gKidEventArgs() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>* getStaticF_gListPoolMothership() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gNotifEventArgs() ;

static inline ::UnityW<::GorillaNetworking::PlayFabAuthenticator> getStaticF_gPlayFabAuth() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gShopEventArgs() ;

static inline ::ArrayW<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> getStaticF_gSingleItemBuilderParam() ;

static inline ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem> getStaticF_gSingleItemParam() ;

static inline ::GlobalNamespace::SuperInfectionTelemetryData getStaticF_gSuperInfectionArgs() ;

static inline ::GlobalNamespace::SuperInfectionTelemetryData getStaticF_gSuperInfectionPurchaseArgs() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gWamGameStartArgs() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gWamLevelEndArgs() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_gZoneEventArgs() ;

static inline float_t getStaticF_nextStayTimestamp() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::GlobalNamespace::MothershipAnalyticsEvent*>* getStaticF_telemetryEventsQueueMothership() ;

static inline void setStaticF_TELEMETRY_FLUSH_SEC(float_t  value) ;

static inline void setStaticF_gCustomMapDownloadMetrics(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gCustomMapPerfArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gCustomMapRegistryMetrics(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gCustomMapTrackingMetrics(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gCustomMapZoneEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gGameModeStartEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gGhostReactorChaosJuiceCollectedArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorChaosSeedStartArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorCreditsRefillPurchasedArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorFloorEndArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorFloorStartArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorOverdrivePurchasedArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorPodUpgradePurchasedArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorRankUpArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorShiftEndArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorShiftStartArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorToolPurchasedArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorToolUnlockArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gGhostReactorToolUpgradeArgs(::GlobalNamespace::GhostReactorTelemetryData  value) ;

static inline void setStaticF_gKidEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gListPoolMothership(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>*  value) ;

static inline void setStaticF_gNotifEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gPlayFabAuth(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

static inline void setStaticF_gShopEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gSingleItemBuilderParam(::ArrayW<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>  value) ;

static inline void setStaticF_gSingleItemParam(::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>  value) ;

static inline void setStaticF_gSuperInfectionArgs(::GlobalNamespace::SuperInfectionTelemetryData  value) ;

static inline void setStaticF_gSuperInfectionPurchaseArgs(::GlobalNamespace::SuperInfectionTelemetryData  value) ;

static inline void setStaticF_gWamGameStartArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gWamLevelEndArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_gZoneEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_nextStayTimestamp(float_t  value) ;

static inline void setStaticF_telemetryEventsQueueMothership(::System::Collections::Concurrent::ConcurrentQueue_1<::GlobalNamespace::MothershipAnalyticsEvent*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTelemetry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTelemetry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTelemetry(GorillaTelemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTelemetry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTelemetry(GorillaTelemetry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2272};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaTelemetry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTelemetry/<>c
class CORDL_TYPE GorillaTelemetry___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GorillaTelemetry___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*  __9__10_0;

/// @brief Field <>9__10_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_1, put=setStaticF___9__10_1)) ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  __9__10_1;

static inline ::GlobalNamespace::GorillaTelemetry___c* New_ctor() ;

/// @brief Method <FlushMothershipTelemetry>b__10_0, addr 0x59470b4, size 0x4, virtual false, abstract: false, final false
inline void _FlushMothershipTelemetry_b__10_0(::GlobalNamespace::MothershipWriteEventsResponse*  resp) ;

/// @brief Method <FlushMothershipTelemetry>b__10_1, addr 0x59470b8, size 0x4, virtual false, abstract: false, final false
inline void _FlushMothershipTelemetry_b__10_1(::GlobalNamespace::MothershipError*  err, int32_t  i) ;

/// @brief Method .ctor, addr 0x59470ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GorillaTelemetry___c* getStaticF___9() ;

static inline ::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>* getStaticF___9__10_0() ;

static inline ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>* getStaticF___9__10_1() ;

static inline void setStaticF___9(::GlobalNamespace::GorillaTelemetry___c*  value) ;

static inline void setStaticF___9__10_0(::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*  value) ;

static inline void setStaticF___9__10_1(::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTelemetry___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTelemetry___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTelemetry___c(GorillaTelemetry___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTelemetry___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTelemetry___c(GorillaTelemetry___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaTelemetry___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTelemetry/BatchRunner
class CORDL_TYPE GorillaTelemetry_BatchRunner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__0 = ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0;

static inline ::GlobalNamespace::GorillaTelemetry_BatchRunner* New_ctor() ;

/// [IteratorStateMachine(typeof(GorillaTelemetry::BatchRunner::<Start>d__0))]
/// @brief Method Start, addr 0x5946e88, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

/// @brief Method .ctor, addr 0x5946f08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTelemetry_BatchRunner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTelemetry_BatchRunner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTelemetry_BatchRunner(GorillaTelemetry_BatchRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTelemetry_BatchRunner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTelemetry_BatchRunner(GorillaTelemetry_BatchRunner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2270};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaTelemetry_BatchRunner) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTelemetry/BatchRunner/<Start>d__0
class CORDL_TYPE BatchRunner_GorillaTelemetry__Start_d__0 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <start>5__2, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__start_5__2, put=__cordl_internal_set__start_5__2)) float_t  _start_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5946f14, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5946ffc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5947004, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x594703c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5946f10, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get__start_5__2() const;

constexpr float_t& __cordl_internal_get__start_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__start_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5946ee0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatchRunner_GorillaTelemetry__Start_d__0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatchRunner_GorillaTelemetry__Start_d__0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BatchRunner_GorillaTelemetry__Start_d__0(BatchRunner_GorillaTelemetry__Start_d__0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatchRunner_GorillaTelemetry__Start_d__0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatchRunner_GorillaTelemetry__Start_d__0(BatchRunner_GorillaTelemetry__Start_d__0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2269};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <start>5__2, offset: 0x20, size: 0x4, def value: None
 float_t  ____start_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0, ____start_5__2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTelemetry/k
class CORDL_TYPE GorillaTelemetry_k : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTelemetry_k() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTelemetry_k", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTelemetry_k(GorillaTelemetry_k && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTelemetry_k", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTelemetry_k(GorillaTelemetry_k const& ) = delete;

/// @brief Field AgeCategory offset 0xffffffff size 0x8
static constexpr ::ConstString  AgeCategory{u"AgeCategory"};

/// @brief Field AverageDrawCalls offset 0xffffffff size 0x8
static constexpr ::ConstString  AverageDrawCalls{u"AverageDrawCalls"};

/// @brief Field AverageFPS offset 0xffffffff size 0x8
static constexpr ::ConstString  AverageFPS{u"AverageFPS"};

/// @brief Field AveragePlayerCount offset 0xffffffff size 0x8
static constexpr ::ConstString  AveragePlayerCount{u"AveragePlayerCount"};

/// @brief Field CreatorId offset 0xffffffff size 0x8
static constexpr ::ConstString  CreatorId{u"CreatorId"};

/// @brief Field CreatorUsername offset 0xffffffff size 0x8
static constexpr ::ConstString  CreatorUsername{u"CreatorUsername"};

/// @brief Field CustomMapCreator offset 0xffffffff size 0x8
static constexpr ::ConstString  CustomMapCreator{u"CustomMapCreator"};

/// @brief Field CustomMapModId offset 0xffffffff size 0x8
static constexpr ::ConstString  CustomMapModId{u"CustomMapModId"};

/// @brief Field CustomMapName offset 0xffffffff size 0x8
static constexpr ::ConstString  CustomMapName{u"CustomMapName"};

/// @brief Field CustomMapRegistry offset 0xffffffff size 0x8
static constexpr ::ConstString  CustomMapRegistry{u"CustomMapRegistry"};

/// @brief Field CustomUsernameEnabled offset 0xffffffff size 0x8
static constexpr ::ConstString  CustomUsernameEnabled{u"CustomUsernameEnabled"};

/// @brief Field EventType offset 0xffffffff size 0x8
static constexpr ::ConstString  EventType{u"EventType"};

/// @brief Field HighestFPS offset 0xffffffff size 0x8
static constexpr ::ConstString  HighestFPS{u"HighestFPS"};

/// @brief Field HighestFPSDrawCalls offset 0xffffffff size 0x8
static constexpr ::ConstString  HighestFPSDrawCalls{u"HighestFPSDrawCalls"};

/// @brief Field HighestFPSPlayerCount offset 0xffffffff size 0x8
static constexpr ::ConstString  HighestFPSPlayerCount{u"HighestFPSPlayerCount"};

/// @brief Field IsPrivateRoom offset 0xffffffff size 0x8
static constexpr ::ConstString  IsPrivateRoom{u"IsPrivateRoom"};

/// @brief Field Items offset 0xffffffff size 0x8
static constexpr ::ConstString  Items{u"Items"};

/// @brief Field JoinGroups offset 0xffffffff size 0x8
static constexpr ::ConstString  JoinGroups{u"JoinGroups"};

/// @brief Field LowestFPS offset 0xffffffff size 0x8
static constexpr ::ConstString  LowestFPS{u"LowestFPS"};

/// @brief Field LowestFPSDrawCalls offset 0xffffffff size 0x8
static constexpr ::ConstString  LowestFPSDrawCalls{u"LowestFPSDrawCalls"};

/// @brief Field LowestFPSPlayerCount offset 0xffffffff size 0x8
static constexpr ::ConstString  LowestFPSPlayerCount{u"LowestFPSPlayerCount"};

/// @brief Field MapDateLive offset 0xffffffff size 0x8
static constexpr ::ConstString  MapDateLive{u"MapDateLive"};

/// @brief Field MapDateUpdated offset 0xffffffff size 0x8
static constexpr ::ConstString  MapDateUpdated{u"MapDateUpdated"};

/// @brief Field MapGravityZoneCount offset 0xffffffff size 0x8
static constexpr ::ConstString  MapGravityZoneCount{u"MapGravityZoneCount"};

/// @brief Field MapHandHoldCount offset 0xffffffff size 0x8
static constexpr ::ConstString  MapHandHoldCount{u"MapHandHoldCount"};

/// @brief Field MapHasCustomGameMode offset 0xffffffff size 0x8
static constexpr ::ConstString  MapHasCustomGameMode{u"MapHasCustomGameMode"};

/// @brief Field MapId offset 0xffffffff size 0x8
static constexpr ::ConstString  MapId{u"MapId"};

/// @brief Field MapMapperAssetCount offset 0xffffffff size 0x8
static constexpr ::ConstString  MapMapperAssetCount{u"MapMapperAssetCount"};

/// @brief Field MapMaxPlayers offset 0xffffffff size 0x8
static constexpr ::ConstString  MapMaxPlayers{u"MapMaxPlayers"};

/// @brief Field MapSizeChangerCount offset 0xffffffff size 0x8
static constexpr ::ConstString  MapSizeChangerCount{u"MapSizeChangerCount"};

/// @brief Field MapSource offset 0xffffffff size 0x8
static constexpr ::ConstString  MapSource{u"MapSource"};

/// @brief Field MapSupportVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  MapSupportVersion{u"MapSupportVersion"};

/// @brief Field MapTags offset 0xffffffff size 0x8
static constexpr ::ConstString  MapTags{u"MapTags"};

/// @brief Field MaxPlayerCount offset 0xffffffff size 0x8
static constexpr ::ConstString  MaxPlayerCount{u"MaxPlayerCount"};

/// @brief Field MinPlayerCount offset 0xffffffff size 0x8
static constexpr ::ConstString  MinPlayerCount{u"MinPlayerCount"};

/// @brief Field NOTHING offset 0xffffffff size 0x8
static constexpr ::ConstString  NOTHING{u"NOTHING"};

/// @brief Field PlaytimeInSeconds offset 0xffffffff size 0x8
static constexpr ::ConstString  PlaytimeInSeconds{u"PlaytimeInSeconds"};

/// @brief Field PlaytimeOnMap offset 0xffffffff size 0x8
static constexpr ::ConstString  PlaytimeOnMap{u"PlaytimeOnMap"};

/// @brief Field PrivateRoom offset 0xffffffff size 0x8
static constexpr ::ConstString  PrivateRoom{u"PrivateRoom"};

/// @brief Field SubZoneId offset 0xffffffff size 0x8
static constexpr ::ConstString  SubZoneId{u"SubZoneId"};

/// @brief Field User offset 0xffffffff size 0x8
static constexpr ::ConstString  User{u"User"};

/// @brief Field VoiceChatEnabled offset 0xffffffff size 0x8
static constexpr ::ConstString  VoiceChatEnabled{u"VoiceChatEnabled"};

/// @brief Field WamGameId offset 0xffffffff size 0x8
static constexpr ::ConstString  WamGameId{u"WamGameId"};

/// @brief Field WamGameState offset 0xffffffff size 0x8
static constexpr ::ConstString  WamGameState{u"WamGameState"};

/// @brief Field WamGoodMolesShown offset 0xffffffff size 0x8
static constexpr ::ConstString  WamGoodMolesShown{u"WamGoodMolesShown"};

/// @brief Field WamHazardMolesHit offset 0xffffffff size 0x8
static constexpr ::ConstString  WamHazardMolesHit{u"WamHazardMolesHit"};

/// @brief Field WamHazardMolesShown offset 0xffffffff size 0x8
static constexpr ::ConstString  WamHazardMolesShown{u"WamHazardMolesShown"};

/// @brief Field WamLevelMinScore offset 0xffffffff size 0x8
static constexpr ::ConstString  WamLevelMinScore{u"WamLevelMinScore"};

/// @brief Field WamLevelScore offset 0xffffffff size 0x8
static constexpr ::ConstString  WamLevelScore{u"WamLevelScore"};

/// @brief Field WamMLevelNumber offset 0xffffffff size 0x8
static constexpr ::ConstString  WamMLevelNumber{u"WamMLevelNumber"};

/// @brief Field WamMachineId offset 0xffffffff size 0x8
static constexpr ::ConstString  WamMachineId{u"WamMachineId"};

/// @brief Field ZoneId offset 0xffffffff size 0x8
static constexpr ::ConstString  ZoneId{u"ZoneId"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2268};

/// @brief Field game_mode offset 0xffffffff size 0x8
static constexpr ::ConstString  game_mode{u"game_mode"};

/// @brief Field game_mode_played_event offset 0xffffffff size 0x8
static constexpr ::ConstString  game_mode_played_event{u"game_mode_played_event"};

/// @brief Field telemetry_ggwp_event offset 0xffffffff size 0x8
static constexpr ::ConstString  telemetry_ggwp_event{u"telemetry_ggwp_event"};

/// @brief Field telemetry_kid_event offset 0xffffffff size 0x8
static constexpr ::ConstString  telemetry_kid_event{u"telemetry_kid_event"};

/// @brief Field telemetry_shop_event offset 0xffffffff size 0x8
static constexpr ::ConstString  telemetry_shop_event{u"telemetry_shop_event"};

/// @brief Field telemetry_wam_gameStartEvent offset 0xffffffff size 0x8
static constexpr ::ConstString  telemetry_wam_gameStartEvent{u"telemetry_wam_gameStartEvent"};

/// @brief Field telemetry_wam_levelEndEvent offset 0xffffffff size 0x8
static constexpr ::ConstString  telemetry_wam_levelEndEvent{u"telemetry_wam_levelEndEvent"};

/// @brief Field telemetry_zone_event offset 0xffffffff size 0x8
static constexpr ::ConstString  telemetry_zone_event{u"telemetry_zone_event"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaTelemetry_k) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
