#pragma once
// IWYU pragma private; include "GlobalNamespace/SIProgression.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__QuestCategory_def.hpp"
#include "GlobalNamespace/zzzz__SIProgression_SINode_def.hpp"
#include "GlobalNamespace/zzzz__SIProgression_SIProgressionResourceCap_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIProgression)
namespace GlobalNamespace {
class GorillaQuestManager;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class ProgressionManager_UserQuestsStatusResponse;
}
namespace GlobalNamespace {
class RotatingQuest;
}
namespace GlobalNamespace {
struct SIProgression_SINode;
}
namespace GlobalNamespace {
struct SIProgression_SIProgressionResourceCap;
}
namespace GlobalNamespace {
class SIProgression_SIQuestsList;
}
namespace GlobalNamespace {
class SIProgression__TryClaimNewPlayerPackage_d__60;
}
namespace GlobalNamespace {
class SIProgression___c;
}
namespace GlobalNamespace {
class SIProgression___c__DisplayClass158_0;
}
namespace GlobalNamespace {
struct SIResource_LimitedDepositType;
}
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace GlobalNamespace {
struct SITechTreePageId;
}
namespace GlobalNamespace {
class SITechTreeSO;
}
namespace GlobalNamespace {
struct SIUpgradeType;
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
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SIProgression;
}
namespace GlobalNamespace {
class SIProgression_SIQuestsList;
}
namespace GlobalNamespace {
class SIProgression__TryClaimNewPlayerPackage_d__60;
}
namespace GlobalNamespace {
class SIProgression___c;
}
namespace GlobalNamespace {
class SIProgression___c__DisplayClass158_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIProgression*);
MARK_REF_T(::GlobalNamespace::SIProgression_SIQuestsList*);
MARK_REF_T(::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*);
MARK_REF_T(::GlobalNamespace::SIProgression___c*);
MARK_REF_T(::GlobalNamespace::SIProgression___c__DisplayClass158_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIProgression*, "", "SIProgression");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIProgression_SIQuestsList*, "", "SIProgression/SIQuestsList");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*, "", "SIProgression/<TryClaimNewPlayerPackage>d__60");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIProgression___c*, "", "SIProgression/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIProgression___c__DisplayClass158_0*, "", "SIProgression/<>c__DisplayClass158_0");
// [DefaultExecutionOrder(-100)]
// Dependencies QuestCategory, SIProgression::SINode, SIProgression::SIProgressionResourceCap, System.DateTime, System.TimeSpan, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIProgression
class CORDL_TYPE SIProgression : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SINode = ::GlobalNamespace::SIProgression_SINode;

using SIProgressionResourceCap = ::GlobalNamespace::SIProgression_SIProgressionResourceCap;

using SIQuestsList = ::GlobalNamespace::SIProgression_SIQuestsList;

using _TryClaimNewPlayerPackage_d__60 = ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60;

using __c = ::GlobalNamespace::SIProgression___c;

using __c__DisplayClass158_0 = ::GlobalNamespace::SIProgression___c__DisplayClass158_0;

 __declspec(property(get=get_ActiveQuestIds)) ::ArrayW<int32_t>  ActiveQuestIds;

 __declspec(property(get=get_ActiveQuestProgresses)) ::ArrayW<int32_t>  ActiveQuestProgresses;

/// @brief Field CROSSOVER_TIME_OF_DAY, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_CROSSOVER_TIME_OF_DAY, put=__cordl_internal_set_CROSSOVER_TIME_OF_DAY)) ::System::TimeSpan  CROSSOVER_TIME_OF_DAY;

/// @brief Field ClientReady, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClientReady, put=__cordl_internal_set_ClientReady)) bool  ClientReady;

 __declspec(property(get=get_DailyLimitedTurnedIn)) bool  DailyLimitedTurnedIn;

/// @brief Field OnClientReady, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientReady, put=__cordl_internal_set_OnClientReady)) ::System::Action*  OnClientReady;

/// @brief Field OnInventoryReady, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInventoryReady, put=__cordl_internal_set_OnInventoryReady)) ::System::Action*  OnInventoryReady;

/// @brief Field OnNodeUnlocked, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNodeUnlocked, put=__cordl_internal_set_OnNodeUnlocked)) ::System::Action_1<::GlobalNamespace::SIUpgradeType>*  OnNodeUnlocked;

/// @brief Field OnTreeReady, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTreeReady, put=__cordl_internal_set_OnTreeReady)) ::System::Action*  OnTreeReady;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::SIProgression>  _Instance_k__BackingField;

/// @brief Field _inventoryReady, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__inventoryReady, put=__cordl_internal_set__inventoryReady)) bool  _inventoryReady;

/// @brief Field _resourceToString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__resourceToString, put=setStaticF__resourceToString)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::StringW>*  _resourceToString;

/// @brief Field _startingPackageGranted, offset 0x1d1, size 0x1 
 __declspec(property(get=__cordl_internal_get__startingPackageGranted, put=__cordl_internal_set__startingPackageGranted)) bool  _startingPackageGranted;

/// @brief Field _treeReady, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__treeReady, put=__cordl_internal_set__treeReady)) bool  _treeReady;

/// @brief Field activeQuestCategories, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeQuestCategories, put=__cordl_internal_set_activeQuestCategories)) ::ArrayW<::GlobalNamespace::QuestCategory>  activeQuestCategories;

/// @brief Field activeQuestIds, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeQuestIds, put=__cordl_internal_set_activeQuestIds)) ::ArrayW<int32_t>  activeQuestIds;

/// @brief Field activeQuestIdsDiff, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeQuestIdsDiff, put=__cordl_internal_set_activeQuestIdsDiff)) ::ArrayW<int32_t>  activeQuestIdsDiff;

/// @brief Field activeQuestProgresses, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeQuestProgresses, put=__cordl_internal_set_activeQuestProgresses)) ::ArrayW<int32_t>  activeQuestProgresses;

/// @brief Field activeQuestProgressesDiff, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeQuestProgressesDiff, put=__cordl_internal_set_activeQuestProgressesDiff)) ::ArrayW<int32_t>  activeQuestProgressesDiff;

/// @brief Field activeTerminalTimeInterval, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeTerminalTimeInterval, put=__cordl_internal_set_activeTerminalTimeInterval)) float_t  activeTerminalTimeInterval;

/// @brief Field activeTerminalTimeTotal, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeTerminalTimeTotal, put=__cordl_internal_set_activeTerminalTimeTotal)) float_t  activeTerminalTimeTotal;

/// @brief Field bonusProgress, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_bonusProgress, put=__cordl_internal_set_bonusProgress)) int32_t  bonusProgress;

/// @brief Field bonusProgressDiff, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bonusProgressDiff, put=__cordl_internal_set_bonusProgressDiff)) int32_t  bonusProgressDiff;

/// @brief Field completedBonusPoints, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedBonusPoints, put=__cordl_internal_set_completedBonusPoints)) int32_t  completedBonusPoints;

/// @brief Field completedQuests, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedQuests, put=__cordl_internal_set_completedQuests)) int32_t  completedQuests;

/// @brief Field dailyLimitedTurnedIn, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get_dailyLimitedTurnedIn, put=__cordl_internal_set_dailyLimitedTurnedIn)) bool  dailyLimitedTurnedIn;

/// @brief Field emptyNode, offset 0xf0, size 0x28 
 __declspec(property(get=__cordl_internal_get_emptyNode, put=__cordl_internal_set_emptyNode)) ::GlobalNamespace::SIProgression_SINode  emptyNode;

/// @brief Field heldOrSnappedByGadgetPageType, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldOrSnappedByGadgetPageType, put=__cordl_internal_set_heldOrSnappedByGadgetPageType)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  heldOrSnappedByGadgetPageType;

/// @brief Field heldOrSnappedOthersGadgets, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_heldOrSnappedOthersGadgets, put=__cordl_internal_set_heldOrSnappedOthersGadgets)) int32_t  heldOrSnappedOthersGadgets;

/// @brief Field heldOrSnappedOwnGadgets, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_heldOrSnappedOwnGadgets, put=__cordl_internal_set_heldOrSnappedOwnGadgets)) int32_t  heldOrSnappedOwnGadgets;

/// @brief Field intervalPlayTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_intervalPlayTime, put=__cordl_internal_set_intervalPlayTime)) float_t  intervalPlayTime;

/// @brief Field lastDisconnectTelemetrySent, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDisconnectTelemetrySent, put=__cordl_internal_set_lastDisconnectTelemetrySent)) float_t  lastDisconnectTelemetrySent;

/// @brief Field lastQuestGrantTime, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastQuestGrantTime, put=__cordl_internal_set_lastQuestGrantTime)) ::System::DateTime  lastQuestGrantTime;

/// @brief Field lastQuestGrantTimeDiff, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastQuestGrantTimeDiff, put=__cordl_internal_set_lastQuestGrantTimeDiff)) ::System::DateTime  lastQuestGrantTimeDiff;

/// @brief Field lastStartingPackageAttemptStarted, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStartingPackageAttemptStarted, put=__cordl_internal_set_lastStartingPackageAttemptStarted)) float_t  lastStartingPackageAttemptStarted;

/// @brief Field lastTelemetrySent, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTelemetrySent, put=__cordl_internal_set_lastTelemetrySent)) float_t  lastTelemetrySent;

/// @brief Field limitedDepositTimeArray, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_limitedDepositTimeArray, put=__cordl_internal_set_limitedDepositTimeArray)) ::ArrayW<int32_t>  limitedDepositTimeArray;

/// @brief Field limitedDepositTimeDiff, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_limitedDepositTimeDiff, put=__cordl_internal_set_limitedDepositTimeDiff)) ::ArrayW<int32_t>  limitedDepositTimeDiff;

/// @brief Field minDisconnectTelemetryCooldown, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDisconnectTelemetryCooldown, put=__cordl_internal_set_minDisconnectTelemetryCooldown)) float_t  minDisconnectTelemetryCooldown;

/// @brief Field perCategoryQuestLimit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_perCategoryQuestLimit, put=__cordl_internal_set_perCategoryQuestLimit)) int32_t  perCategoryQuestLimit;

/// @brief Field questGrantRefreshCooldown, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_questGrantRefreshCooldown, put=__cordl_internal_set_questGrantRefreshCooldown)) int32_t  questGrantRefreshCooldown;

/// @brief Field questSourceList, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_questSourceList, put=__cordl_internal_set_questSourceList)) ::GlobalNamespace::SIProgression_SIQuestsList*  questSourceList;

/// @brief Field questsInitialized, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_questsInitialized, put=__cordl_internal_set_questsInitialized)) bool  questsInitialized;

/// @brief Field redeemingQuestInProgress, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_redeemingQuestInProgress, put=__cordl_internal_set_redeemingQuestInProgress)) ::ArrayW<bool>  redeemingQuestInProgress;

/// @brief Field resourceArrayDiff, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceArrayDiff, put=__cordl_internal_set_resourceArrayDiff)) ::ArrayW<int32_t>  resourceArrayDiff;

/// @brief Field resourceCaps, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceCaps, put=__cordl_internal_set_resourceCaps)) ::ArrayW<::GlobalNamespace::SIProgression_SIProgressionResourceCap>  resourceCaps;

/// @brief Field resourceCapsArray, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceCapsArray, put=__cordl_internal_set_resourceCapsArray)) ::ArrayW<int32_t>  resourceCapsArray;

/// @brief Field resourceDict, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceDict, put=__cordl_internal_set_resourceDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  resourceDict;

/// @brief Field resourcesCollectedInterval, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourcesCollectedInterval, put=__cordl_internal_set_resourcesCollectedInterval)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  resourcesCollectedInterval;

/// @brief Field resourcesCollectedTotal, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourcesCollectedTotal, put=__cordl_internal_set_resourcesCollectedTotal)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  resourcesCollectedTotal;

/// @brief Field roomPlayTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_roomPlayTime, put=__cordl_internal_set_roomPlayTime)) float_t  roomPlayTime;

/// @brief Field roundsPlayedInterval, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_roundsPlayedInterval, put=__cordl_internal_set_roundsPlayedInterval)) int32_t  roundsPlayedInterval;

/// @brief Field roundsPlayedTotal, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_roundsPlayedTotal, put=__cordl_internal_set_roundsPlayedTotal)) int32_t  roundsPlayedTotal;

/// @brief Field siNodes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_siNodes, put=__cordl_internal_set_siNodes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::SIProgression_SINode>*  siNodes;

/// @brief Field startingPackageBackupAttempts, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingPackageBackupAttempts, put=__cordl_internal_set_startingPackageBackupAttempts)) int32_t  startingPackageBackupAttempts;

/// @brief Field stashedBonusPoints, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_stashedBonusPoints, put=__cordl_internal_set_stashedBonusPoints)) int32_t  stashedBonusPoints;

/// @brief Field stashedBonusPointsDiff, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_stashedBonusPointsDiff, put=__cordl_internal_set_stashedBonusPointsDiff)) int32_t  stashedBonusPointsDiff;

/// @brief Field stashedQuests, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_stashedQuests, put=__cordl_internal_set_stashedQuests)) int32_t  stashedQuests;

/// @brief Field stashedQuestsDiff, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_stashedQuestsDiff, put=__cordl_internal_set_stashedQuestsDiff)) int32_t  stashedQuestsDiff;

/// @brief Field tagsHoldingOthersGadgetInterval, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagsHoldingOthersGadgetInterval, put=__cordl_internal_set_tagsHoldingOthersGadgetInterval)) int32_t  tagsHoldingOthersGadgetInterval;

/// @brief Field tagsHoldingOthersGadgetTotal, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagsHoldingOthersGadgetTotal, put=__cordl_internal_set_tagsHoldingOthersGadgetTotal)) int32_t  tagsHoldingOthersGadgetTotal;

/// @brief Field tagsHoldingOwnGadgetInterval, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagsHoldingOwnGadgetInterval, put=__cordl_internal_set_tagsHoldingOwnGadgetInterval)) int32_t  tagsHoldingOwnGadgetInterval;

/// @brief Field tagsHoldingOwnGadgetTotal, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagsHoldingOwnGadgetTotal, put=__cordl_internal_set_tagsHoldingOwnGadgetTotal)) int32_t  tagsHoldingOwnGadgetTotal;

/// @brief Field tagsUsingGadgetTypeInterval, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagsUsingGadgetTypeInterval, put=__cordl_internal_set_tagsUsingGadgetTypeInterval)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  tagsUsingGadgetTypeInterval;

/// @brief Field tagsUsingGadgetTypeTotal, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagsUsingGadgetTypeTotal, put=__cordl_internal_set_tagsUsingGadgetTypeTotal)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  tagsUsingGadgetTypeTotal;

/// @brief Field techTreeSO, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTreeSO, put=__cordl_internal_set_techTreeSO)) ::UnityW<::GlobalNamespace::SITechTreeSO>  techTreeSO;

/// @brief Field telemetryCooldown, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_telemetryCooldown, put=__cordl_internal_set_telemetryCooldown)) float_t  telemetryCooldown;

/// @brief Field timeTelemetryLastChecked, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeTelemetryLastChecked, put=__cordl_internal_set_timeTelemetryLastChecked)) float_t  timeTelemetryLastChecked;

/// @brief Field timeUsingGadgetTypeInterval, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeUsingGadgetTypeInterval, put=__cordl_internal_set_timeUsingGadgetTypeInterval)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  timeUsingGadgetTypeInterval;

/// @brief Field timeUsingGadgetTypeTotal, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeUsingGadgetTypeTotal, put=__cordl_internal_set_timeUsingGadgetTypeTotal)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  timeUsingGadgetTypeTotal;

/// @brief Field timeUsingOthersGadgetsInterval, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUsingOthersGadgetsInterval, put=__cordl_internal_set_timeUsingOthersGadgetsInterval)) float_t  timeUsingOthersGadgetsInterval;

/// @brief Field timeUsingOthersGadgetsTotal, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUsingOthersGadgetsTotal, put=__cordl_internal_set_timeUsingOthersGadgetsTotal)) float_t  timeUsingOthersGadgetsTotal;

/// @brief Field timeUsingOwnGadgetsInterval, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUsingOwnGadgetsInterval, put=__cordl_internal_set_timeUsingOwnGadgetsInterval)) float_t  timeUsingOwnGadgetsInterval;

/// @brief Field timeUsingOwnGadgetsTotal, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUsingOwnGadgetsTotal, put=__cordl_internal_set_timeUsingOwnGadgetsTotal)) float_t  timeUsingOwnGadgetsTotal;

/// @brief Field totalPlayTime, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalPlayTime, put=__cordl_internal_set_totalPlayTime)) float_t  totalPlayTime;

/// @brief Field unlockedTechTreeData, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedTechTreeData, put=__cordl_internal_set_unlockedTechTreeData)) ::ArrayW<::ArrayW<bool>>  unlockedTechTreeData;

/// @brief Field unlockedTechTreeDataDiff, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedTechTreeDataDiff, put=__cordl_internal_set_unlockedTechTreeDataDiff)) ::ArrayW<::ArrayW<bool>>  unlockedTechTreeDataDiff;

/// @brief Convert operator to "::GlobalNamespace::GorillaQuestManager"
constexpr operator  ::GlobalNamespace::GorillaQuestManager*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AddRoundTelemetry, addr 0x59e9a70, size 0x14, virtual false, abstract: false, final false
inline void AddRoundTelemetry() ;

/// @brief Method ApplyLimitedDepositTime, addr 0x59e0480, size 0xc, virtual false, abstract: false, final false
inline void ApplyLimitedDepositTime(::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType) ;

/// @brief Method ApplyServerQuestsStatus, addr 0x59e4ae4, size 0xe4, virtual false, abstract: false, final false
inline void ApplyServerQuestsStatus(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus) ;

/// @brief Method AttemptCollectMonkeIdol, addr 0x59e84b8, size 0x168, virtual false, abstract: false, final false
inline void AttemptCollectMonkeIdol() ;

/// @brief Method AttemptIncrementResource, addr 0x59e7b5c, size 0x1a8, virtual false, abstract: false, final false
inline void AttemptIncrementResource(::GlobalNamespace::SIResource_ResourceType  resource) ;

/// @brief Method AttemptRedeemBonusPoint, addr 0x59e8298, size 0x168, virtual false, abstract: false, final false
inline void AttemptRedeemBonusPoint() ;

/// @brief Method AttemptRedeemCompletedQuest, addr 0x59e7ddc, size 0x20c, virtual false, abstract: false, final false
inline void AttemptRedeemCompletedQuest(int32_t  questIndex) ;

/// @brief Method Awake, addr 0x59e36b0, size 0x4bc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckTelemetry, addr 0x59e6d70, size 0x4fc, virtual false, abstract: false, final false
inline void CheckTelemetry() ;

/// @brief Method CheckTimeCrossover, addr 0x59e6d68, size 0x4, virtual false, abstract: false, final false
inline void CheckTimeCrossover() ;

/// @brief Method CheckTimeCrossoverServer, addr 0x59e726c, size 0x1e0, virtual false, abstract: false, final false
inline void CheckTimeCrossoverServer() ;

/// @brief Method ClearAllQuestEventListeners, addr 0x59e47c4, size 0x6c, virtual true, abstract: false, final true
inline void ClearAllQuestEventListeners() ;

/// @brief Method CollectResourceTelemetry, addr 0x59e05a8, size 0xc4, virtual false, abstract: false, final false
inline void CollectResourceTelemetry(::GlobalNamespace::SIResource_ResourceType  type, int32_t  count) ;

/// @brief Method CopySaveDataToDiff, addr 0x59e48e8, size 0x1fc, virtual false, abstract: false, final false
inline void CopySaveDataToDiff() ;

/// @brief Method EnsureInitialized, addr 0x59e1c1c, size 0x40c, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

/// @brief Method GetBonusProgress, addr 0x59e0724, size 0x10, virtual false, abstract: false, final false
inline void GetBonusProgress() ;

/// @brief Method GetCurrencyAmount, addr 0x59e4bf4, size 0xdc, virtual false, abstract: false, final false
inline int32_t GetCurrencyAmount(::GlobalNamespace::SIResource_ResourceType  currencyType) ;

/// @brief Method GetNodeFromID, addr 0x59e6238, size 0x190, virtual false, abstract: false, final false
inline ::GlobalNamespace::SIProgression_SINode GetNodeFromID(::StringW  id) ;

/// @brief Method GetOnlineNode, addr 0x59e1650, size 0xa0, virtual false, abstract: false, final false
inline bool GetOnlineNode(::GlobalNamespace::SIUpgradeType  type, ::by_ref<::GlobalNamespace::SIProgression_SINode>  node) ;

/// @brief Method GetResourceArray, addr 0x59e16f0, size 0xf8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetResourceArray() ;

/// @brief Method GetResourceMaxCap, addr 0x59e8f1c, size 0x30, virtual false, abstract: false, final false
inline int32_t GetResourceMaxCap(::GlobalNamespace::SIResource_ResourceType  type) ;

/// @brief Method GetResourceString, addr 0x59e45f8, size 0x84, virtual false, abstract: false, final false
static inline ::StringW GetResourceString(::GlobalNamespace::SIResource_ResourceType  resourceType) ;

/// @brief Method HandleInventoryUpdated, addr 0x59e5e8c, size 0x38, virtual false, abstract: false, final false
inline void HandleInventoryUpdated() ;

/// @brief Method HandleNodeUnlocked, addr 0x59e61bc, size 0x7c, virtual false, abstract: false, final false
inline void HandleNodeUnlocked(::StringW  treeId, ::StringW  nodeId) ;

/// @brief Method HandleQuestCompleted, addr 0x59e797c, size 0x78, virtual true, abstract: false, final true
inline void HandleQuestCompleted(int32_t  questID) ;

/// @brief Method HandleQuestProgressChanged, addr 0x59e7af4, size 0x68, virtual true, abstract: false, final true
inline void HandleQuestProgressChanged(bool  initialLoad) ;

/// @brief Method HandleTagTelemetry, addr 0x59e9744, size 0x1e4, virtual false, abstract: false, final false
inline void HandleTagTelemetry(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method HandleTreeUpdated, addr 0x59e50d4, size 0x3a4, virtual false, abstract: false, final false
inline void HandleTreeUpdated() ;

/// @brief Method Init, addr 0x59e467c, size 0x148, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method InitResourceToStringDictionary, addr 0x59e3b6c, size 0x1e0, virtual false, abstract: false, final false
static inline void InitResourceToStringDictionary() ;

/// @brief Method InitializeQuests, addr 0x59e3d4c, size 0x48, virtual false, abstract: false, final false
static inline void InitializeQuests() ;

/// @brief Method IsLimitedDepositAvailable, addr 0x59e0170, size 0x10, virtual false, abstract: false, final false
inline bool IsLimitedDepositAvailable(::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType) ;

/// @brief Method IsNodeUnlocked, addr 0x59e4cd0, size 0x2ac, virtual false, abstract: false, final false
inline bool IsNodeUnlocked(::GlobalNamespace::SIUpgradeType  upgradeType) ;

/// @brief Method LoadQuestProgress, addr 0x59e6bf8, size 0x4, virtual true, abstract: false, final true
inline void LoadQuestProgress() ;

/// @brief Method LoadQuestProgressServer, addr 0x59e744c, size 0x204, virtual false, abstract: false, final false
inline void LoadQuestProgressServer() ;

/// @brief Method LoadQuestsFromJson, addr 0x59e6bfc, size 0xd8, virtual true, abstract: false, final true
inline void LoadQuestsFromJson(::StringW  jsonString) ;

/// @brief Method LoadQuestsFromLocalJson, addr 0x59e6b20, size 0xd0, virtual false, abstract: false, final false
inline void LoadQuestsFromLocalJson() ;

/// @brief Method LoadQuestsFromServer, addr 0x59e6940, size 0x1e0, virtual false, abstract: false, final false
inline void LoadQuestsFromServer(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  serverQuests) ;

/// @brief Method LoadSavedTelemetryData, addr 0x59e3e98, size 0x2b0, virtual false, abstract: false, final false
inline void LoadSavedTelemetryData() ;

static inline ::GlobalNamespace::SIProgression* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59e8f4c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x59e43d4, size 0x224, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59e4148, size 0x28c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInvalidQuestRedeemAttempt, addr 0x59e8174, size 0x124, virtual false, abstract: false, final false
inline void OnInvalidQuestRedeemAttempt(int32_t  questIndex, ::GlobalNamespace::RotatingQuest*  quest) ;

/// @brief Method OnSuccessfulBonusRedeem, addr 0x59e8400, size 0xb8, virtual false, abstract: false, final false
inline void OnSuccessfulBonusRedeem(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus) ;

/// @brief Method OnSuccessfulIncrementResource, addr 0x59e7d04, size 0xd8, virtual false, abstract: false, final false
inline void OnSuccessfulIncrementResource(::StringW  resourceStr) ;

/// @brief Method OnSuccessfulMonkeIdolRedeem, addr 0x59e8620, size 0xcc, virtual false, abstract: false, final false
inline void OnSuccessfulMonkeIdolRedeem(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus) ;

/// @brief Method OnSuccessfulQuestRedeem, addr 0x59e7ff0, size 0x184, virtual false, abstract: false, final false
inline void OnSuccessfulQuestRedeem(int32_t  questIndex, ::GlobalNamespace::RotatingQuest*  quest, ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus) ;

/// @brief Method ProcessAllQuests, addr 0x59e6694, size 0x14c, virtual false, abstract: false, final false
inline void ProcessAllQuests(::System::Action_1<::GlobalNamespace::RotatingQuest*>*  action) ;

/// @brief Method QuestLoadPostProcess, addr 0x59e67e0, size 0xb0, virtual false, abstract: false, final false
inline void QuestLoadPostProcess(::GlobalNamespace::RotatingQuest*  quest) ;

/// @brief Method QuestSavePreProcess, addr 0x59e6890, size 0xb0, virtual false, abstract: false, final false
inline void QuestSavePreProcess(::GlobalNamespace::RotatingQuest*  quest) ;

/// @brief Method RefreshActiveQuests, addr 0x59e4bc8, size 0x2c, virtual false, abstract: false, final false
inline void RefreshActiveQuests() ;

/// @brief Method ResetTelemetryIntervalData, addr 0x59e3d94, size 0x104, virtual false, abstract: false, final false
inline void ResetTelemetryIntervalData() ;

/// @brief Method ResourcesMaxed, addr 0x59e8f50, size 0x48, virtual false, abstract: false, final false
static inline bool ResourcesMaxed() ;

/// @brief Method SaveQuestProgress, addr 0x59e6d6c, size 0x4, virtual true, abstract: false, final true
inline void SaveQuestProgress() ;

/// @brief Method SaveQuestProgressServer, addr 0x59e7650, size 0x28c, virtual false, abstract: false, final false
inline void SaveQuestProgressServer() ;

/// @brief Method SaveTelemetryData, addr 0x59e90fc, size 0x2a8, virtual false, abstract: false, final false
inline void SaveTelemetryData() ;

/// @brief Method SelectActiveQuests, addr 0x59e86ec, size 0x2cc, virtual false, abstract: false, final false
inline void SelectActiveQuests() ;

/// @brief Method SelectCurrentTurnInDate, addr 0x59e8a20, size 0x4fc, virtual false, abstract: false, final false
inline void SelectCurrentTurnInDate() ;

/// @brief Method SendPurchaseResourcesData, addr 0x59e95e4, size 0xa8, virtual false, abstract: false, final false
inline void SendPurchaseResourcesData() ;

/// @brief Method SendPurchaseTechPointsData, addr 0x59e968c, size 0xb8, virtual false, abstract: false, final false
inline void SendPurchaseTechPointsData(int32_t  techPointsPurchased) ;

/// @brief Method SendTelemetryData, addr 0x59e93a4, size 0x240, virtual false, abstract: false, final false
inline void SendTelemetryData() ;

/// @brief Method SetResourceArray, addr 0x59e78dc, size 0xa0, virtual false, abstract: false, final false
inline void SetResourceArray(::ArrayW<int32_t>  resourceArray) ;

/// @brief Method SetupAllQuestEventListeners, addr 0x59e4830, size 0xb8, virtual true, abstract: false, final true
inline void SetupAllQuestEventListeners() ;

/// @brief Method SliceUpdate, addr 0x59e6cd4, size 0x94, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method StaticClearAllQuestEventListeners, addr 0x59df510, size 0x48, virtual false, abstract: false, final false
static inline void StaticClearAllQuestEventListeners() ;

/// @brief Method StaticSaveQuestProgress, addr 0x59df4c8, size 0x48, virtual false, abstract: false, final false
static inline void StaticSaveQuestProgress() ;

/// [IteratorStateMachine(typeof(SIProgression::<TryClaimNewPlayerPackage>d__60))]
/// @brief Method TryClaimNewPlayerPackage, addr 0x59e5e20, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TryClaimNewPlayerPackage() ;

/// @brief Method TryDepositResources, addr 0x59e048c, size 0x11c, virtual false, abstract: false, final false
inline bool TryDepositResources(::GlobalNamespace::SIResource_ResourceType  type, int32_t  count) ;

/// @brief Method TryUnlock, addr 0x59e63c8, size 0x1f0, virtual false, abstract: false, final false
inline bool TryUnlock(::GlobalNamespace::SIUpgradeType  upgrade) ;

/// @brief Method UnlockNode, addr 0x59e4f7c, size 0x158, virtual false, abstract: false, final false
inline void UnlockNode(::GlobalNamespace::SIUpgradeType  upgradeType) ;

/// @brief Method UpdateCurrencyOnPlayer, addr 0x59e5ec4, size 0x2d0, virtual false, abstract: false, final false
inline void UpdateCurrencyOnPlayer() ;

/// @brief Method UpdateHeldGadgetsTelemetry, addr 0x59e9928, size 0x148, virtual false, abstract: false, final false
inline void UpdateHeldGadgetsTelemetry(::GlobalNamespace::SITechTreePageId  id, bool  isMine, int32_t  changeAmount) ;

/// @brief Method UpdateQuestProgresses, addr 0x59e79f4, size 0x100, virtual false, abstract: false, final false
inline bool UpdateQuestProgresses() ;

/// @brief Method UpdateTree, addr 0x59e5478, size 0x75c, virtual false, abstract: false, final false
inline void UpdateTree() ;

/// @brief Method UpdateUnlockOnPlayer, addr 0x59e5bd4, size 0x24c, virtual false, abstract: false, final false
inline void UpdateUnlockOnPlayer() ;

/// [CompilerGenerated]
/// @brief Method <AttemptRedeemBonusPoint>b__161_0, addr 0x59e9d48, size 0x4, virtual false, abstract: false, final false
inline void _AttemptRedeemBonusPoint_b__161_0(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus) ;

/// @brief Method _InitializeQuests, addr 0x59e65d0, size 0xc4, virtual false, abstract: false, final false
inline void _InitializeQuests() ;

/// @brief Method _ResourcesMaxed, addr 0x59e8f98, size 0x164, virtual false, abstract: false, final false
inline bool _ResourcesMaxed() ;

/// @brief Method _SafeShallowCopyArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void _SafeShallowCopyArray(::ArrayW<T>  sourceArray, ::by_ref<::ArrayW<T>>  ref_destinationArray) ;

/// [CompilerGenerated]
/// @brief Method <SelectActiveQuests>g__GetMatchingCategoryCount|171_0, addr 0x59e89b8, size 0x68, virtual false, abstract: false, final false
inline int32_t _SelectActiveQuests_g__GetMatchingCategoryCount_171_0(::GlobalNamespace::RotatingQuest*  quest) ;

constexpr ::System::TimeSpan const& __cordl_internal_get_CROSSOVER_TIME_OF_DAY() const;

constexpr ::System::TimeSpan& __cordl_internal_get_CROSSOVER_TIME_OF_DAY() ;

constexpr bool const& __cordl_internal_get_ClientReady() const;

constexpr bool& __cordl_internal_get_ClientReady() ;

constexpr ::System::Action* const& __cordl_internal_get_OnClientReady() const;

constexpr ::System::Action*& __cordl_internal_get_OnClientReady() ;

constexpr ::System::Action* const& __cordl_internal_get_OnInventoryReady() const;

constexpr ::System::Action*& __cordl_internal_get_OnInventoryReady() ;

constexpr ::System::Action_1<::GlobalNamespace::SIUpgradeType>* const& __cordl_internal_get_OnNodeUnlocked() const;

constexpr ::System::Action_1<::GlobalNamespace::SIUpgradeType>*& __cordl_internal_get_OnNodeUnlocked() ;

constexpr ::System::Action* const& __cordl_internal_get_OnTreeReady() const;

constexpr ::System::Action*& __cordl_internal_get_OnTreeReady() ;

constexpr bool const& __cordl_internal_get__inventoryReady() const;

constexpr bool& __cordl_internal_get__inventoryReady() ;

constexpr bool const& __cordl_internal_get__startingPackageGranted() const;

constexpr bool& __cordl_internal_get__startingPackageGranted() ;

constexpr bool const& __cordl_internal_get__treeReady() const;

constexpr bool& __cordl_internal_get__treeReady() ;

constexpr ::ArrayW<::GlobalNamespace::QuestCategory> const& __cordl_internal_get_activeQuestCategories() const;

constexpr ::ArrayW<::GlobalNamespace::QuestCategory>& __cordl_internal_get_activeQuestCategories() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_activeQuestIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_activeQuestIds() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_activeQuestIdsDiff() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_activeQuestIdsDiff() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_activeQuestProgresses() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_activeQuestProgresses() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_activeQuestProgressesDiff() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_activeQuestProgressesDiff() ;

constexpr float_t const& __cordl_internal_get_activeTerminalTimeInterval() const;

constexpr float_t& __cordl_internal_get_activeTerminalTimeInterval() ;

constexpr float_t const& __cordl_internal_get_activeTerminalTimeTotal() const;

constexpr float_t& __cordl_internal_get_activeTerminalTimeTotal() ;

constexpr int32_t const& __cordl_internal_get_bonusProgress() const;

constexpr int32_t& __cordl_internal_get_bonusProgress() ;

constexpr int32_t const& __cordl_internal_get_bonusProgressDiff() const;

constexpr int32_t& __cordl_internal_get_bonusProgressDiff() ;

constexpr int32_t const& __cordl_internal_get_completedBonusPoints() const;

constexpr int32_t& __cordl_internal_get_completedBonusPoints() ;

constexpr int32_t const& __cordl_internal_get_completedQuests() const;

constexpr int32_t& __cordl_internal_get_completedQuests() ;

constexpr bool const& __cordl_internal_get_dailyLimitedTurnedIn() const;

constexpr bool& __cordl_internal_get_dailyLimitedTurnedIn() ;

constexpr ::GlobalNamespace::SIProgression_SINode const& __cordl_internal_get_emptyNode() const;

constexpr ::GlobalNamespace::SIProgression_SINode& __cordl_internal_get_emptyNode() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>* const& __cordl_internal_get_heldOrSnappedByGadgetPageType() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*& __cordl_internal_get_heldOrSnappedByGadgetPageType() ;

constexpr int32_t const& __cordl_internal_get_heldOrSnappedOthersGadgets() const;

constexpr int32_t& __cordl_internal_get_heldOrSnappedOthersGadgets() ;

constexpr int32_t const& __cordl_internal_get_heldOrSnappedOwnGadgets() const;

constexpr int32_t& __cordl_internal_get_heldOrSnappedOwnGadgets() ;

constexpr float_t const& __cordl_internal_get_intervalPlayTime() const;

constexpr float_t& __cordl_internal_get_intervalPlayTime() ;

constexpr float_t const& __cordl_internal_get_lastDisconnectTelemetrySent() const;

constexpr float_t& __cordl_internal_get_lastDisconnectTelemetrySent() ;

constexpr ::System::DateTime const& __cordl_internal_get_lastQuestGrantTime() const;

constexpr ::System::DateTime& __cordl_internal_get_lastQuestGrantTime() ;

constexpr ::System::DateTime const& __cordl_internal_get_lastQuestGrantTimeDiff() const;

constexpr ::System::DateTime& __cordl_internal_get_lastQuestGrantTimeDiff() ;

constexpr float_t const& __cordl_internal_get_lastStartingPackageAttemptStarted() const;

constexpr float_t& __cordl_internal_get_lastStartingPackageAttemptStarted() ;

constexpr float_t const& __cordl_internal_get_lastTelemetrySent() const;

constexpr float_t& __cordl_internal_get_lastTelemetrySent() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_limitedDepositTimeArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_limitedDepositTimeArray() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_limitedDepositTimeDiff() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_limitedDepositTimeDiff() ;

constexpr float_t const& __cordl_internal_get_minDisconnectTelemetryCooldown() const;

constexpr float_t& __cordl_internal_get_minDisconnectTelemetryCooldown() ;

constexpr int32_t const& __cordl_internal_get_perCategoryQuestLimit() const;

constexpr int32_t& __cordl_internal_get_perCategoryQuestLimit() ;

constexpr int32_t const& __cordl_internal_get_questGrantRefreshCooldown() const;

constexpr int32_t& __cordl_internal_get_questGrantRefreshCooldown() ;

constexpr ::GlobalNamespace::SIProgression_SIQuestsList* const& __cordl_internal_get_questSourceList() const;

constexpr ::GlobalNamespace::SIProgression_SIQuestsList*& __cordl_internal_get_questSourceList() ;

constexpr bool const& __cordl_internal_get_questsInitialized() const;

constexpr bool& __cordl_internal_get_questsInitialized() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_redeemingQuestInProgress() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_redeemingQuestInProgress() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_resourceArrayDiff() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_resourceArrayDiff() ;

constexpr ::ArrayW<::GlobalNamespace::SIProgression_SIProgressionResourceCap> const& __cordl_internal_get_resourceCaps() const;

constexpr ::ArrayW<::GlobalNamespace::SIProgression_SIProgressionResourceCap>& __cordl_internal_get_resourceCaps() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_resourceCapsArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_resourceCapsArray() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>* const& __cordl_internal_get_resourceDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*& __cordl_internal_get_resourceDict() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>* const& __cordl_internal_get_resourcesCollectedInterval() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*& __cordl_internal_get_resourcesCollectedInterval() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>* const& __cordl_internal_get_resourcesCollectedTotal() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*& __cordl_internal_get_resourcesCollectedTotal() ;

constexpr float_t const& __cordl_internal_get_roomPlayTime() const;

constexpr float_t& __cordl_internal_get_roomPlayTime() ;

constexpr int32_t const& __cordl_internal_get_roundsPlayedInterval() const;

constexpr int32_t& __cordl_internal_get_roundsPlayedInterval() ;

constexpr int32_t const& __cordl_internal_get_roundsPlayedTotal() const;

constexpr int32_t& __cordl_internal_get_roundsPlayedTotal() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::SIProgression_SINode>* const& __cordl_internal_get_siNodes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::SIProgression_SINode>*& __cordl_internal_get_siNodes() ;

constexpr int32_t const& __cordl_internal_get_startingPackageBackupAttempts() const;

constexpr int32_t& __cordl_internal_get_startingPackageBackupAttempts() ;

constexpr int32_t const& __cordl_internal_get_stashedBonusPoints() const;

constexpr int32_t& __cordl_internal_get_stashedBonusPoints() ;

constexpr int32_t const& __cordl_internal_get_stashedBonusPointsDiff() const;

constexpr int32_t& __cordl_internal_get_stashedBonusPointsDiff() ;

constexpr int32_t const& __cordl_internal_get_stashedQuests() const;

constexpr int32_t& __cordl_internal_get_stashedQuests() ;

constexpr int32_t const& __cordl_internal_get_stashedQuestsDiff() const;

constexpr int32_t& __cordl_internal_get_stashedQuestsDiff() ;

constexpr int32_t const& __cordl_internal_get_tagsHoldingOthersGadgetInterval() const;

constexpr int32_t& __cordl_internal_get_tagsHoldingOthersGadgetInterval() ;

constexpr int32_t const& __cordl_internal_get_tagsHoldingOthersGadgetTotal() const;

constexpr int32_t& __cordl_internal_get_tagsHoldingOthersGadgetTotal() ;

constexpr int32_t const& __cordl_internal_get_tagsHoldingOwnGadgetInterval() const;

constexpr int32_t& __cordl_internal_get_tagsHoldingOwnGadgetInterval() ;

constexpr int32_t const& __cordl_internal_get_tagsHoldingOwnGadgetTotal() const;

constexpr int32_t& __cordl_internal_get_tagsHoldingOwnGadgetTotal() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>* const& __cordl_internal_get_tagsUsingGadgetTypeInterval() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*& __cordl_internal_get_tagsUsingGadgetTypeInterval() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>* const& __cordl_internal_get_tagsUsingGadgetTypeTotal() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*& __cordl_internal_get_tagsUsingGadgetTypeTotal() ;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& __cordl_internal_get_techTreeSO() const;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& __cordl_internal_get_techTreeSO() ;

constexpr float_t const& __cordl_internal_get_telemetryCooldown() const;

constexpr float_t& __cordl_internal_get_telemetryCooldown() ;

constexpr float_t const& __cordl_internal_get_timeTelemetryLastChecked() const;

constexpr float_t& __cordl_internal_get_timeTelemetryLastChecked() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>* const& __cordl_internal_get_timeUsingGadgetTypeInterval() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*& __cordl_internal_get_timeUsingGadgetTypeInterval() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>* const& __cordl_internal_get_timeUsingGadgetTypeTotal() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*& __cordl_internal_get_timeUsingGadgetTypeTotal() ;

constexpr float_t const& __cordl_internal_get_timeUsingOthersGadgetsInterval() const;

constexpr float_t& __cordl_internal_get_timeUsingOthersGadgetsInterval() ;

constexpr float_t const& __cordl_internal_get_timeUsingOthersGadgetsTotal() const;

constexpr float_t& __cordl_internal_get_timeUsingOthersGadgetsTotal() ;

constexpr float_t const& __cordl_internal_get_timeUsingOwnGadgetsInterval() const;

constexpr float_t& __cordl_internal_get_timeUsingOwnGadgetsInterval() ;

constexpr float_t const& __cordl_internal_get_timeUsingOwnGadgetsTotal() const;

constexpr float_t& __cordl_internal_get_timeUsingOwnGadgetsTotal() ;

constexpr float_t const& __cordl_internal_get_totalPlayTime() const;

constexpr float_t& __cordl_internal_get_totalPlayTime() ;

constexpr ::ArrayW<::ArrayW<bool>> const& __cordl_internal_get_unlockedTechTreeData() const;

constexpr ::ArrayW<::ArrayW<bool>>& __cordl_internal_get_unlockedTechTreeData() ;

constexpr ::ArrayW<::ArrayW<bool>> const& __cordl_internal_get_unlockedTechTreeDataDiff() const;

constexpr ::ArrayW<::ArrayW<bool>>& __cordl_internal_get_unlockedTechTreeDataDiff() ;

constexpr void __cordl_internal_set_CROSSOVER_TIME_OF_DAY(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_ClientReady(bool  value) ;

constexpr void __cordl_internal_set_OnClientReady(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnInventoryReady(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnNodeUnlocked(::System::Action_1<::GlobalNamespace::SIUpgradeType>*  value) ;

constexpr void __cordl_internal_set_OnTreeReady(::System::Action*  value) ;

constexpr void __cordl_internal_set__inventoryReady(bool  value) ;

constexpr void __cordl_internal_set__startingPackageGranted(bool  value) ;

constexpr void __cordl_internal_set__treeReady(bool  value) ;

constexpr void __cordl_internal_set_activeQuestCategories(::ArrayW<::GlobalNamespace::QuestCategory>  value) ;

constexpr void __cordl_internal_set_activeQuestIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_activeQuestIdsDiff(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_activeQuestProgresses(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_activeQuestProgressesDiff(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_activeTerminalTimeInterval(float_t  value) ;

constexpr void __cordl_internal_set_activeTerminalTimeTotal(float_t  value) ;

constexpr void __cordl_internal_set_bonusProgress(int32_t  value) ;

constexpr void __cordl_internal_set_bonusProgressDiff(int32_t  value) ;

constexpr void __cordl_internal_set_completedBonusPoints(int32_t  value) ;

constexpr void __cordl_internal_set_completedQuests(int32_t  value) ;

constexpr void __cordl_internal_set_dailyLimitedTurnedIn(bool  value) ;

constexpr void __cordl_internal_set_emptyNode(::GlobalNamespace::SIProgression_SINode  value) ;

constexpr void __cordl_internal_set_heldOrSnappedByGadgetPageType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  value) ;

constexpr void __cordl_internal_set_heldOrSnappedOthersGadgets(int32_t  value) ;

constexpr void __cordl_internal_set_heldOrSnappedOwnGadgets(int32_t  value) ;

constexpr void __cordl_internal_set_intervalPlayTime(float_t  value) ;

constexpr void __cordl_internal_set_lastDisconnectTelemetrySent(float_t  value) ;

constexpr void __cordl_internal_set_lastQuestGrantTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_lastQuestGrantTimeDiff(::System::DateTime  value) ;

constexpr void __cordl_internal_set_lastStartingPackageAttemptStarted(float_t  value) ;

constexpr void __cordl_internal_set_lastTelemetrySent(float_t  value) ;

constexpr void __cordl_internal_set_limitedDepositTimeArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_limitedDepositTimeDiff(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_minDisconnectTelemetryCooldown(float_t  value) ;

constexpr void __cordl_internal_set_perCategoryQuestLimit(int32_t  value) ;

constexpr void __cordl_internal_set_questGrantRefreshCooldown(int32_t  value) ;

constexpr void __cordl_internal_set_questSourceList(::GlobalNamespace::SIProgression_SIQuestsList*  value) ;

constexpr void __cordl_internal_set_questsInitialized(bool  value) ;

constexpr void __cordl_internal_set_redeemingQuestInProgress(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_resourceArrayDiff(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_resourceCaps(::ArrayW<::GlobalNamespace::SIProgression_SIProgressionResourceCap>  value) ;

constexpr void __cordl_internal_set_resourceCapsArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_resourceDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  value) ;

constexpr void __cordl_internal_set_resourcesCollectedInterval(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  value) ;

constexpr void __cordl_internal_set_resourcesCollectedTotal(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  value) ;

constexpr void __cordl_internal_set_roomPlayTime(float_t  value) ;

constexpr void __cordl_internal_set_roundsPlayedInterval(int32_t  value) ;

constexpr void __cordl_internal_set_roundsPlayedTotal(int32_t  value) ;

constexpr void __cordl_internal_set_siNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::SIProgression_SINode>*  value) ;

constexpr void __cordl_internal_set_startingPackageBackupAttempts(int32_t  value) ;

constexpr void __cordl_internal_set_stashedBonusPoints(int32_t  value) ;

constexpr void __cordl_internal_set_stashedBonusPointsDiff(int32_t  value) ;

constexpr void __cordl_internal_set_stashedQuests(int32_t  value) ;

constexpr void __cordl_internal_set_stashedQuestsDiff(int32_t  value) ;

constexpr void __cordl_internal_set_tagsHoldingOthersGadgetInterval(int32_t  value) ;

constexpr void __cordl_internal_set_tagsHoldingOthersGadgetTotal(int32_t  value) ;

constexpr void __cordl_internal_set_tagsHoldingOwnGadgetInterval(int32_t  value) ;

constexpr void __cordl_internal_set_tagsHoldingOwnGadgetTotal(int32_t  value) ;

constexpr void __cordl_internal_set_tagsUsingGadgetTypeInterval(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  value) ;

constexpr void __cordl_internal_set_tagsUsingGadgetTypeTotal(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  value) ;

constexpr void __cordl_internal_set_techTreeSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value) ;

constexpr void __cordl_internal_set_telemetryCooldown(float_t  value) ;

constexpr void __cordl_internal_set_timeTelemetryLastChecked(float_t  value) ;

constexpr void __cordl_internal_set_timeUsingGadgetTypeInterval(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  value) ;

constexpr void __cordl_internal_set_timeUsingGadgetTypeTotal(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  value) ;

constexpr void __cordl_internal_set_timeUsingOthersGadgetsInterval(float_t  value) ;

constexpr void __cordl_internal_set_timeUsingOthersGadgetsTotal(float_t  value) ;

constexpr void __cordl_internal_set_timeUsingOwnGadgetsInterval(float_t  value) ;

constexpr void __cordl_internal_set_timeUsingOwnGadgetsTotal(float_t  value) ;

constexpr void __cordl_internal_set_totalPlayTime(float_t  value) ;

constexpr void __cordl_internal_set_unlockedTechTreeData(::ArrayW<::ArrayW<bool>>  value) ;

constexpr void __cordl_internal_set_unlockedTechTreeDataDiff(::ArrayW<::ArrayW<bool>>  value) ;

/// @brief Method .ctor, addr 0x59e9a84, size 0x2c4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnClientReady, addr 0x59e3578, size 0x9c, virtual false, abstract: false, final false
inline void add_OnClientReady(::System::Action*  value) ;

static inline ::UnityW<::GlobalNamespace::SIProgression> getStaticF__Instance_k__BackingField() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::StringW>* getStaticF__resourceToString() ;

/// @brief Method get_ActiveQuestIds, addr 0x59e65b8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_ActiveQuestIds() ;

/// @brief Method get_ActiveQuestProgresses, addr 0x59e65c0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_ActiveQuestProgresses() ;

/// @brief Method get_DailyLimitedTurnedIn, addr 0x59e65c8, size 0x8, virtual false, abstract: false, final false
inline bool get_DailyLimitedTurnedIn() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x59e34d8, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SIProgression> get_Instance() ;

/// @brief Convert to "::GlobalNamespace::GorillaQuestManager"
constexpr ::GlobalNamespace::GorillaQuestManager* i___GlobalNamespace__GorillaQuestManager() noexcept;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnClientReady, addr 0x59e3614, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnClientReady(::System::Action*  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::SIProgression>  value) ;

static inline void setStaticF__resourceToString(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x59e3520, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::SIProgression*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIProgression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIProgression", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIProgression(SIProgression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIProgression", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIProgression(SIProgression const& ) = delete;

/// @brief Field ACTIVE_QUEST_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  ACTIVE_QUEST_COUNT{static_cast<int32_t>(0x3)};

/// @brief Field MAX_RESOURCE_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  MAX_RESOURCE_COUNT{static_cast<int32_t>(0x1e)};

/// @brief Field MAX_STASHED_BONUS_POINTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_STASHED_BONUS_POINTS{static_cast<int32_t>(0x2)};

/// @brief Field MAX_STASHED_QUESTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_STASHED_QUESTS{static_cast<int32_t>(0x6)};

/// @brief Field NEW_BONUS_POINTS_PER_DAY offset 0xffffffff size 0x4
static constexpr int32_t  NEW_BONUS_POINTS_PER_DAY{static_cast<int32_t>(0x1)};

/// @brief Field NEW_QUESTS_PER_DAY offset 0xffffffff size 0x4
static constexpr int32_t  NEW_QUESTS_PER_DAY{static_cast<int32_t>(0x3)};

/// @brief Field SHARED_QUEST_TURNINS_FOR_POINT offset 0xffffffff size 0x4
static constexpr int32_t  SHARED_QUEST_TURNINS_FOR_POINT{static_cast<int32_t>(0x4)};

/// @brief Field STARTING_PACKAGE_MAX_ATTEMPTS offset 0xffffffff size 0x4
static constexpr int32_t  STARTING_PACKAGE_MAX_ATTEMPTS{static_cast<int32_t>(0xa)};

/// @brief Field STARTING_STASHED_BONUS_POINTS offset 0xffffffff size 0x4
static constexpr int32_t  STARTING_STASHED_BONUS_POINTS{static_cast<int32_t>(0x0)};

/// @brief Field STARTING_STASHED_QUESTS offset 0xffffffff size 0x4
static constexpr int32_t  STARTING_STASHED_QUESTS{static_cast<int32_t>(0x0)};

/// @brief Field TREE_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  TREE_NAME{u"SI_Gadgets"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{333};

/// @brief Field kBonusProgress offset 0xffffffff size 0x8
static constexpr ::ConstString  kBonusProgress{u"v1_SIProgression:bonusProgress"};

/// @brief Field kBouncySand offset 0xffffffff size 0x8
static constexpr ::ConstString  kBouncySand{u"v1_SIResource:bouncySand"};

/// @brief Field kDailyQuestId offset 0xffffffff size 0x8
static constexpr ::ConstString  kDailyQuestId{u"v1_Rotating_Quest_Daily_ID_Key"};

/// @brief Field kDailyQuestProgress offset 0xffffffff size 0x8
static constexpr ::ConstString  kDailyQuestProgress{u"v1_Rotating_Quest_Daily_Progress_Key"};

/// @brief Field kFloppyMetal offset 0xffffffff size 0x8
static constexpr ::ConstString  kFloppyMetal{u"v1_SIResource:floppyMetal"};

/// @brief Field kLastQuestGrantTime offset 0xffffffff size 0x8
static constexpr ::ConstString  kLastQuestGrantTime{u"v1_SIProgression:lastSharedGrantTime"};

/// @brief Field kLimitedDeposit offset 0xffffffff size 0x8
static constexpr ::ConstString  kLimitedDeposit{u"v1_SIResource:LimitedDeposit:"};

/// @brief Field kLocalQuestPath offset 0xffffffff size 0x8
static constexpr ::ConstString  kLocalQuestPath{u"TestingSuperInfectionQuests"};

/// @brief Field kStartingPackageGranted offset 0xffffffff size 0x8
static constexpr ::ConstString  kStartingPackageGranted{u"v1_SIProgression:startingPackageGranted"};

/// @brief Field kStashedBonusPoints offset 0xffffffff size 0x8
static constexpr ::ConstString  kStashedBonusPoints{u"v1_SIProgression:stashedBonusPoints"};

/// @brief Field kStashedQuests offset 0xffffffff size 0x8
static constexpr ::ConstString  kStashedQuests{u"v1_SIProgression:stashedQuests"};

/// @brief Field kStrangeWood offset 0xffffffff size 0x8
static constexpr ::ConstString  kStrangeWood{u"v1_SIResource:strangeWood"};

/// @brief Field kTechPoints offset 0xffffffff size 0x8
static constexpr ::ConstString  kTechPoints{u"v1_SIResource:techPoints"};

/// @brief Field kTechTree offset 0xffffffff size 0x8
static constexpr ::ConstString  kTechTree{u"v1_SITechTree:"};

/// @brief Field kVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  kVersion{u"v1_"};

/// @brief Field kVibratingSpring offset 0xffffffff size 0x8
static constexpr ::ConstString  kVibratingSpring{u"v1_SIResource:vibratingSpring"};

/// @brief Field kWeirdGear offset 0xffffffff size 0x8
static constexpr ::ConstString  kWeirdGear{u"v1_SIResource:weirdGear"};

/// [SerializeField]
/// @brief Field techTreeSO, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeSO>  ___techTreeSO;

/// [SerializeField]
/// @brief Field perCategoryQuestLimit, offset: 0x28, size: 0x4, def value: None
 int32_t  ___perCategoryQuestLimit;

/// @brief Field OnTreeReady, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnTreeReady;

/// @brief Field OnInventoryReady, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnInventoryReady;

/// @brief Field OnNodeUnlocked, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::SIUpgradeType>*  ___OnNodeUnlocked;

/// [CompilerGenerated]
/// @brief Field OnClientReady, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnClientReady;

/// @brief Field ClientReady, offset: 0x50, size: 0x1, def value: None
 bool  ___ClientReady;

/// @brief Field siNodes, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::SIProgression_SINode>*  ___siNodes;

/// @brief Field _treeReady, offset: 0x60, size: 0x1, def value: None
 bool  ____treeReady;

/// @brief Field _inventoryReady, offset: 0x61, size: 0x1, def value: None
 bool  ____inventoryReady;

/// @brief Field heldOrSnappedByGadgetPageType, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  ___heldOrSnappedByGadgetPageType;

/// @brief Field heldOrSnappedOwnGadgets, offset: 0x70, size: 0x4, def value: None
 int32_t  ___heldOrSnappedOwnGadgets;

/// @brief Field heldOrSnappedOthersGadgets, offset: 0x74, size: 0x4, def value: None
 int32_t  ___heldOrSnappedOthersGadgets;

/// @brief Field timeTelemetryLastChecked, offset: 0x78, size: 0x4, def value: None
 float_t  ___timeTelemetryLastChecked;

/// @brief Field lastTelemetrySent, offset: 0x7c, size: 0x4, def value: None
 float_t  ___lastTelemetrySent;

/// @brief Field telemetryCooldown, offset: 0x80, size: 0x4, def value: None
 float_t  ___telemetryCooldown;

/// @brief Field totalPlayTime, offset: 0x84, size: 0x4, def value: None
 float_t  ___totalPlayTime;

/// @brief Field roomPlayTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___roomPlayTime;

/// @brief Field intervalPlayTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ___intervalPlayTime;

/// @brief Field activeTerminalTimeTotal, offset: 0x90, size: 0x4, def value: None
 float_t  ___activeTerminalTimeTotal;

/// @brief Field activeTerminalTimeInterval, offset: 0x94, size: 0x4, def value: None
 float_t  ___activeTerminalTimeInterval;

/// @brief Field timeUsingGadgetTypeTotal, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  ___timeUsingGadgetTypeTotal;

/// @brief Field timeUsingGadgetTypeInterval, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  ___timeUsingGadgetTypeInterval;

/// @brief Field timeUsingOthersGadgetsTotal, offset: 0xa8, size: 0x4, def value: None
 float_t  ___timeUsingOthersGadgetsTotal;

/// @brief Field timeUsingOthersGadgetsInterval, offset: 0xac, size: 0x4, def value: None
 float_t  ___timeUsingOthersGadgetsInterval;

/// @brief Field timeUsingOwnGadgetsTotal, offset: 0xb0, size: 0x4, def value: None
 float_t  ___timeUsingOwnGadgetsTotal;

/// @brief Field timeUsingOwnGadgetsInterval, offset: 0xb4, size: 0x4, def value: None
 float_t  ___timeUsingOwnGadgetsInterval;

/// @brief Field tagsUsingGadgetTypeTotal, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  ___tagsUsingGadgetTypeTotal;

/// @brief Field tagsUsingGadgetTypeInterval, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  ___tagsUsingGadgetTypeInterval;

/// @brief Field tagsHoldingOthersGadgetTotal, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___tagsHoldingOthersGadgetTotal;

/// @brief Field tagsHoldingOthersGadgetInterval, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___tagsHoldingOthersGadgetInterval;

/// @brief Field tagsHoldingOwnGadgetTotal, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___tagsHoldingOwnGadgetTotal;

/// @brief Field tagsHoldingOwnGadgetInterval, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___tagsHoldingOwnGadgetInterval;

/// @brief Field resourcesCollectedTotal, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  ___resourcesCollectedTotal;

/// @brief Field resourcesCollectedInterval, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  ___resourcesCollectedInterval;

/// @brief Field roundsPlayedTotal, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___roundsPlayedTotal;

/// @brief Field roundsPlayedInterval, offset: 0xec, size: 0x4, def value: None
 int32_t  ___roundsPlayedInterval;

/// @brief Field emptyNode, offset: 0xf0, size: 0x28, def value: None
 ::GlobalNamespace::SIProgression_SINode  ___emptyNode;

/// @brief Field questSourceList, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::SIProgression_SIQuestsList*  ___questSourceList;

/// @brief Field CROSSOVER_TIME_OF_DAY, offset: 0x120, size: 0x8, def value: None
 ::System::TimeSpan  ___CROSSOVER_TIME_OF_DAY;

/// @brief Field lastQuestGrantTime, offset: 0x128, size: 0x8, def value: None
 ::System::DateTime  ___lastQuestGrantTime;

/// @brief Field stashedQuests, offset: 0x130, size: 0x4, def value: None
 int32_t  ___stashedQuests;

/// @brief Field completedQuests, offset: 0x134, size: 0x4, def value: None
 int32_t  ___completedQuests;

/// @brief Field stashedBonusPoints, offset: 0x138, size: 0x4, def value: None
 int32_t  ___stashedBonusPoints;

/// @brief Field completedBonusPoints, offset: 0x13c, size: 0x4, def value: None
 int32_t  ___completedBonusPoints;

/// @brief Field bonusProgress, offset: 0x140, size: 0x4, def value: None
 int32_t  ___bonusProgress;

/// @brief Field questGrantRefreshCooldown, offset: 0x144, size: 0x4, def value: None
 int32_t  ___questGrantRefreshCooldown;

/// @brief Field resourceDict, offset: 0x148, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  ___resourceDict;

/// @brief Field limitedDepositTimeArray, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___limitedDepositTimeArray;

/// @brief Field unlockedTechTreeData, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<::ArrayW<bool>>  ___unlockedTechTreeData;

/// [SerializeField]
/// @brief Field activeQuestIds, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___activeQuestIds;

/// [SerializeField]
/// @brief Field activeQuestProgresses, offset: 0x168, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___activeQuestProgresses;

/// [SerializeField]
/// @brief Field activeQuestCategories, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::QuestCategory>  ___activeQuestCategories;

/// @brief Field dailyLimitedTurnedIn, offset: 0x178, size: 0x1, def value: None
 bool  ___dailyLimitedTurnedIn;

/// @brief Field resourceCaps, offset: 0x180, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIProgression_SIProgressionResourceCap>  ___resourceCaps;

/// @brief Field resourceCapsArray, offset: 0x188, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___resourceCapsArray;

/// @brief Field lastQuestGrantTimeDiff, offset: 0x190, size: 0x8, def value: None
 ::System::DateTime  ___lastQuestGrantTimeDiff;

/// @brief Field stashedQuestsDiff, offset: 0x198, size: 0x4, def value: None
 int32_t  ___stashedQuestsDiff;

/// @brief Field stashedBonusPointsDiff, offset: 0x19c, size: 0x4, def value: None
 int32_t  ___stashedBonusPointsDiff;

/// @brief Field bonusProgressDiff, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ___bonusProgressDiff;

/// @brief Field resourceArrayDiff, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___resourceArrayDiff;

/// @brief Field limitedDepositTimeDiff, offset: 0x1b0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___limitedDepositTimeDiff;

/// @brief Field unlockedTechTreeDataDiff, offset: 0x1b8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<bool>>  ___unlockedTechTreeDataDiff;

/// @brief Field activeQuestIdsDiff, offset: 0x1c0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___activeQuestIdsDiff;

/// @brief Field activeQuestProgressesDiff, offset: 0x1c8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___activeQuestProgressesDiff;

/// @brief Field questsInitialized, offset: 0x1d0, size: 0x1, def value: None
 bool  ___questsInitialized;

/// @brief Field _startingPackageGranted, offset: 0x1d1, size: 0x1, def value: None
 bool  ____startingPackageGranted;

/// @brief Field lastStartingPackageAttemptStarted, offset: 0x1d4, size: 0x4, def value: None
 float_t  ___lastStartingPackageAttemptStarted;

/// @brief Field startingPackageBackupAttempts, offset: 0x1d8, size: 0x4, def value: None
 int32_t  ___startingPackageBackupAttempts;

/// @brief Field redeemingQuestInProgress, offset: 0x1e0, size: 0x8, def value: None
 ::ArrayW<bool>  ___redeemingQuestInProgress;

/// @brief Field lastDisconnectTelemetrySent, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___lastDisconnectTelemetrySent;

/// @brief Field minDisconnectTelemetryCooldown, offset: 0x1ec, size: 0x4, def value: None
 float_t  ___minDisconnectTelemetryCooldown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIProgression, ___techTreeSO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___perCategoryQuestLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___OnTreeReady) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___OnInventoryReady) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___OnNodeUnlocked) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___OnClientReady) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___ClientReady) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___siNodes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ____treeReady) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ____inventoryReady) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___heldOrSnappedByGadgetPageType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___heldOrSnappedOwnGadgets) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___heldOrSnappedOthersGadgets) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___timeTelemetryLastChecked) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___lastTelemetrySent) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___telemetryCooldown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___totalPlayTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___roomPlayTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___intervalPlayTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___activeTerminalTimeTotal) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___activeTerminalTimeInterval) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___timeUsingGadgetTypeTotal) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___timeUsingGadgetTypeInterval) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___timeUsingOthersGadgetsTotal) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___timeUsingOthersGadgetsInterval) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___timeUsingOwnGadgetsTotal) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___timeUsingOwnGadgetsInterval) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___tagsUsingGadgetTypeTotal) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___tagsUsingGadgetTypeInterval) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___tagsHoldingOthersGadgetTotal) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___tagsHoldingOthersGadgetInterval) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___tagsHoldingOwnGadgetTotal) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___tagsHoldingOwnGadgetInterval) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___resourcesCollectedTotal) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___resourcesCollectedInterval) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___roundsPlayedTotal) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___roundsPlayedInterval) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___emptyNode) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___questSourceList) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___CROSSOVER_TIME_OF_DAY) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___lastQuestGrantTime) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___stashedQuests) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___completedQuests) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___stashedBonusPoints) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___completedBonusPoints) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___bonusProgress) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___questGrantRefreshCooldown) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___resourceDict) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___limitedDepositTimeArray) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___unlockedTechTreeData) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___activeQuestIds) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___activeQuestProgresses) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___activeQuestCategories) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___dailyLimitedTurnedIn) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___resourceCaps) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___resourceCapsArray) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___lastQuestGrantTimeDiff) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___stashedQuestsDiff) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___stashedBonusPointsDiff) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___bonusProgressDiff) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___resourceArrayDiff) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___limitedDepositTimeDiff) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___unlockedTechTreeDataDiff) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___activeQuestIdsDiff) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___activeQuestProgressesDiff) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___questsInitialized) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ____startingPackageGranted) == 0x1d1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___lastStartingPackageAttemptStarted) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___startingPackageBackupAttempts) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___redeemingQuestInProgress) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___lastDisconnectTelemetrySent) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression, ___minDisconnectTelemetryCooldown) == 0x1ec, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIProgression) == 0x1f0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIProgression/<TryClaimNewPlayerPackage>d__60
class CORDL_TYPE SIProgression__TryClaimNewPlayerPackage_d__60 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SIProgression>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59e9fe0, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59ea0b0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59ea0b8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59ea0f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59e9fdc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::SIProgression> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SIProgression>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SIProgression>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59e6194, size 0x28, virtual false, abstract: false, final false
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
constexpr SIProgression__TryClaimNewPlayerPackage_d__60() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIProgression__TryClaimNewPlayerPackage_d__60", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIProgression__TryClaimNewPlayerPackage_d__60(SIProgression__TryClaimNewPlayerPackage_d__60 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIProgression__TryClaimNewPlayerPackage_d__60", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIProgression__TryClaimNewPlayerPackage_d__60(SIProgression__TryClaimNewPlayerPackage_d__60 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{332};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIProgression>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIProgression/<>c__DisplayClass158_0
class CORDL_TYPE SIProgression___c__DisplayClass158_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SIProgression>  __4__this;

/// @brief Field quest, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_quest, put=__cordl_internal_set_quest)) ::GlobalNamespace::RotatingQuest*  quest;

/// @brief Field questIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_questIndex, put=__cordl_internal_set_questIndex)) int32_t  questIndex;

static inline ::GlobalNamespace::SIProgression___c__DisplayClass158_0* New_ctor() ;

/// @brief Method <AttemptRedeemCompletedQuest>b__0, addr 0x59e9ec4, size 0x24, virtual false, abstract: false, final false
inline void _AttemptRedeemCompletedQuest_b__0(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  status) ;

/// @brief Method <AttemptRedeemCompletedQuest>b__1, addr 0x59e9ee8, size 0xf4, virtual false, abstract: false, final false
inline void _AttemptRedeemCompletedQuest_b__1(::StringW  err) ;

constexpr ::UnityW<::GlobalNamespace::SIProgression> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SIProgression>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::RotatingQuest* const& __cordl_internal_get_quest() const;

constexpr ::GlobalNamespace::RotatingQuest*& __cordl_internal_get_quest() ;

constexpr int32_t const& __cordl_internal_get_questIndex() const;

constexpr int32_t& __cordl_internal_get_questIndex() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SIProgression>  value) ;

constexpr void __cordl_internal_set_quest(::GlobalNamespace::RotatingQuest*  value) ;

constexpr void __cordl_internal_set_questIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x59e7fe8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIProgression___c__DisplayClass158_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIProgression___c__DisplayClass158_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIProgression___c__DisplayClass158_0(SIProgression___c__DisplayClass158_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIProgression___c__DisplayClass158_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIProgression___c__DisplayClass158_0(SIProgression___c__DisplayClass158_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{331};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIProgression>  _____4__this;

/// @brief Field questIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___questIndex;

/// @brief Field quest, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::RotatingQuest*  ___quest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIProgression___c__DisplayClass158_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression___c__DisplayClass158_0, ___questIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression___c__DisplayClass158_0, ___quest) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIProgression___c__DisplayClass158_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIProgression/<>c
class CORDL_TYPE SIProgression___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::SIProgression___c*  __9;

/// @brief Field <>9__156_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__156_0, put=setStaticF___9__156_0)) ::System::Action_1<::StringW>*  __9__156_0;

/// @brief Field <>9__161_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__161_1, put=setStaticF___9__161_1)) ::System::Action_1<::StringW>*  __9__161_1;

/// @brief Field <>9__163_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__163_0, put=setStaticF___9__163_0)) ::System::Action_1<::StringW>*  __9__163_0;

static inline ::GlobalNamespace::SIProgression___c* New_ctor() ;

/// @brief Method <AttemptCollectMonkeIdol>b__163_0, addr 0x59e9e6c, size 0x58, virtual false, abstract: false, final false
inline void _AttemptCollectMonkeIdol_b__163_0(::StringW  err) ;

/// @brief Method <AttemptIncrementResource>b__156_0, addr 0x59e9dbc, size 0x58, virtual false, abstract: false, final false
inline void _AttemptIncrementResource_b__156_0(::StringW  err) ;

/// @brief Method <AttemptRedeemBonusPoint>b__161_1, addr 0x59e9e14, size 0x58, virtual false, abstract: false, final false
inline void _AttemptRedeemBonusPoint_b__161_1(::StringW  err) ;

/// @brief Method .ctor, addr 0x59e9db4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SIProgression___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__156_0() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__161_1() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__163_0() ;

static inline void setStaticF___9(::GlobalNamespace::SIProgression___c*  value) ;

static inline void setStaticF___9__156_0(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__161_1(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__163_0(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIProgression___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIProgression___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIProgression___c(SIProgression___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIProgression___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIProgression___c(SIProgression___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SIProgression___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIProgression/SIQuestsList
class CORDL_TYPE SIProgression_SIQuestsList : public ::System::Object {
public:
// Declarations
/// @brief Field quests, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_quests, put=__cordl_internal_set_quests)) ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  quests;

/// @brief Method GetQuestById, addr 0x59e243c, size 0x150, virtual false, abstract: false, final false
inline ::GlobalNamespace::RotatingQuest* GetQuestById(int32_t  questID) ;

static inline ::GlobalNamespace::SIProgression_SIQuestsList* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>* const& __cordl_internal_get_quests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*& __cordl_internal_get_quests() ;

constexpr void __cordl_internal_set_quests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  value) ;

/// @brief Method .ctor, addr 0x59e6bf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIProgression_SIQuestsList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIProgression_SIQuestsList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIProgression_SIQuestsList(SIProgression_SIQuestsList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIProgression_SIQuestsList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIProgression_SIQuestsList(SIProgression_SIQuestsList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{328};

/// @brief Field quests, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  ___quests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIProgression_SIQuestsList, ___quests) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIProgression_SIQuestsList) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
