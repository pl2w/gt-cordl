#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_CoreType_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_DrillUpgradeLevel_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_RequestType_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_WristDockUpgradeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionManager)
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
namespace GlobalNamespace {
class GetProgressionTreesForPlayerResponse;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipGetInventoryResponse;
}
namespace GlobalNamespace {
class ProgressionManager_AdvanceDockWristUpgradeRequest;
}
namespace GlobalNamespace {
struct ProgressionManager_CoreType;
}
namespace GlobalNamespace {
class ProgressionManager_DepositCoreRequest;
}
namespace GlobalNamespace {
class ProgressionManager_DepositCoreResponse;
}
namespace GlobalNamespace {
class ProgressionManager_DockWristStatusResponse;
}
namespace GlobalNamespace {
class ProgressionManager_DockWristUpgradeStatusRequest;
}
namespace GlobalNamespace {
struct ProgressionManager_DrillUpgradeLevel;
}
namespace GlobalNamespace {
class ProgressionManager_EndOfShiftRewardRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetActiveSIQuestsRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetActiveSIQuestsResponse;
}
namespace GlobalNamespace {
class ProgressionManager_GetActiveSIQuestsResult;
}
namespace GlobalNamespace {
class ProgressionManager_GetJuicerStatusRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetProgressionRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetProgressionResponse;
}
namespace GlobalNamespace {
class ProgressionManager_GetSIQuestsStatusRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetSIQuestsStatusResponse;
}
namespace GlobalNamespace {
class ProgressionManager_GetShiftCreditRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GhostReactorInventoryRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GhostReactorInventoryResponse;
}
namespace GlobalNamespace {
class ProgressionManager_GhostReactorStatsRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GhostReactorStatsResponse;
}
namespace GlobalNamespace {
class ProgressionManager_IncrementSIResourceRequest;
}
namespace GlobalNamespace {
class ProgressionManager_IncrementSIResourceResponse;
}
namespace GlobalNamespace {
class ProgressionManager_JuicerStatusResponse;
}
namespace GlobalNamespace {
struct ProgressionManager_MothershipItemSummary;
}
namespace GlobalNamespace {
class ProgressionManager_MothershipRequest;
}
namespace GlobalNamespace {
class ProgressionManager_MothershipUserDataWriteRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseDrillUpgradeRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseDrillUpgradeResponse;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseOverdriveRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseResourcesRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseShiftCreditCapIncreaseRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseShiftCreditCapIncreaseResponse;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseShiftCreditRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseShiftCreditResponse;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseTechPointsRequest;
}
namespace GlobalNamespace {
class ProgressionManager_RecycleToolRequest;
}
namespace GlobalNamespace {
struct ProgressionManager_RequestType;
}
namespace GlobalNamespace {
class ProgressionManager_ResetSIQuestsStatusRequest;
}
namespace GlobalNamespace {
class ProgressionManager_RewardRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetGhostReactorInventoryRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetGhostReactorInventoryResponse;
}
namespace GlobalNamespace {
class ProgressionManager_SetProgressionRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetProgressionResponse;
}
namespace GlobalNamespace {
class ProgressionManager_SetSIBonusCompleteRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetSIIdolCollectRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetSIQuestCompleteRequest;
}
namespace GlobalNamespace {
class ProgressionManager_ShiftCreditResponse;
}
namespace GlobalNamespace {
class ProgressionManager_StartOfShiftRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SubtractShiftCreditRequest;
}
namespace GlobalNamespace {
class ProgressionManager_UnlockNodeRequest;
}
namespace GlobalNamespace {
class ProgressionManager_UnlockNodeResponse;
}
namespace GlobalNamespace {
class ProgressionManager_UserInventoryResponse;
}
namespace GlobalNamespace {
class ProgressionManager_UserInventory;
}
namespace GlobalNamespace {
class ProgressionManager_UserQuestsStatusResponse;
}
namespace GlobalNamespace {
struct ProgressionManager_WristDockUpgradeType;
}
namespace GlobalNamespace {
struct ProgressionManager__CollectSIIdol_d__82;
}
namespace GlobalNamespace {
struct ProgressionManager__CompleteSIBonus_d__81;
}
namespace GlobalNamespace {
struct ProgressionManager__CompleteSIQuest_d__80;
}
namespace GlobalNamespace {
class ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132;
}
namespace GlobalNamespace {
class ProgressionManager__DoBonusCompleteReward_d__119;
}
namespace GlobalNamespace {
class ProgressionManager__DoDepositCore_d__129;
}
namespace GlobalNamespace {
class ProgressionManager__DoEndOfShiftReward_d__137;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetActiveSIQuests_d__121;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetDockWristUpgradeStatus_d__133;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetGhostReactorInventory_d__139;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetGhostReactorStats_d__138;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetJuicerStatus_d__128;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetProgression_d__114;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetSIQuestsStatus_d__122;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetShiftCredit_d__127;
}
namespace GlobalNamespace {
class ProgressionManager__DoIdolCollectReward_d__120;
}
namespace GlobalNamespace {
class ProgressionManager__DoIncrementSIResource_d__117;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseDrillUpgrade_d__134;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseOverdrive_d__130;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseResources_d__124;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseShiftCredit_d__126;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseTechPoints_d__123;
}
namespace GlobalNamespace {
class ProgressionManager__DoQuestCompleteReward_d__118;
}
namespace GlobalNamespace {
class ProgressionManager__DoRecycleTool_d__135;
}
namespace GlobalNamespace {
class ProgressionManager__DoSetGhostReactorInventory_d__140;
}
namespace GlobalNamespace {
class ProgressionManager__DoSetProgression_d__115;
}
namespace GlobalNamespace {
class ProgressionManager__DoStartOfShift_d__136;
}
namespace GlobalNamespace {
class ProgressionManager__DoSubtractShiftCredit_d__131;
}
namespace GlobalNamespace {
class ProgressionManager__DoUnlockNode_d__116;
}
namespace GlobalNamespace {
struct ProgressionManager__GetActiveSIQuests_d__83;
}
namespace GlobalNamespace {
struct ProgressionManager__GetProgression_d__76;
}
namespace GlobalNamespace {
struct ProgressionManager__GetSIQuestStatus_d__84;
}
namespace GlobalNamespace {
template<typename T>
class ProgressionManager__HandleWebRequestRetries_d__112_1;
}
namespace GlobalNamespace {
struct ProgressionManager__IncrementSIResource_d__79;
}
namespace GlobalNamespace {
struct ProgressionManager__PurchaseResources_d__86;
}
namespace GlobalNamespace {
struct ProgressionManager__PurchaseTechPoints_d__85;
}
namespace GlobalNamespace {
struct ProgressionManager__RefreshProgressionTree_d__71;
}
namespace GlobalNamespace {
struct ProgressionManager__RefreshUserInventory_d__72;
}
namespace GlobalNamespace {
struct ProgressionManager__SetProgression_d__77;
}
namespace GlobalNamespace {
struct ProgressionManager__UnlockNode_d__78;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass117_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass118_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass119_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass120_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass121_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass122_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass123_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass124_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass125_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass126_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass128_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass129_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass130_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass131_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass132_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass134_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass135_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass136_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass137_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass140_0;
}
namespace GlobalNamespace {
class RotatingQuest;
}
namespace GlobalNamespace {
class UserHydratedProgressionTreeResponse;
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
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressionManager;
}
namespace GlobalNamespace {
class ProgressionManager_AdvanceDockWristUpgradeRequest;
}
namespace GlobalNamespace {
class ProgressionManager_DepositCoreRequest;
}
namespace GlobalNamespace {
class ProgressionManager_DepositCoreResponse;
}
namespace GlobalNamespace {
class ProgressionManager_DockWristStatusResponse;
}
namespace GlobalNamespace {
class ProgressionManager_DockWristUpgradeStatusRequest;
}
namespace GlobalNamespace {
class ProgressionManager_EndOfShiftRewardRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetActiveSIQuestsRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetActiveSIQuestsResponse;
}
namespace GlobalNamespace {
class ProgressionManager_GetActiveSIQuestsResult;
}
namespace GlobalNamespace {
class ProgressionManager_GetJuicerStatusRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetProgressionRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetProgressionResponse;
}
namespace GlobalNamespace {
class ProgressionManager_GetSIQuestsStatusRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GetSIQuestsStatusResponse;
}
namespace GlobalNamespace {
class ProgressionManager_GetShiftCreditRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GhostReactorInventoryRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GhostReactorInventoryResponse;
}
namespace GlobalNamespace {
class ProgressionManager_GhostReactorStatsRequest;
}
namespace GlobalNamespace {
class ProgressionManager_GhostReactorStatsResponse;
}
namespace GlobalNamespace {
class ProgressionManager_IncrementSIResourceRequest;
}
namespace GlobalNamespace {
class ProgressionManager_IncrementSIResourceResponse;
}
namespace GlobalNamespace {
class ProgressionManager_JuicerStatusResponse;
}
namespace GlobalNamespace {
class ProgressionManager_MothershipRequest;
}
namespace GlobalNamespace {
class ProgressionManager_MothershipUserDataWriteRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseDrillUpgradeRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseDrillUpgradeResponse;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseOverdriveRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseResourcesRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseShiftCreditCapIncreaseRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseShiftCreditCapIncreaseResponse;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseShiftCreditRequest;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseShiftCreditResponse;
}
namespace GlobalNamespace {
class ProgressionManager_PurchaseTechPointsRequest;
}
namespace GlobalNamespace {
class ProgressionManager_RecycleToolRequest;
}
namespace GlobalNamespace {
class ProgressionManager_ResetSIQuestsStatusRequest;
}
namespace GlobalNamespace {
class ProgressionManager_RewardRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetGhostReactorInventoryRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetGhostReactorInventoryResponse;
}
namespace GlobalNamespace {
class ProgressionManager_SetProgressionRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetProgressionResponse;
}
namespace GlobalNamespace {
class ProgressionManager_SetSIBonusCompleteRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetSIIdolCollectRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SetSIQuestCompleteRequest;
}
namespace GlobalNamespace {
class ProgressionManager_ShiftCreditResponse;
}
namespace GlobalNamespace {
class ProgressionManager_StartOfShiftRequest;
}
namespace GlobalNamespace {
class ProgressionManager_SubtractShiftCreditRequest;
}
namespace GlobalNamespace {
class ProgressionManager_UnlockNodeRequest;
}
namespace GlobalNamespace {
class ProgressionManager_UnlockNodeResponse;
}
namespace GlobalNamespace {
class ProgressionManager_UserInventory;
}
namespace GlobalNamespace {
class ProgressionManager_UserInventoryResponse;
}
namespace GlobalNamespace {
class ProgressionManager_UserQuestsStatusResponse;
}
namespace GlobalNamespace {
class ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132;
}
namespace GlobalNamespace {
class ProgressionManager__DoBonusCompleteReward_d__119;
}
namespace GlobalNamespace {
class ProgressionManager__DoDepositCore_d__129;
}
namespace GlobalNamespace {
class ProgressionManager__DoEndOfShiftReward_d__137;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetActiveSIQuests_d__121;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetDockWristUpgradeStatus_d__133;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetGhostReactorInventory_d__139;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetGhostReactorStats_d__138;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetJuicerStatus_d__128;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetProgression_d__114;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetSIQuestsStatus_d__122;
}
namespace GlobalNamespace {
class ProgressionManager__DoGetShiftCredit_d__127;
}
namespace GlobalNamespace {
class ProgressionManager__DoIdolCollectReward_d__120;
}
namespace GlobalNamespace {
class ProgressionManager__DoIncrementSIResource_d__117;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseDrillUpgrade_d__134;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseOverdrive_d__130;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseResources_d__124;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseShiftCredit_d__126;
}
namespace GlobalNamespace {
class ProgressionManager__DoPurchaseTechPoints_d__123;
}
namespace GlobalNamespace {
class ProgressionManager__DoQuestCompleteReward_d__118;
}
namespace GlobalNamespace {
class ProgressionManager__DoRecycleTool_d__135;
}
namespace GlobalNamespace {
class ProgressionManager__DoSetGhostReactorInventory_d__140;
}
namespace GlobalNamespace {
class ProgressionManager__DoSetProgression_d__115;
}
namespace GlobalNamespace {
class ProgressionManager__DoStartOfShift_d__136;
}
namespace GlobalNamespace {
class ProgressionManager__DoSubtractShiftCredit_d__131;
}
namespace GlobalNamespace {
class ProgressionManager__DoUnlockNode_d__116;
}
namespace GlobalNamespace {
template<typename T>
class ProgressionManager__HandleWebRequestRetries_d__112_1;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass117_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass118_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass119_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass120_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass121_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass122_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass123_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass124_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass125_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass126_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass128_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass129_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass130_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass131_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass132_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass134_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass135_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass136_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass137_0;
}
namespace GlobalNamespace {
class ProgressionManager___c__DisplayClass140_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProgressionManager*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_DepositCoreRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_DepositCoreResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_DockWristStatusResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetProgressionRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetProgressionResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_JuicerStatusResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_MothershipRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_RecycleToolRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_RewardRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_SetProgressionRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_SetProgressionResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_ShiftCreditResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_UnlockNodeRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_UnlockNodeResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_UserInventory*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_UserInventoryResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*);
MARK_REF_T(::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*);
MARK_REF_T(::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager*, "", "ProgressionManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*, "", "ProgressionManager/AdvanceDockWristUpgradeRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_DepositCoreRequest*, "", "ProgressionManager/DepositCoreRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_DepositCoreResponse*, "", "ProgressionManager/DepositCoreResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_DockWristStatusResponse*, "", "ProgressionManager/DockWristStatusResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*, "", "ProgressionManager/DockWristUpgradeStatusRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*, "", "ProgressionManager/EndOfShiftRewardRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*, "", "ProgressionManager/GetActiveSIQuestsRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse*, "", "ProgressionManager/GetActiveSIQuestsResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*, "", "ProgressionManager/GetActiveSIQuestsResult");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*, "", "ProgressionManager/GetJuicerStatusRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetProgressionRequest*, "", "ProgressionManager/GetProgressionRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetProgressionResponse*, "", "ProgressionManager/GetProgressionResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*, "", "ProgressionManager/GetSIQuestsStatusRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse*, "", "ProgressionManager/GetSIQuestsStatusResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*, "", "ProgressionManager/GetShiftCreditRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*, "", "ProgressionManager/GhostReactorInventoryRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*, "", "ProgressionManager/GhostReactorInventoryResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*, "", "ProgressionManager/GhostReactorStatsRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*, "", "ProgressionManager/GhostReactorStatsResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*, "", "ProgressionManager/IncrementSIResourceRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse*, "", "ProgressionManager/IncrementSIResourceResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_JuicerStatusResponse*, "", "ProgressionManager/JuicerStatusResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_MothershipRequest*, "", "ProgressionManager/MothershipRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest*, "", "ProgressionManager/MothershipUserDataWriteRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*, "", "ProgressionManager/PurchaseDrillUpgradeRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse*, "", "ProgressionManager/PurchaseDrillUpgradeResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*, "", "ProgressionManager/PurchaseOverdriveRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*, "", "ProgressionManager/PurchaseResourcesRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*, "", "ProgressionManager/PurchaseShiftCreditCapIncreaseRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse*, "", "ProgressionManager/PurchaseShiftCreditCapIncreaseResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*, "", "ProgressionManager/PurchaseShiftCreditRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse*, "", "ProgressionManager/PurchaseShiftCreditResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*, "", "ProgressionManager/PurchaseTechPointsRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_RecycleToolRequest*, "", "ProgressionManager/RecycleToolRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest*, "", "ProgressionManager/ResetSIQuestsStatusRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_RewardRequest*, "", "ProgressionManager/RewardRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*, "", "ProgressionManager/SetGhostReactorInventoryRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse*, "", "ProgressionManager/SetGhostReactorInventoryResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_SetProgressionRequest*, "", "ProgressionManager/SetProgressionRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_SetProgressionResponse*, "", "ProgressionManager/SetProgressionResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*, "", "ProgressionManager/SetSIBonusCompleteRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*, "", "ProgressionManager/SetSIIdolCollectRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*, "", "ProgressionManager/SetSIQuestCompleteRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_ShiftCreditResponse*, "", "ProgressionManager/ShiftCreditResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*, "", "ProgressionManager/StartOfShiftRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*, "", "ProgressionManager/SubtractShiftCreditRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_UnlockNodeRequest*, "", "ProgressionManager/UnlockNodeRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_UnlockNodeResponse*, "", "ProgressionManager/UnlockNodeResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_UserInventory*, "", "ProgressionManager/UserInventory");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_UserInventoryResponse*, "", "ProgressionManager/UserInventoryResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*, "", "ProgressionManager/UserQuestsStatusResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*, "", "ProgressionManager/<DoAdvanceDockWristUpgradeLevel>d__132");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*, "", "ProgressionManager/<DoBonusCompleteReward>d__119");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*, "", "ProgressionManager/<DoDepositCore>d__129");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*, "", "ProgressionManager/<DoEndOfShiftReward>d__137");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*, "", "ProgressionManager/<DoGetActiveSIQuests>d__121");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*, "", "ProgressionManager/<DoGetDockWristUpgradeStatus>d__133");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*, "", "ProgressionManager/<DoGetGhostReactorInventory>d__139");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*, "", "ProgressionManager/<DoGetGhostReactorStats>d__138");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*, "", "ProgressionManager/<DoGetJuicerStatus>d__128");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*, "", "ProgressionManager/<DoGetProgression>d__114");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*, "", "ProgressionManager/<DoGetSIQuestsStatus>d__122");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*, "", "ProgressionManager/<DoGetShiftCredit>d__127");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*, "", "ProgressionManager/<DoIdolCollectReward>d__120");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*, "", "ProgressionManager/<DoIncrementSIResource>d__117");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*, "", "ProgressionManager/<DoPurchaseDrillUpgrade>d__134");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*, "", "ProgressionManager/<DoPurchaseOverdrive>d__130");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*, "", "ProgressionManager/<DoPurchaseResources>d__124");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*, "", "ProgressionManager/<DoPurchaseShiftCreditCapIncrease>d__125");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*, "", "ProgressionManager/<DoPurchaseShiftCredit>d__126");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*, "", "ProgressionManager/<DoPurchaseTechPoints>d__123");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*, "", "ProgressionManager/<DoQuestCompleteReward>d__118");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*, "", "ProgressionManager/<DoRecycleTool>d__135");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*, "", "ProgressionManager/<DoSetGhostReactorInventory>d__140");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*, "", "ProgressionManager/<DoSetProgression>d__115");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*, "", "ProgressionManager/<DoStartOfShift>d__136");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*, "", "ProgressionManager/<DoSubtractShiftCredit>d__131");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*, "", "ProgressionManager/<DoUnlockNode>d__116");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1, "", "ProgressionManager/<HandleWebRequestRetries>d__112`1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*, "", "ProgressionManager/<>c__DisplayClass117_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*, "", "ProgressionManager/<>c__DisplayClass118_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*, "", "ProgressionManager/<>c__DisplayClass119_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*, "", "ProgressionManager/<>c__DisplayClass120_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*, "", "ProgressionManager/<>c__DisplayClass121_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*, "", "ProgressionManager/<>c__DisplayClass122_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*, "", "ProgressionManager/<>c__DisplayClass123_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*, "", "ProgressionManager/<>c__DisplayClass124_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*, "", "ProgressionManager/<>c__DisplayClass125_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*, "", "ProgressionManager/<>c__DisplayClass126_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*, "", "ProgressionManager/<>c__DisplayClass128_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*, "", "ProgressionManager/<>c__DisplayClass129_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*, "", "ProgressionManager/<>c__DisplayClass130_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*, "", "ProgressionManager/<>c__DisplayClass131_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*, "", "ProgressionManager/<>c__DisplayClass132_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*, "", "ProgressionManager/<>c__DisplayClass134_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*, "", "ProgressionManager/<>c__DisplayClass135_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*, "", "ProgressionManager/<>c__DisplayClass136_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*, "", "ProgressionManager/<>c__DisplayClass137_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*, "", "ProgressionManager/<>c__DisplayClass140_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager
class CORDL_TYPE ProgressionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AdvanceDockWristUpgradeRequest = ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest;

using CoreType = ::GlobalNamespace::ProgressionManager_CoreType;

using DepositCoreRequest = ::GlobalNamespace::ProgressionManager_DepositCoreRequest;

using DepositCoreResponse = ::GlobalNamespace::ProgressionManager_DepositCoreResponse;

using DockWristStatusResponse = ::GlobalNamespace::ProgressionManager_DockWristStatusResponse;

using DockWristUpgradeStatusRequest = ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest;

using DrillUpgradeLevel = ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel;

using EndOfShiftRewardRequest = ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest;

using GetActiveSIQuestsRequest = ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest;

using GetActiveSIQuestsResponse = ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse;

using GetActiveSIQuestsResult = ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult;

using GetJuicerStatusRequest = ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest;

using GetProgressionRequest = ::GlobalNamespace::ProgressionManager_GetProgressionRequest;

using GetProgressionResponse = ::GlobalNamespace::ProgressionManager_GetProgressionResponse;

using GetSIQuestsStatusRequest = ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest;

using GetSIQuestsStatusResponse = ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse;

using GetShiftCreditRequest = ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest;

using GhostReactorInventoryRequest = ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest;

using GhostReactorInventoryResponse = ::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse;

using GhostReactorStatsRequest = ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest;

using GhostReactorStatsResponse = ::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse;

using IncrementSIResourceRequest = ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest;

using IncrementSIResourceResponse = ::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse;

using JuicerStatusResponse = ::GlobalNamespace::ProgressionManager_JuicerStatusResponse;

using MothershipItemSummary = ::GlobalNamespace::ProgressionManager_MothershipItemSummary;

using MothershipRequest = ::GlobalNamespace::ProgressionManager_MothershipRequest;

using MothershipUserDataWriteRequest = ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest;

using PurchaseDrillUpgradeRequest = ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest;

using PurchaseDrillUpgradeResponse = ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse;

using PurchaseOverdriveRequest = ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest;

using PurchaseResourcesRequest = ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest;

using PurchaseShiftCreditCapIncreaseRequest = ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest;

using PurchaseShiftCreditCapIncreaseResponse = ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse;

using PurchaseShiftCreditRequest = ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest;

using PurchaseShiftCreditResponse = ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse;

using PurchaseTechPointsRequest = ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest;

using RecycleToolRequest = ::GlobalNamespace::ProgressionManager_RecycleToolRequest;

using RequestType = ::GlobalNamespace::ProgressionManager_RequestType;

using ResetSIQuestsStatusRequest = ::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest;

using RewardRequest = ::GlobalNamespace::ProgressionManager_RewardRequest;

using SetGhostReactorInventoryRequest = ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest;

using SetGhostReactorInventoryResponse = ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse;

using SetProgressionRequest = ::GlobalNamespace::ProgressionManager_SetProgressionRequest;

using SetProgressionResponse = ::GlobalNamespace::ProgressionManager_SetProgressionResponse;

using SetSIBonusCompleteRequest = ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest;

using SetSIIdolCollectRequest = ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest;

using SetSIQuestCompleteRequest = ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest;

using ShiftCreditResponse = ::GlobalNamespace::ProgressionManager_ShiftCreditResponse;

using StartOfShiftRequest = ::GlobalNamespace::ProgressionManager_StartOfShiftRequest;

using SubtractShiftCreditRequest = ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest;

using UnlockNodeRequest = ::GlobalNamespace::ProgressionManager_UnlockNodeRequest;

using UnlockNodeResponse = ::GlobalNamespace::ProgressionManager_UnlockNodeResponse;

using UserInventory = ::GlobalNamespace::ProgressionManager_UserInventory;

using UserInventoryResponse = ::GlobalNamespace::ProgressionManager_UserInventoryResponse;

using UserQuestsStatusResponse = ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse;

using WristDockUpgradeType = ::GlobalNamespace::ProgressionManager_WristDockUpgradeType;

using _CollectSIIdol_d__82 = ::GlobalNamespace::ProgressionManager__CollectSIIdol_d__82;

using _CompleteSIBonus_d__81 = ::GlobalNamespace::ProgressionManager__CompleteSIBonus_d__81;

using _CompleteSIQuest_d__80 = ::GlobalNamespace::ProgressionManager__CompleteSIQuest_d__80;

using _DoAdvanceDockWristUpgradeLevel_d__132 = ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132;

using _DoBonusCompleteReward_d__119 = ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119;

using _DoDepositCore_d__129 = ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129;

using _DoEndOfShiftReward_d__137 = ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137;

using _DoGetActiveSIQuests_d__121 = ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121;

using _DoGetDockWristUpgradeStatus_d__133 = ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133;

using _DoGetGhostReactorInventory_d__139 = ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139;

using _DoGetGhostReactorStats_d__138 = ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138;

using _DoGetJuicerStatus_d__128 = ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128;

using _DoGetProgression_d__114 = ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114;

using _DoGetSIQuestsStatus_d__122 = ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122;

using _DoGetShiftCredit_d__127 = ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127;

using _DoIdolCollectReward_d__120 = ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120;

using _DoIncrementSIResource_d__117 = ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117;

using _DoPurchaseDrillUpgrade_d__134 = ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134;

using _DoPurchaseOverdrive_d__130 = ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130;

using _DoPurchaseResources_d__124 = ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124;

using _DoPurchaseShiftCreditCapIncrease_d__125 = ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125;

using _DoPurchaseShiftCredit_d__126 = ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126;

using _DoPurchaseTechPoints_d__123 = ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123;

using _DoQuestCompleteReward_d__118 = ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118;

using _DoRecycleTool_d__135 = ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135;

using _DoSetGhostReactorInventory_d__140 = ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140;

using _DoSetProgression_d__115 = ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115;

using _DoStartOfShift_d__136 = ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136;

using _DoSubtractShiftCredit_d__131 = ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131;

using _DoUnlockNode_d__116 = ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116;

using _GetActiveSIQuests_d__83 = ::GlobalNamespace::ProgressionManager__GetActiveSIQuests_d__83;

using _GetProgression_d__76 = ::GlobalNamespace::ProgressionManager__GetProgression_d__76;

using _GetSIQuestStatus_d__84 = ::GlobalNamespace::ProgressionManager__GetSIQuestStatus_d__84;

template<typename T>
using _HandleWebRequestRetries_d__112_1 = ::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>;

using _IncrementSIResource_d__79 = ::GlobalNamespace::ProgressionManager__IncrementSIResource_d__79;

using _PurchaseResources_d__86 = ::GlobalNamespace::ProgressionManager__PurchaseResources_d__86;

using _PurchaseTechPoints_d__85 = ::GlobalNamespace::ProgressionManager__PurchaseTechPoints_d__85;

using _RefreshProgressionTree_d__71 = ::GlobalNamespace::ProgressionManager__RefreshProgressionTree_d__71;

using _RefreshUserInventory_d__72 = ::GlobalNamespace::ProgressionManager__RefreshUserInventory_d__72;

using _SetProgression_d__77 = ::GlobalNamespace::ProgressionManager__SetProgression_d__77;

using _UnlockNode_d__78 = ::GlobalNamespace::ProgressionManager__UnlockNode_d__78;

using __c__DisplayClass117_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0;

using __c__DisplayClass118_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0;

using __c__DisplayClass119_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0;

using __c__DisplayClass120_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0;

using __c__DisplayClass121_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0;

using __c__DisplayClass122_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0;

using __c__DisplayClass123_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0;

using __c__DisplayClass124_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0;

using __c__DisplayClass125_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0;

using __c__DisplayClass126_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0;

using __c__DisplayClass128_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0;

using __c__DisplayClass129_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0;

using __c__DisplayClass130_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0;

using __c__DisplayClass131_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0;

using __c__DisplayClass132_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0;

using __c__DisplayClass134_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0;

using __c__DisplayClass135_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0;

using __c__DisplayClass136_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0;

using __c__DisplayClass137_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0;

using __c__DisplayClass140_0 = ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0;

/// @brief Field OnChaosDepositSuccess, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnChaosDepositSuccess, put=__cordl_internal_set_OnChaosDepositSuccess)) ::System::Action_1<bool>*  OnChaosDepositSuccess;

/// @brief Field OnDockWristStatusUpdated, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDockWristStatusUpdated, put=__cordl_internal_set_OnDockWristStatusUpdated)) ::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*  OnDockWristStatusUpdated;

/// @brief Field OnGetShiftCredit, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGetShiftCredit, put=__cordl_internal_set_OnGetShiftCredit)) ::System::Action_2<::StringW,int32_t>*  OnGetShiftCredit;

/// @brief Field OnGetShiftCreditCapData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGetShiftCreditCapData, put=__cordl_internal_set_OnGetShiftCreditCapData)) ::System::Action_3<::StringW,int32_t,int32_t>*  OnGetShiftCreditCapData;

/// @brief Field OnGhostReactorInventoryUpdated, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGhostReactorInventoryUpdated, put=__cordl_internal_set_OnGhostReactorInventoryUpdated)) ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*  OnGhostReactorInventoryUpdated;

/// @brief Field OnGhostReactorStatsUpdated, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGhostReactorStatsUpdated, put=__cordl_internal_set_OnGhostReactorStatsUpdated)) ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*  OnGhostReactorStatsUpdated;

/// @brief Field OnInventoryUpdated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInventoryUpdated, put=__cordl_internal_set_OnInventoryUpdated)) ::System::Action*  OnInventoryUpdated;

/// @brief Field OnJucierStatusUpdated, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnJucierStatusUpdated, put=__cordl_internal_set_OnJucierStatusUpdated)) ::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*  OnJucierStatusUpdated;

/// @brief Field OnNodeUnlocked, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNodeUnlocked, put=__cordl_internal_set_OnNodeUnlocked)) ::System::Action_2<::StringW,::StringW>*  OnNodeUnlocked;

/// @brief Field OnPurchaseOverdrive, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPurchaseOverdrive, put=__cordl_internal_set_OnPurchaseOverdrive)) ::System::Action_1<bool>*  OnPurchaseOverdrive;

/// @brief Field OnPurchaseShiftCredit, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPurchaseShiftCredit, put=__cordl_internal_set_OnPurchaseShiftCredit)) ::System::Action_1<bool>*  OnPurchaseShiftCredit;

/// @brief Field OnPurchaseShiftCreditCapIncrease, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPurchaseShiftCreditCapIncrease, put=__cordl_internal_set_OnPurchaseShiftCreditCapIncrease)) ::System::Action_1<bool>*  OnPurchaseShiftCreditCapIncrease;

/// @brief Field OnTrackRead, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTrackRead, put=__cordl_internal_set_OnTrackRead)) ::System::Action_2<::StringW,int32_t>*  OnTrackRead;

/// @brief Field OnTrackSet, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTrackSet, put=__cordl_internal_set_OnTrackSet)) ::System::Action_2<::StringW,int32_t>*  OnTrackSet;

/// @brief Field OnTreeUpdated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTreeUpdated, put=__cordl_internal_set_OnTreeUpdated)) ::System::Action*  OnTreeUpdated;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::ProgressionManager>  _Instance_k__BackingField;

/// @brief Field _inventory, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__inventory, put=__cordl_internal_set__inventory)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ProgressionManager_MothershipItemSummary>*  _inventory;

/// @brief Field _inventoryRefreshInFlight, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get__inventoryRefreshInFlight, put=__cordl_internal_set__inventoryRefreshInFlight)) bool  _inventoryRefreshInFlight;

/// @brief Field _lastInventoryRefreshTime, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastInventoryRefreshTime, put=__cordl_internal_set__lastInventoryRefreshTime)) double_t  _lastInventoryRefreshTime;

/// @brief Field _lastTreeRefreshTime, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastTreeRefreshTime, put=__cordl_internal_set__lastTreeRefreshTime)) double_t  _lastTreeRefreshTime;

/// @brief Field _tracks, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tracks, put=__cordl_internal_set__tracks)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _tracks;

/// @brief Field _treeRefreshInFlight, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__treeRefreshInFlight, put=__cordl_internal_set__treeRefreshInFlight)) bool  _treeRefreshInFlight;

/// @brief Field _trees, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__trees, put=__cordl_internal_set__trees)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UserHydratedProgressionTreeResponse*>*  _trees;

/// @brief Field debug_lastRefreshInventoryAttemptTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_debug_lastRefreshInventoryAttemptTime, put=setStaticF_debug_lastRefreshInventoryAttemptTime)) double_t  debug_lastRefreshInventoryAttemptTime;

/// @brief Field debug_lastRefreshTreeAttemptTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_debug_lastRefreshTreeAttemptTime, put=setStaticF_debug_lastRefreshTreeAttemptTime)) double_t  debug_lastRefreshTreeAttemptTime;

/// @brief Field debug_refreshInventoryCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_debug_refreshInventoryCount, put=setStaticF_debug_refreshInventoryCount)) int32_t  debug_refreshInventoryCount;

/// @brief Field debug_refreshInventoryDroppedByThrottle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_debug_refreshInventoryDroppedByThrottle, put=setStaticF_debug_refreshInventoryDroppedByThrottle)) int32_t  debug_refreshInventoryDroppedByThrottle;

/// @brief Field debug_refreshTreeCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_debug_refreshTreeCount, put=setStaticF_debug_refreshTreeCount)) int32_t  debug_refreshTreeCount;

/// @brief Field debug_refreshTreeDroppedByThrottle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_debug_refreshTreeDroppedByThrottle, put=setStaticF_debug_refreshTreeDroppedByThrottle)) int32_t  debug_refreshTreeDroppedByThrottle;

/// @brief Field maxRetriesOnFail, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRetriesOnFail, put=__cordl_internal_set_maxRetriesOnFail)) int32_t  maxRetriesOnFail;

/// @brief Field retryCounters, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_retryCounters, put=__cordl_internal_set_retryCounters)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ProgressionManager_RequestType,int32_t>*  retryCounters;

/// @brief Method AdvanceDockWristUpgradeLevel, addr 0x59719c0, size 0x8, virtual false, abstract: false, final false
inline void AdvanceDockWristUpgradeLevel(::GlobalNamespace::ProgressionManager_WristDockUpgradeType  upgrade) ;

/// @brief Method AdvanceDockWristUpgradeLevelInternal, addr 0x59719c8, size 0x130, virtual false, abstract: false, final false
inline void AdvanceDockWristUpgradeLevelInternal(::GlobalNamespace::ProgressionManager_WristDockUpgradeType  upgrade, bool  skipUserDataCache) ;

/// @brief Method Awake, addr 0x596fca0, size 0xdc, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(ProgressionManager::<CollectSIIdol>d__82))]
/// @brief Method CollectSIIdol, addr 0x5970948, size 0xd8, virtual false, abstract: false, final false
inline void CollectSIIdol(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<CompleteSIBonus>d__81))]
/// @brief Method CompleteSIBonus, addr 0x5970870, size 0xd8, virtual false, abstract: false, final false
inline void CompleteSIBonus(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<CompleteSIQuest>d__80))]
/// @brief Method CompleteSIQuest, addr 0x5970788, size 0xe8, virtual false, abstract: false, final false
inline void CompleteSIQuest(int32_t  questID, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// @brief Method DepositCore, addr 0x5971470, size 0x8, virtual false, abstract: false, final false
inline void DepositCore(::GlobalNamespace::ProgressionManager_CoreType  coreType) ;

/// @brief Method DepositCoreInternal, addr 0x5971478, size 0x130, virtual false, abstract: false, final false
inline void DepositCoreInternal(::GlobalNamespace::ProgressionManager_CoreType  coreType, bool  skipUserDataCache) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoAdvanceDockWristUpgradeLevel>d__132))]
/// @brief Method DoAdvanceDockWristUpgradeLevel, addr 0x5971b00, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoAdvanceDockWristUpgradeLevel(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoBonusCompleteReward>d__119))]
/// @brief Method DoBonusCompleteReward, addr 0x5972ec8, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoBonusCompleteReward(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoDepositCore>d__129))]
/// @brief Method DoDepositCore, addr 0x59715b0, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoDepositCore(::GlobalNamespace::ProgressionManager_DepositCoreRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoEndOfShiftReward>d__137))]
/// @brief Method DoEndOfShiftReward, addr 0x59723c8, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoEndOfShiftReward(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoGetActiveSIQuests>d__121))]
/// @brief Method DoGetActiveSIQuests, addr 0x5973088, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoGetActiveSIQuests(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*  data, ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoGetDockWristUpgradeStatus>d__133))]
/// @brief Method DoGetDockWristUpgradeStatus, addr 0x5971ca4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoGetDockWristUpgradeStatus(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoGetGhostReactorInventory>d__139))]
/// @brief Method DoGetGhostReactorInventory, addr 0x5972710, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoGetGhostReactorInventory(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoGetGhostReactorStats>d__138))]
/// @brief Method DoGetGhostReactorStats, addr 0x597256c, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoGetGhostReactorStats(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoGetJuicerStatus>d__128))]
/// @brief Method DoGetJuicerStatus, addr 0x59713e8, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoGetJuicerStatus(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoGetProgression>d__114))]
/// @brief Method DoGetProgression, addr 0x5972b58, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoGetProgression(::GlobalNamespace::ProgressionManager_GetProgressionRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoGetSIQuestsStatus>d__122))]
/// @brief Method DoGetSIQuestsStatus, addr 0x5973168, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoGetSIQuestsStatus(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoGetShiftCredit>d__127))]
/// @brief Method DoGetShiftCredit, addr 0x5971230, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoGetShiftCredit(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoIdolCollectReward>d__120))]
/// @brief Method DoIdolCollectReward, addr 0x5972fa8, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoIdolCollectReward(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoIncrementSIResource>d__117))]
/// @brief Method DoIncrementSIResource, addr 0x5972d28, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoIncrementSIResource(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  data, ::System::Action_1<::StringW>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoPurchaseDrillUpgrade>d__134))]
/// @brief Method DoPurchaseDrillUpgrade, addr 0x5971e50, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoPurchaseDrillUpgrade(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoPurchaseOverdrive>d__130))]
/// @brief Method DoPurchaseOverdrive, addr 0x5971768, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoPurchaseOverdrive(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoPurchaseResources>d__124))]
/// @brief Method DoPurchaseResources, addr 0x5973328, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoPurchaseResources(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoPurchaseShiftCredit>d__126))]
/// @brief Method DoPurchaseShiftCredit, addr 0x5971078, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoPurchaseShiftCredit(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoPurchaseShiftCreditCapIncrease>d__125))]
/// @brief Method DoPurchaseShiftCreditCapIncrease, addr 0x5970ec0, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoPurchaseShiftCreditCapIncrease(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoPurchaseTechPoints>d__123))]
/// @brief Method DoPurchaseTechPoints, addr 0x5973248, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoPurchaseTechPoints(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  data, ::System::Action*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoQuestCompleteReward>d__118))]
/// @brief Method DoQuestCompleteReward, addr 0x5972e08, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoQuestCompleteReward(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoRecycleTool>d__135))]
/// @brief Method DoRecycleTool, addr 0x5972008, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoRecycleTool(::GlobalNamespace::ProgressionManager_RecycleToolRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoSetGhostReactorInventory>d__140))]
/// @brief Method DoSetGhostReactorInventory, addr 0x59728e4, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoSetGhostReactorInventory(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoSetProgression>d__115))]
/// @brief Method DoSetProgression, addr 0x5972c08, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoSetProgression(::GlobalNamespace::ProgressionManager_SetProgressionRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoStartOfShift>d__136))]
/// @brief Method DoStartOfShift, addr 0x59721ec, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoStartOfShift(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoSubtractShiftCredit>d__131))]
/// @brief Method DoSubtractShiftCredit, addr 0x5971930, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoSubtractShiftCredit(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  data) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<DoUnlockNode>d__116))]
/// @brief Method DoUnlockNode, addr 0x5972c98, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoUnlockNode(::GlobalNamespace::ProgressionManager_UnlockNodeRequest*  data) ;

/// @brief Method EndOfShiftReward, addr 0x597227c, size 0x8, virtual false, abstract: false, final false
inline void EndOfShiftReward(::StringW  shiftId) ;

/// @brief Method EndOfShiftRewardInternal, addr 0x5972284, size 0x13c, virtual false, abstract: false, final false
inline void EndOfShiftRewardInternal(::StringW  shiftId, bool  skipUserDataCache) ;

/// @brief Method FormatWebRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::Networking::UnityWebRequest* FormatWebRequest(::StringW  url, T  pendingRequest, ::GlobalNamespace::ProgressionManager_RequestType  type) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<GetActiveSIQuests>d__83))]
/// @brief Method GetActiveSIQuests, addr 0x5970a20, size 0xd8, virtual false, abstract: false, final false
inline void GetActiveSIQuests(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// @brief Method GetDockWristUpgradeStatus, addr 0x5971b88, size 0x114, virtual false, abstract: false, final false
inline void GetDockWristUpgradeStatus() ;

/// @brief Method GetGhostReactorInventory, addr 0x59725f4, size 0x114, virtual false, abstract: false, final false
inline void GetGhostReactorInventory() ;

/// @brief Method GetGhostReactorStats, addr 0x5972450, size 0x114, virtual false, abstract: false, final false
inline void GetGhostReactorStats() ;

/// @brief Method GetInventoryItem, addr 0x596ff3c, size 0x84, virtual false, abstract: false, final false
inline bool GetInventoryItem(::StringW  inventoryKey, ::by_ref<::GlobalNamespace::ProgressionManager_MothershipItemSummary>  item) ;

/// @brief Method GetJuicerStatus, addr 0x59712b8, size 0x8, virtual false, abstract: false, final false
inline void GetJuicerStatus() ;

/// @brief Method GetJuicerStatusInternal, addr 0x59712c0, size 0x120, virtual false, abstract: false, final false
inline void GetJuicerStatusInternal(bool  skipUserDataCache) ;

/// @brief Method GetMothershipFailure, addr 0x5973edc, size 0xd0, virtual false, abstract: false, final false
static inline void GetMothershipFailure(::GlobalNamespace::MothershipError*  callError, int32_t  errorCode) ;

/// @brief Method GetNodeCost, addr 0x596ffc0, size 0x470, virtual false, abstract: false, final false
inline int32_t GetNodeCost(::StringW  treeName, ::StringW  nodeId, ::StringW  currencyKey) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<GetProgression>d__76))]
/// @brief Method GetProgression, addr 0x5970430, size 0xc0, virtual false, abstract: false, final false
inline void GetProgression(::StringW  trackId) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<GetSIQuestStatus>d__84))]
/// @brief Method GetSIQuestStatus, addr 0x5970af8, size 0xd8, virtual false, abstract: false, final false
inline void GetSIQuestStatus(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// @brief Method GetShiftCredit, addr 0x5971100, size 0x128, virtual false, abstract: false, final false
inline void GetShiftCredit(::StringW  mothershipId) ;

/// @brief Method GetShinyRocksTotal, addr 0x5973d44, size 0xc8, virtual false, abstract: false, final false
inline int32_t GetShinyRocksTotal() ;

/// @brief Method GetTree, addr 0x596fecc, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::UserHydratedProgressionTreeResponse* GetTree(::StringW  treeName) ;

/// @brief Method HandleWebRequestFailures, addr 0x5972974, size 0x1e4, virtual false, abstract: false, final false
inline bool HandleWebRequestFailures(::UnityEngine::Networking::UnityWebRequest*  request, bool  retryOnConflict) ;

/// [IteratorStateMachine(typeof(ProgressionManager::<HandleWebRequestRetries>d__112`1<T>))]
/// @brief Method HandleWebRequestRetries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Collections::IEnumerator* HandleWebRequestRetries(::GlobalNamespace::ProgressionManager_RequestType  requestType, T  data, ::System::Action_1<T>*  actionToTake, ::System::Action*  failureActionToTake) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<IncrementSIResource>d__79))]
/// @brief Method IncrementSIResource, addr 0x5970694, size 0xf4, virtual false, abstract: false, final false
inline void IncrementSIResource(::StringW  resourceName, ::System::Action_1<::StringW>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// @brief Method IsSuccessResponse, addr 0x59735e8, size 0x10, virtual false, abstract: false, final false
inline bool IsSuccessResponse(int64_t  code) ;

static inline ::GlobalNamespace::ProgressionManager* New_ctor() ;

/// @brief Method OnGetInventory, addr 0x59738e0, size 0x464, virtual false, abstract: false, final false
inline void OnGetInventory(::GlobalNamespace::MothershipGetInventoryResponse*  response) ;

/// @brief Method OnGetTrees, addr 0x59735f8, size 0x2e8, virtual false, abstract: false, final false
inline void OnGetTrees(::GlobalNamespace::GetProgressionTreesForPlayerResponse*  response) ;

/// @brief Method PurchaseDrillUpgrade, addr 0x5971d2c, size 0x11c, virtual false, abstract: false, final false
inline void PurchaseDrillUpgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  upgrade) ;

/// @brief Method PurchaseOverdrive, addr 0x5971638, size 0x8, virtual false, abstract: false, final false
inline void PurchaseOverdrive() ;

/// @brief Method PurchaseOverdriveInternal, addr 0x5971640, size 0x120, virtual false, abstract: false, final false
inline void PurchaseOverdriveInternal(bool  skipUserDataCache) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<PurchaseResources>d__86))]
/// @brief Method PurchaseResources, addr 0x5970cb8, size 0xd8, virtual false, abstract: false, final false
inline void PurchaseResources(::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// @brief Method PurchaseShiftCredit, addr 0x5970f48, size 0x8, virtual false, abstract: false, final false
inline void PurchaseShiftCredit() ;

/// @brief Method PurchaseShiftCreditCapIncrease, addr 0x5970d90, size 0x8, virtual false, abstract: false, final false
inline void PurchaseShiftCreditCapIncrease() ;

/// @brief Method PurchaseShiftCreditCapIncreaseInternal, addr 0x5970d98, size 0x120, virtual false, abstract: false, final false
inline void PurchaseShiftCreditCapIncreaseInternal(bool  skipUserDataCache) ;

/// @brief Method PurchaseShiftCreditInternal, addr 0x5970f50, size 0x120, virtual false, abstract: false, final false
inline void PurchaseShiftCreditInternal(bool  skipUserDataCache) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<PurchaseTechPoints>d__85))]
/// @brief Method PurchaseTechPoints, addr 0x5970bd0, size 0xe8, virtual false, abstract: false, final false
inline void PurchaseTechPoints(int32_t  amount, ::System::Action*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure) ;

/// @brief Method RecycleTool, addr 0x5971ed8, size 0x128, virtual false, abstract: false, final false
inline void RecycleTool(::GlobalNamespace::GRTool_GRToolType  toolBeingRecycled, int32_t  numberOfPlayers) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<RefreshProgressionTree>d__71))]
/// @brief Method RefreshProgressionTree, addr 0x596fd7c, size 0xa8, virtual false, abstract: false, final false
inline void RefreshProgressionTree() ;

/// @brief Method RefreshShinyRocksTotal, addr 0x5973e0c, size 0xd0, virtual false, abstract: false, final false
inline void RefreshShinyRocksTotal() ;

/// [AsyncStateMachine(typeof(ProgressionManager::<RefreshUserInventory>d__72))]
/// @brief Method RefreshUserInventory, addr 0x596fe24, size 0xa8, virtual false, abstract: false, final false
inline void RefreshUserInventory() ;

/// @brief Method SetGhostReactorInventory, addr 0x5972798, size 0x8, virtual false, abstract: false, final false
inline void SetGhostReactorInventory(::StringW  jsonInventory) ;

/// @brief Method SetGhostReactorInventoryInternal, addr 0x59727a0, size 0x13c, virtual false, abstract: false, final false
inline void SetGhostReactorInventoryInternal(::StringW  jsonInventory, bool  skipUserDataCache) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<SetProgression>d__77))]
/// @brief Method SetProgression, addr 0x59704f0, size 0xcc, virtual false, abstract: false, final false
inline void SetProgression(::StringW  trackId, int32_t  progress) ;

/// @brief Method StartOfShift, addr 0x5972098, size 0x14c, virtual false, abstract: false, final false
inline void StartOfShift(::StringW  shiftId, int32_t  coresRequired, int32_t  numberOfPlayers, int32_t  depth) ;

/// @brief Method SubtractShiftCredit, addr 0x59717f0, size 0x8, virtual false, abstract: false, final false
inline void SubtractShiftCredit(int32_t  creditsToSubtract) ;

/// @brief Method SubtractShiftCreditInternal, addr 0x59717f8, size 0x130, virtual false, abstract: false, final false
inline void SubtractShiftCreditInternal(int32_t  creditsToSubtract, bool  skipUserDataCache) ;

/// [AsyncStateMachine(typeof(ProgressionManager::<UnlockNode>d__78))]
/// @brief Method UnlockNode, addr 0x59705bc, size 0xd8, virtual false, abstract: false, final false
inline void UnlockNode(::StringW  treeId, ::StringW  nodeId) ;

/// [CompilerGenerated]
/// @brief Method <DoGetDockWristUpgradeStatus>b__133_0, addr 0x5974194, size 0x4, virtual false, abstract: false, final false
inline void _DoGetDockWristUpgradeStatus_b__133_0(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*  x) ;

/// [CompilerGenerated]
/// @brief Method <DoGetGhostReactorInventory>b__139_0, addr 0x597419c, size 0x4, virtual false, abstract: false, final false
inline void _DoGetGhostReactorInventory_b__139_0(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*  x) ;

/// [CompilerGenerated]
/// @brief Method <DoGetGhostReactorStats>b__138_0, addr 0x5974198, size 0x4, virtual false, abstract: false, final false
inline void _DoGetGhostReactorStats_b__138_0(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*  x) ;

/// [CompilerGenerated]
/// @brief Method <DoGetProgression>b__114_0, addr 0x5974174, size 0x4, virtual false, abstract: false, final false
inline void _DoGetProgression_b__114_0(::StringW  x) ;

/// [CompilerGenerated]
/// @brief Method <DoGetShiftCredit>b__127_0, addr 0x5974180, size 0x14, virtual false, abstract: false, final false
inline void _DoGetShiftCredit_b__127_0(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*  x) ;

/// [CompilerGenerated]
/// @brief Method <DoSetProgression>b__115_0, addr 0x5974178, size 0x4, virtual false, abstract: false, final false
inline void _DoSetProgression_b__115_0(/* [TupleElementNames(new[] { "TrackId", "Progress" })] */ ::System::ValueTuple_2<::StringW,int32_t>  x) ;

/// [CompilerGenerated]
/// @brief Method <DoUnlockNode>b__116_0, addr 0x597417c, size 0x4, virtual false, abstract: false, final false
inline void _DoUnlockNode_b__116_0(/* [TupleElementNames(new[] { "TreeId", "NodeId" })] */ ::System::ValueTuple_2<::StringW,::StringW>  x) ;

/// [CompilerGenerated]
/// @brief Method <RefreshProgressionTree>b__71_0, addr 0x5974144, size 0x8, virtual false, abstract: false, final false
inline void _RefreshProgressionTree_b__71_0(::GlobalNamespace::GetProgressionTreesForPlayerResponse*  response) ;

/// [CompilerGenerated]
/// @brief Method <RefreshProgressionTree>b__71_1, addr 0x597414c, size 0x10, virtual false, abstract: false, final false
inline void _RefreshProgressionTree_b__71_1(::GlobalNamespace::MothershipError*  err, int32_t  code) ;

/// [CompilerGenerated]
/// @brief Method <RefreshUserInventory>b__72_0, addr 0x597415c, size 0x8, virtual false, abstract: false, final false
inline void _RefreshUserInventory_b__72_0(::GlobalNamespace::MothershipGetInventoryResponse*  response) ;

/// [CompilerGenerated]
/// @brief Method <RefreshUserInventory>b__72_1, addr 0x5974164, size 0x10, virtual false, abstract: false, final false
inline void _RefreshUserInventory_b__72_1(::GlobalNamespace::MothershipError*  err, int32_t  code) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnChaosDepositSuccess() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnChaosDepositSuccess() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>* const& __cordl_internal_get_OnDockWristStatusUpdated() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*& __cordl_internal_get_OnDockWristStatusUpdated() ;

constexpr ::System::Action_2<::StringW,int32_t>* const& __cordl_internal_get_OnGetShiftCredit() const;

constexpr ::System::Action_2<::StringW,int32_t>*& __cordl_internal_get_OnGetShiftCredit() ;

constexpr ::System::Action_3<::StringW,int32_t,int32_t>* const& __cordl_internal_get_OnGetShiftCreditCapData() const;

constexpr ::System::Action_3<::StringW,int32_t,int32_t>*& __cordl_internal_get_OnGetShiftCreditCapData() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>* const& __cordl_internal_get_OnGhostReactorInventoryUpdated() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*& __cordl_internal_get_OnGhostReactorInventoryUpdated() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>* const& __cordl_internal_get_OnGhostReactorStatsUpdated() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*& __cordl_internal_get_OnGhostReactorStatsUpdated() ;

constexpr ::System::Action* const& __cordl_internal_get_OnInventoryUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnInventoryUpdated() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>* const& __cordl_internal_get_OnJucierStatusUpdated() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*& __cordl_internal_get_OnJucierStatusUpdated() ;

constexpr ::System::Action_2<::StringW,::StringW>* const& __cordl_internal_get_OnNodeUnlocked() const;

constexpr ::System::Action_2<::StringW,::StringW>*& __cordl_internal_get_OnNodeUnlocked() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnPurchaseOverdrive() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnPurchaseOverdrive() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnPurchaseShiftCredit() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnPurchaseShiftCredit() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnPurchaseShiftCreditCapIncrease() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnPurchaseShiftCreditCapIncrease() ;

constexpr ::System::Action_2<::StringW,int32_t>* const& __cordl_internal_get_OnTrackRead() const;

constexpr ::System::Action_2<::StringW,int32_t>*& __cordl_internal_get_OnTrackRead() ;

constexpr ::System::Action_2<::StringW,int32_t>* const& __cordl_internal_get_OnTrackSet() const;

constexpr ::System::Action_2<::StringW,int32_t>*& __cordl_internal_get_OnTrackSet() ;

constexpr ::System::Action* const& __cordl_internal_get_OnTreeUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnTreeUpdated() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ProgressionManager_MothershipItemSummary>* const& __cordl_internal_get__inventory() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ProgressionManager_MothershipItemSummary>*& __cordl_internal_get__inventory() ;

constexpr bool const& __cordl_internal_get__inventoryRefreshInFlight() const;

constexpr bool& __cordl_internal_get__inventoryRefreshInFlight() ;

constexpr double_t const& __cordl_internal_get__lastInventoryRefreshTime() const;

constexpr double_t& __cordl_internal_get__lastInventoryRefreshTime() ;

constexpr double_t const& __cordl_internal_get__lastTreeRefreshTime() const;

constexpr double_t& __cordl_internal_get__lastTreeRefreshTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get__tracks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get__tracks() ;

constexpr bool const& __cordl_internal_get__treeRefreshInFlight() const;

constexpr bool& __cordl_internal_get__treeRefreshInFlight() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UserHydratedProgressionTreeResponse*>* const& __cordl_internal_get__trees() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UserHydratedProgressionTreeResponse*>*& __cordl_internal_get__trees() ;

constexpr int32_t const& __cordl_internal_get_maxRetriesOnFail() const;

constexpr int32_t& __cordl_internal_get_maxRetriesOnFail() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ProgressionManager_RequestType,int32_t>* const& __cordl_internal_get_retryCounters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ProgressionManager_RequestType,int32_t>*& __cordl_internal_get_retryCounters() ;

constexpr void __cordl_internal_set_OnChaosDepositSuccess(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnDockWristStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*  value) ;

constexpr void __cordl_internal_set_OnGetShiftCredit(::System::Action_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnGetShiftCreditCapData(::System::Action_3<::StringW,int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnGhostReactorInventoryUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*  value) ;

constexpr void __cordl_internal_set_OnGhostReactorStatsUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*  value) ;

constexpr void __cordl_internal_set_OnInventoryUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnJucierStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*  value) ;

constexpr void __cordl_internal_set_OnNodeUnlocked(::System::Action_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnPurchaseOverdrive(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnPurchaseShiftCredit(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnPurchaseShiftCreditCapIncrease(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnTrackRead(::System::Action_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnTrackSet(::System::Action_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnTreeUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__inventory(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ProgressionManager_MothershipItemSummary>*  value) ;

constexpr void __cordl_internal_set__inventoryRefreshInFlight(bool  value) ;

constexpr void __cordl_internal_set__lastInventoryRefreshTime(double_t  value) ;

constexpr void __cordl_internal_set__lastTreeRefreshTime(double_t  value) ;

constexpr void __cordl_internal_set__tracks(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set__treeRefreshInFlight(bool  value) ;

constexpr void __cordl_internal_set__trees(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UserHydratedProgressionTreeResponse*>*  value) ;

constexpr void __cordl_internal_set_maxRetriesOnFail(int32_t  value) ;

constexpr void __cordl_internal_set_retryCounters(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ProgressionManager_RequestType,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5973fac, size 0x198, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnChaosDepositSuccess, addr 0x596f460, size 0xb0, virtual false, abstract: false, final false
inline void add_OnChaosDepositSuccess(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnDockWristStatusUpdated, addr 0x596f880, size 0xb0, virtual false, abstract: false, final false
inline void add_OnDockWristStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGetShiftCredit, addr 0x596eee0, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGetShiftCredit(::System::Action_2<::StringW,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGetShiftCreditCapData, addr 0x596f040, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGetShiftCreditCapData(::System::Action_3<::StringW,int32_t,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGhostReactorInventoryUpdated, addr 0x596fb40, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGhostReactorInventoryUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGhostReactorStatsUpdated, addr 0x596f9e0, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGhostReactorStatsUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnInventoryUpdated, addr 0x596e988, size 0x9c, virtual false, abstract: false, final false
inline void add_OnInventoryUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnJucierStatusUpdated, addr 0x596f5c0, size 0xb0, virtual false, abstract: false, final false
inline void add_OnJucierStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnNodeUnlocked, addr 0x596ed80, size 0xb0, virtual false, abstract: false, final false
inline void add_OnNodeUnlocked(::System::Action_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPurchaseOverdrive, addr 0x596f720, size 0xb0, virtual false, abstract: false, final false
inline void add_OnPurchaseOverdrive(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPurchaseShiftCredit, addr 0x596f300, size 0xb0, virtual false, abstract: false, final false
inline void add_OnPurchaseShiftCredit(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPurchaseShiftCreditCapIncrease, addr 0x596f1a0, size 0xb0, virtual false, abstract: false, final false
inline void add_OnPurchaseShiftCreditCapIncrease(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTrackRead, addr 0x596eac0, size 0xb0, virtual false, abstract: false, final false
inline void add_OnTrackRead(::System::Action_2<::StringW,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTrackSet, addr 0x596ec20, size 0xb0, virtual false, abstract: false, final false
inline void add_OnTrackSet(::System::Action_2<::StringW,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTreeUpdated, addr 0x596e850, size 0x9c, virtual false, abstract: false, final false
inline void add_OnTreeUpdated(::System::Action*  value) ;

static inline ::UnityW<::GlobalNamespace::ProgressionManager> getStaticF__Instance_k__BackingField() ;

static inline double_t getStaticF_debug_lastRefreshInventoryAttemptTime() ;

static inline double_t getStaticF_debug_lastRefreshTreeAttemptTime() ;

static inline int32_t getStaticF_debug_refreshInventoryCount() ;

static inline int32_t getStaticF_debug_refreshInventoryDroppedByThrottle() ;

static inline int32_t getStaticF_debug_refreshTreeCount() ;

static inline int32_t getStaticF_debug_refreshTreeDroppedByThrottle() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x596e7b0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::ProgressionManager> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method remove_OnChaosDepositSuccess, addr 0x596f510, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnChaosDepositSuccess(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnDockWristStatusUpdated, addr 0x596f930, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnDockWristStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGetShiftCredit, addr 0x596ef90, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGetShiftCredit(::System::Action_2<::StringW,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGetShiftCreditCapData, addr 0x596f0f0, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGetShiftCreditCapData(::System::Action_3<::StringW,int32_t,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGhostReactorInventoryUpdated, addr 0x596fbf0, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGhostReactorInventoryUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGhostReactorStatsUpdated, addr 0x596fa90, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGhostReactorStatsUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnInventoryUpdated, addr 0x596ea24, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnInventoryUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnJucierStatusUpdated, addr 0x596f670, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnJucierStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnNodeUnlocked, addr 0x596ee30, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnNodeUnlocked(::System::Action_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPurchaseOverdrive, addr 0x596f7d0, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnPurchaseOverdrive(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPurchaseShiftCredit, addr 0x596f3b0, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnPurchaseShiftCredit(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPurchaseShiftCreditCapIncrease, addr 0x596f250, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnPurchaseShiftCreditCapIncrease(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTrackRead, addr 0x596eb70, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnTrackRead(::System::Action_2<::StringW,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTrackSet, addr 0x596ecd0, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnTrackSet(::System::Action_2<::StringW,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTreeUpdated, addr 0x596e8ec, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnTreeUpdated(::System::Action*  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

static inline void setStaticF_debug_lastRefreshInventoryAttemptTime(double_t  value) ;

static inline void setStaticF_debug_lastRefreshTreeAttemptTime(double_t  value) ;

static inline void setStaticF_debug_refreshInventoryCount(int32_t  value) ;

static inline void setStaticF_debug_refreshInventoryDroppedByThrottle(int32_t  value) ;

static inline void setStaticF_debug_refreshTreeCount(int32_t  value) ;

static inline void setStaticF_debug_refreshTreeDroppedByThrottle(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x596e7f8, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::ProgressionManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager(ProgressionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager(ProgressionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2518};

/// @brief Field k_minRefreshIntervalSeconds offset 0xffffffff size 0x8
static constexpr double_t  k_minRefreshIntervalSeconds{static_cast<double_t>(2.0)};

/// [CompilerGenerated]
/// @brief Field OnTreeUpdated, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnTreeUpdated;

/// [CompilerGenerated]
/// @brief Field OnInventoryUpdated, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnInventoryUpdated;

/// [CompilerGenerated]
/// @brief Field OnTrackRead, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::StringW,int32_t>*  ___OnTrackRead;

/// [CompilerGenerated]
/// @brief Field OnTrackSet, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::StringW,int32_t>*  ___OnTrackSet;

/// [CompilerGenerated]
/// @brief Field OnNodeUnlocked, offset: 0x40, size: 0x8, def value: None
 ::System::Action_2<::StringW,::StringW>*  ___OnNodeUnlocked;

/// [CompilerGenerated]
/// @brief Field OnGetShiftCredit, offset: 0x48, size: 0x8, def value: None
 ::System::Action_2<::StringW,int32_t>*  ___OnGetShiftCredit;

/// [CompilerGenerated]
/// @brief Field OnGetShiftCreditCapData, offset: 0x50, size: 0x8, def value: None
 ::System::Action_3<::StringW,int32_t,int32_t>*  ___OnGetShiftCreditCapData;

/// [CompilerGenerated]
/// @brief Field OnPurchaseShiftCreditCapIncrease, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnPurchaseShiftCreditCapIncrease;

/// [CompilerGenerated]
/// @brief Field OnPurchaseShiftCredit, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnPurchaseShiftCredit;

/// [CompilerGenerated]
/// @brief Field OnChaosDepositSuccess, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnChaosDepositSuccess;

/// [CompilerGenerated]
/// @brief Field OnJucierStatusUpdated, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*  ___OnJucierStatusUpdated;

/// [CompilerGenerated]
/// @brief Field OnPurchaseOverdrive, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnPurchaseOverdrive;

/// [CompilerGenerated]
/// @brief Field OnDockWristStatusUpdated, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*  ___OnDockWristStatusUpdated;

/// [CompilerGenerated]
/// @brief Field OnGhostReactorStatsUpdated, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*  ___OnGhostReactorStatsUpdated;

/// [CompilerGenerated]
/// @brief Field OnGhostReactorInventoryUpdated, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*  ___OnGhostReactorInventoryUpdated;

/// @brief Field _trees, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UserHydratedProgressionTreeResponse*>*  ____trees;

/// @brief Field _inventory, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ProgressionManager_MothershipItemSummary>*  ____inventory;

/// @brief Field _tracks, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ____tracks;

/// @brief Field retryCounters, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ProgressionManager_RequestType,int32_t>*  ___retryCounters;

/// @brief Field maxRetriesOnFail, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___maxRetriesOnFail;

/// @brief Field _lastTreeRefreshTime, offset: 0xc0, size: 0x8, def value: None
 double_t  ____lastTreeRefreshTime;

/// @brief Field _lastInventoryRefreshTime, offset: 0xc8, size: 0x8, def value: None
 double_t  ____lastInventoryRefreshTime;

/// @brief Field _treeRefreshInFlight, offset: 0xd0, size: 0x1, def value: None
 bool  ____treeRefreshInFlight;

/// @brief Field _inventoryRefreshInFlight, offset: 0xd1, size: 0x1, def value: None
 bool  ____inventoryRefreshInFlight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnTreeUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnInventoryUpdated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnTrackRead) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnTrackSet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnNodeUnlocked) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnGetShiftCredit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnGetShiftCreditCapData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnPurchaseShiftCreditCapIncrease) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnPurchaseShiftCredit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnChaosDepositSuccess) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnJucierStatusUpdated) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnPurchaseOverdrive) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnDockWristStatusUpdated) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnGhostReactorStatsUpdated) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___OnGhostReactorInventoryUpdated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ____trees) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ____inventory) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ____tracks) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___retryCounters) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ___maxRetriesOnFail) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ____lastTreeRefreshTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ____lastInventoryRefreshTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ____treeRefreshInFlight) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager, ____inventoryRefreshInFlight) == 0xd1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies ProgressionManager::RequestType, System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ProgressionManager/<HandleWebRequestRetries>d__112`1<T>
class CORDL_TYPE ProgressionManager__HandleWebRequestRetries_d__112_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field actionToTake, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_actionToTake, put=__cordl_internal_set_actionToTake)) ::System::Action_1<T>*  actionToTake;

/// @brief Field data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) T  data;

/// @brief Field failureActionToTake, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureActionToTake, put=__cordl_internal_set_failureActionToTake)) ::System::Action*  failureActionToTake;

/// @brief Field requestType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_requestType, put=__cordl_internal_set_requestType)) ::GlobalNamespace::ProgressionManager_RequestType  requestType;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_actionToTake() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_actionToTake() ;

constexpr T const& __cordl_internal_get_data() const;

constexpr T& __cordl_internal_get_data() ;

constexpr ::System::Action* const& __cordl_internal_get_failureActionToTake() const;

constexpr ::System::Action*& __cordl_internal_get_failureActionToTake() ;

constexpr ::GlobalNamespace::ProgressionManager_RequestType const& __cordl_internal_get_requestType() const;

constexpr ::GlobalNamespace::ProgressionManager_RequestType& __cordl_internal_get_requestType() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_actionToTake(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_data(T  value) ;

constexpr void __cordl_internal_set_failureActionToTake(::System::Action*  value) ;

constexpr void __cordl_internal_set_requestType(::GlobalNamespace::ProgressionManager_RequestType  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
constexpr ProgressionManager__HandleWebRequestRetries_d__112_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__HandleWebRequestRetries_d__112_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__HandleWebRequestRetries_d__112_1(ProgressionManager__HandleWebRequestRetries_d__112_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__HandleWebRequestRetries_d__112_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__HandleWebRequestRetries_d__112_1(ProgressionManager__HandleWebRequestRetries_d__112_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2510};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field requestType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ProgressionManager_RequestType  ___requestType;

/// @brief Field actionToTake, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<T>*  ___actionToTake;

/// @brief Field data, offset: 0x38, size: 0x8, def value: None
 T  ___data;

/// @brief Field failureActionToTake, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___failureActionToTake;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoUnlockNode>d__116
class CORDL_TYPE ProgressionManager__DoUnlockNode_d__116 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_UnlockNodeRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597b670, size 0x280, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x597b8f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597b8f8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597b930, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597b66c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_UnlockNodeRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_UnlockNodeRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_UnlockNodeRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x597b644, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoUnlockNode_d__116() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoUnlockNode_d__116", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoUnlockNode_d__116(ProgressionManager__DoUnlockNode_d__116 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoUnlockNode_d__116", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoUnlockNode_d__116(ProgressionManager__DoUnlockNode_d__116 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2506};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_UnlockNodeRequest*  ___data;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoSubtractShiftCredit>d__131
class CORDL_TYPE ProgressionManager__DoSubtractShiftCredit_d__131 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597b284, size 0x378, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x597b5fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597b604, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597b63c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597b280, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x597b258, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoSubtractShiftCredit_d__131() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoSubtractShiftCredit_d__131", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoSubtractShiftCredit_d__131(ProgressionManager__DoSubtractShiftCredit_d__131 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoSubtractShiftCredit_d__131", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoSubtractShiftCredit_d__131(ProgressionManager__DoSubtractShiftCredit_d__131 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2505};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoStartOfShift>d__136
class CORDL_TYPE ProgressionManager__DoStartOfShift_d__136 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*  __8__1;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597af84, size 0x28c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x597b210, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597b218, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597b250, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597af80, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*& __cordl_internal_get___8__1() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x597af58, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoStartOfShift_d__136() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoStartOfShift_d__136", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoStartOfShift_d__136(ProgressionManager__DoStartOfShift_d__136 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoStartOfShift_d__136", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoStartOfShift_d__136(ProgressionManager__DoStartOfShift_d__136 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2504};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*  _____8__1;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136, _____8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoSetProgression>d__115
class CORDL_TYPE ProgressionManager__DoSetProgression_d__115 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SetProgressionRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597abfc, size 0x314, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x597af10, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597af18, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597af50, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597abf8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_SetProgressionRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SetProgressionRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetProgressionRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x597abd0, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoSetProgression_d__115() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoSetProgression_d__115", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoSetProgression_d__115(ProgressionManager__DoSetProgression_d__115 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoSetProgression_d__115", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoSetProgression_d__115(ProgressionManager__DoSetProgression_d__115 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2503};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SetProgressionRequest*  ___data;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetProgression_d__115, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetProgression_d__115, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetProgression_d__115, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetProgression_d__115, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetProgression_d__115, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoSetProgression_d__115) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoSetGhostReactorInventory>d__140
class CORDL_TYPE ProgressionManager__DoSetGhostReactorInventory_d__140 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597a8d8, size 0x2b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x597ab88, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597ab90, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597abc8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597a8d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x597a8ac, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoSetGhostReactorInventory_d__140() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoSetGhostReactorInventory_d__140", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoSetGhostReactorInventory_d__140(ProgressionManager__DoSetGhostReactorInventory_d__140 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoSetGhostReactorInventory_d__140", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoSetGhostReactorInventory_d__140(ProgressionManager__DoSetGhostReactorInventory_d__140 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2502};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoRecycleTool>d__135
class CORDL_TYPE ProgressionManager__DoRecycleTool_d__135 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*  __8__1;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_RecycleToolRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597a514, size 0x350, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x597a864, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597a86c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597a8a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597a510, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*& __cordl_internal_get___8__1() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_RecycleToolRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x597a4e8, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoRecycleTool_d__135() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoRecycleTool_d__135", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoRecycleTool_d__135(ProgressionManager__DoRecycleTool_d__135 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoRecycleTool_d__135", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoRecycleTool_d__135(ProgressionManager__DoRecycleTool_d__135 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2501};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_RecycleToolRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*  _____8__1;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135, _____8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoQuestCompleteReward>d__118
class CORDL_TYPE ProgressionManager__DoQuestCompleteReward_d__118 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597a0d8, size 0x3c8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x597a4a0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597a4a8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597a4e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597a0d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& __cordl_internal_get_OnSuccess() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x597a0ac, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoQuestCompleteReward_d__118() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoQuestCompleteReward_d__118", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoQuestCompleteReward_d__118(ProgressionManager__DoQuestCompleteReward_d__118 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoQuestCompleteReward_d__118", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoQuestCompleteReward_d__118(ProgressionManager__DoQuestCompleteReward_d__118 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2500};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  ___data;

/// @brief Field OnSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118, ___OnSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118, ___OnFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118, _____8__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoPurchaseTechPoints>d__123
class CORDL_TYPE ProgressionManager__DoPurchaseTechPoints_d__123 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action*  OnSuccess;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597978c, size 0x344, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5979ad0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5979ad8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5979b10, size 0x59c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5979788, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_OnSuccess() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973300, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoPurchaseTechPoints_d__123() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseTechPoints_d__123", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoPurchaseTechPoints_d__123(ProgressionManager__DoPurchaseTechPoints_d__123 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseTechPoints_d__123", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoPurchaseTechPoints_d__123(ProgressionManager__DoPurchaseTechPoints_d__123 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2499};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  ___data;

/// @brief Field OnSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123, ___OnSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123, ___OnFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123, _____8__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoPurchaseShiftCreditCapIncrease>d__125
class CORDL_TYPE ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5979390, size 0x3b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5979740, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5979748, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5979780, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597938c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973408, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125(ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125(ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2498};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoPurchaseShiftCredit>d__126
class CORDL_TYPE ProgressionManager__DoPurchaseShiftCredit_d__126 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5978f04, size 0x440, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5979344, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597934c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5979384, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5978f00, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973430, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoPurchaseShiftCredit_d__126() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseShiftCredit_d__126", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoPurchaseShiftCredit_d__126(ProgressionManager__DoPurchaseShiftCredit_d__126 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseShiftCredit_d__126", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoPurchaseShiftCredit_d__126(ProgressionManager__DoPurchaseShiftCredit_d__126 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2497};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoPurchaseResources>d__124
class CORDL_TYPE ProgressionManager__DoPurchaseResources_d__124 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  OnSuccess;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*  __8__1;

/// @brief Field data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5978b2c, size 0x38c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5978eb8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5978ec0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5978ef8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5978b28, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*& __cordl_internal_get_OnSuccess() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59733e0, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoPurchaseResources_d__124() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseResources_d__124", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoPurchaseResources_d__124(ProgressionManager__DoPurchaseResources_d__124 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseResources_d__124", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoPurchaseResources_d__124(ProgressionManager__DoPurchaseResources_d__124 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2496};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field data, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*  ___data;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124, ___OnSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124, ___OnFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124, ___data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124, _____8__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoPurchaseOverdrive>d__130
class CORDL_TYPE ProgressionManager__DoPurchaseOverdrive_d__130 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5978770, size 0x370, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5978ae0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5978ae8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5978b20, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597876c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59734d0, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoPurchaseOverdrive_d__130() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseOverdrive_d__130", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoPurchaseOverdrive_d__130(ProgressionManager__DoPurchaseOverdrive_d__130 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseOverdrive_d__130", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoPurchaseOverdrive_d__130(ProgressionManager__DoPurchaseOverdrive_d__130 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2495};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoPurchaseDrillUpgrade>d__134
class CORDL_TYPE ProgressionManager__DoPurchaseDrillUpgrade_d__134 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*  __8__1;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5978380, size 0x3a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5978724, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597872c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5978764, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597837c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*& __cordl_internal_get___8__1() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973548, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoPurchaseDrillUpgrade_d__134() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseDrillUpgrade_d__134", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoPurchaseDrillUpgrade_d__134(ProgressionManager__DoPurchaseDrillUpgrade_d__134 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoPurchaseDrillUpgrade_d__134", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoPurchaseDrillUpgrade_d__134(ProgressionManager__DoPurchaseDrillUpgrade_d__134 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2494};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*  _____8__1;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134, _____8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoIncrementSIResource>d__117
class CORDL_TYPE ProgressionManager__DoIncrementSIResource_d__117 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::StringW>*  OnSuccess;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5977f7c, size 0x3b8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5978334, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x597833c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5978374, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5977f78, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnSuccess() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5972de0, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoIncrementSIResource_d__117() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoIncrementSIResource_d__117", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoIncrementSIResource_d__117(ProgressionManager__DoIncrementSIResource_d__117 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoIncrementSIResource_d__117", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoIncrementSIResource_d__117(ProgressionManager__DoIncrementSIResource_d__117 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2493};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  ___data;

/// @brief Field OnSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117, ___OnSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117, ___OnFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117, _____8__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoIdolCollectReward>d__120
class CORDL_TYPE ProgressionManager__DoIdolCollectReward_d__120 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*  __8__1;

/// @brief Field data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5977ba4, size 0x38c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5977f30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5977f38, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5977f70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5977ba0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& __cordl_internal_get_OnSuccess() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973060, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoIdolCollectReward_d__120() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoIdolCollectReward_d__120", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoIdolCollectReward_d__120(ProgressionManager__DoIdolCollectReward_d__120 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoIdolCollectReward_d__120", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoIdolCollectReward_d__120(ProgressionManager__DoIdolCollectReward_d__120 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2492};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field data, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*  ___data;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120, ___OnSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120, ___OnFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120, ___data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120, _____8__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoGetShiftCredit>d__127
class CORDL_TYPE ProgressionManager__DoGetShiftCredit_d__127 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5977894, size 0x2c4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5977b58, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5977b60, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5977b98, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5977890, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973458, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoGetShiftCredit_d__127() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetShiftCredit_d__127", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoGetShiftCredit_d__127(ProgressionManager__DoGetShiftCredit_d__127 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetShiftCredit_d__127", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoGetShiftCredit_d__127(ProgressionManager__DoGetShiftCredit_d__127 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2491};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*  ___data;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoGetSIQuestsStatus>d__122
class CORDL_TYPE ProgressionManager__DoGetSIQuestsStatus_d__122 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*  __8__1;

/// @brief Field data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59774bc, size 0x38c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5977848, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5977850, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5977888, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59774b8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& __cordl_internal_get_OnSuccess() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973220, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoGetSIQuestsStatus_d__122() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetSIQuestsStatus_d__122", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoGetSIQuestsStatus_d__122(ProgressionManager__DoGetSIQuestsStatus_d__122 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetSIQuestsStatus_d__122", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoGetSIQuestsStatus_d__122(ProgressionManager__DoGetSIQuestsStatus_d__122 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2490};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field data, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*  ___data;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122, ___OnSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122, ___OnFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122, ___data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122, _____8__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoGetProgression>d__114
class CORDL_TYPE ProgressionManager__DoGetProgression_d__114 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_GetProgressionRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5977138, size 0x338, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5977470, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5977478, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59774b0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5977134, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_GetProgressionRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_GetProgressionRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetProgressionRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5972be0, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoGetProgression_d__114() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetProgression_d__114", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoGetProgression_d__114(ProgressionManager__DoGetProgression_d__114 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetProgression_d__114", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoGetProgression_d__114(ProgressionManager__DoGetProgression_d__114 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2489};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_GetProgressionRequest*  ___data;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetProgression_d__114, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetProgression_d__114, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetProgression_d__114, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetProgression_d__114, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetProgression_d__114, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoGetProgression_d__114) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoGetJuicerStatus>d__128
class CORDL_TYPE ProgressionManager__DoGetJuicerStatus_d__128 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5976de8, size 0x304, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59770ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59770f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597712c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5976de4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973480, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoGetJuicerStatus_d__128() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetJuicerStatus_d__128", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoGetJuicerStatus_d__128(ProgressionManager__DoGetJuicerStatus_d__128 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetJuicerStatus_d__128", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoGetJuicerStatus_d__128(ProgressionManager__DoGetJuicerStatus_d__128 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2488};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoGetGhostReactorStats>d__138
class CORDL_TYPE ProgressionManager__DoGetGhostReactorStats_d__138 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5976b04, size 0x298, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5976d9c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5976da4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5976ddc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5976b00, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973598, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoGetGhostReactorStats_d__138() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetGhostReactorStats_d__138", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoGetGhostReactorStats_d__138(ProgressionManager__DoGetGhostReactorStats_d__138 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetGhostReactorStats_d__138", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoGetGhostReactorStats_d__138(ProgressionManager__DoGetGhostReactorStats_d__138 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2487};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*  ___data;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoGetGhostReactorInventory>d__139
class CORDL_TYPE ProgressionManager__DoGetGhostReactorInventory_d__139 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5976820, size 0x298, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5976ab8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5976ac0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5976af8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597681c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59735c0, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoGetGhostReactorInventory_d__139() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetGhostReactorInventory_d__139", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoGetGhostReactorInventory_d__139(ProgressionManager__DoGetGhostReactorInventory_d__139 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetGhostReactorInventory_d__139", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoGetGhostReactorInventory_d__139(ProgressionManager__DoGetGhostReactorInventory_d__139 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2486};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*  ___data;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoGetDockWristUpgradeStatus>d__133
class CORDL_TYPE ProgressionManager__DoGetDockWristUpgradeStatus_d__133 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597653c, size 0x298, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59767d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59767dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5976814, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5976538, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973520, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoGetDockWristUpgradeStatus_d__133() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetDockWristUpgradeStatus_d__133", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoGetDockWristUpgradeStatus_d__133(ProgressionManager__DoGetDockWristUpgradeStatus_d__133 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetDockWristUpgradeStatus_d__133", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoGetDockWristUpgradeStatus_d__133(ProgressionManager__DoGetDockWristUpgradeStatus_d__133 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2485};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*  ___data;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoGetActiveSIQuests>d__121
class CORDL_TYPE ProgressionManager__DoGetActiveSIQuests_d__121 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  OnSuccess;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*  __8__1;

/// @brief Field data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x597615c, size 0x394, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59764f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59764f8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5976530, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5976158, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*& __cordl_internal_get_OnSuccess() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973140, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoGetActiveSIQuests_d__121() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetActiveSIQuests_d__121", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoGetActiveSIQuests_d__121(ProgressionManager__DoGetActiveSIQuests_d__121 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoGetActiveSIQuests_d__121", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoGetActiveSIQuests_d__121(ProgressionManager__DoGetActiveSIQuests_d__121 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2484};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field data, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*  ___data;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121, ___OnSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121, ___OnFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121, ___data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121, _____8__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoEndOfShiftReward>d__137
class CORDL_TYPE ProgressionManager__DoEndOfShiftReward_d__137 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5975d44, size 0x3cc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5976110, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5976118, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5976150, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5975d40, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5973570, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoEndOfShiftReward_d__137() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoEndOfShiftReward_d__137", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoEndOfShiftReward_d__137(ProgressionManager__DoEndOfShiftReward_d__137 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoEndOfShiftReward_d__137", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoEndOfShiftReward_d__137(ProgressionManager__DoEndOfShiftReward_d__137 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2483};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoDepositCore>d__129
class CORDL_TYPE ProgressionManager__DoDepositCore_d__129 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_DepositCoreRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5975910, size 0x3e8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5975cf8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5975d00, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5975d38, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x597590c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_DepositCoreRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_DepositCoreRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_DepositCoreRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59734a8, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoDepositCore_d__129() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoDepositCore_d__129", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoDepositCore_d__129(ProgressionManager__DoDepositCore_d__129 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoDepositCore_d__129", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoDepositCore_d__129(ProgressionManager__DoDepositCore_d__129 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2482};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_DepositCoreRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoDepositCore_d__129, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoDepositCore_d__129, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoDepositCore_d__129, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoDepositCore_d__129, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoDepositCore_d__129, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoDepositCore_d__129) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoBonusCompleteReward>d__119
class CORDL_TYPE ProgressionManager__DoBonusCompleteReward_d__119 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*  __8__1;

/// @brief Field data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5975538, size 0x38c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59758c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59758cc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5975904, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5975534, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& __cordl_internal_get_OnSuccess() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5972f80, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoBonusCompleteReward_d__119() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoBonusCompleteReward_d__119", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoBonusCompleteReward_d__119(ProgressionManager__DoBonusCompleteReward_d__119 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoBonusCompleteReward_d__119", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoBonusCompleteReward_d__119(ProgressionManager__DoBonusCompleteReward_d__119 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2481};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field data, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*  ___data;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119, ___OnSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119, ___OnFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119, ___data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119, _____8__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<DoAdvanceDockWristUpgradeLevel>d__132
class CORDL_TYPE ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*  __8__1;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59751b8, size 0x334, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59754ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59754f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x597552c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59751b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59734f8, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132(ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132(ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2480};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  ___data;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132, _____8__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass140_0
class CORDL_TYPE ProgressionManager___c__DisplayClass140_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  data;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0* New_ctor() ;

/// @brief Method <DoSetGhostReactorInventory>b__0, addr 0x59748f8, size 0x50, virtual false, abstract: false, final false
inline void _DoSetGhostReactorInventory_b__0(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x59748f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass140_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass140_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass140_0(ProgressionManager___c__DisplayClass140_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass140_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass140_0(ProgressionManager___c__DisplayClass140_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2476};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  ___data;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass140_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass140_0, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass140_0, ___request) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass140_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass137_0
class CORDL_TYPE ProgressionManager___c__DisplayClass137_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  data;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0* New_ctor() ;

/// @brief Method <DoEndOfShiftReward>b__0, addr 0x59748a0, size 0x50, virtual false, abstract: false, final false
inline void _DoEndOfShiftReward_b__0(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5974898, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass137_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass137_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass137_0(ProgressionManager___c__DisplayClass137_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass137_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass137_0(ProgressionManager___c__DisplayClass137_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2475};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  ___data;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass137_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass137_0, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass137_0, ___request) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass137_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass136_0
class CORDL_TYPE ProgressionManager___c__DisplayClass136_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  data;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0* New_ctor() ;

/// @brief Method <DoStartOfShift>b__0, addr 0x597486c, size 0x2c, virtual false, abstract: false, final false
inline void _DoStartOfShift_b__0(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  value) ;

/// @brief Method .ctor, addr 0x5974864, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass136_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass136_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass136_0(ProgressionManager___c__DisplayClass136_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass136_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass136_0(ProgressionManager___c__DisplayClass136_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2474};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass136_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass136_0, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass136_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass135_0
class CORDL_TYPE ProgressionManager___c__DisplayClass135_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_RecycleToolRequest*  data;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0* New_ctor() ;

/// @brief Method <DoRecycleTool>b__0, addr 0x5974840, size 0x24, virtual false, abstract: false, final false
inline void _DoRecycleTool_b__0(::GlobalNamespace::ProgressionManager_RecycleToolRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_RecycleToolRequest*  value) ;

/// @brief Method .ctor, addr 0x5974838, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass135_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass135_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass135_0(ProgressionManager___c__DisplayClass135_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass135_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass135_0(ProgressionManager___c__DisplayClass135_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2473};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_RecycleToolRequest*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass135_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass135_0, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass135_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass134_0
class CORDL_TYPE ProgressionManager___c__DisplayClass134_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  data;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0* New_ctor() ;

/// @brief Method <DoPurchaseDrillUpgrade>b__0, addr 0x5974814, size 0x24, virtual false, abstract: false, final false
inline void _DoPurchaseDrillUpgrade_b__0(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  value) ;

/// @brief Method .ctor, addr 0x597480c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass134_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass134_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass134_0(ProgressionManager___c__DisplayClass134_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass134_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass134_0(ProgressionManager___c__DisplayClass134_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2472};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass134_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass134_0, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass134_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass132_0
class CORDL_TYPE ProgressionManager___c__DisplayClass132_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  data;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0* New_ctor() ;

/// @brief Method <DoAdvanceDockWristUpgradeLevel>b__0, addr 0x59747bc, size 0x50, virtual false, abstract: false, final false
inline void _DoAdvanceDockWristUpgradeLevel_b__0(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x59747b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass132_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass132_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass132_0(ProgressionManager___c__DisplayClass132_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass132_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass132_0(ProgressionManager___c__DisplayClass132_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2471};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  ___data;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass132_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass132_0, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass132_0, ___request) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass132_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass131_0
class CORDL_TYPE ProgressionManager___c__DisplayClass131_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  data;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0* New_ctor() ;

/// @brief Method <DoSubtractShiftCredit>b__0, addr 0x5974764, size 0x50, virtual false, abstract: false, final false
inline void _DoSubtractShiftCredit_b__0(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x597475c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass131_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass131_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass131_0(ProgressionManager___c__DisplayClass131_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass131_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass131_0(ProgressionManager___c__DisplayClass131_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2470};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  ___data;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass131_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass131_0, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass131_0, ___request) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass131_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass130_0
class CORDL_TYPE ProgressionManager___c__DisplayClass130_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0* New_ctor() ;

/// @brief Method <DoPurchaseOverdrive>b__0, addr 0x5974724, size 0x38, virtual false, abstract: false, final false
inline void _DoPurchaseOverdrive_b__0(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x597471c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass130_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass130_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass130_0(ProgressionManager___c__DisplayClass130_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass130_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass130_0(ProgressionManager___c__DisplayClass130_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2469};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass130_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass130_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass130_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass129_0
class CORDL_TYPE ProgressionManager___c__DisplayClass129_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0* New_ctor() ;

/// @brief Method <DoDepositCore>b__0, addr 0x59746d0, size 0x4c, virtual false, abstract: false, final false
inline void _DoDepositCore_b__0(::GlobalNamespace::ProgressionManager_DepositCoreRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x59746c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass129_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass129_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass129_0(ProgressionManager___c__DisplayClass129_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass129_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass129_0(ProgressionManager___c__DisplayClass129_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2468};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass129_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass129_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass129_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass128_0
class CORDL_TYPE ProgressionManager___c__DisplayClass128_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0* New_ctor() ;

/// @brief Method <DoGetJuicerStatus>b__0, addr 0x5974690, size 0x38, virtual false, abstract: false, final false
inline void _DoGetJuicerStatus_b__0(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5974688, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass128_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass128_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass128_0(ProgressionManager___c__DisplayClass128_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass128_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass128_0(ProgressionManager___c__DisplayClass128_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2467};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass128_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass128_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass128_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass126_0
class CORDL_TYPE ProgressionManager___c__DisplayClass126_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0* New_ctor() ;

/// @brief Method <DoPurchaseShiftCredit>b__0, addr 0x5974650, size 0x38, virtual false, abstract: false, final false
inline void _DoPurchaseShiftCredit_b__0(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5974648, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass126_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass126_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass126_0(ProgressionManager___c__DisplayClass126_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass126_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass126_0(ProgressionManager___c__DisplayClass126_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2466};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass126_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass126_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass126_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass125_0
class CORDL_TYPE ProgressionManager___c__DisplayClass125_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0* New_ctor() ;

/// @brief Method <DoPurchaseShiftCreditCapIncrease>b__0, addr 0x5974610, size 0x38, virtual false, abstract: false, final false
inline void _DoPurchaseShiftCreditCapIncrease_b__0(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*  x) ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5974608, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass125_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass125_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass125_0(ProgressionManager___c__DisplayClass125_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass125_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass125_0(ProgressionManager___c__DisplayClass125_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2465};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass125_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass125_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass125_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass124_0
class CORDL_TYPE ProgressionManager___c__DisplayClass124_0 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  OnSuccess;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0* New_ctor() ;

/// @brief Method <DoPurchaseResources>b__0, addr 0x59745ac, size 0x1c, virtual false, abstract: false, final false
inline void _DoPurchaseResources_b__0(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*  x) ;

/// @brief Method <DoPurchaseResources>b__1, addr 0x59745c8, size 0x40, virtual false, abstract: false, final false
inline void _DoPurchaseResources_b__1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*& __cordl_internal_get_OnSuccess() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x59745a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass124_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass124_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass124_0(ProgressionManager___c__DisplayClass124_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass124_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass124_0(ProgressionManager___c__DisplayClass124_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2464};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0, ___OnSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0, ___OnFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0, ___request) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass123_0
class CORDL_TYPE ProgressionManager___c__DisplayClass123_0 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action*  OnSuccess;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  data;

/// @brief Field request, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0* New_ctor() ;

/// @brief Method <DoPurchaseTechPoints>b__0, addr 0x5974538, size 0x2c, virtual false, abstract: false, final false
inline void _DoPurchaseTechPoints_b__0(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  x) ;

/// @brief Method <DoPurchaseTechPoints>b__1, addr 0x5974564, size 0x40, virtual false, abstract: false, final false
inline void _DoPurchaseTechPoints_b__1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_OnSuccess() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5974530, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass123_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass123_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass123_0(ProgressionManager___c__DisplayClass123_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass123_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass123_0(ProgressionManager___c__DisplayClass123_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2463};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  ___data;

/// @brief Field OnSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field request, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0, ___OnSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0, ___OnFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0, ___request) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass122_0
class CORDL_TYPE ProgressionManager___c__DisplayClass122_0 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0* New_ctor() ;

/// @brief Method <DoGetSIQuestsStatus>b__0, addr 0x59744d4, size 0x1c, virtual false, abstract: false, final false
inline void _DoGetSIQuestsStatus_b__0(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*  x) ;

/// @brief Method <DoGetSIQuestsStatus>b__1, addr 0x59744f0, size 0x40, virtual false, abstract: false, final false
inline void _DoGetSIQuestsStatus_b__1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& __cordl_internal_get_OnSuccess() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x59744cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass122_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass122_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass122_0(ProgressionManager___c__DisplayClass122_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass122_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass122_0(ProgressionManager___c__DisplayClass122_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2462};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0, ___OnSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0, ___OnFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0, ___request) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass121_0
class CORDL_TYPE ProgressionManager___c__DisplayClass121_0 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  OnSuccess;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0* New_ctor() ;

/// @brief Method <DoGetActiveSIQuests>b__0, addr 0x5974470, size 0x1c, virtual false, abstract: false, final false
inline void _DoGetActiveSIQuests_b__0(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*  x) ;

/// @brief Method <DoGetActiveSIQuests>b__1, addr 0x597448c, size 0x40, virtual false, abstract: false, final false
inline void _DoGetActiveSIQuests_b__1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*& __cordl_internal_get_OnSuccess() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5974468, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass121_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass121_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass121_0(ProgressionManager___c__DisplayClass121_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass121_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass121_0(ProgressionManager___c__DisplayClass121_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2461};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0, ___OnSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0, ___OnFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0, ___request) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass120_0
class CORDL_TYPE ProgressionManager___c__DisplayClass120_0 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0* New_ctor() ;

/// @brief Method <DoIdolCollectReward>b__0, addr 0x597440c, size 0x1c, virtual false, abstract: false, final false
inline void _DoIdolCollectReward_b__0(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*  x) ;

/// @brief Method <DoIdolCollectReward>b__1, addr 0x5974428, size 0x40, virtual false, abstract: false, final false
inline void _DoIdolCollectReward_b__1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& __cordl_internal_get_OnSuccess() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5974404, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass120_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass120_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass120_0(ProgressionManager___c__DisplayClass120_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass120_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass120_0(ProgressionManager___c__DisplayClass120_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2460};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0, ___OnSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0, ___OnFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0, ___request) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass119_0
class CORDL_TYPE ProgressionManager___c__DisplayClass119_0 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field request, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0* New_ctor() ;

/// @brief Method <DoBonusCompleteReward>b__0, addr 0x59743a8, size 0x1c, virtual false, abstract: false, final false
inline void _DoBonusCompleteReward_b__0(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*  x) ;

/// @brief Method <DoBonusCompleteReward>b__1, addr 0x59743c4, size 0x40, virtual false, abstract: false, final false
inline void _DoBonusCompleteReward_b__1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& __cordl_internal_get_OnSuccess() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x59743a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass119_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass119_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass119_0(ProgressionManager___c__DisplayClass119_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass119_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass119_0(ProgressionManager___c__DisplayClass119_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2459};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field OnSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0, ___OnSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0, ___OnFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0, ___request) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass118_0
class CORDL_TYPE ProgressionManager___c__DisplayClass118_0 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  data;

/// @brief Field request, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0* New_ctor() ;

/// @brief Method <DoQuestCompleteReward>b__0, addr 0x5974334, size 0x2c, virtual false, abstract: false, final false
inline void _DoQuestCompleteReward_b__0(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  x) ;

/// @brief Method <DoQuestCompleteReward>b__1, addr 0x5974360, size 0x40, virtual false, abstract: false, final false
inline void _DoQuestCompleteReward_b__1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& __cordl_internal_get_OnSuccess() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x597432c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass118_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass118_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass118_0(ProgressionManager___c__DisplayClass118_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass118_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass118_0(ProgressionManager___c__DisplayClass118_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2458};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  ___data;

/// @brief Field OnSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field request, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0, ___OnSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0, ___OnFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0, ___request) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/<>c__DisplayClass117_0
class CORDL_TYPE ProgressionManager___c__DisplayClass117_0 : public ::System::Object {
public:
// Declarations
/// @brief Field OnFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFailure, put=__cordl_internal_set_OnFailure)) ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field OnSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccess, put=__cordl_internal_set_OnSuccess)) ::System::Action_1<::StringW>*  OnSuccess;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  data;

/// @brief Field request, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0* New_ctor() ;

/// @brief Method <DoIncrementSIResource>b__0, addr 0x59742c0, size 0x2c, virtual false, abstract: false, final false
inline void _DoIncrementSIResource_b__0(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  x) ;

/// @brief Method <DoIncrementSIResource>b__1, addr 0x59742ec, size 0x40, virtual false, abstract: false, final false
inline void _DoIncrementSIResource_b__1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnFailure() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnFailure() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnSuccess() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSuccess(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x59742b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager___c__DisplayClass117_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass117_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager___c__DisplayClass117_0(ProgressionManager___c__DisplayClass117_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager___c__DisplayClass117_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager___c__DisplayClass117_0(ProgressionManager___c__DisplayClass117_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2457};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  _____4__this;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  ___data;

/// @brief Field OnSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnSuccess;

/// @brief Field OnFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnFailure;

/// @brief Field request, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0, ___OnSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0, ___OnFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0, ___request) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/SetGhostReactorInventoryResponse
class CORDL_TYPE ProgressionManager_SetGhostReactorInventoryResponse : public ::System::Object {
public:
// Declarations
/// @brief Field MothershipId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

static inline ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59742b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_SetGhostReactorInventoryResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetGhostReactorInventoryResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_SetGhostReactorInventoryResponse(ProgressionManager_SetGhostReactorInventoryResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetGhostReactorInventoryResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_SetGhostReactorInventoryResponse(ProgressionManager_SetGhostReactorInventoryResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2456};

/// @brief Field MothershipId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MothershipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse, ___MothershipId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipUserDataWriteRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/SetGhostReactorInventoryRequest
class CORDL_TYPE ProgressionManager_SetGhostReactorInventoryRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
/// @brief Field InventoryJson, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_InventoryJson, put=__cordl_internal_set_InventoryJson)) ::StringW  InventoryJson;

static inline ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_InventoryJson() const;

constexpr ::StringW& __cordl_internal_get_InventoryJson() ;

constexpr void __cordl_internal_set_InventoryJson(::StringW  value) ;

/// @brief Method .ctor, addr 0x59728dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_SetGhostReactorInventoryRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetGhostReactorInventoryRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_SetGhostReactorInventoryRequest(ProgressionManager_SetGhostReactorInventoryRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetGhostReactorInventoryRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_SetGhostReactorInventoryRequest(ProgressionManager_SetGhostReactorInventoryRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2455};

/// @brief Field InventoryJson, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___InventoryJson;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest, ___InventoryJson) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GhostReactorInventoryResponse
class CORDL_TYPE ProgressionManager_GhostReactorInventoryResponse : public ::System::Object {
public:
// Declarations
/// @brief Field InventoryJson, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InventoryJson, put=__cordl_internal_set_InventoryJson)) ::StringW  InventoryJson;

/// @brief Field MothershipId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

static inline ::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_InventoryJson() const;

constexpr ::StringW& __cordl_internal_get_InventoryJson() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr void __cordl_internal_set_InventoryJson(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59742a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GhostReactorInventoryResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GhostReactorInventoryResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GhostReactorInventoryResponse(ProgressionManager_GhostReactorInventoryResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GhostReactorInventoryResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GhostReactorInventoryResponse(ProgressionManager_GhostReactorInventoryResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2454};

/// @brief Field MothershipId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MothershipId;

/// @brief Field InventoryJson, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___InventoryJson;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse, ___MothershipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse, ___InventoryJson) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GhostReactorInventoryRequest
class CORDL_TYPE ProgressionManager_GhostReactorInventoryRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5972708, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GhostReactorInventoryRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GhostReactorInventoryRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GhostReactorInventoryRequest(ProgressionManager_GhostReactorInventoryRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GhostReactorInventoryRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GhostReactorInventoryRequest(ProgressionManager_GhostReactorInventoryRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2453};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GhostReactorStatsResponse
class CORDL_TYPE ProgressionManager_GhostReactorStatsResponse : public ::System::Object {
public:
// Declarations
/// @brief Field MaxDepthReached, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxDepthReached, put=__cordl_internal_set_MaxDepthReached)) int32_t  MaxDepthReached;

/// @brief Field MothershipId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

static inline ::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_MaxDepthReached() const;

constexpr int32_t& __cordl_internal_get_MaxDepthReached() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr void __cordl_internal_set_MaxDepthReached(int32_t  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59742a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GhostReactorStatsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GhostReactorStatsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GhostReactorStatsResponse(ProgressionManager_GhostReactorStatsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GhostReactorStatsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GhostReactorStatsResponse(ProgressionManager_GhostReactorStatsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2452};

/// @brief Field MothershipId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MothershipId;

/// @brief Field MaxDepthReached, offset: 0x18, size: 0x4, def value: None
 int32_t  ___MaxDepthReached;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse, ___MothershipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse, ___MaxDepthReached) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GhostReactorStatsRequest
class CORDL_TYPE ProgressionManager_GhostReactorStatsRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5972564, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GhostReactorStatsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GhostReactorStatsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GhostReactorStatsRequest(ProgressionManager_GhostReactorStatsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GhostReactorStatsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GhostReactorStatsRequest(ProgressionManager_GhostReactorStatsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2451};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipUserDataWriteRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/EndOfShiftRewardRequest
class CORDL_TYPE ProgressionManager_EndOfShiftRewardRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
/// @brief Field ShiftId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShiftId, put=__cordl_internal_set_ShiftId)) ::StringW  ShiftId;

static inline ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ShiftId() const;

constexpr ::StringW& __cordl_internal_get_ShiftId() ;

constexpr void __cordl_internal_set_ShiftId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59723c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_EndOfShiftRewardRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_EndOfShiftRewardRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_EndOfShiftRewardRequest(ProgressionManager_EndOfShiftRewardRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_EndOfShiftRewardRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_EndOfShiftRewardRequest(ProgressionManager_EndOfShiftRewardRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2450};

/// @brief Field ShiftId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___ShiftId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest, ___ShiftId) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/StartOfShiftRequest
class CORDL_TYPE ProgressionManager_StartOfShiftRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field CoresRequired, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_CoresRequired, put=__cordl_internal_set_CoresRequired)) int32_t  CoresRequired;

/// @brief Field Depth, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_Depth, put=__cordl_internal_set_Depth)) int32_t  Depth;

/// @brief Field NumberOfPlayers, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumberOfPlayers, put=__cordl_internal_set_NumberOfPlayers)) int32_t  NumberOfPlayers;

/// @brief Field ShiftId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShiftId, put=__cordl_internal_set_ShiftId)) ::StringW  ShiftId;

static inline ::GlobalNamespace::ProgressionManager_StartOfShiftRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_CoresRequired() const;

constexpr int32_t& __cordl_internal_get_CoresRequired() ;

constexpr int32_t const& __cordl_internal_get_Depth() const;

constexpr int32_t& __cordl_internal_get_Depth() ;

constexpr int32_t const& __cordl_internal_get_NumberOfPlayers() const;

constexpr int32_t& __cordl_internal_get_NumberOfPlayers() ;

constexpr ::StringW const& __cordl_internal_get_ShiftId() const;

constexpr ::StringW& __cordl_internal_get_ShiftId() ;

constexpr void __cordl_internal_set_CoresRequired(int32_t  value) ;

constexpr void __cordl_internal_set_Depth(int32_t  value) ;

constexpr void __cordl_internal_set_NumberOfPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_ShiftId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59721e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_StartOfShiftRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_StartOfShiftRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_StartOfShiftRequest(ProgressionManager_StartOfShiftRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_StartOfShiftRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_StartOfShiftRequest(ProgressionManager_StartOfShiftRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2449};

/// @brief Field ShiftId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ShiftId;

/// @brief Field CoresRequired, offset: 0x38, size: 0x4, def value: None
 int32_t  ___CoresRequired;

/// @brief Field NumberOfPlayers, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___NumberOfPlayers;

/// @brief Field Depth, offset: 0x40, size: 0x4, def value: None
 int32_t  ___Depth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_StartOfShiftRequest, ___ShiftId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_StartOfShiftRequest, ___CoresRequired) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_StartOfShiftRequest, ___NumberOfPlayers) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_StartOfShiftRequest, ___Depth) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_StartOfShiftRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GRTool::GRToolType, ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/RecycleToolRequest
class CORDL_TYPE ProgressionManager_RecycleToolRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field NumberOfPlayers, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumberOfPlayers, put=__cordl_internal_set_NumberOfPlayers)) int32_t  NumberOfPlayers;

/// @brief Field ToolBeingRecycled, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ToolBeingRecycled, put=__cordl_internal_set_ToolBeingRecycled)) ::GlobalNamespace::GRTool_GRToolType  ToolBeingRecycled;

static inline ::GlobalNamespace::ProgressionManager_RecycleToolRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_NumberOfPlayers() const;

constexpr int32_t& __cordl_internal_get_NumberOfPlayers() ;

constexpr ::GlobalNamespace::GRTool_GRToolType const& __cordl_internal_get_ToolBeingRecycled() const;

constexpr ::GlobalNamespace::GRTool_GRToolType& __cordl_internal_get_ToolBeingRecycled() ;

constexpr void __cordl_internal_set_NumberOfPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_ToolBeingRecycled(::GlobalNamespace::GRTool_GRToolType  value) ;

/// @brief Method .ctor, addr 0x5972000, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_RecycleToolRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_RecycleToolRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_RecycleToolRequest(ProgressionManager_RecycleToolRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_RecycleToolRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_RecycleToolRequest(ProgressionManager_RecycleToolRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2448};

/// @brief Field ToolBeingRecycled, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GRTool_GRToolType  ___ToolBeingRecycled;

/// @brief Field NumberOfPlayers, offset: 0x34, size: 0x4, def value: None
 int32_t  ___NumberOfPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_RecycleToolRequest, ___ToolBeingRecycled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_RecycleToolRequest, ___NumberOfPlayers) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_RecycleToolRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseDrillUpgradeResponse
class CORDL_TYPE ProgressionManager_PurchaseDrillUpgradeResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field StatusCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

static inline ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x5974298, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseDrillUpgradeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseDrillUpgradeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseDrillUpgradeResponse(ProgressionManager_PurchaseDrillUpgradeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseDrillUpgradeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseDrillUpgradeResponse(ProgressionManager_PurchaseDrillUpgradeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2447};

/// @brief Field StatusCode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse, ___StatusCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse, ___Error) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::DrillUpgradeLevel, ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseDrillUpgradeRequest
class CORDL_TYPE ProgressionManager_PurchaseDrillUpgradeRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field Upgrade, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Upgrade, put=__cordl_internal_set_Upgrade)) ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  Upgrade;

static inline ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest* New_ctor() ;

constexpr ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel const& __cordl_internal_get_Upgrade() const;

constexpr ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel& __cordl_internal_get_Upgrade() ;

constexpr void __cordl_internal_set_Upgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  value) ;

/// @brief Method .ctor, addr 0x5971e48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseDrillUpgradeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseDrillUpgradeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseDrillUpgradeRequest(ProgressionManager_PurchaseDrillUpgradeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseDrillUpgradeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseDrillUpgradeRequest(ProgressionManager_PurchaseDrillUpgradeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2446};

/// @brief Field Upgrade, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  ___Upgrade;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest, ___Upgrade) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/DockWristStatusResponse
class CORDL_TYPE ProgressionManager_DockWristStatusResponse : public ::System::Object {
public:
// Declarations
/// @brief Field CurrentUpgrade1Level, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentUpgrade1Level, put=__cordl_internal_set_CurrentUpgrade1Level)) int32_t  CurrentUpgrade1Level;

/// @brief Field CurrentUpgrade2Level, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentUpgrade2Level, put=__cordl_internal_set_CurrentUpgrade2Level)) int32_t  CurrentUpgrade2Level;

/// @brief Field CurrentUpgrade3Level, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentUpgrade3Level, put=__cordl_internal_set_CurrentUpgrade3Level)) int32_t  CurrentUpgrade3Level;

/// @brief Field Upgrade1LevelMax, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Upgrade1LevelMax, put=__cordl_internal_set_Upgrade1LevelMax)) int32_t  Upgrade1LevelMax;

/// @brief Field Upgrade2LevelMax, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Upgrade2LevelMax, put=__cordl_internal_set_Upgrade2LevelMax)) int32_t  Upgrade2LevelMax;

/// @brief Field Upgrade3LevelMax, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Upgrade3LevelMax, put=__cordl_internal_set_Upgrade3LevelMax)) int32_t  Upgrade3LevelMax;

static inline ::GlobalNamespace::ProgressionManager_DockWristStatusResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_CurrentUpgrade1Level() const;

constexpr int32_t& __cordl_internal_get_CurrentUpgrade1Level() ;

constexpr int32_t const& __cordl_internal_get_CurrentUpgrade2Level() const;

constexpr int32_t& __cordl_internal_get_CurrentUpgrade2Level() ;

constexpr int32_t const& __cordl_internal_get_CurrentUpgrade3Level() const;

constexpr int32_t& __cordl_internal_get_CurrentUpgrade3Level() ;

constexpr int32_t const& __cordl_internal_get_Upgrade1LevelMax() const;

constexpr int32_t& __cordl_internal_get_Upgrade1LevelMax() ;

constexpr int32_t const& __cordl_internal_get_Upgrade2LevelMax() const;

constexpr int32_t& __cordl_internal_get_Upgrade2LevelMax() ;

constexpr int32_t const& __cordl_internal_get_Upgrade3LevelMax() const;

constexpr int32_t& __cordl_internal_get_Upgrade3LevelMax() ;

constexpr void __cordl_internal_set_CurrentUpgrade1Level(int32_t  value) ;

constexpr void __cordl_internal_set_CurrentUpgrade2Level(int32_t  value) ;

constexpr void __cordl_internal_set_CurrentUpgrade3Level(int32_t  value) ;

constexpr void __cordl_internal_set_Upgrade1LevelMax(int32_t  value) ;

constexpr void __cordl_internal_set_Upgrade2LevelMax(int32_t  value) ;

constexpr void __cordl_internal_set_Upgrade3LevelMax(int32_t  value) ;

/// @brief Method .ctor, addr 0x5974290, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_DockWristStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_DockWristStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_DockWristStatusResponse(ProgressionManager_DockWristStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_DockWristStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_DockWristStatusResponse(ProgressionManager_DockWristStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2445};

/// @brief Field CurrentUpgrade1Level, offset: 0x10, size: 0x4, def value: None
 int32_t  ___CurrentUpgrade1Level;

/// @brief Field CurrentUpgrade2Level, offset: 0x14, size: 0x4, def value: None
 int32_t  ___CurrentUpgrade2Level;

/// @brief Field CurrentUpgrade3Level, offset: 0x18, size: 0x4, def value: None
 int32_t  ___CurrentUpgrade3Level;

/// @brief Field Upgrade1LevelMax, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Upgrade1LevelMax;

/// @brief Field Upgrade2LevelMax, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Upgrade2LevelMax;

/// @brief Field Upgrade3LevelMax, offset: 0x24, size: 0x4, def value: None
 int32_t  ___Upgrade3LevelMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_DockWristStatusResponse, ___CurrentUpgrade1Level) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_DockWristStatusResponse, ___CurrentUpgrade2Level) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_DockWristStatusResponse, ___CurrentUpgrade3Level) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_DockWristStatusResponse, ___Upgrade1LevelMax) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_DockWristStatusResponse, ___Upgrade2LevelMax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_DockWristStatusResponse, ___Upgrade3LevelMax) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_DockWristStatusResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/DockWristUpgradeStatusRequest
class CORDL_TYPE ProgressionManager_DockWristUpgradeStatusRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5971c9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_DockWristUpgradeStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_DockWristUpgradeStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_DockWristUpgradeStatusRequest(ProgressionManager_DockWristUpgradeStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_DockWristUpgradeStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_DockWristUpgradeStatusRequest(ProgressionManager_DockWristUpgradeStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipUserDataWriteRequest, ProgressionManager::WristDockUpgradeType
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/AdvanceDockWristUpgradeRequest
class CORDL_TYPE ProgressionManager_AdvanceDockWristUpgradeRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
/// @brief Field Upgrade, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Upgrade, put=__cordl_internal_set_Upgrade)) ::GlobalNamespace::ProgressionManager_WristDockUpgradeType  Upgrade;

static inline ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest* New_ctor() ;

constexpr ::GlobalNamespace::ProgressionManager_WristDockUpgradeType const& __cordl_internal_get_Upgrade() const;

constexpr ::GlobalNamespace::ProgressionManager_WristDockUpgradeType& __cordl_internal_get_Upgrade() ;

constexpr void __cordl_internal_set_Upgrade(::GlobalNamespace::ProgressionManager_WristDockUpgradeType  value) ;

/// @brief Method .ctor, addr 0x5971af8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_AdvanceDockWristUpgradeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_AdvanceDockWristUpgradeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_AdvanceDockWristUpgradeRequest(ProgressionManager_AdvanceDockWristUpgradeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_AdvanceDockWristUpgradeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_AdvanceDockWristUpgradeRequest(ProgressionManager_AdvanceDockWristUpgradeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2443};

/// @brief Field Upgrade, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::ProgressionManager_WristDockUpgradeType  ___Upgrade;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest, ___Upgrade) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipUserDataWriteRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/SubtractShiftCreditRequest
class CORDL_TYPE ProgressionManager_SubtractShiftCreditRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
/// @brief Field ShiftCreditToRemove, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ShiftCreditToRemove, put=__cordl_internal_set_ShiftCreditToRemove)) int32_t  ShiftCreditToRemove;

static inline ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ShiftCreditToRemove() const;

constexpr int32_t& __cordl_internal_get_ShiftCreditToRemove() ;

constexpr void __cordl_internal_set_ShiftCreditToRemove(int32_t  value) ;

/// @brief Method .ctor, addr 0x5971928, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_SubtractShiftCreditRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SubtractShiftCreditRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_SubtractShiftCreditRequest(ProgressionManager_SubtractShiftCreditRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SubtractShiftCreditRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_SubtractShiftCreditRequest(ProgressionManager_SubtractShiftCreditRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2442};

/// @brief Field ShiftCreditToRemove, offset: 0x34, size: 0x4, def value: None
 int32_t  ___ShiftCreditToRemove;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest, ___ShiftCreditToRemove) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/JuicerStatusResponse
class CORDL_TYPE ProgressionManager_JuicerStatusResponse : public ::System::Object {
public:
// Declarations
/// @brief Field CoreProcessingPercent, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CoreProcessingPercent, put=__cordl_internal_set_CoreProcessingPercent)) float_t  CoreProcessingPercent;

/// @brief Field CoreProcessingTimeSec, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CoreProcessingTimeSec, put=__cordl_internal_set_CoreProcessingTimeSec)) int32_t  CoreProcessingTimeSec;

/// @brief Field CoresProcessedByOverdrive, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CoresProcessedByOverdrive, put=__cordl_internal_set_CoresProcessedByOverdrive)) int32_t  CoresProcessedByOverdrive;

/// @brief Field CurrentCoreCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentCoreCount, put=__cordl_internal_set_CurrentCoreCount)) int32_t  CurrentCoreCount;

/// @brief Field Error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field MothershipId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

/// @brief Field OverdriveCap, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_OverdriveCap, put=__cordl_internal_set_OverdriveCap)) int32_t  OverdriveCap;

/// @brief Field OverdriveSupply, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_OverdriveSupply, put=__cordl_internal_set_OverdriveSupply)) int32_t  OverdriveSupply;

/// @brief Field RefreshJuice, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_RefreshJuice, put=__cordl_internal_set_RefreshJuice)) bool  RefreshJuice;

/// @brief Field StatusCode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

static inline ::GlobalNamespace::ProgressionManager_JuicerStatusResponse* New_ctor() ;

constexpr float_t const& __cordl_internal_get_CoreProcessingPercent() const;

constexpr float_t& __cordl_internal_get_CoreProcessingPercent() ;

constexpr int32_t const& __cordl_internal_get_CoreProcessingTimeSec() const;

constexpr int32_t& __cordl_internal_get_CoreProcessingTimeSec() ;

constexpr int32_t const& __cordl_internal_get_CoresProcessedByOverdrive() const;

constexpr int32_t& __cordl_internal_get_CoresProcessedByOverdrive() ;

constexpr int32_t const& __cordl_internal_get_CurrentCoreCount() const;

constexpr int32_t& __cordl_internal_get_CurrentCoreCount() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr int32_t const& __cordl_internal_get_OverdriveCap() const;

constexpr int32_t& __cordl_internal_get_OverdriveCap() ;

constexpr int32_t const& __cordl_internal_get_OverdriveSupply() const;

constexpr int32_t& __cordl_internal_get_OverdriveSupply() ;

constexpr bool const& __cordl_internal_get_RefreshJuice() const;

constexpr bool& __cordl_internal_get_RefreshJuice() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr void __cordl_internal_set_CoreProcessingPercent(float_t  value) ;

constexpr void __cordl_internal_set_CoreProcessingTimeSec(int32_t  value) ;

constexpr void __cordl_internal_set_CoresProcessedByOverdrive(int32_t  value) ;

constexpr void __cordl_internal_set_CurrentCoreCount(int32_t  value) ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_OverdriveCap(int32_t  value) ;

constexpr void __cordl_internal_set_OverdriveSupply(int32_t  value) ;

constexpr void __cordl_internal_set_RefreshJuice(bool  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x5974288, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_JuicerStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_JuicerStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_JuicerStatusResponse(ProgressionManager_JuicerStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_JuicerStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_JuicerStatusResponse(ProgressionManager_JuicerStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2441};

/// @brief Field MothershipId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MothershipId;

/// @brief Field StatusCode, offset: 0x18, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Error;

/// @brief Field CurrentCoreCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___CurrentCoreCount;

/// @brief Field CoreProcessingTimeSec, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___CoreProcessingTimeSec;

/// @brief Field CoreProcessingPercent, offset: 0x30, size: 0x4, def value: None
 float_t  ___CoreProcessingPercent;

/// @brief Field OverdriveSupply, offset: 0x34, size: 0x4, def value: None
 int32_t  ___OverdriveSupply;

/// @brief Field OverdriveCap, offset: 0x38, size: 0x4, def value: None
 int32_t  ___OverdriveCap;

/// @brief Field CoresProcessedByOverdrive, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___CoresProcessedByOverdrive;

/// @brief Field RefreshJuice, offset: 0x40, size: 0x1, def value: None
 bool  ___RefreshJuice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___MothershipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___StatusCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___Error) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___CurrentCoreCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___CoreProcessingTimeSec) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___CoreProcessingPercent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___OverdriveSupply) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___OverdriveCap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___CoresProcessedByOverdrive) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse, ___RefreshJuice) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_JuicerStatusResponse) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipUserDataWriteRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseOverdriveRequest
class CORDL_TYPE ProgressionManager_PurchaseOverdriveRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5971760, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseOverdriveRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseOverdriveRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseOverdriveRequest(ProgressionManager_PurchaseOverdriveRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseOverdriveRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseOverdriveRequest(ProgressionManager_PurchaseOverdriveRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/DepositCoreResponse
class CORDL_TYPE ProgressionManager_DepositCoreResponse : public ::System::Object {
public:
// Declarations
/// @brief Field CurrentShiftCredits, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentShiftCredits, put=__cordl_internal_set_CurrentShiftCredits)) int32_t  CurrentShiftCredits;

/// @brief Field Error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field StatusCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

static inline ::GlobalNamespace::ProgressionManager_DepositCoreResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_CurrentShiftCredits() const;

constexpr int32_t& __cordl_internal_get_CurrentShiftCredits() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr void __cordl_internal_set_CurrentShiftCredits(int32_t  value) ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x5974280, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_DepositCoreResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_DepositCoreResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_DepositCoreResponse(ProgressionManager_DepositCoreResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_DepositCoreResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_DepositCoreResponse(ProgressionManager_DepositCoreResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2439};

/// @brief Field StatusCode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Error;

/// @brief Field CurrentShiftCredits, offset: 0x20, size: 0x4, def value: None
 int32_t  ___CurrentShiftCredits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_DepositCoreResponse, ___StatusCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_DepositCoreResponse, ___Error) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_DepositCoreResponse, ___CurrentShiftCredits) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_DepositCoreResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::CoreType, ProgressionManager::MothershipUserDataWriteRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/DepositCoreRequest
class CORDL_TYPE ProgressionManager_DepositCoreRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
/// @brief Field CoreBeingDeposited, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_CoreBeingDeposited, put=__cordl_internal_set_CoreBeingDeposited)) ::GlobalNamespace::ProgressionManager_CoreType  CoreBeingDeposited;

static inline ::GlobalNamespace::ProgressionManager_DepositCoreRequest* New_ctor() ;

constexpr ::GlobalNamespace::ProgressionManager_CoreType const& __cordl_internal_get_CoreBeingDeposited() const;

constexpr ::GlobalNamespace::ProgressionManager_CoreType& __cordl_internal_get_CoreBeingDeposited() ;

constexpr void __cordl_internal_set_CoreBeingDeposited(::GlobalNamespace::ProgressionManager_CoreType  value) ;

/// @brief Method .ctor, addr 0x59715a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_DepositCoreRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_DepositCoreRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_DepositCoreRequest(ProgressionManager_DepositCoreRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_DepositCoreRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_DepositCoreRequest(ProgressionManager_DepositCoreRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2438};

/// @brief Field CoreBeingDeposited, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::ProgressionManager_CoreType  ___CoreBeingDeposited;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_DepositCoreRequest, ___CoreBeingDeposited) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_DepositCoreRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipUserDataWriteRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetJuicerStatusRequest
class CORDL_TYPE ProgressionManager_GetJuicerStatusRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x59713e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetJuicerStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetJuicerStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetJuicerStatusRequest(ProgressionManager_GetJuicerStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetJuicerStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetJuicerStatusRequest(ProgressionManager_GetJuicerStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2437};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/ShiftCreditResponse
class CORDL_TYPE ProgressionManager_ShiftCreditResponse : public ::System::Object {
public:
// Declarations
/// @brief Field CurrentShiftCreditCapIncreases, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentShiftCreditCapIncreases, put=__cordl_internal_set_CurrentShiftCreditCapIncreases)) int32_t  CurrentShiftCreditCapIncreases;

/// @brief Field CurrentShiftCreditCapIncreasesMax, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentShiftCreditCapIncreasesMax, put=__cordl_internal_set_CurrentShiftCreditCapIncreasesMax)) int32_t  CurrentShiftCreditCapIncreasesMax;

/// @brief Field CurrentShiftCredits, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentShiftCredits, put=__cordl_internal_set_CurrentShiftCredits)) int32_t  CurrentShiftCredits;

/// @brief Field Error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field StatusCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

/// @brief Field TargetMothershipId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetMothershipId, put=__cordl_internal_set_TargetMothershipId)) ::StringW  TargetMothershipId;

static inline ::GlobalNamespace::ProgressionManager_ShiftCreditResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_CurrentShiftCreditCapIncreases() const;

constexpr int32_t& __cordl_internal_get_CurrentShiftCreditCapIncreases() ;

constexpr int32_t const& __cordl_internal_get_CurrentShiftCreditCapIncreasesMax() const;

constexpr int32_t& __cordl_internal_get_CurrentShiftCreditCapIncreasesMax() ;

constexpr int32_t const& __cordl_internal_get_CurrentShiftCredits() const;

constexpr int32_t& __cordl_internal_get_CurrentShiftCredits() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr ::StringW const& __cordl_internal_get_TargetMothershipId() const;

constexpr ::StringW& __cordl_internal_get_TargetMothershipId() ;

constexpr void __cordl_internal_set_CurrentShiftCreditCapIncreases(int32_t  value) ;

constexpr void __cordl_internal_set_CurrentShiftCreditCapIncreasesMax(int32_t  value) ;

constexpr void __cordl_internal_set_CurrentShiftCredits(int32_t  value) ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

constexpr void __cordl_internal_set_TargetMothershipId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5974278, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_ShiftCreditResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_ShiftCreditResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_ShiftCreditResponse(ProgressionManager_ShiftCreditResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_ShiftCreditResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_ShiftCreditResponse(ProgressionManager_ShiftCreditResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2436};

/// @brief Field StatusCode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Error;

/// @brief Field CurrentShiftCredits, offset: 0x20, size: 0x4, def value: None
 int32_t  ___CurrentShiftCredits;

/// @brief Field CurrentShiftCreditCapIncreases, offset: 0x24, size: 0x4, def value: None
 int32_t  ___CurrentShiftCreditCapIncreases;

/// @brief Field CurrentShiftCreditCapIncreasesMax, offset: 0x28, size: 0x4, def value: None
 int32_t  ___CurrentShiftCreditCapIncreasesMax;

/// @brief Field TargetMothershipId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TargetMothershipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_ShiftCreditResponse, ___StatusCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_ShiftCreditResponse, ___Error) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_ShiftCreditResponse, ___CurrentShiftCredits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_ShiftCreditResponse, ___CurrentShiftCreditCapIncreases) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_ShiftCreditResponse, ___CurrentShiftCreditCapIncreasesMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_ShiftCreditResponse, ___TargetMothershipId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_ShiftCreditResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetShiftCreditRequest
class CORDL_TYPE ProgressionManager_GetShiftCreditRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field TargetMothershipId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetMothershipId, put=__cordl_internal_set_TargetMothershipId)) ::StringW  TargetMothershipId;

static inline ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TargetMothershipId() const;

constexpr ::StringW& __cordl_internal_get_TargetMothershipId() ;

constexpr void __cordl_internal_set_TargetMothershipId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5971228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetShiftCreditRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetShiftCreditRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetShiftCreditRequest(ProgressionManager_GetShiftCreditRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetShiftCreditRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetShiftCreditRequest(ProgressionManager_GetShiftCreditRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2435};

/// @brief Field TargetMothershipId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TargetMothershipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest, ___TargetMothershipId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseShiftCreditResponse
class CORDL_TYPE ProgressionManager_PurchaseShiftCreditResponse : public ::System::Object {
public:
// Declarations
/// @brief Field CurrentShiftCredits, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentShiftCredits, put=__cordl_internal_set_CurrentShiftCredits)) int32_t  CurrentShiftCredits;

/// @brief Field Error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field StatusCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

/// @brief Field TargetMothershipId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetMothershipId, put=__cordl_internal_set_TargetMothershipId)) ::StringW  TargetMothershipId;

static inline ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_CurrentShiftCredits() const;

constexpr int32_t& __cordl_internal_get_CurrentShiftCredits() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr ::StringW const& __cordl_internal_get_TargetMothershipId() const;

constexpr ::StringW& __cordl_internal_get_TargetMothershipId() ;

constexpr void __cordl_internal_set_CurrentShiftCredits(int32_t  value) ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

constexpr void __cordl_internal_set_TargetMothershipId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5974270, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseShiftCreditResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseShiftCreditResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseShiftCreditResponse(ProgressionManager_PurchaseShiftCreditResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseShiftCreditResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseShiftCreditResponse(ProgressionManager_PurchaseShiftCreditResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2434};

/// @brief Field StatusCode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Error;

/// @brief Field CurrentShiftCredits, offset: 0x20, size: 0x4, def value: None
 int32_t  ___CurrentShiftCredits;

/// @brief Field TargetMothershipId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TargetMothershipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse, ___StatusCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse, ___Error) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse, ___CurrentShiftCredits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse, ___TargetMothershipId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipUserDataWriteRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseShiftCreditRequest
class CORDL_TYPE ProgressionManager_PurchaseShiftCreditRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5971070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseShiftCreditRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseShiftCreditRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseShiftCreditRequest(ProgressionManager_PurchaseShiftCreditRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseShiftCreditRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseShiftCreditRequest(ProgressionManager_PurchaseShiftCreditRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseShiftCreditCapIncreaseResponse
class CORDL_TYPE ProgressionManager_PurchaseShiftCreditCapIncreaseResponse : public ::System::Object {
public:
// Declarations
/// @brief Field CurrentShiftCreditCapIncreases, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentShiftCreditCapIncreases, put=__cordl_internal_set_CurrentShiftCreditCapIncreases)) int32_t  CurrentShiftCreditCapIncreases;

/// @brief Field CurrentShiftCreditCapIncreasesMax, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentShiftCreditCapIncreasesMax, put=__cordl_internal_set_CurrentShiftCreditCapIncreasesMax)) int32_t  CurrentShiftCreditCapIncreasesMax;

/// @brief Field Error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field StatusCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

/// @brief Field TargetMothershipId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetMothershipId, put=__cordl_internal_set_TargetMothershipId)) ::StringW  TargetMothershipId;

static inline ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_CurrentShiftCreditCapIncreases() const;

constexpr int32_t& __cordl_internal_get_CurrentShiftCreditCapIncreases() ;

constexpr int32_t const& __cordl_internal_get_CurrentShiftCreditCapIncreasesMax() const;

constexpr int32_t& __cordl_internal_get_CurrentShiftCreditCapIncreasesMax() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr ::StringW const& __cordl_internal_get_TargetMothershipId() const;

constexpr ::StringW& __cordl_internal_get_TargetMothershipId() ;

constexpr void __cordl_internal_set_CurrentShiftCreditCapIncreases(int32_t  value) ;

constexpr void __cordl_internal_set_CurrentShiftCreditCapIncreasesMax(int32_t  value) ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

constexpr void __cordl_internal_set_TargetMothershipId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5974268, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseShiftCreditCapIncreaseResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseShiftCreditCapIncreaseResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseShiftCreditCapIncreaseResponse(ProgressionManager_PurchaseShiftCreditCapIncreaseResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseShiftCreditCapIncreaseResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseShiftCreditCapIncreaseResponse(ProgressionManager_PurchaseShiftCreditCapIncreaseResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2432};

/// @brief Field StatusCode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Error;

/// @brief Field CurrentShiftCreditCapIncreases, offset: 0x20, size: 0x4, def value: None
 int32_t  ___CurrentShiftCreditCapIncreases;

/// @brief Field CurrentShiftCreditCapIncreasesMax, offset: 0x24, size: 0x4, def value: None
 int32_t  ___CurrentShiftCreditCapIncreasesMax;

/// @brief Field TargetMothershipId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TargetMothershipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse, ___StatusCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse, ___Error) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse, ___CurrentShiftCreditCapIncreases) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse, ___CurrentShiftCreditCapIncreasesMax) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse, ___TargetMothershipId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipUserDataWriteRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseShiftCreditCapIncreaseRequest
class CORDL_TYPE ProgressionManager_PurchaseShiftCreditCapIncreaseRequest : public ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5970eb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseShiftCreditCapIncreaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseShiftCreditCapIncreaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseShiftCreditCapIncreaseRequest(ProgressionManager_PurchaseShiftCreditCapIncreaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseShiftCreditCapIncreaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseShiftCreditCapIncreaseRequest(ProgressionManager_PurchaseShiftCreditCapIncreaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2431};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/UserQuestsStatusResponse
class CORDL_TYPE ProgressionManager_UserQuestsStatusResponse : public ::System::Object {
public:
// Declarations
/// @brief Field TodayClaimableBonus, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_TodayClaimableBonus, put=__cordl_internal_set_TodayClaimableBonus)) int32_t  TodayClaimableBonus;

/// @brief Field TodayClaimableIdol, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_TodayClaimableIdol, put=__cordl_internal_set_TodayClaimableIdol)) int32_t  TodayClaimableIdol;

/// @brief Field TodayClaimableQuests, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_TodayClaimableQuests, put=__cordl_internal_set_TodayClaimableQuests)) int32_t  TodayClaimableQuests;

static inline ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_TodayClaimableBonus() const;

constexpr int32_t& __cordl_internal_get_TodayClaimableBonus() ;

constexpr int32_t const& __cordl_internal_get_TodayClaimableIdol() const;

constexpr int32_t& __cordl_internal_get_TodayClaimableIdol() ;

constexpr int32_t const& __cordl_internal_get_TodayClaimableQuests() const;

constexpr int32_t& __cordl_internal_get_TodayClaimableQuests() ;

constexpr void __cordl_internal_set_TodayClaimableBonus(int32_t  value) ;

constexpr void __cordl_internal_set_TodayClaimableIdol(int32_t  value) ;

constexpr void __cordl_internal_set_TodayClaimableQuests(int32_t  value) ;

/// @brief Method .ctor, addr 0x5974260, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_UserQuestsStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UserQuestsStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_UserQuestsStatusResponse(ProgressionManager_UserQuestsStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UserQuestsStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_UserQuestsStatusResponse(ProgressionManager_UserQuestsStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2430};

/// @brief Field TodayClaimableQuests, offset: 0x10, size: 0x4, def value: None
 int32_t  ___TodayClaimableQuests;

/// @brief Field TodayClaimableBonus, offset: 0x14, size: 0x4, def value: None
 int32_t  ___TodayClaimableBonus;

/// @brief Field TodayClaimableIdol, offset: 0x18, size: 0x4, def value: None
 int32_t  ___TodayClaimableIdol;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse, ___TodayClaimableQuests) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse, ___TodayClaimableBonus) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse, ___TodayClaimableIdol) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/MothershipUserDataWriteRequest
class CORDL_TYPE ProgressionManager_MothershipUserDataWriteRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field SkipUserDataCache, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_SkipUserDataCache, put=__cordl_internal_set_SkipUserDataCache)) bool  SkipUserDataCache;

static inline ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest* New_ctor() ;

constexpr bool const& __cordl_internal_get_SkipUserDataCache() const;

constexpr bool& __cordl_internal_get_SkipUserDataCache() ;

constexpr void __cordl_internal_set_SkipUserDataCache(bool  value) ;

/// @brief Method .ctor, addr 0x5974258, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_MothershipUserDataWriteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_MothershipUserDataWriteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_MothershipUserDataWriteRequest(ProgressionManager_MothershipUserDataWriteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_MothershipUserDataWriteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_MothershipUserDataWriteRequest(ProgressionManager_MothershipUserDataWriteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2429};

/// @brief Field SkipUserDataCache, offset: 0x30, size: 0x1, def value: None
 bool  ___SkipUserDataCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest, ___SkipUserDataCache) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::RewardRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/SetSIIdolCollectRequest
class CORDL_TYPE ProgressionManager_SetSIIdolCollectRequest : public ::GlobalNamespace::ProgressionManager_RewardRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5974250, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_SetSIIdolCollectRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetSIIdolCollectRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_SetSIIdolCollectRequest(ProgressionManager_SetSIIdolCollectRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetSIIdolCollectRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_SetSIIdolCollectRequest(ProgressionManager_SetSIIdolCollectRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::RewardRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/SetSIBonusCompleteRequest
class CORDL_TYPE ProgressionManager_SetSIBonusCompleteRequest : public ::GlobalNamespace::ProgressionManager_RewardRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5974248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_SetSIBonusCompleteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetSIBonusCompleteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_SetSIBonusCompleteRequest(ProgressionManager_SetSIBonusCompleteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetSIBonusCompleteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_SetSIBonusCompleteRequest(ProgressionManager_SetSIBonusCompleteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::RewardRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/SetSIQuestCompleteRequest
class CORDL_TYPE ProgressionManager_SetSIQuestCompleteRequest : public ::GlobalNamespace::ProgressionManager_RewardRequest {
public:
// Declarations
/// @brief Field QuestID, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_QuestID, put=__cordl_internal_set_QuestID)) int32_t  QuestID;

static inline ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_QuestID() const;

constexpr int32_t& __cordl_internal_get_QuestID() ;

constexpr void __cordl_internal_set_QuestID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5974238, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_SetSIQuestCompleteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetSIQuestCompleteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_SetSIQuestCompleteRequest(ProgressionManager_SetSIQuestCompleteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetSIQuestCompleteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_SetSIQuestCompleteRequest(ProgressionManager_SetSIQuestCompleteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2424};

/// @brief Field QuestID, offset: 0x30, size: 0x4, def value: None
 int32_t  ___QuestID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest, ___QuestID) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/RewardRequest
class CORDL_TYPE ProgressionManager_RewardRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_RewardRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5974240, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_RewardRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_RewardRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_RewardRequest(ProgressionManager_RewardRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_RewardRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_RewardRequest(ProgressionManager_RewardRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_RewardRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/UserInventory
class CORDL_TYPE ProgressionManager_UserInventory : public ::System::Object {
public:
// Declarations
/// @brief Field Inventory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Inventory, put=__cordl_internal_set_Inventory)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  Inventory;

static inline ::GlobalNamespace::ProgressionManager_UserInventory* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_Inventory() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_Inventory() ;

constexpr void __cordl_internal_set_Inventory(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5974230, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_UserInventory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UserInventory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_UserInventory(ProgressionManager_UserInventory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UserInventory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_UserInventory(ProgressionManager_UserInventory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2423};

/// @brief Field Inventory, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___Inventory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_UserInventory, ___Inventory) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_UserInventory) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetSIQuestsStatusResponse
class CORDL_TYPE ProgressionManager_GetSIQuestsStatusResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Result, put=__cordl_internal_set_Result)) ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  Result;

static inline ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse* New_ctor() ;

constexpr ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* const& __cordl_internal_get_Result() const;

constexpr ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*& __cordl_internal_get_Result() ;

constexpr void __cordl_internal_set_Result(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  value) ;

/// @brief Method .ctor, addr 0x5974228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetSIQuestsStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetSIQuestsStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetSIQuestsStatusResponse(ProgressionManager_GetSIQuestsStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetSIQuestsStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetSIQuestsStatusResponse(ProgressionManager_GetSIQuestsStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2421};

/// @brief Field Result, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  ___Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse, ___Result) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseResourcesRequest
class CORDL_TYPE ProgressionManager_PurchaseResourcesRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5974220, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseResourcesRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseResourcesRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseResourcesRequest(ProgressionManager_PurchaseResourcesRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseResourcesRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseResourcesRequest(ProgressionManager_PurchaseResourcesRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2420};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/PurchaseTechPointsRequest
class CORDL_TYPE ProgressionManager_PurchaseTechPointsRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field TechPointsAmount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_TechPointsAmount, put=__cordl_internal_set_TechPointsAmount)) int32_t  TechPointsAmount;

static inline ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_TechPointsAmount() const;

constexpr int32_t& __cordl_internal_get_TechPointsAmount() ;

constexpr void __cordl_internal_set_TechPointsAmount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5974218, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_PurchaseTechPointsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseTechPointsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_PurchaseTechPointsRequest(ProgressionManager_PurchaseTechPointsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_PurchaseTechPointsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_PurchaseTechPointsRequest(ProgressionManager_PurchaseTechPointsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2419};

/// @brief Field TechPointsAmount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___TechPointsAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest, ___TechPointsAmount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/ResetSIQuestsStatusRequest
class CORDL_TYPE ProgressionManager_ResetSIQuestsStatusRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5974210, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_ResetSIQuestsStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_ResetSIQuestsStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_ResetSIQuestsStatusRequest(ProgressionManager_ResetSIQuestsStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_ResetSIQuestsStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_ResetSIQuestsStatusRequest(ProgressionManager_ResetSIQuestsStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2418};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetSIQuestsStatusRequest
class CORDL_TYPE ProgressionManager_GetSIQuestsStatusRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5974208, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetSIQuestsStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetSIQuestsStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetSIQuestsStatusRequest(ProgressionManager_GetSIQuestsStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetSIQuestsStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetSIQuestsStatusRequest(ProgressionManager_GetSIQuestsStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2417};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetActiveSIQuestsResult
class CORDL_TYPE ProgressionManager_GetActiveSIQuestsResult : public ::System::Object {
public:
// Declarations
/// @brief Field Quests, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Quests, put=__cordl_internal_set_Quests)) ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  Quests;

static inline ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>* const& __cordl_internal_get_Quests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*& __cordl_internal_get_Quests() ;

constexpr void __cordl_internal_set_Quests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  value) ;

/// @brief Method .ctor, addr 0x5974200, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetActiveSIQuestsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetActiveSIQuestsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetActiveSIQuestsResult(ProgressionManager_GetActiveSIQuestsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetActiveSIQuestsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetActiveSIQuestsResult(ProgressionManager_GetActiveSIQuestsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2416};

/// @brief Field Quests, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  ___Quests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult, ___Quests) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetActiveSIQuestsResponse
class CORDL_TYPE ProgressionManager_GetActiveSIQuestsResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field Result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Result, put=__cordl_internal_set_Result)) ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*  Result;

/// @brief Field StatusCode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

static inline ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult* const& __cordl_internal_get_Result() const;

constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*& __cordl_internal_get_Result() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_Result(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x59741f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetActiveSIQuestsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetActiveSIQuestsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetActiveSIQuestsResponse(ProgressionManager_GetActiveSIQuestsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetActiveSIQuestsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetActiveSIQuestsResponse(ProgressionManager_GetActiveSIQuestsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2415};

/// @brief Field Result, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*  ___Result;

/// @brief Field StatusCode, offset: 0x18, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse, ___Result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse, ___StatusCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse, ___Error) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetActiveSIQuestsRequest
class CORDL_TYPE ProgressionManager_GetActiveSIQuestsRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
static inline ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x59741f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetActiveSIQuestsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetActiveSIQuestsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetActiveSIQuestsRequest(ProgressionManager_GetActiveSIQuestsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetActiveSIQuestsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetActiveSIQuestsRequest(ProgressionManager_GetActiveSIQuestsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::UserInventoryResponse
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/IncrementSIResourceResponse
class CORDL_TYPE ProgressionManager_IncrementSIResourceResponse : public ::GlobalNamespace::ProgressionManager_UserInventoryResponse {
public:
// Declarations
/// @brief Field ResourceType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResourceType, put=__cordl_internal_set_ResourceType)) ::StringW  ResourceType;

static inline ::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ResourceType() const;

constexpr ::StringW& __cordl_internal_get_ResourceType() ;

constexpr void __cordl_internal_set_ResourceType(::StringW  value) ;

/// @brief Method .ctor, addr 0x59741e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_IncrementSIResourceResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_IncrementSIResourceResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_IncrementSIResourceResponse(ProgressionManager_IncrementSIResourceResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_IncrementSIResourceResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_IncrementSIResourceResponse(ProgressionManager_IncrementSIResourceResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2413};

/// @brief Field ResourceType, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ResourceType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse, ___ResourceType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/UserInventoryResponse
class CORDL_TYPE ProgressionManager_UserInventoryResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Result, put=__cordl_internal_set_Result)) ::GlobalNamespace::ProgressionManager_UserInventory*  Result;

static inline ::GlobalNamespace::ProgressionManager_UserInventoryResponse* New_ctor() ;

constexpr ::GlobalNamespace::ProgressionManager_UserInventory* const& __cordl_internal_get_Result() const;

constexpr ::GlobalNamespace::ProgressionManager_UserInventory*& __cordl_internal_get_Result() ;

constexpr void __cordl_internal_set_Result(::GlobalNamespace::ProgressionManager_UserInventory*  value) ;

/// @brief Method .ctor, addr 0x59741e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_UserInventoryResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UserInventoryResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_UserInventoryResponse(ProgressionManager_UserInventoryResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UserInventoryResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_UserInventoryResponse(ProgressionManager_UserInventoryResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2422};

/// @brief Field Result, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionManager_UserInventory*  ___Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_UserInventoryResponse, ___Result) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_UserInventoryResponse) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/IncrementSIResourceRequest
class CORDL_TYPE ProgressionManager_IncrementSIResourceRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field ResourceType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResourceType, put=__cordl_internal_set_ResourceType)) ::StringW  ResourceType;

static inline ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ResourceType() const;

constexpr ::StringW& __cordl_internal_get_ResourceType() ;

constexpr void __cordl_internal_set_ResourceType(::StringW  value) ;

/// @brief Method .ctor, addr 0x59741d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_IncrementSIResourceRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_IncrementSIResourceRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_IncrementSIResourceRequest(ProgressionManager_IncrementSIResourceRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_IncrementSIResourceRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_IncrementSIResourceRequest(ProgressionManager_IncrementSIResourceRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2412};

/// @brief Field ResourceType, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ResourceType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest, ___ResourceType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/UnlockNodeResponse
class CORDL_TYPE ProgressionManager_UnlockNodeResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field StatusCode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

/// @brief Field Tree, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tree, put=__cordl_internal_set_Tree)) ::GlobalNamespace::UserHydratedProgressionTreeResponse*  Tree;

static inline ::GlobalNamespace::ProgressionManager_UnlockNodeResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr ::GlobalNamespace::UserHydratedProgressionTreeResponse* const& __cordl_internal_get_Tree() const;

constexpr ::GlobalNamespace::UserHydratedProgressionTreeResponse*& __cordl_internal_get_Tree() ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

constexpr void __cordl_internal_set_Tree(::GlobalNamespace::UserHydratedProgressionTreeResponse*  value) ;

/// @brief Method .ctor, addr 0x59741d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_UnlockNodeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UnlockNodeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_UnlockNodeResponse(ProgressionManager_UnlockNodeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UnlockNodeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_UnlockNodeResponse(ProgressionManager_UnlockNodeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2411};

/// @brief Field Tree, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::UserHydratedProgressionTreeResponse*  ___Tree;

/// @brief Field StatusCode, offset: 0x18, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_UnlockNodeResponse, ___Tree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_UnlockNodeResponse, ___StatusCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_UnlockNodeResponse, ___Error) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_UnlockNodeResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/UnlockNodeRequest
class CORDL_TYPE ProgressionManager_UnlockNodeRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field NodeId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_NodeId, put=__cordl_internal_set_NodeId)) ::StringW  NodeId;

/// @brief Field TreeId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TreeId, put=__cordl_internal_set_TreeId)) ::StringW  TreeId;

static inline ::GlobalNamespace::ProgressionManager_UnlockNodeRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_NodeId() const;

constexpr ::StringW& __cordl_internal_get_NodeId() ;

constexpr ::StringW const& __cordl_internal_get_TreeId() const;

constexpr ::StringW& __cordl_internal_get_TreeId() ;

constexpr void __cordl_internal_set_NodeId(::StringW  value) ;

constexpr void __cordl_internal_set_TreeId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59741c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_UnlockNodeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UnlockNodeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_UnlockNodeRequest(ProgressionManager_UnlockNodeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_UnlockNodeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_UnlockNodeRequest(ProgressionManager_UnlockNodeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2410};

/// @brief Field TreeId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TreeId;

/// @brief Field NodeId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___NodeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_UnlockNodeRequest, ___TreeId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_UnlockNodeRequest, ___NodeId) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_UnlockNodeRequest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/SetProgressionResponse
class CORDL_TYPE ProgressionManager_SetProgressionResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field Progress, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) int32_t  Progress;

/// @brief Field StatusCode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

/// @brief Field Track, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Track, put=__cordl_internal_set_Track)) ::StringW  Track;

static inline ::GlobalNamespace::ProgressionManager_SetProgressionResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_Progress() const;

constexpr int32_t& __cordl_internal_get_Progress() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr ::StringW const& __cordl_internal_get_Track() const;

constexpr ::StringW& __cordl_internal_get_Track() ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_Progress(int32_t  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

constexpr void __cordl_internal_set_Track(::StringW  value) ;

/// @brief Method .ctor, addr 0x59741c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_SetProgressionResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetProgressionResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_SetProgressionResponse(ProgressionManager_SetProgressionResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetProgressionResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_SetProgressionResponse(ProgressionManager_SetProgressionResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2409};

/// @brief Field Track, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Track;

/// @brief Field Progress, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Progress;

/// @brief Field StatusCode, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetProgressionResponse, ___Track) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetProgressionResponse, ___Progress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetProgressionResponse, ___StatusCode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetProgressionResponse, ___Error) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_SetProgressionResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/SetProgressionRequest
class CORDL_TYPE ProgressionManager_SetProgressionRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field Progress, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) int32_t  Progress;

/// @brief Field TrackId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackId, put=__cordl_internal_set_TrackId)) ::StringW  TrackId;

static inline ::GlobalNamespace::ProgressionManager_SetProgressionRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Progress() const;

constexpr int32_t& __cordl_internal_get_Progress() ;

constexpr ::StringW const& __cordl_internal_get_TrackId() const;

constexpr ::StringW& __cordl_internal_get_TrackId() ;

constexpr void __cordl_internal_set_Progress(int32_t  value) ;

constexpr void __cordl_internal_set_TrackId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59741b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_SetProgressionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetProgressionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_SetProgressionRequest(ProgressionManager_SetProgressionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_SetProgressionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_SetProgressionRequest(ProgressionManager_SetProgressionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2408};

/// @brief Field TrackId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TrackId;

/// @brief Field Progress, offset: 0x38, size: 0x4, def value: None
 int32_t  ___Progress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetProgressionRequest, ___TrackId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_SetProgressionRequest, ___Progress) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_SetProgressionRequest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetProgressionResponse
class CORDL_TYPE ProgressionManager_GetProgressionResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field Progress, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) int32_t  Progress;

/// @brief Field StatusCode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

/// @brief Field Track, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Track, put=__cordl_internal_set_Track)) ::StringW  Track;

static inline ::GlobalNamespace::ProgressionManager_GetProgressionResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_Progress() const;

constexpr int32_t& __cordl_internal_get_Progress() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr ::StringW const& __cordl_internal_get_Track() const;

constexpr ::StringW& __cordl_internal_get_Track() ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_Progress(int32_t  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

constexpr void __cordl_internal_set_Track(::StringW  value) ;

/// @brief Method .ctor, addr 0x59741b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetProgressionResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetProgressionResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetProgressionResponse(ProgressionManager_GetProgressionResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetProgressionResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetProgressionResponse(ProgressionManager_GetProgressionResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2407};

/// @brief Field Track, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Track;

/// @brief Field Progress, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Progress;

/// @brief Field StatusCode, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___StatusCode;

/// @brief Field Error, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetProgressionResponse, ___Track) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetProgressionResponse, ___Progress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetProgressionResponse, ___StatusCode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetProgressionResponse, ___Error) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetProgressionResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressionManager::MothershipRequest
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/GetProgressionRequest
class CORDL_TYPE ProgressionManager_GetProgressionRequest : public ::GlobalNamespace::ProgressionManager_MothershipRequest {
public:
// Declarations
/// @brief Field TrackId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackId, put=__cordl_internal_set_TrackId)) ::StringW  TrackId;

static inline ::GlobalNamespace::ProgressionManager_GetProgressionRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TrackId() const;

constexpr ::StringW& __cordl_internal_get_TrackId() ;

constexpr void __cordl_internal_set_TrackId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59741a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_GetProgressionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetProgressionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_GetProgressionRequest(ProgressionManager_GetProgressionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_GetProgressionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_GetProgressionRequest(ProgressionManager_GetProgressionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2406};

/// @brief Field TrackId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TrackId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_GetProgressionRequest, ___TrackId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_GetProgressionRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionManager/MothershipRequest
class CORDL_TYPE ProgressionManager_MothershipRequest : public ::System::Object {
public:
// Declarations
/// @brief Field MothershipDeploymentId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipDeploymentId, put=__cordl_internal_set_MothershipDeploymentId)) ::StringW  MothershipDeploymentId;

/// @brief Field MothershipEnvId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipEnvId, put=__cordl_internal_set_MothershipEnvId)) ::StringW  MothershipEnvId;

/// @brief Field MothershipId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

/// @brief Field MothershipToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipToken, put=__cordl_internal_set_MothershipToken)) ::StringW  MothershipToken;

static inline ::GlobalNamespace::ProgressionManager_MothershipRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_MothershipDeploymentId() const;

constexpr ::StringW& __cordl_internal_get_MothershipDeploymentId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_MothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipToken() const;

constexpr ::StringW& __cordl_internal_get_MothershipToken() ;

constexpr void __cordl_internal_set_MothershipDeploymentId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x59741a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_MothershipRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_MothershipRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionManager_MothershipRequest(ProgressionManager_MothershipRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionManager_MothershipRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionManager_MothershipRequest(ProgressionManager_MothershipRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2428};

/// @brief Field MothershipId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MothershipId;

/// @brief Field MothershipToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MothershipToken;

/// @brief Field MothershipEnvId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MothershipEnvId;

/// @brief Field MothershipDeploymentId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___MothershipDeploymentId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipRequest, ___MothershipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipRequest, ___MothershipToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipRequest, ___MothershipEnvId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipRequest, ___MothershipDeploymentId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_MothershipRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
