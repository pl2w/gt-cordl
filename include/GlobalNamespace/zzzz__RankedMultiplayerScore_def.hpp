#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_RecordHolder_1_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_ResultData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RankedMultiplayerScore)
namespace GlobalNamespace {
struct GorillaTagCompetitiveManager_GameState;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveManager;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct RankedMultiplayerScore_PlayerScoreInRound;
}
namespace GlobalNamespace {
struct RankedMultiplayerScore_PlayerScore;
}
namespace GlobalNamespace {
template<typename T>
struct RankedMultiplayerScore_RecordHolder_1;
}
namespace GlobalNamespace {
struct RankedMultiplayerScore_ResultData;
}
namespace GlobalNamespace {
class RankedMultiplayerScore___c;
}
namespace GlobalNamespace {
class RankedProgressionManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class RankedMultiplayerScore;
}
namespace GlobalNamespace {
class RankedMultiplayerScore___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RankedMultiplayerScore*);
MARK_REF_T(::GlobalNamespace::RankedMultiplayerScore___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerScore*, "", "RankedMultiplayerScore");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerScore___c*, "", "RankedMultiplayerScore/<>c");
// Dependencies MonoBehaviourTick, RankedMultiplayerScore::RecordHolder`1<T>, RankedMultiplayerScore::ResultData
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedMultiplayerScore
class CORDL_TYPE RankedMultiplayerScore : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using PlayerScore = ::GlobalNamespace::RankedMultiplayerScore_PlayerScore;

using PlayerScoreInRound = ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound;

template<typename T>
using RecordHolder_1 = ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<T>;

using ResultData = ::GlobalNamespace::RankedMultiplayerScore_ResultData;

using __c = ::GlobalNamespace::RankedMultiplayerScore___c;

/// @brief Field AllFinalPlayerScores, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_AllFinalPlayerScores, put=__cordl_internal_set_AllFinalPlayerScores)) ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*  AllFinalPlayerScores;

/// @brief Field AllPlayerInRoundScores, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_AllPlayerInRoundScores, put=__cordl_internal_set_AllPlayerInRoundScores)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*  AllPlayerInRoundScores;

/// @brief Field CompetitiveManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompetitiveManager, put=__cordl_internal_set_CompetitiveManager)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  CompetitiveManager;

/// @brief Field InProgressEloDeltaPerPlayer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_InProgressEloDeltaPerPlayer, put=__cordl_internal_set_InProgressEloDeltaPerPlayer)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  InProgressEloDeltaPerPlayer;

/// @brief Field IsLateJoiner, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsLateJoiner, put=__cordl_internal_set_IsLateJoiner)) bool  IsLateJoiner;

/// @brief Field LongestUntaggedTieEpsilon, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LongestUntaggedTieEpsilon, put=setStaticF_LongestUntaggedTieEpsilon)) float_t  LongestUntaggedTieEpsilon;

/// @brief Field PendingResults, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get_PendingResults, put=__cordl_internal_set_PendingResults)) ::GlobalNamespace::RankedMultiplayerScore_ResultData  PendingResults;

/// @brief Field PerSecondTimer, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PerSecondTimer, put=__cordl_internal_set_PerSecondTimer)) float_t  PerSecondTimer;

 __declspec(property(get=get_PlayerRankedEloScores, put=set_PlayerRankedEloScores)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  PlayerRankedEloScores;

/// @brief Field PlayerRankedElos, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerRankedElos, put=__cordl_internal_set_PlayerRankedElos)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  PlayerRankedElos;

/// @brief Field PlayerRankedTierIndices, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerRankedTierIndices, put=__cordl_internal_set_PlayerRankedTierIndices)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  PlayerRankedTierIndices;

 __declspec(property(get=get_PlayerRankedTiers, put=set_PlayerRankedTiers)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  PlayerRankedTiers;

/// @brief Field PointsPerTag, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_PointsPerTag, put=__cordl_internal_set_PointsPerTag)) int32_t  PointsPerTag;

/// @brief Field PointsPerUninfectedSecMax, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PointsPerUninfectedSecMax, put=__cordl_internal_set_PointsPerUninfectedSecMax)) float_t  PointsPerUninfectedSecMax;

/// @brief Field PointsPerUninfectedSecMin, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PointsPerUninfectedSecMin, put=__cordl_internal_set_PointsPerUninfectedSecMin)) float_t  PointsPerUninfectedSecMin;

 __declspec(property(get=get_Progression, put=set_Progression)) ::UnityW<::GlobalNamespace::RankedProgressionManager>  Progression;

 __declspec(property(get=get_ProjectedEloDeltas, put=set_ProjectedEloDeltas)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  ProjectedEloDeltas;

/// @brief Field RESULT_TIE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RESULT_TIE, put=setStaticF_RESULT_TIE)) int32_t  RESULT_TIE;

/// @brief Field ResultsLongestUntagged, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_ResultsLongestUntagged, put=__cordl_internal_set_ResultsLongestUntagged)) ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<float_t>  ResultsLongestUntagged;

/// @brief Field ResultsMostTags, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_ResultsMostTags, put=__cordl_internal_set_ResultsMostTags)) ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<int32_t>  ResultsMostTags;

/// @brief Field VisitedScoreCombintations, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_VisitedScoreCombintations, put=__cordl_internal_set_VisitedScoreCombintations)) ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  VisitedScoreCombintations;

/// @brief Field WasInfectedInitially, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_WasInfectedInitially, put=__cordl_internal_set_WasInfectedInitially)) bool  WasInfectedInitially;

/// @brief Field <Progression>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Progression_k__BackingField, put=__cordl_internal_set__Progression_k__BackingField)) ::UnityW<::GlobalNamespace::RankedProgressionManager>  _Progression_k__BackingField;

/// @brief Method CachePlayerRankedProgressionData, addr 0x59627e4, size 0x164, virtual false, abstract: false, final false
inline void CachePlayerRankedProgressionData(int32_t  playerId, int32_t  tierIdx, float_t  elo) ;

/// @brief Method ComputeGameScore, addr 0x5964874, size 0x14, virtual false, abstract: false, final false
inline float_t ComputeGameScore(int32_t  tags, float_t  pointsOnDefense) ;

/// @brief Method GetInGameScoreForSelf, addr 0x596460c, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound GetInGameScoreForSelf() ;

/// @brief Method GetSortedScores, addr 0x5964ea0, size 0x2ac, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* GetSortedScores() ;

/// @brief Method HandlePlayerEloAcquired, addr 0x59627e0, size 0x4, virtual false, abstract: false, final false
inline void HandlePlayerEloAcquired(int32_t  playerId, float_t  elo, int32_t  tier) ;

/// @brief Method Initialize, addr 0x5962400, size 0x3e0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::RankedMultiplayerScore* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5962948, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGameEnded, addr 0x5963490, size 0x254, virtual false, abstract: false, final false
inline void OnGameEnded() ;

/// @brief Method OnGameStarted, addr 0x5963144, size 0x104, virtual false, abstract: false, final false
inline void OnGameStarted() ;

/// @brief Method OnPerSecondTimerElapsed, addr 0x5962d90, size 0x30c, virtual false, abstract: false, final false
inline void OnPerSecondTimerElapsed(int32_t  playersInGame, int32_t  infectedPlayers) ;

/// @brief Method OnPlayerJoined, addr 0x5963a68, size 0x8a4, virtual false, abstract: false, final false
inline void OnPlayerJoined(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnPlayerLeft, addr 0x596459c, size 0x70, virtual false, abstract: false, final false
inline void OnPlayerLeft(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnStateChanged, addr 0x596310c, size 0x38, virtual false, abstract: false, final false
inline void OnStateChanged(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  state) ;

/// @brief Method OnTagReported, addr 0x59646ec, size 0x188, virtual false, abstract: false, final false
inline void OnTagReported(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method PredictPlayerEloChanges, addr 0x5964888, size 0x5e8, virtual false, abstract: false, final false
inline void PredictPlayerEloChanges() ;

/// @brief Method ReceivedScoresForLateJoiner, addr 0x596430c, size 0x244, virtual false, abstract: false, final false
inline void ReceivedScoresForLateJoiner(::ArrayW<int32_t>  playerIds, ::ArrayW<int32_t>  numTags, ::ArrayW<float_t>  pointsOnDefense, ::ArrayW<float_t>  joinTime, ::ArrayW<bool>  infected, ::ArrayW<float_t>  taggedTime) ;

/// @brief Method ReportScore, addr 0x59636e4, size 0x384, virtual false, abstract: false, final false
inline void ReportScore() ;

/// @brief Method ResetMatch, addr 0x596309c, size 0x70, virtual false, abstract: false, final false
inline void ResetMatch() ;

/// @brief Method StartTrackingPlayer, addr 0x5963248, size 0x248, virtual false, abstract: false, final false
inline void StartTrackingPlayer(::GlobalNamespace::NetPlayer*  player, bool  lateJoin) ;

/// @brief Method Tick, addr 0x5962c7c, size 0x114, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method Unsubscribe, addr 0x596294c, size 0x330, virtual false, abstract: false, final false
inline void Unsubscribe() ;

/// [CompilerGenerated]
/// @brief Method <GetSortedScores>b__55_0, addr 0x59653ac, size 0x48, virtual false, abstract: false, final false
inline int32_t _GetSortedScores_b__55_0(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound  s1, ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound  s2) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>* const& __cordl_internal_get_AllFinalPlayerScores() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*& __cordl_internal_get_AllFinalPlayerScores() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* const& __cordl_internal_get_AllPlayerInRoundScores() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*& __cordl_internal_get_AllPlayerInRoundScores() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager> const& __cordl_internal_get_CompetitiveManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>& __cordl_internal_get_CompetitiveManager() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& __cordl_internal_get_InProgressEloDeltaPerPlayer() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& __cordl_internal_get_InProgressEloDeltaPerPlayer() ;

constexpr bool const& __cordl_internal_get_IsLateJoiner() const;

constexpr bool& __cordl_internal_get_IsLateJoiner() ;

constexpr ::GlobalNamespace::RankedMultiplayerScore_ResultData const& __cordl_internal_get_PendingResults() const;

constexpr ::GlobalNamespace::RankedMultiplayerScore_ResultData& __cordl_internal_get_PendingResults() ;

constexpr float_t const& __cordl_internal_get_PerSecondTimer() const;

constexpr float_t& __cordl_internal_get_PerSecondTimer() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& __cordl_internal_get_PlayerRankedElos() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& __cordl_internal_get_PlayerRankedElos() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_PlayerRankedTierIndices() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_PlayerRankedTierIndices() ;

constexpr int32_t const& __cordl_internal_get_PointsPerTag() const;

constexpr int32_t& __cordl_internal_get_PointsPerTag() ;

constexpr float_t const& __cordl_internal_get_PointsPerUninfectedSecMax() const;

constexpr float_t& __cordl_internal_get_PointsPerUninfectedSecMax() ;

constexpr float_t const& __cordl_internal_get_PointsPerUninfectedSecMin() const;

constexpr float_t& __cordl_internal_get_PointsPerUninfectedSecMin() ;

constexpr ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<float_t> const& __cordl_internal_get_ResultsLongestUntagged() const;

constexpr ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<float_t>& __cordl_internal_get_ResultsLongestUntagged() ;

constexpr ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<int32_t> const& __cordl_internal_get_ResultsMostTags() const;

constexpr ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<int32_t>& __cordl_internal_get_ResultsMostTags() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>* const& __cordl_internal_get_VisitedScoreCombintations() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>*& __cordl_internal_get_VisitedScoreCombintations() ;

constexpr bool const& __cordl_internal_get_WasInfectedInitially() const;

constexpr bool& __cordl_internal_get_WasInfectedInitially() ;

constexpr ::UnityW<::GlobalNamespace::RankedProgressionManager> const& __cordl_internal_get__Progression_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::RankedProgressionManager>& __cordl_internal_get__Progression_k__BackingField() ;

constexpr void __cordl_internal_set_AllFinalPlayerScores(::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*  value) ;

constexpr void __cordl_internal_set_AllPlayerInRoundScores(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*  value) ;

constexpr void __cordl_internal_set_CompetitiveManager(::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  value) ;

constexpr void __cordl_internal_set_InProgressEloDeltaPerPlayer(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_IsLateJoiner(bool  value) ;

constexpr void __cordl_internal_set_PendingResults(::GlobalNamespace::RankedMultiplayerScore_ResultData  value) ;

constexpr void __cordl_internal_set_PerSecondTimer(float_t  value) ;

constexpr void __cordl_internal_set_PlayerRankedElos(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_PlayerRankedTierIndices(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_PointsPerTag(int32_t  value) ;

constexpr void __cordl_internal_set_PointsPerUninfectedSecMax(float_t  value) ;

constexpr void __cordl_internal_set_PointsPerUninfectedSecMin(float_t  value) ;

constexpr void __cordl_internal_set_ResultsLongestUntagged(::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<float_t>  value) ;

constexpr void __cordl_internal_set_ResultsMostTags(::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<int32_t>  value) ;

constexpr void __cordl_internal_set_VisitedScoreCombintations(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_WasInfectedInitially(bool  value) ;

constexpr void __cordl_internal_set__Progression_k__BackingField(::UnityW<::GlobalNamespace::RankedProgressionManager>  value) ;

/// @brief Method .ctor, addr 0x596514c, size 0x210, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_LongestUntaggedTieEpsilon() ;

static inline int32_t getStaticF_RESULT_TIE() ;

/// @brief Method get_PlayerRankedEloScores, addr 0x5964e80, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* get_PlayerRankedEloScores() ;

/// @brief Method get_PlayerRankedTiers, addr 0x5964e70, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* get_PlayerRankedTiers() ;

/// [CompilerGenerated]
/// @brief Method get_Progression, addr 0x59623f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::RankedProgressionManager> get_Progression() ;

/// @brief Method get_ProjectedEloDeltas, addr 0x5964e90, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* get_ProjectedEloDeltas() ;

static inline void setStaticF_LongestUntaggedTieEpsilon(float_t  value) ;

static inline void setStaticF_RESULT_TIE(int32_t  value) ;

/// @brief Method set_PlayerRankedEloScores, addr 0x5964e88, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerRankedEloScores(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

/// @brief Method set_PlayerRankedTiers, addr 0x5964e78, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerRankedTiers(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Progression, addr 0x59623f8, size 0x8, virtual false, abstract: false, final false
inline void set_Progression(::GlobalNamespace::RankedProgressionManager*  value) ;

/// @brief Method set_ProjectedEloDeltas, addr 0x5964e98, size 0x8, virtual false, abstract: false, final false
inline void set_ProjectedEloDeltas(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerScore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerScore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedMultiplayerScore(RankedMultiplayerScore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerScore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedMultiplayerScore(RankedMultiplayerScore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2367};

/// [SerializeField]
/// @brief Field PointsPerTag, offset: 0x24, size: 0x4, def value: None
 int32_t  ___PointsPerTag;

/// [SerializeField]
/// @brief Field PointsPerUninfectedSecMin, offset: 0x28, size: 0x4, def value: None
 float_t  ___PointsPerUninfectedSecMin;

/// [SerializeField]
/// @brief Field PointsPerUninfectedSecMax, offset: 0x2c, size: 0x4, def value: None
 float_t  ___PointsPerUninfectedSecMax;

/// @brief Field PerSecondTimer, offset: 0x30, size: 0x4, def value: None
 float_t  ___PerSecondTimer;

/// @brief Field WasInfectedInitially, offset: 0x34, size: 0x1, def value: None
 bool  ___WasInfectedInitially;

/// @brief Field CompetitiveManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  ___CompetitiveManager;

/// @brief Field AllPlayerInRoundScores, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*  ___AllPlayerInRoundScores;

/// @brief Field AllFinalPlayerScores, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*  ___AllFinalPlayerScores;

/// @brief Field VisitedScoreCombintations, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  ___VisitedScoreCombintations;

/// @brief Field InProgressEloDeltaPerPlayer, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  ___InProgressEloDeltaPerPlayer;

/// @brief Field PlayerRankedTierIndices, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___PlayerRankedTierIndices;

/// @brief Field PlayerRankedElos, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  ___PlayerRankedElos;

/// @brief Field PendingResults, offset: 0x70, size: 0x18, def value: None
 ::GlobalNamespace::RankedMultiplayerScore_ResultData  ___PendingResults;

/// @brief Field ResultsMostTags, offset: 0x88, size: 0x10, def value: None
 ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<int32_t>  ___ResultsMostTags;

/// @brief Field ResultsLongestUntagged, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<float_t>  ___ResultsLongestUntagged;

/// @brief Field IsLateJoiner, offset: 0xa8, size: 0x1, def value: None
 bool  ___IsLateJoiner;

/// @brief Size padding 0xa8 - 0xb8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [CompilerGenerated]
/// @brief Field <Progression>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RankedProgressionManager>  ____Progression_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___PointsPerTag) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___PointsPerUninfectedSecMin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___PointsPerUninfectedSecMax) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___PerSecondTimer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___WasInfectedInitially) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___CompetitiveManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___AllPlayerInRoundScores) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___AllFinalPlayerScores) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___VisitedScoreCombintations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___InProgressEloDeltaPerPlayer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___PlayerRankedTierIndices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___PlayerRankedElos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___PendingResults) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___ResultsMostTags) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___ResultsLongestUntagged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ___IsLateJoiner) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerScore, ____Progression_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerScore) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedMultiplayerScore/<>c
class CORDL_TYPE RankedMultiplayerScore___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RankedMultiplayerScore___c*  __9;

/// @brief Field <>9__44_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_0, put=setStaticF___9__44_0)) ::System::Func_2<::GlobalNamespace::RankedMultiplayerScore_PlayerScore,float_t>*  __9__44_0;

static inline ::GlobalNamespace::RankedMultiplayerScore___c* New_ctor() ;

/// @brief Method <PredictPlayerEloChanges>b__44_0, addr 0x5965534, size 0x8, virtual false, abstract: false, final false
inline float_t _PredictPlayerEloChanges_b__44_0(::GlobalNamespace::RankedMultiplayerScore_PlayerScore  s) ;

/// @brief Method .ctor, addr 0x596552c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RankedMultiplayerScore___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::RankedMultiplayerScore_PlayerScore,float_t>* getStaticF___9__44_0() ;

static inline void setStaticF___9(::GlobalNamespace::RankedMultiplayerScore___c*  value) ;

static inline void setStaticF___9__44_0(::System::Func_2<::GlobalNamespace::RankedMultiplayerScore_PlayerScore,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerScore___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerScore___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedMultiplayerScore___c(RankedMultiplayerScore___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerScore___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedMultiplayerScore___c(RankedMultiplayerScore___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RankedMultiplayerScore___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
