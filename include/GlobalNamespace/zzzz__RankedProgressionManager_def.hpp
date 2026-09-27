#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedProgressionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RankedProgressionManager_ERankedProgressionEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RankedProgressionManager)
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeProgressionData;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RankedMultiplayerStatisticFloat;
}
namespace GlobalNamespace {
class RankedMultiplayerStatisticInt;
}
namespace GlobalNamespace {
struct RankedProgressionManager_ERankedMatchmakingTier;
}
namespace GlobalNamespace {
struct RankedProgressionManager_ERankedProgressionEventType;
}
namespace GlobalNamespace {
class RankedProgressionManager_RankedProgressionEvent;
}
namespace GlobalNamespace {
class RankedProgressionManager_RankedProgressionSubTier;
}
namespace GlobalNamespace {
class RankedProgressionManager_RankedProgressionTierBase;
}
namespace GlobalNamespace {
class RankedProgressionManager_RankedProgressionTier;
}
namespace GlobalNamespace {
class RankedProgressionManager__LoadStatsWhenReady_d__48;
}
namespace GlobalNamespace {
class RankedProgressionManager___c;
}
namespace GorillaGameModes {
struct GameModeType;
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
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class RankedProgressionManager;
}
namespace GlobalNamespace {
class RankedProgressionManager_RankedProgressionEvent;
}
namespace GlobalNamespace {
class RankedProgressionManager_RankedProgressionSubTier;
}
namespace GlobalNamespace {
class RankedProgressionManager_RankedProgressionTier;
}
namespace GlobalNamespace {
class RankedProgressionManager_RankedProgressionTierBase;
}
namespace GlobalNamespace {
class RankedProgressionManager__LoadStatsWhenReady_d__48;
}
namespace GlobalNamespace {
class RankedProgressionManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RankedProgressionManager*);
MARK_REF_T(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*);
MARK_REF_T(::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*);
MARK_REF_T(::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*);
MARK_REF_T(::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*);
MARK_REF_T(::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*);
MARK_REF_T(::GlobalNamespace::RankedProgressionManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionManager*, "", "RankedProgressionManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*, "", "RankedProgressionManager/RankedProgressionEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*, "", "RankedProgressionManager/RankedProgressionSubTier");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*, "", "RankedProgressionManager/RankedProgressionTier");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*, "", "RankedProgressionManager/RankedProgressionTierBase");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*, "", "RankedProgressionManager/<LoadStatsWhenReady>d__48");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionManager___c*, "", "RankedProgressionManager/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedProgressionManager
class CORDL_TYPE RankedProgressionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ERankedMatchmakingTier = ::GlobalNamespace::RankedProgressionManager_ERankedMatchmakingTier;

using ERankedProgressionEventType = ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType;

using RankedProgressionEvent = ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent;

using RankedProgressionSubTier = ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier;

using RankedProgressionTier = ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier;

using RankedProgressionTierBase = ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase;

using _LoadStatsWhenReady_d__48 = ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48;

using __c = ::GlobalNamespace::RankedProgressionManager___c;

 __declspec(property(get=get_CompetitiveQueueEloFloor)) float_t  CompetitiveQueueEloFloor;

/// @brief Field EloScorePC, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EloScorePC, put=__cordl_internal_set_EloScorePC)) ::GlobalNamespace::RankedMultiplayerStatisticFloat*  EloScorePC;

/// @brief Field EloScoreQuest, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EloScoreQuest, put=__cordl_internal_set_EloScoreQuest)) ::GlobalNamespace::RankedMultiplayerStatisticFloat*  EloScoreQuest;

 __declspec(property(get=get_HighTierThreshold, put=set_HighTierThreshold)) float_t  HighTierThreshold;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::RankedProgressionManager>  Instance;

 __declspec(property(get=get_LowTierThreshold, put=set_LowTierThreshold)) float_t  LowTierThreshold;

 __declspec(property(get=get_MajorTiers, put=set_MajorTiers)) ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*  MajorTiers;

/// @brief Field MaxEloConstant, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxEloConstant, put=__cordl_internal_set_MaxEloConstant)) float_t  MaxEloConstant;

 __declspec(property(get=get_MaxRank, put=set_MaxRank)) int32_t  MaxRank;

/// @brief Field NewTierGracePeriodIdxPC, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewTierGracePeriodIdxPC, put=__cordl_internal_set_NewTierGracePeriodIdxPC)) ::GlobalNamespace::RankedMultiplayerStatisticInt*  NewTierGracePeriodIdxPC;

/// @brief Field NewTierGracePeriodIdxQuest, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewTierGracePeriodIdxQuest, put=__cordl_internal_set_NewTierGracePeriodIdxQuest)) ::GlobalNamespace::RankedMultiplayerStatisticInt*  NewTierGracePeriodIdxQuest;

/// @brief Field OnPlayerEloAcquired, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerEloAcquired, put=__cordl_internal_set_OnPlayerEloAcquired)) ::System::Action_3<int32_t,float_t,int32_t>*  OnPlayerEloAcquired;

/// @brief Field ProgressionData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProgressionData, put=__cordl_internal_set_ProgressionData)) ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*  ProgressionData;

/// @brief Field ProgressionEvent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProgressionEvent, put=__cordl_internal_set_ProgressionEvent)) ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*  ProgressionEvent;

/// @brief Field RANKED_ELO_KEY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RANKED_ELO_KEY, put=setStaticF_RANKED_ELO_KEY)) ::StringW  RANKED_ELO_KEY;

/// @brief Field RANKED_ELO_PC_KEY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RANKED_ELO_PC_KEY, put=setStaticF_RANKED_ELO_PC_KEY)) ::StringW  RANKED_ELO_PC_KEY;

/// @brief Field RANKED_PROGRESSION_GRACE_PERIOD_KEY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RANKED_PROGRESSION_GRACE_PERIOD_KEY, put=setStaticF_RANKED_PROGRESSION_GRACE_PERIOD_KEY)) ::StringW  RANKED_PROGRESSION_GRACE_PERIOD_KEY;

/// @brief Field RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY, put=setStaticF_RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY)) ::StringW  RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY;

/// @brief Field <HighTierThreshold>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__HighTierThreshold_k__BackingField, put=__cordl_internal_set__HighTierThreshold_k__BackingField)) float_t  _HighTierThreshold_k__BackingField;

/// @brief Field <LowTierThreshold>k__BackingField, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__LowTierThreshold_k__BackingField, put=__cordl_internal_set__LowTierThreshold_k__BackingField)) float_t  _LowTierThreshold_k__BackingField;

/// @brief Field <MaxRank>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxRank_k__BackingField, put=__cordl_internal_set__MaxRank_k__BackingField)) int32_t  _MaxRank_k__BackingField;

/// @brief Field debugEloPoints, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugEloPoints, put=__cordl_internal_set_debugEloPoints)) int32_t  debugEloPoints;

/// @brief Field majorTiers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_majorTiers, put=__cordl_internal_set_majorTiers)) ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*  majorTiers;

/// @brief Field newTierGracePeriod, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_newTierGracePeriod, put=__cordl_internal_set_newTierGracePeriod)) int32_t  newTierGracePeriod;

/// @brief Method AcquireLocalPlayerRankInformation, addr 0x5966cfc, size 0x1a8, virtual false, abstract: false, final false
inline void AcquireLocalPlayerRankInformation() ;

/// @brief Method AcquireRoomRankInformation, addr 0x5966778, size 0x340, virtual false, abstract: false, final false
inline void AcquireRoomRankInformation(bool  includeLocalPlayer) ;

/// @brief Method AcquireSinglePlayerRankInformation, addr 0x5966b78, size 0x184, virtual false, abstract: false, final false
inline void AcquireSinglePlayerRankInformation(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method AreValuesValid, addr 0x59676b0, size 0x48, virtual false, abstract: false, final false
inline bool AreValuesValid(float_t  elo, int32_t  questTier, int32_t  pcTier) ;

/// @brief Method Awake, addr 0x5965dc8, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClampProgressionRankIndex, addr 0x5967f9c, size 0xf4, virtual false, abstract: false, final false
inline int32_t ClampProgressionRankIndex(int32_t  subTierIdx) ;

/// [ContextMenu("Reset ELO")]
/// @brief Method DebugResetELO, addr 0x5965dc4, size 0x4, virtual false, abstract: false, final false
inline void DebugResetELO() ;

/// @brief Method DebugSetELO, addr 0x5965dc0, size 0x4, virtual false, abstract: false, final false
inline void DebugSetELO() ;

/// @brief Method GetCurrentELO, addr 0x59682a8, size 0x4, virtual false, abstract: false, final false
inline float_t GetCurrentELO() ;

/// @brief Method GetEloScore, addr 0x5967618, size 0x4, virtual false, abstract: false, final false
inline float_t GetEloScore() ;

/// @brief Method GetEloScorePC, addr 0x596781c, size 0x40, virtual false, abstract: false, final false
inline float_t GetEloScorePC() ;

/// @brief Method GetEloScoreQuest, addr 0x5967720, size 0x40, virtual false, abstract: false, final false
inline float_t GetEloScoreQuest() ;

/// @brief Method GetEloWinProbability, addr 0x5968364, size 0x30, virtual false, abstract: false, final false
static inline float_t GetEloWinProbability(float_t  ratingPlayer1, float_t  ratingPlayer2) ;

/// @brief Method GetNewTierGracePeriodIdx, addr 0x596785c, size 0x8, virtual false, abstract: false, final false
inline int32_t GetNewTierGracePeriodIdx() ;

/// @brief Method GetNextProgressionRankIcon, addr 0x5968278, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> GetNextProgressionRankIcon(int32_t  subTierIdx) ;

/// @brief Method GetNextProgressionRankName, addr 0x5967ea8, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetNextProgressionRankName(int32_t  subTierIdx) ;

/// @brief Method GetNextProgressionSubTierByIndex, addr 0x5967dc0, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GetNextProgressionSubTierByIndex(int32_t  idx) ;

/// @brief Method GetPrevProgressionRankIcon, addr 0x5968290, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> GetPrevProgressionRankIcon(int32_t  subTierIdx) ;

/// @brief Method GetPrevProgressionRankName, addr 0x5967ec0, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetPrevProgressionRankName(int32_t  subTierIdx) ;

/// @brief Method GetPrevProgressionSubTierByIndex, addr 0x5967dfc, size 0x44, virtual false, abstract: false, final false
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GetPrevProgressionSubTierByIndex(int32_t  idx) ;

/// @brief Method GetProgressionMajorTierBySubTierIndex, addr 0x5967b68, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier* GetProgressionMajorTierBySubTierIndex(int32_t  idx) ;

/// @brief Method GetProgressionRankIcon, addr 0x5968090, size 0xb8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> GetProgressionRankIcon() ;

/// @brief Method GetProgressionRankIcon, addr 0x5968220, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> GetProgressionRankIcon(float_t  elo) ;

/// @brief Method GetProgressionRankIcon, addr 0x5968260, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> GetProgressionRankIcon(int32_t  subTierIdx) ;

/// @brief Method GetProgressionRankIndex, addr 0x5967ed8, size 0x4, virtual false, abstract: false, final false
inline int32_t GetProgressionRankIndex() ;

/// @brief Method GetProgressionRankIndex, addr 0x5967ef8, size 0x30, virtual false, abstract: false, final false
inline int32_t GetProgressionRankIndex(float_t  elo) ;

/// @brief Method GetProgressionRankIndexPC, addr 0x5967658, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetProgressionRankIndexPC() ;

/// @brief Method GetProgressionRankIndexQuest, addr 0x596761c, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetProgressionRankIndexQuest() ;

/// @brief Method GetProgressionRankName, addr 0x5967e40, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetProgressionRankName() ;

/// @brief Method GetProgressionRankName, addr 0x5967e58, size 0x50, virtual false, abstract: false, final false
inline ::StringW GetProgressionRankName(float_t  elo) ;

/// @brief Method GetProgressionRankProgress, addr 0x5967f28, size 0x4, virtual false, abstract: false, final false
inline float_t GetProgressionRankProgress() ;

/// @brief Method GetProgressionRankProgressPC, addr 0x5967f64, size 0x38, virtual false, abstract: false, final false
inline float_t GetProgressionRankProgressPC() ;

/// @brief Method GetProgressionRankProgressQuest, addr 0x5967f2c, size 0x38, virtual false, abstract: false, final false
inline float_t GetProgressionRankProgressQuest() ;

/// @brief Method GetProgressionSubTier, addr 0x5967edc, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GetProgressionSubTier() ;

/// @brief Method GetProgressionSubTierByIndex, addr 0x5967c78, size 0x148, virtual false, abstract: false, final false
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GetProgressionSubTierByIndex(int32_t  idx) ;

/// @brief Method GetRankFromTiers, addr 0x5967368, size 0xf4, virtual false, abstract: false, final false
inline int32_t GetRankFromTiers(int32_t  majorTier, int32_t  minorTier) ;

/// @brief Method GetRankedMatchmakingTier, addr 0x59683c4, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RankedProgressionManager_ERankedMatchmakingTier GetRankedMatchmakingTier() ;

/// @brief Method GetRankedProgressionTierName, addr 0x5968148, size 0xd8, virtual false, abstract: false, final false
inline ::StringW GetRankedProgressionTierName() ;

/// @brief Method GetSubtierRankThresholds, addr 0x59682ac, size 0xb8, virtual false, abstract: false, final false
inline void GetSubtierRankThresholds(int32_t  subTierIdx, ::by_ref<float_t>  minThreshold, ::by_ref<float_t>  maxThreshold) ;

/// @brief Method HandlePlayerRankedInfoReceived, addr 0x5967694, size 0x1c, virtual false, abstract: false, final false
inline void HandlePlayerRankedInfoReceived(int32_t  actorNum, float_t  elo, int32_t  tier) ;

/// @brief Method HasUnlockedCompetitiveQueue, addr 0x5968408, size 0x68, virtual false, abstract: false, final false
inline bool HasUnlockedCompetitiveQueue() ;

/// @brief Method IncrementNewTierGracePeriodIdx, addr 0x596789c, size 0x3c, virtual false, abstract: false, final false
inline void IncrementNewTierGracePeriodIdx() ;

/// @brief Method LoadStats, addr 0x5967700, size 0x20, virtual false, abstract: false, final false
inline void LoadStats() ;

/// [IteratorStateMachine(typeof(RankedProgressionManager::<LoadStatsWhenReady>d__48))]
/// @brief Method LoadStatsWhenReady, addr 0x59666d0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadStatsWhenReady() ;

static inline ::GlobalNamespace::RankedProgressionManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59664b8, size 0x15c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnJoinedRoom, addr 0x5966764, size 0x14, virtual false, abstract: false, final false
inline void OnJoinedRoom(::GorillaGameModes::GameModeType  newGameModeType) ;

/// @brief Method OnLocalPlayerRankedInformationAcquired, addr 0x596745c, size 0x1bc, virtual false, abstract: false, final false
inline void OnLocalPlayerRankedInformationAcquired(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*  rankedModeProgressionData) ;

/// @brief Method OnPlayerJoined, addr 0x5966ab8, size 0xc0, virtual false, abstract: false, final false
inline void OnPlayerJoined(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnPlayersRankedInformationAcquired, addr 0x5966ea4, size 0x4c4, virtual false, abstract: false, final false
inline void OnPlayersRankedInformationAcquired(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*  rankedModeProgressionData) ;

/// @brief Method RequestUnlockCompetitiveQueue, addr 0x5966614, size 0xbc, virtual false, abstract: false, final false
inline void RequestUnlockCompetitiveQueue(bool  unlock) ;

/// @brief Method SetEloScore, addr 0x5967760, size 0xbc, virtual false, abstract: false, final false
inline void SetEloScore(float_t  val) ;

/// @brief Method SetLocalProgressionData, addr 0x59676f8, size 0x8, virtual false, abstract: false, final false
inline void SetLocalProgressionData(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*  data) ;

/// @brief Method SetNewTierGracePeriodIdx, addr 0x5967864, size 0x38, virtual false, abstract: false, final false
inline void SetNewTierGracePeriodIdx(int32_t  val) ;

/// @brief Method Start, addr 0x5965f28, size 0x4f8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetProgressionSubTier, addr 0x5967924, size 0x244, virtual false, abstract: false, final false
inline bool TryGetProgressionSubTier(float_t  elo, ::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>  subTier, ::by_ref<int32_t>  index) ;

/// @brief Method TryGetProgressionSubTier, addr 0x59678d8, size 0x4c, virtual false, abstract: false, final false
inline bool TryGetProgressionSubTier(::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>  subTier, ::by_ref<int32_t>  index) ;

/// @brief Method UpdateEloScore, addr 0x5968394, size 0x30, virtual false, abstract: false, final false
static inline float_t UpdateEloScore(float_t  eloScore, float_t  expectedResult, float_t  actualResult, float_t  k) ;

/// [CompilerGenerated]
/// @brief Method <RequestUnlockCompetitiveQueue>b__47_0, addr 0x59685f4, size 0x4, virtual false, abstract: false, final false
inline void _RequestUnlockCompetitiveQueue_b__47_0() ;

/// [CompilerGenerated]
/// @brief Method <SetEloScore>b__61_0, addr 0x59685f8, size 0x4, virtual false, abstract: false, final false
inline void _SetEloScore_b__61_0() ;

constexpr ::GlobalNamespace::RankedMultiplayerStatisticFloat* const& __cordl_internal_get_EloScorePC() const;

constexpr ::GlobalNamespace::RankedMultiplayerStatisticFloat*& __cordl_internal_get_EloScorePC() ;

constexpr ::GlobalNamespace::RankedMultiplayerStatisticFloat* const& __cordl_internal_get_EloScoreQuest() const;

constexpr ::GlobalNamespace::RankedMultiplayerStatisticFloat*& __cordl_internal_get_EloScoreQuest() ;

constexpr float_t const& __cordl_internal_get_MaxEloConstant() const;

constexpr float_t& __cordl_internal_get_MaxEloConstant() ;

constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt* const& __cordl_internal_get_NewTierGracePeriodIdxPC() const;

constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt*& __cordl_internal_get_NewTierGracePeriodIdxPC() ;

constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt* const& __cordl_internal_get_NewTierGracePeriodIdxQuest() const;

constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt*& __cordl_internal_get_NewTierGracePeriodIdxQuest() ;

constexpr ::System::Action_3<int32_t,float_t,int32_t>* const& __cordl_internal_get_OnPlayerEloAcquired() const;

constexpr ::System::Action_3<int32_t,float_t,int32_t>*& __cordl_internal_get_OnPlayerEloAcquired() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData* const& __cordl_internal_get_ProgressionData() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*& __cordl_internal_get_ProgressionData() ;

constexpr ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent* const& __cordl_internal_get_ProgressionEvent() const;

constexpr ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*& __cordl_internal_get_ProgressionEvent() ;

constexpr float_t const& __cordl_internal_get__HighTierThreshold_k__BackingField() const;

constexpr float_t& __cordl_internal_get__HighTierThreshold_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LowTierThreshold_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LowTierThreshold_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__MaxRank_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MaxRank_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_debugEloPoints() const;

constexpr int32_t& __cordl_internal_get_debugEloPoints() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* const& __cordl_internal_get_majorTiers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*& __cordl_internal_get_majorTiers() ;

constexpr int32_t const& __cordl_internal_get_newTierGracePeriod() const;

constexpr int32_t& __cordl_internal_get_newTierGracePeriod() ;

constexpr void __cordl_internal_set_EloScorePC(::GlobalNamespace::RankedMultiplayerStatisticFloat*  value) ;

constexpr void __cordl_internal_set_EloScoreQuest(::GlobalNamespace::RankedMultiplayerStatisticFloat*  value) ;

constexpr void __cordl_internal_set_MaxEloConstant(float_t  value) ;

constexpr void __cordl_internal_set_NewTierGracePeriodIdxPC(::GlobalNamespace::RankedMultiplayerStatisticInt*  value) ;

constexpr void __cordl_internal_set_NewTierGracePeriodIdxQuest(::GlobalNamespace::RankedMultiplayerStatisticInt*  value) ;

constexpr void __cordl_internal_set_OnPlayerEloAcquired(::System::Action_3<int32_t,float_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_ProgressionData(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*  value) ;

constexpr void __cordl_internal_set_ProgressionEvent(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*  value) ;

constexpr void __cordl_internal_set__HighTierThreshold_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__LowTierThreshold_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxRank_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_debugEloPoints(int32_t  value) ;

constexpr void __cordl_internal_set_majorTiers(::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*  value) ;

constexpr void __cordl_internal_set_newTierGracePeriod(int32_t  value) ;

/// @brief Method .ctor, addr 0x5968470, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::RankedProgressionManager> getStaticF_Instance() ;

static inline ::StringW getStaticF_RANKED_ELO_KEY() ;

static inline ::StringW getStaticF_RANKED_ELO_PC_KEY() ;

static inline ::StringW getStaticF_RANKED_PROGRESSION_GRACE_PERIOD_KEY() ;

static inline ::StringW getStaticF_RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY() ;

/// @brief Method get_CompetitiveQueueEloFloor, addr 0x5968400, size 0x8, virtual false, abstract: false, final false
inline float_t get_CompetitiveQueueEloFloor() ;

/// [CompilerGenerated]
/// @brief Method get_HighTierThreshold, addr 0x5965da4, size 0x8, virtual false, abstract: false, final false
inline float_t get_HighTierThreshold() ;

/// [CompilerGenerated]
/// @brief Method get_LowTierThreshold, addr 0x5965d94, size 0x8, virtual false, abstract: false, final false
inline float_t get_LowTierThreshold() ;

/// @brief Method get_MajorTiers, addr 0x5965db4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* get_MajorTiers() ;

/// [CompilerGenerated]
/// @brief Method get_MaxRank, addr 0x5965d84, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxRank() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::RankedProgressionManager>  value) ;

static inline void setStaticF_RANKED_ELO_KEY(::StringW  value) ;

static inline void setStaticF_RANKED_ELO_PC_KEY(::StringW  value) ;

static inline void setStaticF_RANKED_PROGRESSION_GRACE_PERIOD_KEY(::StringW  value) ;

static inline void setStaticF_RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_HighTierThreshold, addr 0x5965dac, size 0x8, virtual false, abstract: false, final false
inline void set_HighTierThreshold(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LowTierThreshold, addr 0x5965d9c, size 0x8, virtual false, abstract: false, final false
inline void set_LowTierThreshold(float_t  value) ;

/// @brief Method set_MajorTiers, addr 0x5965dbc, size 0x4, virtual false, abstract: false, final false
inline void set_MajorTiers(::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxRank, addr 0x5965d8c, size 0x8, virtual false, abstract: false, final false
inline void set_MaxRank(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedProgressionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedProgressionManager(RankedProgressionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedProgressionManager(RankedProgressionManager const& ) = delete;

/// @brief Field DEFAULT_ELO offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_ELO{static_cast<float_t>(100.0f)};

/// @brief Field MAJOR_TIER_MIN_RANGE offset 0xffffffff size 0x4
static constexpr float_t  MAJOR_TIER_MIN_RANGE{static_cast<float_t>(200.0f)};

/// @brief Field MAX_ELO offset 0xffffffff size 0x4
static constexpr float_t  MAX_ELO{static_cast<float_t>(4000.0f)};

/// @brief Field MIN_ELO offset 0xffffffff size 0x4
static constexpr float_t  MIN_ELO{static_cast<float_t>(100.0f)};

/// @brief Field SUB_TIER_MIN_RANGE offset 0xffffffff size 0x4
static constexpr float_t  SUB_TIER_MIN_RANGE{static_cast<float_t>(20.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2381};

/// @brief Field EloScorePC, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::RankedMultiplayerStatisticFloat*  ___EloScorePC;

/// @brief Field EloScoreQuest, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::RankedMultiplayerStatisticFloat*  ___EloScoreQuest;

/// @brief Field NewTierGracePeriodIdxPC, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::RankedMultiplayerStatisticInt*  ___NewTierGracePeriodIdxPC;

/// @brief Field NewTierGracePeriodIdxQuest, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::RankedMultiplayerStatisticInt*  ___NewTierGracePeriodIdxQuest;

/// @brief Field ProgressionData, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*  ___ProgressionData;

/// [SerializeField]
/// @brief Field majorTiers, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*  ___majorTiers;

/// [SerializeField]
/// @brief Field newTierGracePeriod, offset: 0x50, size: 0x4, def value: None
 int32_t  ___newTierGracePeriod;

/// @brief Field MaxEloConstant, offset: 0x54, size: 0x4, def value: None
 float_t  ___MaxEloConstant;

/// [CompilerGenerated]
/// @brief Field <MaxRank>k__BackingField, offset: 0x58, size: 0x4, def value: None
 int32_t  ____MaxRank_k__BackingField;

/// @brief Field ProgressionEvent, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*  ___ProgressionEvent;

/// @brief Field OnPlayerEloAcquired, offset: 0x68, size: 0x8, def value: None
 ::System::Action_3<int32_t,float_t,int32_t>*  ___OnPlayerEloAcquired;

/// [CompilerGenerated]
/// @brief Field <LowTierThreshold>k__BackingField, offset: 0x70, size: 0x4, def value: None
 float_t  ____LowTierThreshold_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HighTierThreshold>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____HighTierThreshold_k__BackingField;

/// [Space]
/// [ContextMenuItem("Set ELO", "DebugSetELO")]
/// @brief Field debugEloPoints, offset: 0x78, size: 0x4, def value: None
 int32_t  ___debugEloPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___EloScorePC) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___EloScoreQuest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___NewTierGracePeriodIdxPC) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___NewTierGracePeriodIdxQuest) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___ProgressionData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___majorTiers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___newTierGracePeriod) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___MaxEloConstant) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ____MaxRank_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___ProgressionEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___OnPlayerEloAcquired) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ____LowTierThreshold_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ____HighTierThreshold_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager, ___debugEloPoints) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedProgressionManager) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedProgressionManager/<LoadStatsWhenReady>d__48
class CORDL_TYPE RankedProgressionManager__LoadStatsWhenReady_d__48 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RankedProgressionManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5968cb8, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5968e2c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5968e34, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5968e6c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5968cb4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::RankedProgressionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::RankedProgressionManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RankedProgressionManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x596673c, size 0x28, virtual false, abstract: false, final false
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
constexpr RankedProgressionManager__LoadStatsWhenReady_d__48() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager__LoadStatsWhenReady_d__48", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedProgressionManager__LoadStatsWhenReady_d__48(RankedProgressionManager__LoadStatsWhenReady_d__48 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager__LoadStatsWhenReady_d__48", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedProgressionManager__LoadStatsWhenReady_d__48(RankedProgressionManager__LoadStatsWhenReady_d__48 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2380};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RankedProgressionManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedProgressionManager/<>c
class CORDL_TYPE RankedProgressionManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RankedProgressionManager___c*  __9;

/// @brief Field <>9__48_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__48_0, put=setStaticF___9__48_0)) ::System::Func_1<bool>*  __9__48_0;

static inline ::GlobalNamespace::RankedProgressionManager___c* New_ctor() ;

/// @brief Method <LoadStatsWhenReady>b__48_0, addr 0x5968c34, size 0x80, virtual false, abstract: false, final false
inline bool _LoadStatsWhenReady_b__48_0() ;

/// @brief Method .ctor, addr 0x5968c2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RankedProgressionManager___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__48_0() ;

static inline void setStaticF___9(::GlobalNamespace::RankedProgressionManager___c*  value) ;

static inline void setStaticF___9__48_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedProgressionManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedProgressionManager___c(RankedProgressionManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedProgressionManager___c(RankedProgressionManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2379};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RankedProgressionManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies RankedProgressionManager::RankedProgressionTierBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedProgressionManager/RankedProgressionTier
class CORDL_TYPE RankedProgressionManager_RankedProgressionTier : public ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase {
public:
// Declarations
/// @brief Field subTiers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_subTiers, put=__cordl_internal_set_subTiers)) ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>*  subTiers;

/// @brief Method EnforceSubTierValidity, addr 0x59689ac, size 0x180, virtual false, abstract: false, final false
inline void EnforceSubTierValidity(float_t  thresholdMin) ;

/// @brief Method InsertSubTierAt, addr 0x59688d4, size 0xd8, virtual false, abstract: false, final false
inline void InsertSubTierAt(int32_t  idx, float_t  tierMin) ;

static inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>* const& __cordl_internal_get_subTiers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>*& __cordl_internal_get_subTiers() ;

constexpr void __cordl_internal_set_subTiers(::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>*  value) ;

/// @brief Method .ctor, addr 0x5968b2c, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedProgressionManager_RankedProgressionTier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager_RankedProgressionTier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedProgressionManager_RankedProgressionTier(RankedProgressionManager_RankedProgressionTier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager_RankedProgressionTier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedProgressionManager_RankedProgressionTier(RankedProgressionManager_RankedProgressionTier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2378};

/// @brief Field subTiers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>*  ___subTiers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionTier, ___subTiers) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedProgressionManager_RankedProgressionTier) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies RankedProgressionManager::RankedProgressionTierBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedProgressionManager/RankedProgressionSubTier
class CORDL_TYPE RankedProgressionManager_RankedProgressionSubTier : public ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase {
public:
// Declarations
/// @brief Field icon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_icon, put=__cordl_internal_set_icon)) ::UnityW<::UnityEngine::Sprite>  icon;

static inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_icon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_icon() ;

constexpr void __cordl_internal_set_icon(::UnityW<::UnityEngine::Sprite>  value) ;

/// @brief Method .ctor, addr 0x59688bc, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedProgressionManager_RankedProgressionSubTier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager_RankedProgressionSubTier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedProgressionManager_RankedProgressionSubTier(RankedProgressionManager_RankedProgressionSubTier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager_RankedProgressionSubTier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedProgressionManager_RankedProgressionSubTier(RankedProgressionManager_RankedProgressionSubTier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2377};

/// @brief Field icon, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___icon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier, ___icon) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedProgressionManager/RankedProgressionTierBase
class CORDL_TYPE RankedProgressionManager_RankedProgressionTierBase : public ::System::Object {
public:
// Declarations
/// @brief Field color, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field thresholdMax, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_thresholdMax, put=__cordl_internal_set_thresholdMax)) float_t  thresholdMax;

/// @brief Field thresholdMin, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_thresholdMin, put=__cordl_internal_set_thresholdMin)) float_t  thresholdMin;

/// @brief Method GetMinThreshold, addr 0x5966420, size 0x98, virtual false, abstract: false, final false
inline float_t GetMinThreshold() ;

static inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase* New_ctor() ;

/// @brief Method SetMinThreshold, addr 0x596889c, size 0x8, virtual false, abstract: false, final false
inline void SetMinThreshold(float_t  val) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr float_t const& __cordl_internal_get_thresholdMax() const;

constexpr float_t& __cordl_internal_get_thresholdMax() ;

constexpr float_t const& __cordl_internal_get_thresholdMin() const;

constexpr float_t& __cordl_internal_get_thresholdMin() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_thresholdMax(float_t  value) ;

constexpr void __cordl_internal_set_thresholdMin(float_t  value) ;

/// @brief Method .ctor, addr 0x59688a4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedProgressionManager_RankedProgressionTierBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager_RankedProgressionTierBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedProgressionManager_RankedProgressionTierBase(RankedProgressionManager_RankedProgressionTierBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager_RankedProgressionTierBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedProgressionManager_RankedProgressionTierBase(RankedProgressionManager_RankedProgressionTierBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2376};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field color, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field thresholdMax, offset: 0x28, size: 0x4, def value: None
 float_t  ___thresholdMax;

/// @brief Field thresholdMin, offset: 0x2c, size: 0x4, def value: None
 float_t  ___thresholdMin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase, ___color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase, ___thresholdMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase, ___thresholdMin) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies RankedProgressionManager::ERankedProgressionEventType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedProgressionManager/RankedProgressionEvent
class CORDL_TYPE RankedProgressionManager_RankedProgressionEvent : public ::System::Object {
public:
// Declarations
/// @brief Field delta, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_delta, put=__cordl_internal_set_delta)) float_t  delta;

/// @brief Field evtType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_evtType, put=__cordl_internal_set_evtType)) ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType  evtType;

/// @brief Field leftName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftName, put=__cordl_internal_set_leftName)) ::StringW  leftName;

/// @brief Field maxVal, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVal, put=__cordl_internal_set_maxVal)) float_t  maxVal;

/// @brief Field minVal, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVal, put=__cordl_internal_set_minVal)) float_t  minVal;

/// @brief Field newTierIcon, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_newTierIcon, put=__cordl_internal_set_newTierIcon)) ::UnityW<::UnityEngine::Sprite>  newTierIcon;

/// @brief Field newTierName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_newTierName, put=__cordl_internal_set_newTierName)) ::StringW  newTierName;

/// @brief Field progressIconLeft, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressIconLeft, put=__cordl_internal_set_progressIconLeft)) ::UnityW<::UnityEngine::Sprite>  progressIconLeft;

/// @brief Field progressIconRight, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressIconRight, put=__cordl_internal_set_progressIconRight)) ::UnityW<::UnityEngine::Sprite>  progressIconRight;

/// @brief Field rightName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightName, put=__cordl_internal_set_rightName)) ::StringW  rightName;

static inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent* New_ctor() ;

/// @brief Method ToString, addr 0x59685fc, size 0x298, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr float_t const& __cordl_internal_get_delta() const;

constexpr float_t& __cordl_internal_get_delta() ;

constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType const& __cordl_internal_get_evtType() const;

constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType& __cordl_internal_get_evtType() ;

constexpr ::StringW const& __cordl_internal_get_leftName() const;

constexpr ::StringW& __cordl_internal_get_leftName() ;

constexpr float_t const& __cordl_internal_get_maxVal() const;

constexpr float_t& __cordl_internal_get_maxVal() ;

constexpr float_t const& __cordl_internal_get_minVal() const;

constexpr float_t& __cordl_internal_get_minVal() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_newTierIcon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_newTierIcon() ;

constexpr ::StringW const& __cordl_internal_get_newTierName() const;

constexpr ::StringW& __cordl_internal_get_newTierName() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_progressIconLeft() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_progressIconLeft() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_progressIconRight() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_progressIconRight() ;

constexpr ::StringW const& __cordl_internal_get_rightName() const;

constexpr ::StringW& __cordl_internal_get_rightName() ;

constexpr void __cordl_internal_set_delta(float_t  value) ;

constexpr void __cordl_internal_set_evtType(::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType  value) ;

constexpr void __cordl_internal_set_leftName(::StringW  value) ;

constexpr void __cordl_internal_set_maxVal(float_t  value) ;

constexpr void __cordl_internal_set_minVal(float_t  value) ;

constexpr void __cordl_internal_set_newTierIcon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_newTierName(::StringW  value) ;

constexpr void __cordl_internal_set_progressIconLeft(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_progressIconRight(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_rightName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5968894, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedProgressionManager_RankedProgressionEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager_RankedProgressionEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedProgressionManager_RankedProgressionEvent(RankedProgressionManager_RankedProgressionEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionManager_RankedProgressionEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedProgressionManager_RankedProgressionEvent(RankedProgressionManager_RankedProgressionEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2375};

/// @brief Field evtType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType  ___evtType;

/// @brief Field progressIconLeft, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___progressIconLeft;

/// @brief Field progressIconRight, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___progressIconRight;

/// @brief Field newTierIcon, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___newTierIcon;

/// @brief Field leftName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___leftName;

/// @brief Field rightName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___rightName;

/// @brief Field newTierName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___newTierName;

/// @brief Field minVal, offset: 0x48, size: 0x4, def value: None
 float_t  ___minVal;

/// @brief Field maxVal, offset: 0x4c, size: 0x4, def value: None
 float_t  ___maxVal;

/// @brief Field delta, offset: 0x50, size: 0x4, def value: None
 float_t  ___delta;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___evtType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___progressIconLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___progressIconRight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___newTierIcon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___leftName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___rightName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___newTierName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___minVal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___maxVal) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent, ___delta) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
