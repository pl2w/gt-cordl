#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDRequestData_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager)
namespace GlobalNamespace {
class AppealAgeRequest;
}
namespace GlobalNamespace {
class AttemptAgeUpdateData;
}
namespace GlobalNamespace {
class AttemptAgeUpdateRequest;
}
namespace GlobalNamespace {
struct EKIDFeatures;
}
namespace GlobalNamespace {
class GetPlayerData_Data;
}
namespace GlobalNamespace {
class GetRequirementsData;
}
namespace GlobalNamespace {
class KIDManager_OnEmailResultReceived;
}
namespace GlobalNamespace {
struct KIDManager__AgeGateFlow_d__114;
}
namespace GlobalNamespace {
struct KIDManager__CheckKIDNewPlayerDateTime_d__103;
}
namespace GlobalNamespace {
struct KIDManager__CheckKIDPhase_d__102;
}
namespace GlobalNamespace {
struct KIDManager__CheckWarningScreensOptedIn_d__92;
}
namespace GlobalNamespace {
struct KIDManager__InitialiseKID_d__94;
}
namespace GlobalNamespace {
template<typename Q>
struct KIDManager__KIDServerWebRequestNoResponse_d__141_1;
}
namespace GlobalNamespace {
template<typename T,typename Q>
struct KIDManager__KIDServerWebRequest_d__140_2;
}
namespace GlobalNamespace {
struct KIDManager__ProcessAgeGate_d__115;
}
namespace GlobalNamespace {
struct KIDManager__SendOptInPermissions_d__111;
}
namespace GlobalNamespace {
struct KIDManager__Server_AppealAge_d__135;
}
namespace GlobalNamespace {
struct KIDManager__Server_AttemptAgeUpdate_d__134;
}
namespace GlobalNamespace {
struct KIDManager__Server_GetPlayerData_d__130;
}
namespace GlobalNamespace {
struct KIDManager__Server_GetRequirements_d__139;
}
namespace GlobalNamespace {
struct KIDManager__Server_OptIn_d__138;
}
namespace GlobalNamespace {
struct KIDManager__Server_SendChallengeEmail_d__136;
}
namespace GlobalNamespace {
struct KIDManager__Server_SetConfirmedStatus_d__131;
}
namespace GlobalNamespace {
struct KIDManager__Server_SetOptInPermissions_d__137;
}
namespace GlobalNamespace {
struct KIDManager__Server_UpgradeSession_d__132;
}
namespace GlobalNamespace {
struct KIDManager__Server_VerifyAge_d__133;
}
namespace GlobalNamespace {
struct KIDManager__SetAndSendEmail_d__110;
}
namespace GlobalNamespace {
struct KIDManager__SetKIDOptIn_d__109;
}
namespace GlobalNamespace {
struct KIDManager__Start_d__70;
}
namespace GlobalNamespace {
struct KIDManager__TryAppealAge_d__90;
}
namespace GlobalNamespace {
struct KIDManager__TryAttemptAgeUpdate_d__89;
}
namespace GlobalNamespace {
struct KIDManager__TryGetPlayerData_d__81;
}
namespace GlobalNamespace {
struct KIDManager__TryGetRequirements_d__82;
}
namespace GlobalNamespace {
struct KIDManager__TrySendChallengeEmailRequest_d__84;
}
namespace GlobalNamespace {
struct KIDManager__TrySendOptInPermissions_d__85;
}
namespace GlobalNamespace {
struct KIDManager__TrySendUpgradeSessionChallengeEmail_d__86;
}
namespace GlobalNamespace {
struct KIDManager__TrySetHasConfirmedStatus_d__87;
}
namespace GlobalNamespace {
struct KIDManager__TryUpgradeSession_d__88;
}
namespace GlobalNamespace {
struct KIDManager__TryVerifyAgeResponse_d__83;
}
namespace GlobalNamespace {
struct KIDManager__UpdateSession_d__91;
}
namespace GlobalNamespace {
struct KIDManager__UseKID_d__101;
}
namespace GlobalNamespace {
struct KIDManager__WaitForAndUpdateNewSession_d__168;
}
namespace GlobalNamespace {
struct KIDManager__WaitForAuthentication_d__113;
}
namespace GlobalNamespace {
class KIDManager___c;
}
namespace GlobalNamespace {
class KIDManager___c__DisplayClass101_0;
}
namespace GlobalNamespace {
class KIDManager___c__DisplayClass102_0;
}
namespace GlobalNamespace {
class KIDManager___c__DisplayClass103_0;
}
namespace GlobalNamespace {
struct Permission_ManagedByEnum;
}
namespace GlobalNamespace {
class SendChallengeEmailRequest;
}
namespace GlobalNamespace {
struct SessionStatus;
}
namespace GlobalNamespace {
class SetOptInPermissionsRequest;
}
namespace GlobalNamespace {
class TMPSession;
}
namespace GlobalNamespace {
class UpgradeSessionData;
}
namespace GlobalNamespace {
class UpgradeSessionRequest;
}
namespace GlobalNamespace {
class VerifyAgeData;
}
namespace GlobalNamespace {
class VerifyAgeRequest;
}
namespace KID::Model {
struct AgeStatusType;
}
namespace KID::Model {
class Permission;
}
namespace KID::Model {
class RequestedPermission;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
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
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDManager;
}
namespace GlobalNamespace {
class KIDManager_OnEmailResultReceived;
}
namespace GlobalNamespace {
class KIDManager___c;
}
namespace GlobalNamespace {
class KIDManager___c__DisplayClass101_0;
}
namespace GlobalNamespace {
class KIDManager___c__DisplayClass102_0;
}
namespace GlobalNamespace {
class KIDManager___c__DisplayClass103_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDManager*);
MARK_REF_T(::GlobalNamespace::KIDManager_OnEmailResultReceived*);
MARK_REF_T(::GlobalNamespace::KIDManager___c*);
MARK_REF_T(::GlobalNamespace::KIDManager___c__DisplayClass101_0*);
MARK_REF_T(::GlobalNamespace::KIDManager___c__DisplayClass102_0*);
MARK_REF_T(::GlobalNamespace::KIDManager___c__DisplayClass103_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager*, "", "KIDManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager_OnEmailResultReceived*, "", "KIDManager/OnEmailResultReceived");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager___c*, "", "KIDManager/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager___c__DisplayClass101_0*, "", "KIDManager/<>c__DisplayClass101_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager___c__DisplayClass102_0*, "", "KIDManager/<>c__DisplayClass102_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager___c__DisplayClass103_0*, "", "KIDManager/<>c__DisplayClass103_0");
// Dependencies KIDRequestData, SessionStatus, System.DateTime, System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDManager
class CORDL_TYPE KIDManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnEmailResultReceived = ::GlobalNamespace::KIDManager_OnEmailResultReceived;

using _AgeGateFlow_d__114 = ::GlobalNamespace::KIDManager__AgeGateFlow_d__114;

using _CheckKIDNewPlayerDateTime_d__103 = ::GlobalNamespace::KIDManager__CheckKIDNewPlayerDateTime_d__103;

using _CheckKIDPhase_d__102 = ::GlobalNamespace::KIDManager__CheckKIDPhase_d__102;

using _CheckWarningScreensOptedIn_d__92 = ::GlobalNamespace::KIDManager__CheckWarningScreensOptedIn_d__92;

using _InitialiseKID_d__94 = ::GlobalNamespace::KIDManager__InitialiseKID_d__94;

template<typename Q>
using _KIDServerWebRequestNoResponse_d__141_1 = ::GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>;

template<typename T,typename Q>
using _KIDServerWebRequest_d__140_2 = ::GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T, Q>;

using _ProcessAgeGate_d__115 = ::GlobalNamespace::KIDManager__ProcessAgeGate_d__115;

using _SendOptInPermissions_d__111 = ::GlobalNamespace::KIDManager__SendOptInPermissions_d__111;

using _Server_AppealAge_d__135 = ::GlobalNamespace::KIDManager__Server_AppealAge_d__135;

using _Server_AttemptAgeUpdate_d__134 = ::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134;

using _Server_GetPlayerData_d__130 = ::GlobalNamespace::KIDManager__Server_GetPlayerData_d__130;

using _Server_GetRequirements_d__139 = ::GlobalNamespace::KIDManager__Server_GetRequirements_d__139;

using _Server_OptIn_d__138 = ::GlobalNamespace::KIDManager__Server_OptIn_d__138;

using _Server_SendChallengeEmail_d__136 = ::GlobalNamespace::KIDManager__Server_SendChallengeEmail_d__136;

using _Server_SetConfirmedStatus_d__131 = ::GlobalNamespace::KIDManager__Server_SetConfirmedStatus_d__131;

using _Server_SetOptInPermissions_d__137 = ::GlobalNamespace::KIDManager__Server_SetOptInPermissions_d__137;

using _Server_UpgradeSession_d__132 = ::GlobalNamespace::KIDManager__Server_UpgradeSession_d__132;

using _Server_VerifyAge_d__133 = ::GlobalNamespace::KIDManager__Server_VerifyAge_d__133;

using _SetAndSendEmail_d__110 = ::GlobalNamespace::KIDManager__SetAndSendEmail_d__110;

using _SetKIDOptIn_d__109 = ::GlobalNamespace::KIDManager__SetKIDOptIn_d__109;

using _Start_d__70 = ::GlobalNamespace::KIDManager__Start_d__70;

using _TryAppealAge_d__90 = ::GlobalNamespace::KIDManager__TryAppealAge_d__90;

using _TryAttemptAgeUpdate_d__89 = ::GlobalNamespace::KIDManager__TryAttemptAgeUpdate_d__89;

using _TryGetPlayerData_d__81 = ::GlobalNamespace::KIDManager__TryGetPlayerData_d__81;

using _TryGetRequirements_d__82 = ::GlobalNamespace::KIDManager__TryGetRequirements_d__82;

using _TrySendChallengeEmailRequest_d__84 = ::GlobalNamespace::KIDManager__TrySendChallengeEmailRequest_d__84;

using _TrySendOptInPermissions_d__85 = ::GlobalNamespace::KIDManager__TrySendOptInPermissions_d__85;

using _TrySendUpgradeSessionChallengeEmail_d__86 = ::GlobalNamespace::KIDManager__TrySendUpgradeSessionChallengeEmail_d__86;

using _TrySetHasConfirmedStatus_d__87 = ::GlobalNamespace::KIDManager__TrySetHasConfirmedStatus_d__87;

using _TryUpgradeSession_d__88 = ::GlobalNamespace::KIDManager__TryUpgradeSession_d__88;

using _TryVerifyAgeResponse_d__83 = ::GlobalNamespace::KIDManager__TryVerifyAgeResponse_d__83;

using _UpdateSession_d__91 = ::GlobalNamespace::KIDManager__UpdateSession_d__91;

using _UseKID_d__101 = ::GlobalNamespace::KIDManager__UseKID_d__101;

using _WaitForAndUpdateNewSession_d__168 = ::GlobalNamespace::KIDManager__WaitForAndUpdateNewSession_d__168;

using _WaitForAuthentication_d__113 = ::GlobalNamespace::KIDManager__WaitForAuthentication_d__113;

using __c = ::GlobalNamespace::KIDManager___c;

using __c__DisplayClass101_0 = ::GlobalNamespace::KIDManager___c__DisplayClass101_0;

using __c__DisplayClass102_0 = ::GlobalNamespace::KIDManager___c__DisplayClass102_0;

using __c__DisplayClass103_0 = ::GlobalNamespace::KIDManager___c__DisplayClass103_0;

/// @brief Field <CurrentSession>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__CurrentSession_k__BackingField, put=setStaticF__CurrentSession_k__BackingField)) ::GlobalNamespace::TMPSession*  _CurrentSession_k__BackingField;

/// @brief Field <DbgLocale>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__DbgLocale_k__BackingField, put=setStaticF__DbgLocale_k__BackingField)) ::StringW  _DbgLocale_k__BackingField;

/// @brief Field <HasOptedInToKID>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__HasOptedInToKID_k__BackingField, put=setStaticF__HasOptedInToKID_k__BackingField)) bool  _HasOptedInToKID_k__BackingField;

/// @brief Field <InitialisationComplete>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__InitialisationComplete_k__BackingField, put=setStaticF__InitialisationComplete_k__BackingField)) bool  _InitialisationComplete_k__BackingField;

/// @brief Field <InitialisationSuccessful>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__InitialisationSuccessful_k__BackingField, put=setStaticF__InitialisationSuccessful_k__BackingField)) bool  _InitialisationSuccessful_k__BackingField;

/// @brief Field <PreviousStatus>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PreviousStatus_k__BackingField, put=setStaticF__PreviousStatus_k__BackingField)) ::GlobalNamespace::SessionStatus  _PreviousStatus_k__BackingField;

/// @brief Field <_ageGateRequirements>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___ageGateRequirements_k__BackingField, put=setStaticF___ageGateRequirements_k__BackingField)) ::GlobalNamespace::GetRequirementsData*  __ageGateRequirements_k__BackingField;

/// @brief Field _debugKIDLocalePlayerPrefRef, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__debugKIDLocalePlayerPrefRef, put=setStaticF__debugKIDLocalePlayerPrefRef)) ::StringW  _debugKIDLocalePlayerPrefRef;

/// @brief Field _emailAddress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__emailAddress, put=setStaticF__emailAddress)) ::StringW  _emailAddress;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::KIDManager>  _instance;

/// @brief Field _isUpdatingNewSession, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isUpdatingNewSession, put=setStaticF__isUpdatingNewSession)) bool  _isUpdatingNewSession;

/// @brief Field _kIDNewPlayerDateTime, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__kIDNewPlayerDateTime, put=setStaticF__kIDNewPlayerDateTime)) ::System::Nullable_1<::System::DateTime>  _kIDNewPlayerDateTime;

/// @brief Field _kIDPhase, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__kIDPhase, put=setStaticF__kIDPhase)) int32_t  _kIDPhase;

/// @brief Field _onKIDInitialisationComplete, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onKIDInitialisationComplete, put=setStaticF__onKIDInitialisationComplete)) ::System::Action*  _onKIDInitialisationComplete;

/// @brief Field _onSessionUpdated_AnyPermission, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onSessionUpdated_AnyPermission, put=setStaticF__onSessionUpdated_AnyPermission)) ::System::Action*  _onSessionUpdated_AnyPermission;

/// @brief Field _onSessionUpdated_CustomUsernames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onSessionUpdated_CustomUsernames, put=setStaticF__onSessionUpdated_CustomUsernames)) ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  _onSessionUpdated_CustomUsernames;

/// @brief Field _onSessionUpdated_Multiplayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onSessionUpdated_Multiplayer, put=setStaticF__onSessionUpdated_Multiplayer)) ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  _onSessionUpdated_Multiplayer;

/// @brief Field _onSessionUpdated_PrivateRooms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onSessionUpdated_PrivateRooms, put=setStaticF__onSessionUpdated_PrivateRooms)) ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  _onSessionUpdated_PrivateRooms;

/// @brief Field _onSessionUpdated_UGC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onSessionUpdated_UGC, put=setStaticF__onSessionUpdated_UGC)) ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  _onSessionUpdated_UGC;

/// @brief Field _onSessionUpdated_VoiceChat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onSessionUpdated_VoiceChat, put=setStaticF__onSessionUpdated_VoiceChat)) ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  _onSessionUpdated_VoiceChat;

/// @brief Field _previousPermissionSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__previousPermissionSettings, put=setStaticF__previousPermissionSettings)) ::System::Collections::Generic::Dictionary_2<::StringW,::KID::Model::Permission*>*  _previousPermissionSettings;

/// @brief Field _requestCancellationSource, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__requestCancellationSource, put=setStaticF__requestCancellationSource)) ::System::Threading::CancellationTokenSource*  _requestCancellationSource;

/// @brief Field _sessionUpdatedCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sessionUpdatedCallback, put=setStaticF__sessionUpdatedCallback)) ::System::Action*  _sessionUpdatedCallback;

/// @brief Field _titleDataReady, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__titleDataReady, put=setStaticF__titleDataReady)) bool  _titleDataReady;

/// @brief Field _useKid, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__useKid, put=setStaticF__useKid)) bool  _useKid;

/// @brief Field onEmailResultReceived, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onEmailResultReceived, put=setStaticF_onEmailResultReceived)) ::GlobalNamespace::KIDManager_OnEmailResultReceived*  onEmailResultReceived;

/// @brief Field parentEmailForUserPlayerPrefRef, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_parentEmailForUserPlayerPrefRef, put=setStaticF_parentEmailForUserPlayerPrefRef)) ::StringW  parentEmailForUserPlayerPrefRef;

/// [AsyncStateMachine(typeof(KIDManager::<AgeGateFlow>d__114))]
/// @brief Method AgeGateFlow, addr 0x5a30050, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>* AgeGateFlow(::GlobalNamespace::GetPlayerData_Data*  newPlayerData) ;

/// @brief Method Awake, addr 0x5a2ccac, size 0x20c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelToken, addr 0x5a2f278, size 0x64, virtual false, abstract: false, final false
static inline void CancelToken() ;

/// @brief Method CheckFeatureOptIn, addr 0x5a2d2d4, size 0x258, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<bool,bool> CheckFeatureOptIn(::GlobalNamespace::EKIDFeatures  feature, ::KID::Model::Permission*  permissionData) ;

/// @brief Method CheckFeatureSettingEnabled, addr 0x5a2da78, size 0x224, virtual false, abstract: false, final false
static inline bool CheckFeatureSettingEnabled(::GlobalNamespace::EKIDFeatures  feature) ;

/// [AsyncStateMachine(typeof(KIDManager::<CheckKIDNewPlayerDateTime>d__103))]
/// @brief Method CheckKIDNewPlayerDateTime, addr 0x5a2f4b4, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* CheckKIDNewPlayerDateTime() ;

/// [AsyncStateMachine(typeof(KIDManager::<CheckKIDPhase>d__102))]
/// @brief Method CheckKIDPhase, addr 0x5a2f3c8, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<int32_t>* CheckKIDPhase() ;

/// [AsyncStateMachine(typeof(KIDManager::<CheckWarningScreensOptedIn>d__92))]
/// @brief Method CheckWarningScreensOptedIn, addr 0x5a2e618, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* CheckWarningScreensOptedIn() ;

/// @brief Method ClearSession, addr 0x5a2f138, size 0x8c, virtual false, abstract: false, final false
static inline void ClearSession() ;

/// @brief Method DeleteStoredPermissions, addr 0x5a2f1c4, size 0x4, virtual false, abstract: false, final false
static inline void DeleteStoredPermissions() ;

/// @brief Method GetActiveAccountStatus, addr 0x5a2d054, size 0x118, virtual false, abstract: false, final false
static inline ::KID::Model::AgeStatusType GetActiveAccountStatus() ;

/// @brief Method GetActiveAccountStatusNiceString, addr 0x5a2cfac, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW GetActiveAccountStatusNiceString() ;

/// @brief Method GetAllPermissionsData, addr 0x5a2d16c, size 0x168, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* GetAllPermissionsData() ;

/// @brief Method GetIsEnabled, addr 0x5a2f5a0, size 0x158, virtual false, abstract: false, final false
static inline bool GetIsEnabled(::StringW  jsonTxt) ;

/// @brief Method GetNewPlayerDateTime, addr 0x5a2f7d4, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::DateTime> GetNewPlayerDateTime(::StringW  jsonTxt) ;

/// @brief Method GetOptInKey, addr 0x5a30244, size 0x88, virtual false, abstract: false, final false
static inline ::StringW GetOptInKey(::GlobalNamespace::EKIDFeatures  feature) ;

/// @brief Method GetPermissionDataByFeature, addr 0x5a2d52c, size 0x22c, virtual false, abstract: false, final false
static inline ::KID::Model::Permission* GetPermissionDataByFeature(::GlobalNamespace::EKIDFeatures  feature) ;

/// @brief Method GetPhase, addr 0x5a2f6f8, size 0xdc, virtual false, abstract: false, final false
static inline int32_t GetPhase(::StringW  jsonTxt) ;

/// @brief Method HasAllPermissions, addr 0x5a2fa8c, size 0x12c, virtual false, abstract: false, final false
static inline bool HasAllPermissions() ;

/// @brief Method HasPermissionChanged, addr 0x5a31a04, size 0x120, virtual false, abstract: false, final false
static inline bool HasPermissionChanged(::KID::Model::Permission*  newValue) ;

/// @brief Method HasPermissionToUseFeature, addr 0x5a2fe98, size 0xcc, virtual false, abstract: false, final false
static inline bool HasPermissionToUseFeature(::GlobalNamespace::EKIDFeatures  feature) ;

/// @brief Method HasSessionChanged, addr 0x5a31808, size 0x1fc, virtual false, abstract: false, final false
static inline bool HasSessionChanged(::GlobalNamespace::TMPSession*  newSession) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)0)]
/// @brief Method InitialiseBootFlow, addr 0x5a2e704, size 0xb4, virtual false, abstract: false, final false
static inline void InitialiseBootFlow() ;

/// [AsyncStateMachine(typeof(KIDManager::<InitialiseKID>d__94))]
/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method InitialiseKID, addr 0x5a2e7b8, size 0x94, virtual false, abstract: false, final false
static inline void InitialiseKID() ;

/// @brief Method IsAdult, addr 0x5a2f994, size 0xf8, virtual false, abstract: false, final false
static inline bool IsAdult() ;

/// [AsyncStateMachine(typeof(KIDManager::<KIDServerWebRequest>d__140`2<T, Q>))]
/// @brief Method KIDServerWebRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename Q>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::type_constraint<Q, ::GlobalNamespace::KIDRequestData*>)
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<int64_t,T,::StringW>>* KIDServerWebRequest(::StringW  endpoint, ::StringW  operationType, Q  requestData, ::StringW  queryParams, int32_t  maxRetries, ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable) ;

/// [AsyncStateMachine(typeof(KIDManager::<KIDServerWebRequestNoResponse>d__141`1<Q>))]
/// @brief Method KIDServerWebRequestNoResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename Q>
requires(::cordl_internals::type_constraint<Q, ::GlobalNamespace::KIDRequestData*>)
static inline ::System::Threading::Tasks::Task_1<int64_t>* KIDServerWebRequestNoResponse(::StringW  endpoint, ::StringW  operationType, Q  requestData, int32_t  maxRetries, ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable) ;

static inline ::GlobalNamespace::KIDManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a2cf48, size 0x64, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSessionUpdated, addr 0x5a2eb8c, size 0x5ac, virtual false, abstract: false, final false
static inline void OnSessionUpdated() ;

/// [AsyncStateMachine(typeof(KIDManager::<ProcessAgeGate>d__115))]
/// @brief Method ProcessAgeGate, addr 0x5a30158, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* ProcessAgeGate() ;

/// @brief Method RegisterSessionUpdateCallback_AnyPermission, addr 0x5a30d0c, size 0xc4, virtual false, abstract: false, final false
static inline void RegisterSessionUpdateCallback_AnyPermission(::System::Action*  callback) ;

/// @brief Method RegisterSessionUpdatedCallback_CustomUsernames, addr 0x5a31074, size 0xf0, virtual false, abstract: false, final false
static inline void RegisterSessionUpdatedCallback_CustomUsernames(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method RegisterSessionUpdatedCallback_Multiplayer, addr 0x5a31434, size 0xf0, virtual false, abstract: false, final false
static inline void RegisterSessionUpdatedCallback_Multiplayer(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method RegisterSessionUpdatedCallback_PrivateRooms, addr 0x5a31254, size 0xf0, virtual false, abstract: false, final false
static inline void RegisterSessionUpdatedCallback_PrivateRooms(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method RegisterSessionUpdatedCallback_UGC, addr 0x5a31614, size 0xf0, virtual false, abstract: false, final false
static inline void RegisterSessionUpdatedCallback_UGC(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method RegisterSessionUpdatedCallback_VoiceChat, addr 0x5a30e94, size 0xf0, virtual false, abstract: false, final false
static inline void RegisterSessionUpdatedCallback_VoiceChat(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method ResetCancellationToken, addr 0x5a2f1c8, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationTokenSource* ResetCancellationToken() ;

/// [AsyncStateMachine(typeof(KIDManager::<SendOptInPermissions>d__111))]
/// @brief Method SendOptInPermissions, addr 0x5a2fdac, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* SendOptInPermissions() ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_AppealAge>d__135))]
/// @brief Method Server_AppealAge, addr 0x5a30800, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* Server_AppealAge(::GlobalNamespace::AppealAgeRequest*  request, ::System::Action*  failureCallback) ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_AttemptAgeUpdate>d__134))]
/// @brief Method Server_AttemptAgeUpdate, addr 0x5a306f8, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AttemptAgeUpdateData*>* Server_AttemptAgeUpdate(::GlobalNamespace::AttemptAgeUpdateRequest*  request, ::System::Action*  failureCallback) ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_GetPlayerData>d__130))]
/// @brief Method Server_GetPlayerData, addr 0x5a302cc, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetPlayerData_Data*>* Server_GetPlayerData(bool  forceRefresh, ::System::Action*  failureCallback) ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_GetRequirements>d__139))]
/// @brief Method Server_GetRequirements, addr 0x5a30c20, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetRequirementsData*>* Server_GetRequirements() ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_OptIn>d__138))]
/// @brief Method Server_OptIn, addr 0x5a30b34, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* Server_OptIn() ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_SendChallengeEmail>d__136))]
/// @brief Method Server_SendChallengeEmail, addr 0x5a3090c, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* Server_SendChallengeEmail(::GlobalNamespace::SendChallengeEmailRequest*  request) ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_SetConfirmedStatus>d__131))]
/// @brief Method Server_SetConfirmedStatus, addr 0x5a303e4, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* Server_SetConfirmedStatus() ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_SetOptInPermissions>d__137))]
/// @brief Method Server_SetOptInPermissions, addr 0x5a30a18, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* Server_SetOptInPermissions(::GlobalNamespace::SetOptInPermissionsRequest*  request, ::System::Action*  failureCallback) ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_UpgradeSession>d__132))]
/// @brief Method Server_UpgradeSession, addr 0x5a304d0, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UpgradeSessionData*>* Server_UpgradeSession(::GlobalNamespace::UpgradeSessionRequest*  request) ;

/// [AsyncStateMachine(typeof(KIDManager::<Server_VerifyAge>d__133))]
/// @brief Method Server_VerifyAge, addr 0x5a305d8, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* Server_VerifyAge(::GlobalNamespace::VerifyAgeRequest*  request, ::System::Action*  failureCallback) ;

/// [AsyncStateMachine(typeof(KIDManager::<SetAndSendEmail>d__110))]
/// @brief Method SetAndSendEmail, addr 0x5a2fca4, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* SetAndSendEmail(::StringW  email) ;

/// @brief Method SetFeatureOptIn, addr 0x5a2d758, size 0x320, virtual false, abstract: false, final false
static inline void SetFeatureOptIn(::GlobalNamespace::EKIDFeatures  feature, bool  optedIn) ;

/// [AsyncStateMachine(typeof(KIDManager::<SetKIDOptIn>d__109))]
/// @brief Method SetKIDOptIn, addr 0x5a2fbb8, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* SetKIDOptIn() ;

/// [AsyncStateMachine(typeof(KIDManager::<Start>d__70))]
/// @brief Method Start, addr 0x5a2ceb8, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(KIDManager::<TryAppealAge>d__90))]
/// @brief Method TryAppealAge, addr 0x5a2e42c, size 0x114, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* TryAppealAge(::StringW  email, int32_t  newAge) ;

/// [AsyncStateMachine(typeof(KIDManager::<TryAttemptAgeUpdate>d__89))]
/// @brief Method TryAttemptAgeUpdate, addr 0x5a27f84, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AttemptAgeUpdateData*>* TryAttemptAgeUpdate(int32_t  age) ;

/// @brief Method TryGetAgeStatusTypeFromAge, addr 0x5a27dd0, size 0x1b4, virtual false, abstract: false, final false
static inline bool TryGetAgeStatusTypeFromAge(int32_t  age, ::by_ref<::KID::Model::AgeStatusType>  ageType) ;

/// [AsyncStateMachine(typeof(KIDManager::<TryGetPlayerData>d__81))]
/// @brief Method TryGetPlayerData, addr 0x5a2dc9c, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetPlayerData_Data*>* TryGetPlayerData(bool  forceRefresh) ;

/// [AsyncStateMachine(typeof(KIDManager::<TryGetRequirements>d__82))]
/// @brief Method TryGetRequirements, addr 0x5a2dd9c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetRequirementsData*>* TryGetRequirements() ;

/// [AsyncStateMachine(typeof(KIDManager::<TrySendChallengeEmailRequest>d__84))]
/// @brief Method TrySendChallengeEmailRequest, addr 0x5a2df74, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* TrySendChallengeEmailRequest() ;

/// [AsyncStateMachine(typeof(KIDManager::<TrySendOptInPermissions>d__85))]
/// @brief Method TrySendOptInPermissions, addr 0x5a2e060, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* TrySendOptInPermissions() ;

/// [AsyncStateMachine(typeof(KIDManager::<TrySendUpgradeSessionChallengeEmail>d__86))]
/// @brief Method TrySendUpgradeSessionChallengeEmail, addr 0x5a2e14c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* TrySendUpgradeSessionChallengeEmail() ;

/// [AsyncStateMachine(typeof(KIDManager::<TrySetHasConfirmedStatus>d__87))]
/// @brief Method TrySetHasConfirmedStatus, addr 0x5a2e238, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* TrySetHasConfirmedStatus() ;

/// [AsyncStateMachine(typeof(KIDManager::<TryUpgradeSession>d__88))]
/// @brief Method TryUpgradeSession, addr 0x5a2e324, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UpgradeSessionData*>* TryUpgradeSession(::System::Collections::Generic::List_1<::StringW>*  requestedPermissions) ;

/// [AsyncStateMachine(typeof(KIDManager::<TryVerifyAgeResponse>d__83))]
/// @brief Method TryVerifyAgeResponse, addr 0x5a2de88, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::VerifyAgeData*>* TryVerifyAgeResponse() ;

/// @brief Method UnregisterSessionUpdateCallback_AnyPermission, addr 0x5a30dd0, size 0xc4, virtual false, abstract: false, final false
static inline void UnregisterSessionUpdateCallback_AnyPermission(::System::Action*  callback) ;

/// @brief Method UnregisterSessionUpdatedCallback_CustomUsernames, addr 0x5a31164, size 0xf0, virtual false, abstract: false, final false
static inline void UnregisterSessionUpdatedCallback_CustomUsernames(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method UnregisterSessionUpdatedCallback_Multiplayer, addr 0x5a31524, size 0xf0, virtual false, abstract: false, final false
static inline void UnregisterSessionUpdatedCallback_Multiplayer(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method UnregisterSessionUpdatedCallback_PrivateRooms, addr 0x5a31344, size 0xf0, virtual false, abstract: false, final false
static inline void UnregisterSessionUpdatedCallback_PrivateRooms(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method UnregisterSessionUpdatedCallback_VoiceChat, addr 0x5a30f84, size 0xf0, virtual false, abstract: false, final false
static inline void UnregisterSessionUpdatedCallback_VoiceChat(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  callback) ;

/// @brief Method UpdatePermissions, addr 0x5a2e84c, size 0x340, virtual false, abstract: false, final false
static inline bool UpdatePermissions(::GlobalNamespace::TMPSession*  newSession) ;

/// [AsyncStateMachine(typeof(KIDManager::<UpdateSession>d__91))]
/// @brief Method UpdateSession, addr 0x5a2e540, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* UpdateSession(::System::Action_1<bool>*  getDataCompleted) ;

/// [AsyncStateMachine(typeof(KIDManager::<UseKID>d__101))]
/// @brief Method UseKID, addr 0x5a2f2dc, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* UseKID() ;

/// [AsyncStateMachine(typeof(KIDManager::<WaitForAndUpdateNewSession>d__168))]
/// @brief Method WaitForAndUpdateNewSession, addr 0x5a31704, size 0x104, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* WaitForAndUpdateNewSession(bool  forceRefresh) ;

/// [AsyncStateMachine(typeof(KIDManager::<WaitForAuthentication>d__113))]
/// @brief Method WaitForAuthentication, addr 0x5a2ff64, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* WaitForAuthentication() ;

/// @brief Method .ctor, addr 0x5a31b24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::TMPSession* getStaticF__CurrentSession_k__BackingField() ;

static inline ::StringW getStaticF__DbgLocale_k__BackingField() ;

static inline bool getStaticF__HasOptedInToKID_k__BackingField() ;

static inline bool getStaticF__InitialisationComplete_k__BackingField() ;

static inline bool getStaticF__InitialisationSuccessful_k__BackingField() ;

static inline ::GlobalNamespace::SessionStatus getStaticF__PreviousStatus_k__BackingField() ;

static inline ::GlobalNamespace::GetRequirementsData* getStaticF___ageGateRequirements_k__BackingField() ;

static inline ::StringW getStaticF__debugKIDLocalePlayerPrefRef() ;

static inline ::StringW getStaticF__emailAddress() ;

static inline ::UnityW<::GlobalNamespace::KIDManager> getStaticF__instance() ;

static inline bool getStaticF__isUpdatingNewSession() ;

static inline ::System::Nullable_1<::System::DateTime> getStaticF__kIDNewPlayerDateTime() ;

static inline int32_t getStaticF__kIDPhase() ;

static inline ::System::Action* getStaticF__onKIDInitialisationComplete() ;

static inline ::System::Action* getStaticF__onSessionUpdated_AnyPermission() ;

static inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* getStaticF__onSessionUpdated_CustomUsernames() ;

static inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* getStaticF__onSessionUpdated_Multiplayer() ;

static inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* getStaticF__onSessionUpdated_PrivateRooms() ;

static inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* getStaticF__onSessionUpdated_UGC() ;

static inline ::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>* getStaticF__onSessionUpdated_VoiceChat() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::KID::Model::Permission*>* getStaticF__previousPermissionSettings() ;

static inline ::System::Threading::CancellationTokenSource* getStaticF__requestCancellationSource() ;

static inline ::System::Action* getStaticF__sessionUpdatedCallback() ;

static inline bool getStaticF__titleDataReady() ;

static inline bool getStaticF__useKid() ;

static inline ::GlobalNamespace::KIDManager_OnEmailResultReceived* getStaticF_onEmailResultReceived() ;

static inline ::StringW getStaticF_parentEmailForUserPlayerPrefRef() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentSession, addr 0x5a2c3d0, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TMPSession* get_CurrentSession() ;

/// [CompilerGenerated]
/// @brief Method get_DbgLocale, addr 0x5a2ca2c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW get_DbgLocale() ;

/// @brief Method get_DebugKIDLocalePlayerPrefRef, addr 0x5a2cae4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW get_DebugKIDLocalePlayerPrefRef() ;

/// @brief Method get_GetChallengedBeforePlayerPrefRef, addr 0x5a2cc38, size 0x74, virtual false, abstract: false, final false
static inline ::StringW get_GetChallengedBeforePlayerPrefRef() ;

/// @brief Method get_GetEmailForUserPlayerPrefRef, addr 0x5a2cb3c, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW get_GetEmailForUserPlayerPrefRef() ;

/// [CompilerGenerated]
/// @brief Method get_HasOptedInToKID, addr 0x5a2c934, size 0x58, virtual false, abstract: false, final false
static inline bool get_HasOptedInToKID() ;

/// @brief Method get_HasSession, addr 0x5a2c7b0, size 0x110, virtual false, abstract: false, final false
static inline bool get_HasSession() ;

/// [CompilerGenerated]
/// @brief Method get_InitialisationComplete, addr 0x5a2c260, size 0x58, virtual false, abstract: false, final false
static inline bool get_InitialisationComplete() ;

/// [CompilerGenerated]
/// @brief Method get_InitialisationSuccessful, addr 0x5a2c318, size 0x58, virtual false, abstract: false, final false
static inline bool get_InitialisationSuccessful() ;

/// @brief Method get_Instance, addr 0x5a2c208, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::KIDManager> get_Instance() ;

/// @brief Method get_KIDSetupPlayerPref, addr 0x5a2c9ec, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_KIDSetupPlayerPref() ;

/// @brief Method get_KidEnabled, addr 0x5a2c64c, size 0xb4, virtual false, abstract: false, final false
static inline bool get_KidEnabled() ;

/// @brief Method get_KidEnabledAndReady, addr 0x5a2c700, size 0xb0, virtual false, abstract: false, final false
static inline bool get_KidEnabledAndReady() ;

/// @brief Method get_KidTitleDataReady, addr 0x5a2c5f4, size 0x58, virtual false, abstract: false, final false
static inline bool get_KidTitleDataReady() ;

/// [CompilerGenerated]
/// @brief Method get_PreviousStatus, addr 0x5a2c488, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SessionStatus get_PreviousStatus() ;

/// @brief Method get_PreviousStatusPlayerPrefRef, addr 0x5a2c8c0, size 0x74, virtual false, abstract: false, final false
static inline ::StringW get_PreviousStatusPlayerPrefRef() ;

/// [CompilerGenerated]
/// @brief Method get__ageGateRequirements, addr 0x5a2c53c, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GetRequirementsData* get__ageGateRequirements() ;

static inline void setStaticF__CurrentSession_k__BackingField(::GlobalNamespace::TMPSession*  value) ;

static inline void setStaticF__DbgLocale_k__BackingField(::StringW  value) ;

static inline void setStaticF__HasOptedInToKID_k__BackingField(bool  value) ;

static inline void setStaticF__InitialisationComplete_k__BackingField(bool  value) ;

static inline void setStaticF__InitialisationSuccessful_k__BackingField(bool  value) ;

static inline void setStaticF__PreviousStatus_k__BackingField(::GlobalNamespace::SessionStatus  value) ;

static inline void setStaticF___ageGateRequirements_k__BackingField(::GlobalNamespace::GetRequirementsData*  value) ;

static inline void setStaticF__debugKIDLocalePlayerPrefRef(::StringW  value) ;

static inline void setStaticF__emailAddress(::StringW  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::KIDManager>  value) ;

static inline void setStaticF__isUpdatingNewSession(bool  value) ;

static inline void setStaticF__kIDNewPlayerDateTime(::System::Nullable_1<::System::DateTime>  value) ;

static inline void setStaticF__kIDPhase(int32_t  value) ;

static inline void setStaticF__onKIDInitialisationComplete(::System::Action*  value) ;

static inline void setStaticF__onSessionUpdated_AnyPermission(::System::Action*  value) ;

static inline void setStaticF__onSessionUpdated_CustomUsernames(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value) ;

static inline void setStaticF__onSessionUpdated_Multiplayer(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value) ;

static inline void setStaticF__onSessionUpdated_PrivateRooms(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value) ;

static inline void setStaticF__onSessionUpdated_UGC(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value) ;

static inline void setStaticF__onSessionUpdated_VoiceChat(::System::Action_2<bool,::GlobalNamespace::Permission_ManagedByEnum>*  value) ;

static inline void setStaticF__previousPermissionSettings(::System::Collections::Generic::Dictionary_2<::StringW,::KID::Model::Permission*>*  value) ;

static inline void setStaticF__requestCancellationSource(::System::Threading::CancellationTokenSource*  value) ;

static inline void setStaticF__sessionUpdatedCallback(::System::Action*  value) ;

static inline void setStaticF__titleDataReady(bool  value) ;

static inline void setStaticF__useKid(bool  value) ;

static inline void setStaticF_onEmailResultReceived(::GlobalNamespace::KIDManager_OnEmailResultReceived*  value) ;

static inline void setStaticF_parentEmailForUserPlayerPrefRef(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentSession, addr 0x5a2c428, size 0x60, virtual false, abstract: false, final false
static inline void set_CurrentSession(::GlobalNamespace::TMPSession*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DbgLocale, addr 0x5a2ca84, size 0x60, virtual false, abstract: false, final false
static inline void set_DbgLocale(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasOptedInToKID, addr 0x5a2c98c, size 0x60, virtual false, abstract: false, final false
static inline void set_HasOptedInToKID(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_InitialisationComplete, addr 0x5a2c2b8, size 0x60, virtual false, abstract: false, final false
static inline void set_InitialisationComplete(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_InitialisationSuccessful, addr 0x5a2c370, size 0x60, virtual false, abstract: false, final false
static inline void set_InitialisationSuccessful(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_PreviousStatus, addr 0x5a2c4e0, size 0x5c, virtual false, abstract: false, final false
static inline void set_PreviousStatus(::GlobalNamespace::SessionStatus  value) ;

/// [CompilerGenerated]
/// @brief Method set__ageGateRequirements, addr 0x5a2c594, size 0x60, virtual false, abstract: false, final false
static inline void set__ageGateRequirements(::GlobalNamespace::GetRequirementsData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDManager(KIDManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDManager(KIDManager const& ) = delete;

/// @brief Field CUSTOM_USERNAME_PERMISSION_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  CUSTOM_USERNAME_PERMISSION_NAME{u"custom-username"};

/// @brief Field KID_APPEAL_AGE offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_APPEAL_AGE{u"AppealAge"};

/// @brief Field KID_ATTEMPT_AGE_UPDATE offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_ATTEMPT_AGE_UPDATE{u"AttemptAgeUpdate"};

/// @brief Field KID_DATA_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_DATA_KEY{u"KIDData"};

/// @brief Field KID_EMAIL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_EMAIL_KEY{u"k-id_EmailAddress"};

/// @brief Field KID_FORCE_REFRESH offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_FORCE_REFRESH{u"sessionRefresh"};

/// @brief Field KID_GET_REQUIREMENTS offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_GET_REQUIREMENTS{u"GetRequirements"};

/// @brief Field KID_GET_SESSION offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_GET_SESSION{u"GetPlayerData"};

/// @brief Field KID_OPT_IN offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_OPT_IN{u"OptIn"};

/// @brief Field KID_PERMISSION__CUSTOM_NAMES offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSION__CUSTOM_NAMES{u"custom-username"};

/// @brief Field KID_PERMISSION__MULTIPLAYER offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSION__MULTIPLAYER{u"multiplayer"};

/// @brief Field KID_PERMISSION__PRIVATE_ROOMS offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSION__PRIVATE_ROOMS{u"join-groups"};

/// @brief Field KID_PERMISSION__UGC offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSION__UGC{u"mods"};

/// @brief Field KID_PERMISSION__VOICE_CHAT offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSION__VOICE_CHAT{u"voice-chat"};

/// @brief Field KID_SEND_CHALLENGE_EMAIL offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_SEND_CHALLENGE_EMAIL{u"SendChallengeEmail"};

/// @brief Field KID_SETUP_FLAG offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_SETUP_FLAG{u"KID-Setup-"};

/// @brief Field KID_SET_CONFIRMED_STATUS offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_SET_CONFIRMED_STATUS{u"SetConfirmedStatus"};

/// @brief Field KID_SET_OPT_IN_PERMISSIONS offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_SET_OPT_IN_PERMISSIONS{u"SetOptInPermissions"};

/// @brief Field KID_UPGRADE_SESSION offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_UPGRADE_SESSION{u"UpgradeSession"};

/// @brief Field KID_VERIFY_AGE offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_VERIFY_AGE{u"VerifyAge"};

/// @brief Field MAX_RETRIES_FOR_CRITICAL_KID_SERVER_REQUESTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_RETRIES_FOR_CRITICAL_KID_SERVER_REQUESTS{static_cast<int32_t>(0x3)};

/// @brief Field MAX_RETRIES_FOR_NORMAL_KID_SERVER_REQUESTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_RETRIES_FOR_NORMAL_KID_SERVER_REQUESTS{static_cast<int32_t>(0x2)};

/// @brief Field MAX_SESSION_UPDATE_TIME offset 0xffffffff size 0x4
static constexpr float_t  MAX_SESSION_UPDATE_TIME{static_cast<float_t>(600.0f)};

/// @brief Field MULTIPLAYER_PERMISSION_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  MULTIPLAYER_PERMISSION_NAME{u"multiplayer"};

/// @brief Field PREVIOUS_STATUS_PREF_KEY_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  PREVIOUS_STATUS_PREF_KEY_PREFIX{u"previous-status-"};

/// @brief Field PRIVATE_ROOM_PERMISSION_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  PRIVATE_ROOM_PERMISSION_NAME{u"join-groups"};

/// @brief Field SECONDS_BETWEEN_UPDATE_ATTEMPTS offset 0xffffffff size 0x4
static constexpr int32_t  SECONDS_BETWEEN_UPDATE_ATTEMPTS{static_cast<int32_t>(0x1e)};

/// @brief Field TIME_BETWEEN_SESSION_UPDATE_ATTEMPTS offset 0xffffffff size 0x4
static constexpr int32_t  TIME_BETWEEN_SESSION_UPDATE_ATTEMPTS{static_cast<int32_t>(0x1e)};

/// @brief Field UGC_PERMISSION_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  UGC_PERMISSION_NAME{u"mods"};

/// @brief Field VOICE_CHAT_PERMISSION_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_CHAT_PERMISSION_NAME{u"voice-chat"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.DateTime, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDManager/<>c__DisplayClass103_0
class CORDL_TYPE KIDManager___c__DisplayClass103_0 : public ::System::Object {
public:
// Declarations
/// @brief Field newPlayerDateTime, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_newPlayerDateTime, put=__cordl_internal_set_newPlayerDateTime)) ::System::Nullable_1<::System::DateTime>  newPlayerDateTime;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

static inline ::GlobalNamespace::KIDManager___c__DisplayClass103_0* New_ctor() ;

/// @brief Method <CheckKIDNewPlayerDateTime>b__0, addr 0x5a322f4, size 0x74, virtual false, abstract: false, final false
inline void _CheckKIDNewPlayerDateTime_b__0(::StringW  res) ;

/// @brief Method <CheckKIDNewPlayerDateTime>b__1, addr 0x5a32368, size 0x98, virtual false, abstract: false, final false
inline void _CheckKIDNewPlayerDateTime_b__1(::PlayFab::PlayFabError*  err) ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_newPlayerDateTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_newPlayerDateTime() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_newPlayerDateTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a322ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDManager___c__DisplayClass103_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDManager___c__DisplayClass103_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDManager___c__DisplayClass103_0(KIDManager___c__DisplayClass103_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDManager___c__DisplayClass103_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDManager___c__DisplayClass103_0(KIDManager___c__DisplayClass103_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2920};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field newPlayerDateTime, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___newPlayerDateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager___c__DisplayClass103_0, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager___c__DisplayClass103_0, ___newPlayerDateTime) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager___c__DisplayClass103_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDManager/<>c__DisplayClass102_0
class CORDL_TYPE KIDManager___c__DisplayClass102_0 : public ::System::Object {
public:
// Declarations
/// @brief Field phase, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_phase, put=__cordl_internal_set_phase)) int32_t  phase;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

static inline ::GlobalNamespace::KIDManager___c__DisplayClass102_0* New_ctor() ;

/// @brief Method <CheckKIDPhase>b__0, addr 0x5a321e0, size 0x74, virtual false, abstract: false, final false
inline void _CheckKIDPhase_b__0(::StringW  res) ;

/// @brief Method <CheckKIDPhase>b__1, addr 0x5a32254, size 0x98, virtual false, abstract: false, final false
inline void _CheckKIDPhase_b__1(::PlayFab::PlayFabError*  err) ;

constexpr int32_t const& __cordl_internal_get_phase() const;

constexpr int32_t& __cordl_internal_get_phase() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_phase(int32_t  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a321d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDManager___c__DisplayClass102_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDManager___c__DisplayClass102_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDManager___c__DisplayClass102_0(KIDManager___c__DisplayClass102_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDManager___c__DisplayClass102_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDManager___c__DisplayClass102_0(KIDManager___c__DisplayClass102_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2919};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field phase, offset: 0x14, size: 0x4, def value: None
 int32_t  ___phase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager___c__DisplayClass102_0, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager___c__DisplayClass102_0, ___phase) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager___c__DisplayClass102_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDManager/<>c__DisplayClass101_0
class CORDL_TYPE KIDManager___c__DisplayClass101_0 : public ::System::Object {
public:
// Declarations
/// @brief Field isEnabled, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEnabled, put=__cordl_internal_set_isEnabled)) bool  isEnabled;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

static inline ::GlobalNamespace::KIDManager___c__DisplayClass101_0* New_ctor() ;

/// @brief Method <UseKID>b__0, addr 0x5a320c8, size 0x78, virtual false, abstract: false, final false
inline void _UseKID_b__0(::StringW  res) ;

/// @brief Method <UseKID>b__1, addr 0x5a32140, size 0x98, virtual false, abstract: false, final false
inline void _UseKID_b__1(::PlayFab::PlayFabError*  err) ;

constexpr bool const& __cordl_internal_get_isEnabled() const;

constexpr bool& __cordl_internal_get_isEnabled() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_isEnabled(bool  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a320c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDManager___c__DisplayClass101_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDManager___c__DisplayClass101_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDManager___c__DisplayClass101_0(KIDManager___c__DisplayClass101_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDManager___c__DisplayClass101_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDManager___c__DisplayClass101_0(KIDManager___c__DisplayClass101_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2918};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field isEnabled, offset: 0x14, size: 0x1, def value: None
 bool  ___isEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager___c__DisplayClass101_0, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager___c__DisplayClass101_0, ___isEnabled) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager___c__DisplayClass101_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDManager/<>c
class CORDL_TYPE KIDManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::KIDManager___c*  __9;

/// @brief Field <>9__88_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__88_0, put=setStaticF___9__88_0)) ::System::Func_2<::StringW,::KID::Model::RequestedPermission*>*  __9__88_0;

static inline ::GlobalNamespace::KIDManager___c* New_ctor() ;

/// @brief Method <TryUpgradeSession>b__88_0, addr 0x5a32064, size 0x5c, virtual false, abstract: false, final false
inline ::KID::Model::RequestedPermission* _TryUpgradeSession_b__88_0(::StringW  name) ;

/// @brief Method .ctor, addr 0x5a3205c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::KIDManager___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,::KID::Model::RequestedPermission*>* getStaticF___9__88_0() ;

static inline void setStaticF___9(::GlobalNamespace::KIDManager___c*  value) ;

static inline void setStaticF___9__88_0(::System::Func_2<::StringW,::KID::Model::RequestedPermission*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDManager___c(KIDManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDManager___c(KIDManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2917};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDManager/OnEmailResultReceived
class CORDL_TYPE KIDManager_OnEmailResultReceived : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a31f8c, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  result, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5a31fe8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5a31f78, size 0x14, virtual true, abstract: false, final false
inline void Invoke(bool  result) ;

static inline ::GlobalNamespace::KIDManager_OnEmailResultReceived* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5a31ed8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDManager_OnEmailResultReceived() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDManager_OnEmailResultReceived", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDManager_OnEmailResultReceived(KIDManager_OnEmailResultReceived && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDManager_OnEmailResultReceived", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDManager_OnEmailResultReceived(KIDManager_OnEmailResultReceived const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2916};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDManager_OnEmailResultReceived) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
