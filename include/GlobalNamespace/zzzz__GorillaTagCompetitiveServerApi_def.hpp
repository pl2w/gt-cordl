#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveServerApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveServerApi)
namespace GlobalNamespace {
struct GorillaTagCompetitiveServerApi_EPlatformType;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModePlayerScore;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeProgressionData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeRequestDataBase;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__CreateMatchId_d__34;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__GetRankInformation_d__31;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__PingRoom_d__47;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__SetEloValue_d__44;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37;
}
namespace GlobalNamespace {
struct RankedMultiplayerScore_PlayerScore;
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
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModePlayerScore;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeProgressionData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeRequestDataBase;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__CreateMatchId_d__34;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__GetRankInformation_d__31;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__PingRoom_d__47;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__SetEloValue_d__44;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi*, "", "GorillaTagCompetitiveServerApi");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*, "", "GorillaTagCompetitiveServerApi/RankedModePlayerProgressionData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*, "", "GorillaTagCompetitiveServerApi/RankedModePlayerScore");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*, "", "GorillaTagCompetitiveServerApi/RankedModeProgressionData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*, "", "GorillaTagCompetitiveServerApi/RankedModeProgressionPlatformData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*, "", "GorillaTagCompetitiveServerApi/RankedModeProgressionRequestData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase*, "", "GorillaTagCompetitiveServerApi/RankedModeRequestDataBase");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*, "", "GorillaTagCompetitiveServerApi/RankedModeRequestDataPlatformed");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*, "", "GorillaTagCompetitiveServerApi/RankedModeRequestDataWithMatchId");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*, "", "GorillaTagCompetitiveServerApi/RankedModeSetEloValueRequestData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*, "", "GorillaTagCompetitiveServerApi/RankedModeSubmitMatchScoresRequestData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*, "", "GorillaTagCompetitiveServerApi/RankedModeUnlockCompetitiveQueueRequestData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData*, "", "GorillaTagCompetitiveServerApi/RankedModeValidateMatchJoinResponseData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34*, "", "GorillaTagCompetitiveServerApi/<CreateMatchId>d__34");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31*, "", "GorillaTagCompetitiveServerApi/<GetRankInformation>d__31");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47*, "", "GorillaTagCompetitiveServerApi/<PingRoom>d__47");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44*, "", "GorillaTagCompetitiveServerApi/<SetEloValue>d__44");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41*, "", "GorillaTagCompetitiveServerApi/<SubmitMatchScores>d__41");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50*, "", "GorillaTagCompetitiveServerApi/<UnlockCompetitiveQueue>d__50");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37*, "", "GorillaTagCompetitiveServerApi/<ValidateMatchJoin>d__37");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi
class CORDL_TYPE GorillaTagCompetitiveServerApi : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EPlatformType = ::GlobalNamespace::GorillaTagCompetitiveServerApi_EPlatformType;

using RankedModePlayerProgressionData = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData;

using RankedModePlayerScore = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore;

using RankedModeProgressionData = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData;

using RankedModeProgressionPlatformData = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData;

using RankedModeProgressionRequestData = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData;

using RankedModeRequestDataBase = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase;

using RankedModeRequestDataPlatformed = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed;

using RankedModeRequestDataWithMatchId = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId;

using RankedModeSetEloValueRequestData = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData;

using RankedModeSubmitMatchScoresRequestData = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData;

using RankedModeUnlockCompetitiveQueueRequestData = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData;

using RankedModeValidateMatchJoinResponseData = ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData;

using _CreateMatchId_d__34 = ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34;

using _GetRankInformation_d__31 = ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31;

using _PingRoom_d__47 = ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47;

using _SetEloValue_d__44 = ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44;

using _SubmitMatchScores_d__41 = ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41;

using _UnlockCompetitiveQueue_d__50 = ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50;

using _ValidateMatchJoin_d__37 = ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37;

/// @brief Field CreateMatchIdInProgress, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_CreateMatchIdInProgress, put=__cordl_internal_set_CreateMatchIdInProgress)) bool  CreateMatchIdInProgress;

/// @brief Field CreateMatchIdRetryCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CreateMatchIdRetryCount, put=__cordl_internal_set_CreateMatchIdRetryCount)) int32_t  CreateMatchIdRetryCount;

/// @brief Field GetRankInformationInProgress, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetRankInformationInProgress, put=__cordl_internal_set_GetRankInformationInProgress)) bool  GetRankInformationInProgress;

/// @brief Field GetRankInformationRetryCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_GetRankInformationRetryCount, put=__cordl_internal_set_GetRankInformationRetryCount)) int32_t  GetRankInformationRetryCount;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  Instance;

/// @brief Field MAX_SERVER_RETRIES, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MAX_SERVER_RETRIES, put=__cordl_internal_set_MAX_SERVER_RETRIES)) int32_t  MAX_SERVER_RETRIES;

/// @brief Field PingMatchInProgress, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_PingMatchInProgress, put=__cordl_internal_set_PingMatchInProgress)) bool  PingMatchInProgress;

/// @brief Field PingMatchRetryCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_PingMatchRetryCount, put=__cordl_internal_set_PingMatchRetryCount)) int32_t  PingMatchRetryCount;

/// @brief Field SetEloValueInProgress, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_SetEloValueInProgress, put=__cordl_internal_set_SetEloValueInProgress)) bool  SetEloValueInProgress;

/// @brief Field SetEloValueRetryCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_SetEloValueRetryCount, put=__cordl_internal_set_SetEloValueRetryCount)) int32_t  SetEloValueRetryCount;

/// @brief Field SubmitMatchScoresInProgress, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_SubmitMatchScoresInProgress, put=__cordl_internal_set_SubmitMatchScoresInProgress)) bool  SubmitMatchScoresInProgress;

/// @brief Field SubmitMatchScoresRetryCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_SubmitMatchScoresRetryCount, put=__cordl_internal_set_SubmitMatchScoresRetryCount)) int32_t  SubmitMatchScoresRetryCount;

/// @brief Field UnlockCompetitiveQueueInProgress, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_UnlockCompetitiveQueueInProgress, put=__cordl_internal_set_UnlockCompetitiveQueueInProgress)) bool  UnlockCompetitiveQueueInProgress;

/// @brief Field UnlockCompetitiveQueueRetryCount, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_UnlockCompetitiveQueueRetryCount, put=__cordl_internal_set_UnlockCompetitiveQueueRetryCount)) int32_t  UnlockCompetitiveQueueRetryCount;

/// @brief Field ValidateMatchJoinInProgress, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_ValidateMatchJoinInProgress, put=__cordl_internal_set_ValidateMatchJoinInProgress)) bool  ValidateMatchJoinInProgress;

/// @brief Field ValidateMatchJoinRetryCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ValidateMatchJoinRetryCount, put=__cordl_internal_set_ValidateMatchJoinRetryCount)) int32_t  ValidateMatchJoinRetryCount;

/// @brief Method Awake, addr 0x592b4f8, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(GorillaTagCompetitiveServerApi::<CreateMatchId>d__34))]
/// @brief Method CreateMatchId, addr 0x592baf8, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CreateMatchId(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*  data, ::System::Action_1<::StringW>*  callback) ;

/// [IteratorStateMachine(typeof(GorillaTagCompetitiveServerApi::<GetRankInformation>d__31))]
/// @brief Method GetRankInformation, addr 0x592b844, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetRankInformation(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*  data, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  callback) ;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi* New_ctor() ;

/// @brief Method OnCompleteCreateMatchId, addr 0x592bbbc, size 0x54, virtual false, abstract: false, final false
inline void OnCompleteCreateMatchId(/* [CanBeNull] */ ::StringW  response, ::System::Action_1<::StringW>*  callback) ;

/// @brief Method OnCompleteGetRankInformation, addr 0x592b908, size 0x1e8, virtual false, abstract: false, final false
inline void OnCompleteGetRankInformation(/* [CanBeNull] */ ::StringW  response, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  callback) ;

/// @brief Method OnCompletePingRoom, addr 0x592c6a8, size 0xc4, virtual false, abstract: false, final false
inline void OnCompletePingRoom(/* [CanBeNull] */ ::StringW  response, ::System::Action*  callback) ;

/// @brief Method OnCompleteSetEloValue, addr 0x592c5c0, size 0x24, virtual false, abstract: false, final false
inline void OnCompleteSetEloValue(/* [CanBeNull] */ ::StringW  response, ::System::Action*  callback) ;

/// @brief Method OnCompleteSubmitMatchScores, addr 0x592c340, size 0xc, virtual false, abstract: false, final false
inline void OnCompleteSubmitMatchScores(/* [CanBeNull] */ ::StringW  response) ;

/// @brief Method OnCompleteUnlockCompetitiveQueue, addr 0x592ca38, size 0xc4, virtual false, abstract: false, final false
inline void OnCompleteUnlockCompetitiveQueue(/* [CanBeNull] */ ::StringW  response, ::System::Action*  callback) ;

/// @brief Method OnCompleteValidateMatchJoin, addr 0x592bcdc, size 0xa0, virtual false, abstract: false, final false
inline void OnCompleteValidateMatchJoin(/* [CanBeNull] */ ::StringW  response, ::System::Action_1<bool>*  callback) ;

/// [IteratorStateMachine(typeof(GorillaTagCompetitiveServerApi::<PingRoom>d__47))]
/// @brief Method PingRoom, addr 0x592c5e4, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PingRoom(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  data, ::System::Action*  callback) ;

/// @brief Method RequestCreateMatchId, addr 0x5927f20, size 0x1e8, virtual false, abstract: false, final false
inline void RequestCreateMatchId(::System::Action_1<::StringW>*  callback) ;

/// @brief Method RequestGetRankInformation, addr 0x592b634, size 0x208, virtual false, abstract: false, final false
inline void RequestGetRankInformation(::System::Collections::Generic::List_1<::StringW>*  playfabs, ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  callback) ;

/// @brief Method RequestPingRoom, addr 0x59298e4, size 0x208, virtual false, abstract: false, final false
inline void RequestPingRoom(::StringW  matchId, ::System::Action*  callback) ;

/// @brief Method RequestSetEloValue, addr 0x592c34c, size 0x1ec, virtual false, abstract: false, final false
inline void RequestSetEloValue(float_t  desiredElo, ::System::Action*  callback) ;

/// @brief Method RequestSubmitMatchScores, addr 0x592bd7c, size 0x2f8, virtual false, abstract: false, final false
inline void RequestSubmitMatchScores(::StringW  matchId, ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*  finalScores) ;

/// @brief Method RequestSubmitMatchScores, addr 0x592c07c, size 0x20c, virtual false, abstract: false, final false
inline void RequestSubmitMatchScores(::StringW  matchId, ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*  playerScores) ;

/// @brief Method RequestUnlockCompetitiveQueue, addr 0x592c76c, size 0x200, virtual false, abstract: false, final false
inline void RequestUnlockCompetitiveQueue(bool  unlocked, ::System::Action*  callback) ;

/// @brief Method RequestValidateMatchJoin, addr 0x5928108, size 0x208, virtual false, abstract: false, final false
inline void RequestValidateMatchJoin(::StringW  matchId, ::System::Action_1<bool>*  callback) ;

/// [IteratorStateMachine(typeof(GorillaTagCompetitiveServerApi::<SetEloValue>d__44))]
/// @brief Method SetEloValue, addr 0x592c540, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SetEloValue(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData*  data, ::System::Action*  callback) ;

/// [IteratorStateMachine(typeof(GorillaTagCompetitiveServerApi::<SubmitMatchScores>d__41))]
/// @brief Method SubmitMatchScores, addr 0x592c290, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SubmitMatchScores(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*  data) ;

/// [IteratorStateMachine(typeof(GorillaTagCompetitiveServerApi::<UnlockCompetitiveQueue>d__50))]
/// @brief Method UnlockCompetitiveQueue, addr 0x592c974, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UnlockCompetitiveQueue(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*  data, ::System::Action*  callback) ;

/// [IteratorStateMachine(typeof(GorillaTagCompetitiveServerApi::<ValidateMatchJoin>d__37))]
/// @brief Method ValidateMatchJoin, addr 0x592bc18, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ValidateMatchJoin(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  data, ::System::Action_1<bool>*  callback) ;

constexpr bool const& __cordl_internal_get_CreateMatchIdInProgress() const;

constexpr bool& __cordl_internal_get_CreateMatchIdInProgress() ;

constexpr int32_t const& __cordl_internal_get_CreateMatchIdRetryCount() const;

constexpr int32_t& __cordl_internal_get_CreateMatchIdRetryCount() ;

constexpr bool const& __cordl_internal_get_GetRankInformationInProgress() const;

constexpr bool& __cordl_internal_get_GetRankInformationInProgress() ;

constexpr int32_t const& __cordl_internal_get_GetRankInformationRetryCount() const;

constexpr int32_t& __cordl_internal_get_GetRankInformationRetryCount() ;

constexpr int32_t const& __cordl_internal_get_MAX_SERVER_RETRIES() const;

constexpr int32_t& __cordl_internal_get_MAX_SERVER_RETRIES() ;

constexpr bool const& __cordl_internal_get_PingMatchInProgress() const;

constexpr bool& __cordl_internal_get_PingMatchInProgress() ;

constexpr int32_t const& __cordl_internal_get_PingMatchRetryCount() const;

constexpr int32_t& __cordl_internal_get_PingMatchRetryCount() ;

constexpr bool const& __cordl_internal_get_SetEloValueInProgress() const;

constexpr bool& __cordl_internal_get_SetEloValueInProgress() ;

constexpr int32_t const& __cordl_internal_get_SetEloValueRetryCount() const;

constexpr int32_t& __cordl_internal_get_SetEloValueRetryCount() ;

constexpr bool const& __cordl_internal_get_SubmitMatchScoresInProgress() const;

constexpr bool& __cordl_internal_get_SubmitMatchScoresInProgress() ;

constexpr int32_t const& __cordl_internal_get_SubmitMatchScoresRetryCount() const;

constexpr int32_t& __cordl_internal_get_SubmitMatchScoresRetryCount() ;

constexpr bool const& __cordl_internal_get_UnlockCompetitiveQueueInProgress() const;

constexpr bool& __cordl_internal_get_UnlockCompetitiveQueueInProgress() ;

constexpr int32_t const& __cordl_internal_get_UnlockCompetitiveQueueRetryCount() const;

constexpr int32_t& __cordl_internal_get_UnlockCompetitiveQueueRetryCount() ;

constexpr bool const& __cordl_internal_get_ValidateMatchJoinInProgress() const;

constexpr bool& __cordl_internal_get_ValidateMatchJoinInProgress() ;

constexpr int32_t const& __cordl_internal_get_ValidateMatchJoinRetryCount() const;

constexpr int32_t& __cordl_internal_get_ValidateMatchJoinRetryCount() ;

constexpr void __cordl_internal_set_CreateMatchIdInProgress(bool  value) ;

constexpr void __cordl_internal_set_CreateMatchIdRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_GetRankInformationInProgress(bool  value) ;

constexpr void __cordl_internal_set_GetRankInformationRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_MAX_SERVER_RETRIES(int32_t  value) ;

constexpr void __cordl_internal_set_PingMatchInProgress(bool  value) ;

constexpr void __cordl_internal_set_PingMatchRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_SetEloValueInProgress(bool  value) ;

constexpr void __cordl_internal_set_SetEloValueRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_SubmitMatchScoresInProgress(bool  value) ;

constexpr void __cordl_internal_set_SubmitMatchScoresRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_UnlockCompetitiveQueueInProgress(bool  value) ;

constexpr void __cordl_internal_set_UnlockCompetitiveQueueRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_ValidateMatchJoinInProgress(bool  value) ;

constexpr void __cordl_internal_set_ValidateMatchJoinRetryCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x592cafc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi(GorillaTagCompetitiveServerApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi(GorillaTagCompetitiveServerApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2250};

/// @brief Field MAX_SERVER_RETRIES, offset: 0x20, size: 0x4, def value: None
 int32_t  ___MAX_SERVER_RETRIES;

/// @brief Field GetRankInformationInProgress, offset: 0x24, size: 0x1, def value: None
 bool  ___GetRankInformationInProgress;

/// @brief Field GetRankInformationRetryCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___GetRankInformationRetryCount;

/// @brief Field CreateMatchIdInProgress, offset: 0x2c, size: 0x1, def value: None
 bool  ___CreateMatchIdInProgress;

/// @brief Field CreateMatchIdRetryCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___CreateMatchIdRetryCount;

/// @brief Field ValidateMatchJoinInProgress, offset: 0x34, size: 0x1, def value: None
 bool  ___ValidateMatchJoinInProgress;

/// @brief Field ValidateMatchJoinRetryCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___ValidateMatchJoinRetryCount;

/// @brief Field SubmitMatchScoresInProgress, offset: 0x3c, size: 0x1, def value: None
 bool  ___SubmitMatchScoresInProgress;

/// @brief Field SubmitMatchScoresRetryCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___SubmitMatchScoresRetryCount;

/// @brief Field SetEloValueInProgress, offset: 0x44, size: 0x1, def value: None
 bool  ___SetEloValueInProgress;

/// @brief Field SetEloValueRetryCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___SetEloValueRetryCount;

/// @brief Field PingMatchInProgress, offset: 0x4c, size: 0x1, def value: None
 bool  ___PingMatchInProgress;

/// @brief Field PingMatchRetryCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ___PingMatchRetryCount;

/// @brief Field UnlockCompetitiveQueueInProgress, offset: 0x54, size: 0x1, def value: None
 bool  ___UnlockCompetitiveQueueInProgress;

/// @brief Field UnlockCompetitiveQueueRetryCount, offset: 0x58, size: 0x4, def value: None
 int32_t  ___UnlockCompetitiveQueueRetryCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___MAX_SERVER_RETRIES) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___GetRankInformationInProgress) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___GetRankInformationRetryCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___CreateMatchIdInProgress) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___CreateMatchIdRetryCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___ValidateMatchJoinInProgress) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___ValidateMatchJoinRetryCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___SubmitMatchScoresInProgress) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___SubmitMatchScoresRetryCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___SetEloValueInProgress) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___SetEloValueRetryCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___PingMatchInProgress) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___PingMatchRetryCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___UnlockCompetitiveQueueInProgress) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi, ___UnlockCompetitiveQueueRetryCount) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/<ValidateMatchJoin>d__37
class CORDL_TYPE GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<bool>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x592e314, size 0x458, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x592e76c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x592e774, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x592e7ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x592e310, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x592bcb4, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37(GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37(GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2249};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  ___data;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  _____4__this;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi__ValidateMatchJoin_d__37) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/<UnlockCompetitiveQueue>d__50
class CORDL_TYPE GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x592de70, size 0x458, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x592e2c8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x592e2d0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x592e308, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x592de6c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x592ca10, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50(GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50(GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2248};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData*  ___data;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  _____4__this;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi__UnlockCompetitiveQueue_d__50) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/<SubmitMatchScores>d__41
class CORDL_TYPE GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  __4__this;

/// @brief Field <request>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x592d9d8, size 0x44c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x592de24, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x592de2c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x592de64, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x592d9d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x592c318, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41(GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41(GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2247};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*  ___data;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  _____4__this;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x38, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41, ____request_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41, ____retry_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SubmitMatchScores_d__41) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/<SetEloValue>d__44
class CORDL_TYPE GorillaTagCompetitiveServerApi__SetEloValue_d__44 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x592d8f0, size 0x9c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x592d98c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x592d994, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x592d9cc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x592d8ec, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x592c598, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagCompetitiveServerApi__SetEloValue_d__44() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__SetEloValue_d__44", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi__SetEloValue_d__44(GorillaTagCompetitiveServerApi__SetEloValue_d__44 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__SetEloValue_d__44", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi__SetEloValue_d__44(GorillaTagCompetitiveServerApi__SetEloValue_d__44 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2246};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi__SetEloValue_d__44) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/<PingRoom>d__47
class CORDL_TYPE GorillaTagCompetitiveServerApi__PingRoom_d__47 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x592d44c, size 0x458, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x592d8a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x592d8ac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x592d8e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x592d448, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x592c680, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagCompetitiveServerApi__PingRoom_d__47() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__PingRoom_d__47", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi__PingRoom_d__47(GorillaTagCompetitiveServerApi__PingRoom_d__47 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__PingRoom_d__47", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi__PingRoom_d__47(GorillaTagCompetitiveServerApi__PingRoom_d__47 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2245};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId*  ___data;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  _____4__this;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi__PingRoom_d__47) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/<GetRankInformation>d__31
class CORDL_TYPE GorillaTagCompetitiveServerApi__GetRankInformation_d__31 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x592d02c, size 0x3d4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x592d400, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x592d408, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x592d440, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x592d028, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x592b8e0, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagCompetitiveServerApi__GetRankInformation_d__31() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__GetRankInformation_d__31", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi__GetRankInformation_d__31(GorillaTagCompetitiveServerApi__GetRankInformation_d__31 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__GetRankInformation_d__31", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi__GetRankInformation_d__31(GorillaTagCompetitiveServerApi__GetRankInformation_d__31 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2244};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*  ___data;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  _____4__this;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi__GetRankInformation_d__31) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/<CreateMatchId>d__34
class CORDL_TYPE GorillaTagCompetitiveServerApi__CreateMatchId_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::StringW>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x592cb94, size 0x44c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x592cfe0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x592cfe8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x592d020, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x592cb90, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x592bb94, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagCompetitiveServerApi__CreateMatchId_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__CreateMatchId_d__34", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi__CreateMatchId_d__34(GorillaTagCompetitiveServerApi__CreateMatchId_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi__CreateMatchId_d__34", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi__CreateMatchId_d__34(GorillaTagCompetitiveServerApi__CreateMatchId_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2243};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed*  ___data;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveServerApi>  _____4__this;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi__CreateMatchId_d__34) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTagCompetitiveServerApi::RankedModeRequestDataPlatformed
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeUnlockCompetitiveQueueRequestData
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData : public ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed {
public:
// Declarations
/// @brief Field unlocked, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_unlocked, put=__cordl_internal_set_unlocked)) bool  unlocked;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData* New_ctor() ;

constexpr bool const& __cordl_internal_get_unlocked() const;

constexpr bool& __cordl_internal_get_unlocked() ;

constexpr void __cordl_internal_set_unlocked(bool  value) ;

/// @brief Method .ctor, addr 0x592c96c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData(GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData(GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2242};

/// @brief Field unlocked, offset: 0x30, size: 0x1, def value: None
 bool  ___unlocked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData, ___unlocked) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTagCompetitiveServerApi::RankedModeRequestDataPlatformed
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeSetEloValueRequestData
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData : public ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed {
public:
// Declarations
/// @brief Field elo, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_elo, put=__cordl_internal_set_elo)) float_t  elo;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_elo() const;

constexpr float_t& __cordl_internal_get_elo() ;

constexpr void __cordl_internal_set_elo(float_t  value) ;

/// @brief Method .ctor, addr 0x592c538, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData(GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData(GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2241};

/// @brief Field elo, offset: 0x30, size: 0x4, def value: None
 float_t  ___elo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData, ___elo) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTagCompetitiveServerApi::RankedModeRequestDataBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeSubmitMatchScoresRequestData
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData : public ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase {
public:
// Declarations
/// @brief Field matchId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchId, put=__cordl_internal_set_matchId)) ::StringW  matchId;

/// @brief Field playerScores, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerScores, put=__cordl_internal_set_playerScores)) ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*  playerScores;

/// @brief Field playfabId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabId, put=__cordl_internal_set_playfabId)) ::StringW  playfabId;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_matchId() const;

constexpr ::StringW& __cordl_internal_get_matchId() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>* const& __cordl_internal_get_playerScores() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*& __cordl_internal_get_playerScores() ;

constexpr ::StringW const& __cordl_internal_get_playfabId() const;

constexpr ::StringW& __cordl_internal_get_playfabId() ;

constexpr void __cordl_internal_set_matchId(::StringW  value) ;

constexpr void __cordl_internal_set_playerScores(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*  value) ;

constexpr void __cordl_internal_set_playfabId(::StringW  value) ;

/// @brief Method .ctor, addr 0x592c288, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData(GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData(GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2240};

/// @brief Field matchId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___matchId;

/// @brief Field playfabId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___playfabId;

/// @brief Field playerScores, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*  ___playerScores;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData, ___matchId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData, ___playfabId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData, ___playerScores) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModePlayerScore
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModePlayerScore : public ::System::Object {
public:
// Declarations
/// @brief Field gameScore, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameScore, put=__cordl_internal_set_gameScore)) float_t  gameScore;

/// @brief Field playfabId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabId, put=__cordl_internal_set_playfabId)) ::StringW  playfabId;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore* New_ctor() ;

constexpr float_t const& __cordl_internal_get_gameScore() const;

constexpr float_t& __cordl_internal_get_gameScore() ;

constexpr ::StringW const& __cordl_internal_get_playfabId() const;

constexpr ::StringW& __cordl_internal_get_playfabId() ;

constexpr void __cordl_internal_set_gameScore(float_t  value) ;

constexpr void __cordl_internal_set_playfabId(::StringW  value) ;

/// @brief Method .ctor, addr 0x592c074, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModePlayerScore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModePlayerScore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModePlayerScore(GorillaTagCompetitiveServerApi_RankedModePlayerScore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModePlayerScore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModePlayerScore(GorillaTagCompetitiveServerApi_RankedModePlayerScore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2239};

/// @brief Field playfabId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___playfabId;

/// @brief Field gameScore, offset: 0x18, size: 0x4, def value: None
 float_t  ___gameScore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore, ___playfabId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore, ___gameScore) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeValidateMatchJoinResponseData
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData : public ::System::Object {
public:
// Declarations
/// @brief Field validJoin, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_validJoin, put=__cordl_internal_set_validJoin)) bool  validJoin;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData* New_ctor() ;

constexpr bool const& __cordl_internal_get_validJoin() const;

constexpr bool& __cordl_internal_get_validJoin() ;

constexpr void __cordl_internal_set_validJoin(bool  value) ;

/// @brief Method .ctor, addr 0x592cb88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData(GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData(GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2238};

/// @brief Field validJoin, offset: 0x10, size: 0x1, def value: None
 bool  ___validJoin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData, ___validJoin) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeValidateMatchJoinResponseData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTagCompetitiveServerApi::RankedModeRequestDataPlatformed
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeRequestDataWithMatchId
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId : public ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed {
public:
// Declarations
/// @brief Field matchId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchId, put=__cordl_internal_set_matchId)) ::StringW  matchId;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_matchId() const;

constexpr ::StringW& __cordl_internal_get_matchId() ;

constexpr void __cordl_internal_set_matchId(::StringW  value) ;

/// @brief Method .ctor, addr 0x592bc10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId(GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId(GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2237};

/// @brief Field matchId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___matchId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId, ___matchId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeProgressionData
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeProgressionData : public ::System::Object {
public:
// Declarations
/// @brief Field playerData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerData, put=__cordl_internal_set_playerData)) ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>*  playerData;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>* const& __cordl_internal_get_playerData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>*& __cordl_internal_get_playerData() ;

constexpr void __cordl_internal_set_playerData(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>*  value) ;

/// @brief Method .ctor, addr 0x592cb80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeProgressionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeProgressionData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeProgressionData(GorillaTagCompetitiveServerApi_RankedModeProgressionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeProgressionData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeProgressionData(GorillaTagCompetitiveServerApi_RankedModeProgressionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2236};

/// @brief Field playerData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>*  ___playerData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData, ___playerData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTagCompetitiveServerApi::RankedModeProgressionPlatformData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModePlayerProgressionData
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData : public ::System::Object {
public:
// Declarations
/// @brief Field platformData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformData, put=__cordl_internal_set_platformData)) ::ArrayW<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>  platformData;

/// @brief Field playfabID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabID, put=__cordl_internal_set_playfabID)) ::StringW  playfabID;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*> const& __cordl_internal_get_platformData() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>& __cordl_internal_get_platformData() ;

constexpr ::StringW const& __cordl_internal_get_playfabID() const;

constexpr ::StringW& __cordl_internal_get_playfabID() ;

constexpr void __cordl_internal_set_platformData(::ArrayW<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>  value) ;

constexpr void __cordl_internal_set_playfabID(::StringW  value) ;

/// @brief Method .ctor, addr 0x592cb1c, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData(GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData(GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2235};

/// @brief Field playfabID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___playfabID;

/// @brief Field platformData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>  ___platformData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData, ___playfabID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData, ___platformData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeProgressionPlatformData
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData : public ::System::Object {
public:
// Declarations
/// @brief Field elo, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_elo, put=__cordl_internal_set_elo)) float_t  elo;

/// @brief Field majorTier, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_majorTier, put=__cordl_internal_set_majorTier)) int32_t  majorTier;

/// @brief Field minorTier, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minorTier, put=__cordl_internal_set_minorTier)) int32_t  minorTier;

/// @brief Field platform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::StringW  platform;

/// @brief Field rankProgress, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_rankProgress, put=__cordl_internal_set_rankProgress)) float_t  rankProgress;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_elo() const;

constexpr float_t& __cordl_internal_get_elo() ;

constexpr int32_t const& __cordl_internal_get_majorTier() const;

constexpr int32_t& __cordl_internal_get_majorTier() ;

constexpr int32_t const& __cordl_internal_get_minorTier() const;

constexpr int32_t& __cordl_internal_get_minorTier() ;

constexpr ::StringW const& __cordl_internal_get_platform() const;

constexpr ::StringW& __cordl_internal_get_platform() ;

constexpr float_t const& __cordl_internal_get_rankProgress() const;

constexpr float_t& __cordl_internal_get_rankProgress() ;

constexpr void __cordl_internal_set_elo(float_t  value) ;

constexpr void __cordl_internal_set_majorTier(int32_t  value) ;

constexpr void __cordl_internal_set_minorTier(int32_t  value) ;

constexpr void __cordl_internal_set_platform(::StringW  value) ;

constexpr void __cordl_internal_set_rankProgress(float_t  value) ;

/// @brief Method .ctor, addr 0x592cb14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData(GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData(GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2234};

/// @brief Field platform, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___platform;

/// @brief Field elo, offset: 0x18, size: 0x4, def value: None
 float_t  ___elo;

/// @brief Field majorTier, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___majorTier;

/// @brief Field minorTier, offset: 0x20, size: 0x4, def value: None
 int32_t  ___minorTier;

/// @brief Field rankProgress, offset: 0x24, size: 0x4, def value: None
 float_t  ___rankProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData, ___platform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData, ___elo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData, ___majorTier) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData, ___minorTier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData, ___rankProgress) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTagCompetitiveServerApi::RankedModeRequestDataPlatformed
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeProgressionRequestData
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData : public ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed {
public:
// Declarations
/// @brief Field playfabIds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabIds, put=__cordl_internal_set_playfabIds)) ::System::Collections::Generic::List_1<::StringW>*  playfabIds;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_playfabIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_playfabIds() ;

constexpr void __cordl_internal_set_playfabIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x592b83c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData(GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData(GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2233};

/// @brief Field playfabIds, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___playfabIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData, ___playfabIds) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTagCompetitiveServerApi::RankedModeRequestDataBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeRequestDataPlatformed
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed : public ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase {
public:
// Declarations
/// @brief Field platform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::StringW  platform;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_platform() const;

constexpr ::StringW& __cordl_internal_get_platform() ;

constexpr void __cordl_internal_set_platform(::StringW  value) ;

/// @brief Method .ctor, addr 0x592baf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed(GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed(GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2232};

/// @brief Field platform, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___platform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed, ___platform) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveServerApi/RankedModeRequestDataBase
class CORDL_TYPE GorillaTagCompetitiveServerApi_RankedModeRequestDataBase : public ::System::Object {
public:
// Declarations
/// @brief Field mothershipEnvId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipEnvId, put=__cordl_internal_set_mothershipEnvId)) ::StringW  mothershipEnvId;

/// @brief Field mothershipId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipId, put=__cordl_internal_set_mothershipId)) ::StringW  mothershipId;

/// @brief Field mothershipToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipToken, put=__cordl_internal_set_mothershipToken)) ::StringW  mothershipToken;

static inline ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_mothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_mothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipId() const;

constexpr ::StringW& __cordl_internal_get_mothershipId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipToken() const;

constexpr ::StringW& __cordl_internal_get_mothershipToken() ;

constexpr void __cordl_internal_set_mothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x592cb0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_RankedModeRequestDataBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeRequestDataBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveServerApi_RankedModeRequestDataBase(GorillaTagCompetitiveServerApi_RankedModeRequestDataBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveServerApi_RankedModeRequestDataBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveServerApi_RankedModeRequestDataBase(GorillaTagCompetitiveServerApi_RankedModeRequestDataBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2231};

/// @brief Field mothershipId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___mothershipId;

/// @brief Field mothershipToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___mothershipToken;

/// @brief Field mothershipEnvId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___mothershipEnvId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase, ___mothershipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase, ___mothershipToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase, ___mothershipEnvId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
