#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaComputer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ModeSelectButton_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_ComputerState_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_EKidScreenState_def.hpp"
#include "GorillaNetworking/zzzz__GorillaComputer_RedemptionResult_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaComputer)
namespace GlobalNamespace {
struct GorillaComputer_ComputerState;
}
namespace GlobalNamespace {
struct GorillaComputer_EKidScreenState;
}
namespace GlobalNamespace {
struct GorillaComputer_NameCheckResult;
}
namespace GlobalNamespace {
struct GorillaComputer_RedemptionResult;
}
namespace GlobalNamespace {
struct GorillaComputer__DisconnectAfterDelay_d__391;
}
namespace GlobalNamespace {
struct GorillaComputer__UpdateSession_d__493;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class GorillaSpeakerLoudness;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct Permission_ManagedByEnum;
}
namespace GlobalNamespace {
class WatchableStringSO;
}
namespace GorillaNetworking {
class CreditsView;
}
namespace GorillaNetworking {
class GorillaComputer_StateOrderItem;
}
namespace GorillaNetworking {
class GorillaComputer__HandleInitialTroopQueueState_d__354;
}
namespace GorillaNetworking {
class GorillaComputer___c;
}
namespace GorillaNetworking {
class GorillaComputer___c__DisplayClass418_0;
}
namespace GorillaNetworking {
class GorillaComputer___c__DisplayClass459_0;
}
namespace GorillaNetworking {
struct GorillaKeyboardBindings;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace GorillaNetworking {
class GorillaText;
}
namespace GorillaNetworking {
class PhotonNetworkController;
}
namespace GorillaNetworking {
class __c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d;
}
namespace PlayFab::ClientModels {
class GetTimeResult;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
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
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaComputer;
}
namespace GorillaNetworking {
class GorillaComputer_StateOrderItem;
}
namespace GorillaNetworking {
class GorillaComputer__HandleInitialTroopQueueState_d__354;
}
namespace GorillaNetworking {
class GorillaComputer___c;
}
namespace GorillaNetworking {
class GorillaComputer___c__DisplayClass418_0;
}
namespace GorillaNetworking {
class GorillaComputer___c__DisplayClass459_0;
}
namespace GorillaNetworking {
class __c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaComputer*);
MARK_REF_T(::GorillaNetworking::GorillaComputer_StateOrderItem*);
MARK_REF_T(::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*);
MARK_REF_T(::GorillaNetworking::GorillaComputer___c*);
MARK_REF_T(::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*);
MARK_REF_T(::GorillaNetworking::GorillaComputer___c__DisplayClass459_0*);
MARK_REF_T(::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaComputer*, "GorillaNetworking", "GorillaComputer");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaComputer_StateOrderItem*, "GorillaNetworking", "GorillaComputer/StateOrderItem");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354*, "GorillaNetworking", "GorillaComputer/<HandleInitialTroopQueueState>d__354");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaComputer___c*, "GorillaNetworking", "GorillaComputer/<>c");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*, "GorillaNetworking", "GorillaComputer/<>c__DisplayClass418_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaComputer___c__DisplayClass459_0*, "GorillaNetworking", "GorillaComputer/<>c__DisplayClass459_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d*, "GorillaNetworking", "GorillaComputer/<>c__DisplayClass418_0/<<LoadingScreen>g__LoadingScreenLocal|0>d");
// Dependencies GorillaGameModes.GameModeType, GorillaNetworking.GorillaComputer::ComputerState, GorillaNetworking.GorillaComputer::EKidScreenState, GorillaNetworking.GorillaComputer::RedemptionResult, ModeSelectButton, System.DateTime, System.DateTimeOffset, System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaComputer
class CORDL_TYPE GorillaComputer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ComputerState = ::GlobalNamespace::GorillaComputer_ComputerState;

using EKidScreenState = ::GlobalNamespace::GorillaComputer_EKidScreenState;

using NameCheckResult = ::GlobalNamespace::GorillaComputer_NameCheckResult;

using RedemptionResult = ::GlobalNamespace::GorillaComputer_RedemptionResult;

using _DisconnectAfterDelay_d__391 = ::GlobalNamespace::GorillaComputer__DisconnectAfterDelay_d__391;

using _UpdateSession_d__493 = ::GlobalNamespace::GorillaComputer__UpdateSession_d__493;

using StateOrderItem = ::GorillaNetworking::GorillaComputer_StateOrderItem;

using _HandleInitialTroopQueueState_d__354 = ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354;

using __c = ::GorillaNetworking::GorillaComputer___c;

using __c__DisplayClass418_0 = ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0;

using __c__DisplayClass459_0 = ::GorillaNetworking::GorillaComputer___c__DisplayClass459_0;

/// @brief Field FunctionNames, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionNames, put=__cordl_internal_set_FunctionNames)) ::System::Collections::Generic::List_1<::StringW>*  FunctionNames;

/// @brief Field FunctionsCount, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_FunctionsCount, put=__cordl_internal_set_FunctionsCount)) int32_t  FunctionsCount;

/// @brief Field LoadingRoutine, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoadingRoutine, put=__cordl_internal_set_LoadingRoutine)) ::UnityEngine::Coroutine*  LoadingRoutine;

 __declspec(property(get=get_NameTagPlayerPref)) ::StringW  NameTagPlayerPref;

 __declspec(property(get=get_NametagsEnabled, put=set_NametagsEnabled)) bool  NametagsEnabled;

/// @brief Field OnServerTimeUpdated, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServerTimeUpdated, put=__cordl_internal_set_OnServerTimeUpdated)) ::System::Action*  OnServerTimeUpdated;

/// @brief Field OrderList, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderList, put=__cordl_internal_set_OrderList)) ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*  OrderList;

/// @brief Field Pointer, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pointer, put=__cordl_internal_set_Pointer)) ::StringW  Pointer;

 __declspec(property(get=get_RedemptionCode, put=set_RedemptionCode)) ::StringW  RedemptionCode;

 __declspec(property(get=get_RedemptionRestrictionTime, put=set_RedemptionRestrictionTime)) ::System::Nullable_1<::System::DateTimeOffset>  RedemptionRestrictionTime;

 __declspec(property(get=get_RedemptionStatus, put=set_RedemptionStatus)) ::GlobalNamespace::GorillaComputer_RedemptionResult  RedemptionStatus;

 __declspec(property(get=get_VStumpRoomFullPrepend)) ::StringW  VStumpRoomFullPrepend;

 __declspec(property(get=get_VStumpRoomPrepend)) ::StringW  VStumpRoomPrepend;

/// @brief Field <NametagsEnabled>k__BackingField, offset 0x2f8, size 0x1 
 __declspec(property(get=__cordl_internal_get__NametagsEnabled_k__BackingField, put=__cordl_internal_set__NametagsEnabled_k__BackingField)) bool  _NametagsEnabled_k__BackingField;

/// @brief Field <RedemptionRestrictionTime>k__BackingField, offset 0x300, size 0x10 
 __declspec(property(get=__cordl_internal_get__RedemptionRestrictionTime_k__BackingField, put=__cordl_internal_set__RedemptionRestrictionTime_k__BackingField)) ::System::Nullable_1<::System::DateTimeOffset>  _RedemptionRestrictionTime_k__BackingField;

/// @brief Field _activeOrderList, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeOrderList, put=__cordl_internal_set__activeOrderList)) ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*  _activeOrderList;

/// @brief Field _allowedMapsToJoin, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__allowedMapsToJoin, put=__cordl_internal_set__allowedMapsToJoin)) ::ArrayW<::StringW>  _allowedMapsToJoin;

/// @brief Field _cachedUnableToConnect, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedUnableToConnect, put=__cordl_internal_set__cachedUnableToConnect)) ::StringW  _cachedUnableToConnect;

/// @brief Field _cachedVersionMismatch, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedVersionMismatch, put=__cordl_internal_set__cachedVersionMismatch)) ::StringW  _cachedVersionMismatch;

/// @brief Field _currentScreentState, offset 0x33c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentScreentState, put=__cordl_internal_set__currentScreentState)) ::GlobalNamespace::GorillaComputer_EKidScreenState  _currentScreentState;

/// @brief Field _filteredStates, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get__filteredStates, put=__cordl_internal_set__filteredStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaComputer_ComputerState>*  _filteredStates;

/// @brief Field _interestedPermissionNames, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get__interestedPermissionNames, put=__cordl_internal_set__interestedPermissionNames)) ::ArrayW<::StringW>  _interestedPermissionNames;

/// @brief Field _languagesDisplaySB, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get__languagesDisplaySB, put=__cordl_internal_set__languagesDisplaySB)) ::System::Text::StringBuilder*  _languagesDisplaySB;

/// @brief Field _lastLocaleChecked_Connect, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastLocaleChecked_Connect, put=__cordl_internal_set__lastLocaleChecked_Connect)) ::UnityW<::UnityEngine::Localization::Locale>  _lastLocaleChecked_Connect;

/// @brief Field _lastLocaleChecked_Version, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastLocaleChecked_Version, put=__cordl_internal_set__lastLocaleChecked_Version)) ::UnityW<::UnityEngine::Localization::Locale>  _lastLocaleChecked_Version;

/// @brief Field _nextUpdateAttemptTime, offset 0x334, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextUpdateAttemptTime, put=__cordl_internal_set__nextUpdateAttemptTime)) float_t  _nextUpdateAttemptTime;

/// @brief Field _previousLocalisationSetting, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousLocalisationSetting, put=__cordl_internal_set__previousLocalisationSetting)) ::UnityW<::UnityEngine::Localization::Locale>  _previousLocalisationSetting;

/// @brief Field _updateAttemptCooldown, offset 0x330, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateAttemptCooldown, put=__cordl_internal_set__updateAttemptCooldown)) float_t  _updateAttemptCooldown;

/// @brief Field <version>k__BackingField, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__version_k__BackingField, put=__cordl_internal_set__version_k__BackingField)) ::StringW  _version_k__BackingField;

/// @brief Field _waitingForUpdatedSession, offset 0x338, size 0x1 
 __declspec(property(get=__cordl_internal_get__waitingForUpdatedSession, put=__cordl_internal_set__waitingForUpdatedSession)) bool  _waitingForUpdatedSession;

/// @brief Field allowedInCompetitive, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowedInCompetitive, put=__cordl_internal_set_allowedInCompetitive)) bool  allowedInCompetitive;

 __declspec(property(get=get_allowedMapsToJoin, put=set_allowedMapsToJoin)) ::ArrayW<::StringW>  allowedMapsToJoin;

/// @brief Field anywhereOneWeek, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_anywhereOneWeek, put=__cordl_internal_set_anywhereOneWeek)) ::ArrayW<::StringW>  anywhereOneWeek;

/// @brief Field anywhereOneWeekFile, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_anywhereOneWeekFile, put=__cordl_internal_set_anywhereOneWeekFile)) ::UnityW<::UnityEngine::TextAsset>  anywhereOneWeekFile;

/// @brief Field anywhereTwoWeek, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_anywhereTwoWeek, put=__cordl_internal_set_anywhereTwoWeek)) ::ArrayW<::StringW>  anywhereTwoWeek;

/// @brief Field anywhereTwoWeekFile, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_anywhereTwoWeekFile, put=__cordl_internal_set_anywhereTwoWeekFile)) ::UnityW<::UnityEngine::TextAsset>  anywhereTwoWeekFile;

/// @brief Field autoMuteType, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoMuteType, put=__cordl_internal_set_autoMuteType)) ::StringW  autoMuteType;

/// @brief Field blueText, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_blueText, put=__cordl_internal_set_blueText)) ::StringW  blueText;

/// @brief Field blueValue, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_blueValue, put=__cordl_internal_set_blueValue)) float_t  blueValue;

/// @brief Field buildCode, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildCode, put=__cordl_internal_set_buildCode)) ::StringW  buildCode;

/// @brief Field buildDate, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildDate, put=__cordl_internal_set_buildDate)) ::StringW  buildDate;

/// @brief Field buttonFadeTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonFadeTime, put=__cordl_internal_set_buttonFadeTime)) float_t  buttonFadeTime;

/// @brief Field checkIfConnectedSeconds, offset 0x318, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkIfConnectedSeconds, put=__cordl_internal_set_checkIfConnectedSeconds)) float_t  checkIfConnectedSeconds;

/// @brief Field checkIfDisconnectedSeconds, offset 0x314, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkIfDisconnectedSeconds, put=__cordl_internal_set_checkIfDisconnectedSeconds)) float_t  checkIfDisconnectedSeconds;

/// @brief Field colorCursorLine, offset 0x278, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorCursorLine, put=__cordl_internal_set_colorCursorLine)) int32_t  colorCursorLine;

/// @brief Field computerScreenRenderer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_computerScreenRenderer, put=__cordl_internal_set_computerScreenRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  computerScreenRenderer;

/// @brief Field creditsView, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_creditsView, put=__cordl_internal_set_creditsView)) ::UnityW<::GorillaNetworking::CreditsView>  creditsView;

/// @brief Field currentComputerState, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentComputerState, put=__cordl_internal_set_currentComputerState)) ::GlobalNamespace::GorillaComputer_ComputerState  currentComputerState;

/// @brief Field currentGameMode, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGameMode, put=__cordl_internal_set_currentGameMode)) ::UnityW<::GlobalNamespace::WatchableStringSO>  currentGameMode;

/// @brief Field currentGameModeText, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGameModeText, put=__cordl_internal_set_currentGameModeText)) ::UnityW<::GlobalNamespace::WatchableStringSO>  currentGameModeText;

/// @brief Field currentName, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentName, put=__cordl_internal_set_currentName)) ::StringW  currentName;

/// @brief Field currentQueue, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentQueue, put=__cordl_internal_set_currentQueue)) ::StringW  currentQueue;

 __declspec(property(get=get_currentState)) ::GlobalNamespace::GorillaComputer_ComputerState  currentState;

/// @brief Field currentStateIndex, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStateIndex, put=__cordl_internal_set_currentStateIndex)) int32_t  currentStateIndex;

/// @brief Field currentTextField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTextField, put=__cordl_internal_set_currentTextField)) ::StringW  currentTextField;

/// @brief Field currentTroopPopulation, offset 0x2ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentTroopPopulation, put=__cordl_internal_set_currentTroopPopulation)) int32_t  currentTroopPopulation;

/// @brief Field defaultUpdateCooldown, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultUpdateCooldown, put=__cordl_internal_set_defaultUpdateCooldown)) float_t  defaultUpdateCooldown;

/// @brief Field deltaTime, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaTime, put=__cordl_internal_set_deltaTime)) float_t  deltaTime;

/// @brief Field didInitializeGameMode, offset 0x31c, size 0x1 
 __declspec(property(get=__cordl_internal_get_didInitializeGameMode, put=__cordl_internal_set_didInitializeGameMode)) bool  didInitializeGameMode;

/// @brief Field disableParticles, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableParticles, put=__cordl_internal_set_disableParticles)) bool  disableParticles;

/// @brief Field displaySupport, offset 0x288, size 0x1 
 __declspec(property(get=__cordl_internal_get_displaySupport, put=__cordl_internal_set_displaySupport)) bool  displaySupport;

/// @brief Field exactOneWeek, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_exactOneWeek, put=__cordl_internal_set_exactOneWeek)) ::ArrayW<::StringW>  exactOneWeek;

/// @brief Field exactOneWeekFile, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_exactOneWeekFile, put=__cordl_internal_set_exactOneWeekFile)) ::UnityW<::UnityEngine::TextAsset>  exactOneWeekFile;

/// @brief Field friendJoinCollider, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendJoinCollider, put=__cordl_internal_set_friendJoinCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  friendJoinCollider;

/// @brief Field functionSelectText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_functionSelectText, put=__cordl_internal_set_functionSelectText)) ::GorillaNetworking::GorillaText*  functionSelectText;

/// @brief Field greenText, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenText, put=__cordl_internal_set_greenText)) ::StringW  greenText;

/// @brief Field greenValue, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_greenValue, put=__cordl_internal_set_greenValue)) float_t  greenValue;

/// @brief Field groupMapJoin, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupMapJoin, put=__cordl_internal_set_groupMapJoin)) ::StringW  groupMapJoin;

/// @brief Field groupMapJoinIndex, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupMapJoinIndex, put=__cordl_internal_set_groupMapJoinIndex)) int32_t  groupMapJoinIndex;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field hasRequestedInitialTroopPopulation, offset 0x2e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasRequestedInitialTroopPopulation, put=__cordl_internal_set_hasRequestedInitialTroopPopulation)) bool  hasRequestedInitialTroopPopulation;

/// @brief Field highestCharacterCount, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_highestCharacterCount, put=__cordl_internal_set_highestCharacterCount)) int32_t  highestCharacterCount;

/// @brief Field includeUpdatedServerSynchTest, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_includeUpdatedServerSynchTest, put=__cordl_internal_set_includeUpdatedServerSynchTest)) int32_t  includeUpdatedServerSynchTest;

/// @brief Field initialized, offset 0x103, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaNetworking::GorillaComputer>  instance;

/// @brief Field instrumentVolume, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_instrumentVolume, put=__cordl_internal_set_instrumentVolume)) float_t  instrumentVolume;

/// @brief Field internetFailure, offset 0xf5, size 0x1 
 __declspec(property(get=__cordl_internal_get_internetFailure, put=__cordl_internal_set_internetFailure)) bool  internetFailure;

/// @brief Field iobtMode, offset 0x1e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_iobtMode, put=__cordl_internal_set_iobtMode)) bool  iobtMode;

/// @brief Field isConnectedToMaster, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_isConnectedToMaster, put=__cordl_internal_set_isConnectedToMaster)) bool  isConnectedToMaster;

/// @brief Field isSubcribed, offset 0x1e2, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSubcribed, put=__cordl_internal_set_isSubcribed)) bool  isSubcribed;

/// @brief Field lastCheckedWifi, offset 0x310, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCheckedWifi, put=__cordl_internal_set_lastCheckedWifi)) float_t  lastCheckedWifi;

/// @brief Field lastPressedGameMode, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPressedGameMode, put=__cordl_internal_set_lastPressedGameMode)) ::StringW  lastPressedGameMode;

/// @brief Field lastPressedGameModeType, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPressedGameModeType, put=__cordl_internal_set_lastPressedGameModeType)) ::GorillaGameModes::GameModeType  lastPressedGameModeType;

/// @brief Field lastUpdateTime, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdateTime, put=__cordl_internal_set_lastUpdateTime)) float_t  lastUpdateTime;

/// @brief Field leftHanded, offset 0x1f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHanded, put=__cordl_internal_set_leftHanded)) bool  leftHanded;

/// @brief Field limitOnlineScreens, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_limitOnlineScreens, put=__cordl_internal_set_limitOnlineScreens)) bool  limitOnlineScreens;

/// @brief Field micInputTestTimer, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_micInputTestTimer, put=__cordl_internal_set_micInputTestTimer)) float_t  micInputTestTimer;

/// @brief Field micInputTestTimerThreshold, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_micInputTestTimerThreshold, put=__cordl_internal_set_micInputTestTimerThreshold)) float_t  micInputTestTimerThreshold;

/// @brief Field micUpdateCooldown, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_micUpdateCooldown, put=__cordl_internal_set_micUpdateCooldown)) float_t  micUpdateCooldown;

/// @brief Field modeSelectButtons, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_modeSelectButtons, put=__cordl_internal_set_modeSelectButtons)) ::ArrayW<::UnityW<::GlobalNamespace::ModeSelectButton>>  modeSelectButtons;

/// @brief Field networkController, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkController, put=__cordl_internal_set_networkController)) ::UnityW<::GorillaNetworking::PhotonNetworkController>  networkController;

/// @brief Field nextPopulationCheckTime, offset 0x324, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPopulationCheckTime, put=__cordl_internal_set_nextPopulationCheckTime)) float_t  nextPopulationCheckTime;

/// @brief Field offlineTextInitialString, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineTextInitialString, put=__cordl_internal_set_offlineTextInitialString)) ::StringW  offlineTextInitialString;

/// @brief Field onNametagSettingChangedAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onNametagSettingChangedAction, put=setStaticF_onNametagSettingChangedAction)) ::System::Action_1<bool>*  onNametagSettingChangedAction;

/// @brief Field perfMode, offset 0x1e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_perfMode, put=__cordl_internal_set_perfMode)) bool  perfMode;

/// @brief Field playerInVirtualStump, offset 0x2b8, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerInVirtualStump, put=__cordl_internal_set_playerInVirtualStump)) bool  playerInVirtualStump;

/// @brief Field pressedMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressedMaterial, put=__cordl_internal_set_pressedMaterial)) ::UnityW<::UnityEngine::Material>  pressedMaterial;

/// @brief Field previousComputerState, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousComputerState, put=__cordl_internal_set_previousComputerState)) ::GlobalNamespace::GorillaComputer_ComputerState  previousComputerState;

/// @brief Field primaryTriggersByZone, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_primaryTriggersByZone, put=__cordl_internal_set_primaryTriggersByZone)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*  primaryTriggersByZone;

/// @brief Field pttType, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_pttType, put=__cordl_internal_set_pttType)) ::StringW  pttType;

/// @brief Field redText, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_redText, put=__cordl_internal_set_redText)) ::StringW  redText;

/// @brief Field redValue, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_redValue, put=__cordl_internal_set_redValue)) float_t  redValue;

/// @brief Field redemptionCode, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_redemptionCode, put=__cordl_internal_set_redemptionCode)) ::StringW  redemptionCode;

/// @brief Field redemptionResult, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_redemptionResult, put=__cordl_internal_set_redemptionResult)) ::GlobalNamespace::GorillaComputer_RedemptionResult  redemptionResult;

/// @brief Field rememberTroopQueueState, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_rememberTroopQueueState, put=__cordl_internal_set_rememberTroopQueueState)) bool  rememberTroopQueueState;

/// @brief Field roomFull, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_roomFull, put=__cordl_internal_set_roomFull)) bool  roomFull;

/// @brief Field roomNotAllowed, offset 0x139, size 0x1 
 __declspec(property(get=__cordl_internal_get_roomNotAllowed, put=__cordl_internal_set_roomNotAllowed)) bool  roomNotAllowed;

/// @brief Field roomToJoin, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomToJoin, put=__cordl_internal_set_roomToJoin)) ::StringW  roomToJoin;

/// @brief Field savedName, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedName, put=__cordl_internal_set_savedName)) ::StringW  savedName;

/// @brief Field screenChanged, offset 0x102, size 0x1 
 __declspec(property(get=__cordl_internal_get_screenChanged, put=__cordl_internal_set_screenChanged)) bool  screenChanged;

/// @brief Field screenText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenText, put=__cordl_internal_set_screenText)) ::GorillaNetworking::GorillaText*  screenText;

/// @brief Field sessionCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_sessionCount, put=setStaticF_sessionCount)) int32_t  sessionCount;

/// @brief Field speakerLoudness, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_speakerLoudness, put=__cordl_internal_set_speakerLoudness)) ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  speakerLoudness;

/// @brief Field startupMillis, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_startupMillis, put=__cordl_internal_set_startupMillis)) int64_t  startupMillis;

/// @brief Field startupTime, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_startupTime, put=__cordl_internal_set_startupTime)) ::System::DateTime  startupTime;

/// @brief Field stateStack, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStack, put=__cordl_internal_set_stateStack)) ::System::Collections::Generic::Stack_1<::GlobalNamespace::GorillaComputer_ComputerState>*  stateStack;

/// @brief Field stateUpdated, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get_stateUpdated, put=__cordl_internal_set_stateUpdated)) bool  stateUpdated;

/// @brief Field topTroops, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_topTroops, put=__cordl_internal_set_topTroops)) ::System::Collections::Generic::List_1<::StringW>*  topTroops;

/// @brief Field topVstumpMaps, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_topVstumpMaps, put=__cordl_internal_set_topVstumpMaps)) ::System::Collections::Generic::List_1<::StringW>*  topVstumpMaps;

/// @brief Field troopName, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_troopName, put=__cordl_internal_set_troopName)) ::StringW  troopName;

/// @brief Field troopPopulationCheckCooldown, offset 0x320, size 0x4 
 __declspec(property(get=__cordl_internal_get_troopPopulationCheckCooldown, put=__cordl_internal_set_troopPopulationCheckCooldown)) float_t  troopPopulationCheckCooldown;

/// @brief Field troopQueueActive, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_troopQueueActive, put=__cordl_internal_set_troopQueueActive)) bool  troopQueueActive;

/// @brief Field troopToJoin, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_troopToJoin, put=__cordl_internal_set_troopToJoin)) ::StringW  troopToJoin;

/// @brief Field tryGetTimeAgain, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_tryGetTimeAgain, put=__cordl_internal_set_tryGetTimeAgain)) bool  tryGetTimeAgain;

 __declspec(property(get=get_unableToConnect)) ::StringW  unableToConnect;

/// @brief Field unpressedMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unpressedMaterial, put=__cordl_internal_set_unpressedMaterial)) ::UnityW<::UnityEngine::Material>  unpressedMaterial;

/// @brief Field updateCooldown, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateCooldown, put=__cordl_internal_set_updateCooldown)) float_t  updateCooldown;

/// @brief Field usersBanned, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get_usersBanned, put=__cordl_internal_set_usersBanned)) int32_t  usersBanned;

 __declspec(property(get=get_version, put=set_version)) ::StringW  version;

 __declspec(property(get=get_versionMismatch)) ::StringW  versionMismatch;

/// @brief Field virtualStumpRoomModePrefix, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_virtualStumpRoomModePrefix, put=__cordl_internal_set_virtualStumpRoomModePrefix)) ::StringW  virtualStumpRoomModePrefix;

/// @brief Field virtualStumpRoomPrepend, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_virtualStumpRoomPrepend, put=__cordl_internal_set_virtualStumpRoomPrepend)) ::StringW  virtualStumpRoomPrepend;

/// @brief Field voiceChatOn, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceChatOn, put=__cordl_internal_set_voiceChatOn)) ::StringW  voiceChatOn;

/// @brief Field waitOneSecond, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitOneSecond, put=__cordl_internal_set_waitOneSecond)) ::UnityEngine::WaitForSeconds*  waitOneSecond;

/// @brief Field wallScreenRenderer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_wallScreenRenderer, put=__cordl_internal_set_wallScreenRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  wallScreenRenderer;

/// @brief Field wallScreenText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_wallScreenText, put=__cordl_internal_set_wallScreenText)) ::GorillaNetworking::GorillaText*  wallScreenText;

/// @brief Field warningConfirmationInputString, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningConfirmationInputString, put=__cordl_internal_set_warningConfirmationInputString)) ::StringW  warningConfirmationInputString;

/// @brief Field wrongVersionMaterial, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrongVersionMaterial, put=__cordl_internal_set_wrongVersionMaterial)) ::UnityW<::UnityEngine::Material>  wrongVersionMaterial;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AddSeverTime, addr 0x5c745a0, size 0x70, virtual false, abstract: false, final false
inline void AddSeverTime(int32_t  m) ;

/// @brief Method AutomuteScreen, addr 0x5c7ea38, size 0x27c, virtual false, abstract: false, final false
inline void AutomuteScreen() ;

/// @brief Method Awake, addr 0x5c74c90, size 0x344, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckAutoBanListForName, addr 0x5c83270, size 0x278, virtual false, abstract: false, final false
inline bool CheckAutoBanListForName(::StringW  nameToCheck) ;

/// @brief Method CheckAutoBanListForPlayerName, addr 0x5c7b818, size 0x30, virtual false, abstract: false, final false
inline void CheckAutoBanListForPlayerName(::StringW  nameToCheck) ;

/// @brief Method CheckAutoBanListForRoomName, addr 0x5c7bd00, size 0x30, virtual false, abstract: false, final false
inline void CheckAutoBanListForRoomName(::StringW  nameToCheck) ;

/// @brief Method CheckAutoBanListForTroopName, addr 0x5c7c0cc, size 0x50, virtual false, abstract: false, final false
inline void CheckAutoBanListForTroopName(::StringW  nameToCheck) ;

/// @brief Method CheckForBadPlayerName, addr 0x5c81bfc, size 0x154, virtual false, abstract: false, final false
inline void CheckForBadPlayerName(::StringW  nameToCheck) ;

/// @brief Method CheckForBadRoomName, addr 0x5c81aa4, size 0x158, virtual false, abstract: false, final false
inline void CheckForBadRoomName(::StringW  nameToCheck) ;

/// @brief Method CheckForBadTroopName, addr 0x5c81d50, size 0x158, virtual false, abstract: false, final false
inline void CheckForBadTroopName(::StringW  nameToCheck) ;

/// @brief Method CheckInternetConnection, addr 0x5c75960, size 0x5c, virtual false, abstract: false, final false
inline bool CheckInternetConnection() ;

/// @brief Method CheckVoiceChatEnabled, addr 0x5c83db0, size 0x4c, virtual false, abstract: false, final false
inline bool CheckVoiceChatEnabled() ;

/// @brief Method ColourScreen, addr 0x5c81320, size 0x42c, virtual false, abstract: false, final false
inline void ColourScreen() ;

/// @brief Method CompQueueUnlockButtonPress, addr 0x5c7b1f8, size 0x110, virtual false, abstract: false, final false
inline void CompQueueUnlockButtonPress() ;

/// @brief Method CreditsScreen, addr 0x5c7f0a4, size 0x38, virtual false, abstract: false, final false
inline void CreditsScreen() ;

/// @brief Method DecreaseState, addr 0x5c78e44, size 0x58, virtual false, abstract: false, final false
inline void DecreaseState() ;

/// [AsyncStateMachine(typeof(GorillaNetworking.GorillaComputer::<DisconnectAfterDelay>d__391))]
/// @brief Method DisconnectAfterDelay, addr 0x5c7bbcc, size 0xa4, virtual false, abstract: false, final false
inline void DisconnectAfterDelay(float_t  seconds) ;

/// @brief Method GeneralFailureMessage, addr 0x5c78a20, size 0x8c, virtual false, abstract: false, final false
inline void GeneralFailureMessage(::StringW  failMessage) ;

/// @brief Method GetCurrentTime, addr 0x5c77d00, size 0x138, virtual false, abstract: false, final false
inline void GetCurrentTime() ;

/// @brief Method GetCurrentTroop, addr 0x5c7bff4, size 0x1c, virtual false, abstract: false, final false
inline ::StringW GetCurrentTroop() ;

/// @brief Method GetCurrentTroopPopulation, addr 0x5c7c010, size 0x18, virtual false, abstract: false, final false
inline int32_t GetCurrentTroopPopulation() ;

/// @brief Method GetJoinTriggerForZone, addr 0x5c7a8d4, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GetJoinTriggerForZone(::StringW  zone) ;

/// @brief Method GetJoinTriggerFromFullGameModeString, addr 0x5c7a944, size 0x170, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GetJoinTriggerFromFullGameModeString(::StringW  gameModeString) ;

/// @brief Method GetLangaugesList, addr 0x5c85284, size 0x374, virtual false, abstract: false, final false
inline void GetLangaugesList(::by_ref<::StringW>  langStr) ;

/// @brief Method GetLanguageScreenLocalisation, addr 0x5c850bc, size 0x1c8, virtual false, abstract: false, final false
inline ::StringW GetLanguageScreenLocalisation() ;

/// @brief Method GetLocalisedLanguageScreen, addr 0x5c850b8, size 0x4, virtual false, abstract: false, final false
inline ::StringW GetLocalisedLanguageScreen() ;

/// @brief Method GetOrderListForScreen, addr 0x5c8196c, size 0x138, virtual false, abstract: false, final false
inline ::StringW GetOrderListForScreen(::GlobalNamespace::GorillaComputer_ComputerState  currentState) ;

/// @brief Method GetQueueNameForTroop, addr 0x5c7beb0, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetQueueNameForTroop(::StringW  troop) ;

/// @brief Method GetRemainingChars, addr 0x5c855f8, size 0xdc, virtual false, abstract: false, final false
inline int32_t GetRemainingChars(::StringW  value, int32_t  maxLength) ;

/// @brief Method GetSelectedMapJoinTrigger, addr 0x5c7a844, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GetSelectedMapJoinTrigger() ;

/// @brief Method GetServerTime, addr 0x5c744f4, size 0xac, virtual false, abstract: false, final false
inline ::System::DateTime GetServerTime() ;

/// @brief Method GetState, addr 0x5c7b0f4, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaComputer_ComputerState GetState(int32_t  index) ;

/// @brief Method GetStateIndex, addr 0x5c83530, size 0xd8, virtual false, abstract: false, final false
inline int32_t GetStateIndex(::GlobalNamespace::GorillaComputer_ComputerState  state) ;

/// @brief Method GetVStumpRoomDisplayName, addr 0x5c74894, size 0x38, virtual false, abstract: false, final false
inline ::StringW GetVStumpRoomDisplayName(::StringW  roomName) ;

/// @brief Method GroupScreen, addr 0x5c7e374, size 0x3a0, virtual false, abstract: false, final false
inline void GroupScreen() ;

/// @brief Method GuardianConsentMessage, addr 0x5c845c8, size 0x29c, virtual false, abstract: false, final false
inline bool GuardianConsentMessage(::StringW  setupKIDButtonName, ::StringW  featureDescription) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.GorillaComputer::<HandleInitialTroopQueueState>d__354))]
/// @brief Method HandleInitialTroopQueueState, addr 0x5c77744, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HandleInitialTroopQueueState() ;

/// @brief Method IncreaseState, addr 0x5c78e9c, size 0x5c, virtual false, abstract: false, final false
inline void IncreaseState() ;

/// @brief Method Initialise, addr 0x5c75048, size 0x458, virtual false, abstract: false, final false
inline void Initialise() ;

/// @brief Method InitialiseAllRoomStates, addr 0x5c75e84, size 0x88, virtual false, abstract: false, final false
inline void InitialiseAllRoomStates() ;

/// @brief Method InitialiseLanguageScreen, addr 0x5c75ff0, size 0xb4, virtual false, abstract: false, final false
inline void InitialiseLanguageScreen() ;

/// @brief Method InitialiseRoomScreens, addr 0x5c75d10, size 0xd8, virtual false, abstract: false, final false
inline void InitialiseRoomScreens() ;

/// @brief Method InitialiseStrings, addr 0x5c75de8, size 0x9c, virtual false, abstract: false, final false
inline void InitialiseStrings() ;

/// @brief Method InitializeAutoMuteState, addr 0x5c769cc, size 0xc0, virtual false, abstract: false, final false
inline void InitializeAutoMuteState() ;

/// @brief Method InitializeColorState, addr 0x5c774e4, size 0x1cc, virtual false, abstract: false, final false
inline void InitializeColorState() ;

/// @brief Method InitializeCreditsState, addr 0x5c77164, size 0x4, virtual false, abstract: false, final false
inline void InitializeCreditsState() ;

/// @brief Method InitializeGameMode, addr 0x5c76a8c, size 0x558, virtual false, abstract: false, final false
inline void InitializeGameMode() ;

/// @brief Method InitializeGameMode, addr 0x5c777b8, size 0xac, virtual false, abstract: false, final false
inline void InitializeGameMode(::StringW  gameMode) ;

/// @brief Method InitializeGroupState, addr 0x5c767c0, size 0xbc, virtual false, abstract: false, final false
inline void InitializeGroupState() ;

/// @brief Method InitializeKIdState, addr 0x5c77438, size 0xa4, virtual false, abstract: false, final false
inline void InitializeKIdState() ;

/// @brief Method InitializeMicState, addr 0x5c766e8, size 0xd8, virtual false, abstract: false, final false
inline void InitializeMicState() ;

/// @brief Method InitializeNameState, addr 0x5c760a4, size 0x4e0, virtual false, abstract: false, final false
inline void InitializeNameState() ;

/// @brief Method InitializeQueueState, addr 0x5c765dc, size 0x10c, virtual false, abstract: false, final false
inline void InitializeQueueState() ;

/// @brief Method InitializeRedeemState, addr 0x5c774dc, size 0x8, virtual false, abstract: false, final false
inline void InitializeRedeemState() ;

/// @brief Method InitializeRoomState, addr 0x5c76584, size 0x4, virtual false, abstract: false, final false
inline void InitializeRoomState() ;

/// @brief Method InitializeStartupState, addr 0x5c765d8, size 0x4, virtual false, abstract: false, final false
inline void InitializeStartupState() ;

/// @brief Method InitializeSupportState, addr 0x5c771d4, size 0x8, virtual false, abstract: false, final false
inline void InitializeSupportState() ;

/// @brief Method InitializeTimeState, addr 0x5c77168, size 0x6c, virtual false, abstract: false, final false
inline void InitializeTimeState() ;

/// @brief Method InitializeTroopState, addr 0x5c771dc, size 0x25c, virtual false, abstract: false, final false
inline void InitializeTroopState() ;

/// @brief Method InitializeTurnState, addr 0x5c76588, size 0x50, virtual false, abstract: false, final false
inline void InitializeTurnState() ;

/// @brief Method InitializeVisualsState, addr 0x5c76fe4, size 0x180, virtual false, abstract: false, final false
inline void InitializeVisualsState() ;

/// @brief Method InitializeVoiceState, addr 0x5c7687c, size 0x150, virtual false, abstract: false, final false
inline void InitializeVoiceState() ;

/// @brief Method IsPlayerInVirtualStump, addr 0x5c84500, size 0x8, virtual false, abstract: false, final false
inline bool IsPlayerInVirtualStump() ;

/// @brief Method IsVStumpRoomName, addr 0x5c74654, size 0xf0, virtual false, abstract: false, final false
inline bool IsVStumpRoomName(::StringW  roomName) ;

/// @brief Method IsValidTroopName, addr 0x5c776b0, size 0x94, virtual false, abstract: false, final false
inline bool IsValidTroopName(::StringW  troop) ;

/// @brief Method IsValidVStumpModePrefix, addr 0x5c74640, size 0x14, virtual false, abstract: false, final false
static inline bool IsValidVStumpModePrefix(char16_t  c) ;

/// @brief Method JoinDefaultQueue, addr 0x5c7befc, size 0x4c, virtual false, abstract: false, final false
inline void JoinDefaultQueue() ;

/// @brief Method JoinQueue, addr 0x5c7bd30, size 0xb0, virtual false, abstract: false, final false
inline void JoinQueue(::StringW  queueName, bool  isTroopQueue) ;

/// @brief Method JoinTroop, addr 0x5c7bde0, size 0xd0, virtual false, abstract: false, final false
inline void JoinTroop(::StringW  newTroopName) ;

/// @brief Method JoinTroopQueue, addr 0x5c7beb8, size 0x44, virtual false, abstract: false, final false
inline void JoinTroopQueue() ;

/// @brief Method KID_SetVoiceChatSettingOnStart, addr 0x5c83d94, size 0x1c, virtual false, abstract: false, final false
inline void KID_SetVoiceChatSettingOnStart(bool  voiceChatEnabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy, bool  hasOptedInPreviously) ;

/// @brief Method KIdScreen, addr 0x5c80604, size 0xbc, virtual false, abstract: false, final false
inline void KIdScreen() ;

/// @brief Method KIdScreen_DisplayPermissions, addr 0x5c84c3c, size 0x47c, virtual false, abstract: false, final false
inline void KIdScreen_DisplayPermissions() ;

/// @brief Method LanguageScreen, addr 0x5c7c62c, size 0x28, virtual false, abstract: false, final false
inline void LanguageScreen() ;

/// @brief Method LeaveTroop, addr 0x5c7bf48, size 0xac, virtual false, abstract: false, final false
inline void LeaveTroop() ;

/// @brief Method LimitedOnlineFunctionalityScreen, addr 0x5c80e40, size 0xb4, virtual false, abstract: false, final false
inline void LimitedOnlineFunctionalityScreen() ;

/// @brief Method LoadingScreen, addr 0x5c7fc54, size 0x120, virtual false, abstract: false, final false
inline void LoadingScreen() ;

/// @brief Method MicScreen, addr 0x5c7dac0, size 0x8b4, virtual false, abstract: false, final false
inline void MicScreen() ;

/// @brief Method MicScreen_KIdProhibited, addr 0x5c80ef4, size 0x4, virtual false, abstract: false, final false
inline void MicScreen_KIdProhibited() ;

/// @brief Method MicScreen_Permission, addr 0x5c84998, size 0xe0, virtual false, abstract: false, final false
inline void MicScreen_Permission() ;

/// @brief Method NameScreen, addr 0x5c7cf70, size 0x360, virtual false, abstract: false, final false
inline void NameScreen() ;

/// @brief Method NameScreen_KIdProhibited, addr 0x5c81108, size 0xa4, virtual false, abstract: false, final false
inline void NameScreen_KIdProhibited() ;

/// @brief Method NameScreen_Permission, addr 0x5c811ac, size 0x174, virtual false, abstract: false, final false
inline void NameScreen_Permission() ;

/// @brief Method NameWarningScreen, addr 0x5c7fa88, size 0x1cc, virtual false, abstract: false, final false
inline void NameWarningScreen() ;

static inline ::GorillaNetworking::GorillaComputer* New_ctor() ;

/// @brief Method OnConnectedToMasterStuff, addr 0x5c77a5c, size 0x2a4, virtual false, abstract: false, final false
inline void OnConnectedToMasterStuff() ;

/// @brief Method OnDestroy, addr 0x5c75680, size 0x154, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5c75590, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c754a0, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnErrorNameCheck, addr 0x5c829bc, size 0x70, virtual false, abstract: false, final false
inline void OnErrorNameCheck(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnErrorShared, addr 0x5c82a2c, size 0x844, virtual false, abstract: false, final false
static inline void OnErrorShared(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnFirstJoinedRoom_IncrementSessionCount, addr 0x5c838fc, size 0x144, virtual false, abstract: false, final false
static inline void OnFirstJoinedRoom_IncrementSessionCount() ;

/// @brief Method OnGetTimeFailure, addr 0x5c83744, size 0x1b4, virtual false, abstract: false, final false
inline void OnGetTimeFailure(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnGetTimeSuccess, addr 0x5c83608, size 0x13c, virtual false, abstract: false, final false
inline void OnGetTimeSuccess(::PlayFab::ClientModels::GetTimeResult*  result) ;

/// @brief Method OnGroupJoinButtonPress, addr 0x5c7aab4, size 0x640, virtual false, abstract: false, final false
inline void OnGroupJoinButtonPress(int32_t  mapJoinIndex, ::GlobalNamespace::GorillaFriendCollider*  chosenFriendJoinCollider) ;

/// @brief Method OnKIDSessionUpdated_CustomNicknames, addr 0x5c84a78, size 0x1c4, virtual false, abstract: false, final false
inline void OnKIDSessionUpdated_CustomNicknames(bool  showCustomNames, ::GlobalNamespace::Permission_ManagedByEnum  managedBy) ;

/// @brief Method OnLanguageChanged, addr 0x5c856d4, size 0x170, virtual false, abstract: false, final false
inline void OnLanguageChanged() ;

/// @brief Method OnModeSelectButtonPress, addr 0x5c77864, size 0x1f8, virtual false, abstract: false, final false
inline void OnModeSelectButtonPress(::StringW  gameMode, bool  leftHand) ;

/// @brief Method OnPlayerNameChecked, addr 0x5c822c0, size 0x4dc, virtual false, abstract: false, final false
inline void OnPlayerNameChecked(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method OnReturnCurrentVersion, addr 0x5c78288, size 0x798, virtual false, abstract: false, final false
inline void OnReturnCurrentVersion(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method OnRoomNameChecked, addr 0x5c81ea8, size 0x418, virtual false, abstract: false, final false
inline void OnRoomNameChecked(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method OnSessionUpdate_GorillaComputer, addr 0x5c845c0, size 0x8, virtual false, abstract: false, final false
inline void OnSessionUpdate_GorillaComputer() ;

/// @brief Method OnTroopNameChecked, addr 0x5c82838, size 0x184, virtual false, abstract: false, final false
inline void OnTroopNameChecked(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method PlayerCountChangedCallback, addr 0x5c838f8, size 0x4, virtual false, abstract: false, final false
inline void PlayerCountChangedCallback(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PopState, addr 0x5c7b308, size 0xc4, virtual false, abstract: false, final false
inline void PopState() ;

/// @brief Method PressButton, addr 0x5c78aac, size 0x1a8, virtual false, abstract: false, final false
inline void PressButton(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessAutoMuteState, addr 0x5c79a9c, size 0x128, virtual false, abstract: false, final false
inline void ProcessAutoMuteState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessColorState, addr 0x5c7b414, size 0x404, virtual false, abstract: false, final false
inline void ProcessColorState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessCreditsState, addr 0x5c79bc4, size 0x48, virtual false, abstract: false, final false
inline void ProcessCreditsState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessGroupState, addr 0x5c7989c, size 0xf8, virtual false, abstract: false, final false
inline void ProcessGroupState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessKIdState, addr 0x5c7a340, size 0x18, virtual false, abstract: false, final false
inline void ProcessKIdState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessLanguageState, addr 0x5c78ef8, size 0x104, virtual false, abstract: false, final false
inline void ProcessLanguageState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessMicState, addr 0x5c79714, size 0xd4, virtual false, abstract: false, final false
inline void ProcessMicState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessNameState, addr 0x5c79424, size 0x1f8, virtual false, abstract: false, final false
inline void ProcessNameState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessNameWarningState, addr 0x5c79fec, size 0x130, virtual false, abstract: false, final false
inline void ProcessNameWarningState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessQueueState, addr 0x5c797e8, size 0xb4, virtual false, abstract: false, final false
inline void ProcessQueueState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessRedemptionState, addr 0x5c7a358, size 0x1e8, virtual false, abstract: false, final false
inline void ProcessRedemptionState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessRoomState, addr 0x5c78ffc, size 0x428, virtual false, abstract: false, final false
inline void ProcessRoomState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessScreen_SetupKID, addr 0x5c7c11c, size 0xa4, virtual false, abstract: false, final false
inline void ProcessScreen_SetupKID() ;

/// @brief Method ProcessStartupState, addr 0x5c78c54, size 0x24, virtual false, abstract: false, final false
inline void ProcessStartupState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessSupportState, addr 0x5c79c0c, size 0x14, virtual false, abstract: false, final false
inline void ProcessSupportState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessTroopState, addr 0x5c7a11c, size 0x224, virtual false, abstract: false, final false
inline void ProcessTroopState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessTurnState, addr 0x5c7961c, size 0xf8, virtual false, abstract: false, final false
inline void ProcessTurnState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessVisualsState, addr 0x5c79c20, size 0x3cc, virtual false, abstract: false, final false
inline void ProcessVisualsState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProcessVoiceState, addr 0x5c79994, size 0x108, virtual false, abstract: false, final false
inline void ProcessVoiceState(::GorillaNetworking::GorillaKeyboardBindings  buttonPressed) ;

/// @brief Method ProhibitedMessage, addr 0x5c84864, size 0x134, virtual false, abstract: false, final false
inline void ProhibitedMessage(::StringW  verb) ;

/// @brief Method QueueScreen, addr 0x5c7d708, size 0x3b8, virtual false, abstract: false, final false
inline void QueueScreen() ;

/// @brief Method RedemptionScreen, addr 0x5c806c0, size 0x528, virtual false, abstract: false, final false
inline void RedemptionScreen() ;

/// @brief Method RefreshFunctionNames, addr 0x5c75b44, size 0x1cc, virtual false, abstract: false, final false
inline void RefreshFunctionNames() ;

/// @brief Method RegisterOnNametagSettingChanged, addr 0x5c84274, size 0xf0, virtual false, abstract: false, final false
static inline void RegisterOnNametagSettingChanged(::System::Action_1<bool>*  callback) ;

/// @brief Method RegisterPrimaryJoinTrigger, addr 0x5c7a7e4, size 0x60, virtual false, abstract: false, final false
inline void RegisterPrimaryJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger*  trigger) ;

/// @brief Method RequestTroopPopulation, addr 0x5c78c78, size 0x1cc, virtual false, abstract: false, final false
inline void RequestTroopPopulation(bool  forceUpdate) ;

/// @brief Method RequestUpdatedPermissions, addr 0x5c7bc70, size 0x90, virtual false, abstract: false, final false
inline void RequestUpdatedPermissions() ;

/// @brief Method RestoreFromFailureState, addr 0x5c75a8c, size 0xb8, virtual false, abstract: false, final false
inline void RestoreFromFailureState() ;

/// @brief Method RoomScreen, addr 0x5c7c654, size 0x91c, virtual false, abstract: false, final false
inline void RoomScreen() ;

/// @brief Method RoomScreen_KIdProhibited, addr 0x5c8174c, size 0xa8, virtual false, abstract: false, final false
inline void RoomScreen_KIdProhibited() ;

/// @brief Method RoomScreen_Permission, addr 0x5c817f4, size 0x178, virtual false, abstract: false, final false
inline void RoomScreen_Permission() ;

/// @brief Method SetComputerSettingsBySafety, addr 0x5c77e38, size 0x450, virtual false, abstract: false, final false
inline void SetComputerSettingsBySafety(bool  isSafety, ::ArrayW<::GlobalNamespace::GorillaComputer_ComputerState>  toFilterOut, bool  shouldHide) ;

/// @brief Method SetGameModeWithoutButton, addr 0x5c7a540, size 0x80, virtual false, abstract: false, final false
inline void SetGameModeWithoutButton(::StringW  gameMode) ;

/// @brief Method SetGroupMapJoin, addr 0x5c7c028, size 0xa4, virtual false, abstract: false, final false
inline void SetGroupMapJoin(::StringW  groupMap, int32_t  groupMapIndex) ;

/// @brief Method SetInVirtualStump, addr 0x5c84454, size 0xac, virtual false, abstract: false, final false
inline void SetInVirtualStump(bool  inVirtualStump) ;

/// @brief Method SetLimitOnlineScreens, addr 0x5c84508, size 0x8, virtual false, abstract: false, final false
inline void SetLimitOnlineScreens(bool  isLimited) ;

/// @brief Method SetLocalNameTagText, addr 0x5c8279c, size 0x9c, virtual false, abstract: false, final false
inline void SetLocalNameTagText(::StringW  newName) ;

/// @brief Method SetNameBySafety, addr 0x5c83a40, size 0x354, virtual false, abstract: false, final false
inline void SetNameBySafety(bool  isSafety) ;

/// @brief Method SetNametagSetting, addr 0x5c841e8, size 0x8c, virtual false, abstract: false, final false
inline void SetNametagSetting(bool  setting, ::GlobalNamespace::Permission_ManagedByEnum  managedBy, bool  hasOptedInPreviously) ;

/// @brief Method SetVStumpRoomModePrefix, addr 0x5c74758, size 0xb8, virtual false, abstract: false, final false
inline void SetVStumpRoomModePrefix(::StringW  prefix) ;

/// @brief Method SetVoice, addr 0x5c7c1c0, size 0x124, virtual false, abstract: false, final false
inline void SetVoice(bool  setting, bool  saveSetting) ;

/// @brief Method SetVoiceChatBySafety, addr 0x5c83dfc, size 0x3ec, virtual false, abstract: false, final false
inline void SetVoiceChatBySafety(bool  voiceChatEnabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy) ;

/// @brief Method SliceUpdate, addr 0x5c757d4, size 0x18c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5c74fd4, size 0x74, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartupScreen, addr 0x5c7c324, size 0x308, virtual false, abstract: false, final false
inline void StartupScreen() ;

/// @brief Method StripVStumpRoomPrefix, addr 0x5c74810, size 0x84, virtual false, abstract: false, final false
inline ::StringW StripVStumpRoomPrefix(::StringW  roomName) ;

/// @brief Method SupportScreen, addr 0x5c7f29c, size 0x7ec, virtual false, abstract: false, final false
inline void SupportScreen() ;

/// @brief Method SwitchState, addr 0x5c75f0c, size 0xe4, virtual false, abstract: false, final false
inline void SwitchState(::GlobalNamespace::GorillaComputer_ComputerState  newState, bool  clearStack) ;

/// @brief Method SwitchToLoadingState, addr 0x5c7b408, size 0xc, virtual false, abstract: false, final false
inline void SwitchToLoadingState() ;

/// @brief Method SwitchToWarningState, addr 0x5c7b3cc, size 0x3c, virtual false, abstract: false, final false
inline void SwitchToWarningState() ;

/// @brief Method TimeScreen, addr 0x5c7f0dc, size 0x1c0, virtual false, abstract: false, final false
inline void TimeScreen() ;

/// @brief Method TroopScreen, addr 0x5c7fd74, size 0x890, virtual false, abstract: false, final false
inline void TroopScreen() ;

/// @brief Method TroopScreen_KIdProhibited, addr 0x5c80ef8, size 0xa4, virtual false, abstract: false, final false
inline void TroopScreen_KIdProhibited() ;

/// @brief Method TroopScreen_Permission, addr 0x5c80f9c, size 0x16c, virtual false, abstract: false, final false
inline void TroopScreen_Permission() ;

/// @brief Method TurnScreen, addr 0x5c7d2d0, size 0x438, virtual false, abstract: false, final false
inline void TurnScreen() ;

/// @brief Method UnregisterOnNametagSettingChanged, addr 0x5c84364, size 0xf0, virtual false, abstract: false, final false
static inline void UnregisterOnNametagSettingChanged(::System::Action_1<bool>*  callback) ;

/// @brief Method UpdateColor, addr 0x5c834e8, size 0x48, virtual false, abstract: false, final false
inline void UpdateColor(float_t  red, float_t  green, float_t  blue) ;

/// @brief Method UpdateFailureText, addr 0x5c759bc, size 0xd0, virtual false, abstract: false, final false
inline void UpdateFailureText(::StringW  failMessage) ;

/// @brief Method UpdateFunctionScreen, addr 0x5c7c2e4, size 0x40, virtual false, abstract: false, final false
inline void UpdateFunctionScreen() ;

/// @brief Method UpdateGameModeText, addr 0x5c7a5c0, size 0x224, virtual false, abstract: false, final false
inline void UpdateGameModeText() ;

/// @brief Method UpdateKidState, addr 0x5c84510, size 0x8, virtual false, abstract: false, final false
inline void UpdateKidState() ;

/// @brief Method UpdateNametagSetting, addr 0x5c7b848, size 0x384, virtual false, abstract: false, final false
inline void UpdateNametagSetting(bool  newSettingValue, bool  saveSetting) ;

/// @brief Method UpdateScreen, addr 0x5c74a70, size 0x1e0, virtual false, abstract: false, final false
inline void UpdateScreen() ;

/// [AsyncStateMachine(typeof(GorillaNetworking.GorillaComputer::<UpdateSession>d__493))]
/// @brief Method UpdateSession, addr 0x5c84518, size 0xa8, virtual false, abstract: false, final false
inline void UpdateSession() ;

/// @brief Method VisualsScreen, addr 0x5c7ecb4, size 0x3f0, virtual false, abstract: false, final false
inline void VisualsScreen() ;

/// @brief Method VoiceScreen, addr 0x5c7e714, size 0x324, virtual false, abstract: false, final false
inline void VoiceScreen() ;

/// @brief Method VoiceScreen_KIdProhibited, addr 0x5c80be8, size 0xa8, virtual false, abstract: false, final false
inline void VoiceScreen_KIdProhibited() ;

/// @brief Method VoiceScreen_Permission, addr 0x5c80c90, size 0x1b0, virtual false, abstract: false, final false
inline void VoiceScreen_Permission() ;

/// [CompilerGenerated]
/// @brief Method <Initialise>b__340_0, addr 0x5c863b4, size 0x18, virtual false, abstract: false, final false
inline void _Initialise_b__340_0() ;

/// [CompilerGenerated]
/// @brief Method <RefreshFunctionNames>b__525_0, addr 0x5c86670, size 0x120, virtual false, abstract: false, final false
inline void _RefreshFunctionNames_b__525_0(::GorillaNetworking::GorillaComputer_StateOrderItem*  s) ;

/// [CompilerGenerated]
/// @brief Method <RequestTroopPopulation>b__399_0, addr 0x5c863cc, size 0x138, virtual false, abstract: false, final false
inline void _RequestTroopPopulation_b__399_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// [CompilerGenerated]
/// @brief Method <RequestTroopPopulation>b__399_1, addr 0x5c86504, size 0x9c, virtual false, abstract: false, final false
inline void _RequestTroopPopulation_b__399_1(::PlayFab::PlayFabError*  error) ;

/// [CompilerGenerated]
/// @brief Method <SetComputerSettingsBySafety>b__469_0, addr 0x5c865a0, size 0xd0, virtual false, abstract: false, final false
inline void _SetComputerSettingsBySafety_b__469_0(::GorillaNetworking::GorillaComputer_StateOrderItem*  s) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_FunctionNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_FunctionNames() ;

constexpr int32_t const& __cordl_internal_get_FunctionsCount() const;

constexpr int32_t& __cordl_internal_get_FunctionsCount() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_LoadingRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_LoadingRoutine() ;

constexpr ::System::Action* const& __cordl_internal_get_OnServerTimeUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnServerTimeUpdated() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>* const& __cordl_internal_get_OrderList() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*& __cordl_internal_get_OrderList() ;

constexpr ::StringW const& __cordl_internal_get_Pointer() const;

constexpr ::StringW& __cordl_internal_get_Pointer() ;

constexpr bool const& __cordl_internal_get__NametagsEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__NametagsEnabled_k__BackingField() ;

constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __cordl_internal_get__RedemptionRestrictionTime_k__BackingField() const;

constexpr ::System::Nullable_1<::System::DateTimeOffset>& __cordl_internal_get__RedemptionRestrictionTime_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>* const& __cordl_internal_get__activeOrderList() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*& __cordl_internal_get__activeOrderList() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__allowedMapsToJoin() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__allowedMapsToJoin() ;

constexpr ::StringW const& __cordl_internal_get__cachedUnableToConnect() const;

constexpr ::StringW& __cordl_internal_get__cachedUnableToConnect() ;

constexpr ::StringW const& __cordl_internal_get__cachedVersionMismatch() const;

constexpr ::StringW& __cordl_internal_get__cachedVersionMismatch() ;

constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState const& __cordl_internal_get__currentScreentState() const;

constexpr ::GlobalNamespace::GorillaComputer_EKidScreenState& __cordl_internal_get__currentScreentState() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaComputer_ComputerState>* const& __cordl_internal_get__filteredStates() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaComputer_ComputerState>*& __cordl_internal_get__filteredStates() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__interestedPermissionNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__interestedPermissionNames() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__languagesDisplaySB() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__languagesDisplaySB() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get__lastLocaleChecked_Connect() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get__lastLocaleChecked_Connect() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get__lastLocaleChecked_Version() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get__lastLocaleChecked_Version() ;

constexpr float_t const& __cordl_internal_get__nextUpdateAttemptTime() const;

constexpr float_t& __cordl_internal_get__nextUpdateAttemptTime() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get__previousLocalisationSetting() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get__previousLocalisationSetting() ;

constexpr float_t const& __cordl_internal_get__updateAttemptCooldown() const;

constexpr float_t& __cordl_internal_get__updateAttemptCooldown() ;

constexpr ::StringW const& __cordl_internal_get__version_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__version_k__BackingField() ;

constexpr bool const& __cordl_internal_get__waitingForUpdatedSession() const;

constexpr bool& __cordl_internal_get__waitingForUpdatedSession() ;

constexpr bool const& __cordl_internal_get_allowedInCompetitive() const;

constexpr bool& __cordl_internal_get_allowedInCompetitive() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_anywhereOneWeek() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_anywhereOneWeek() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_anywhereOneWeekFile() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_anywhereOneWeekFile() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_anywhereTwoWeek() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_anywhereTwoWeek() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_anywhereTwoWeekFile() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_anywhereTwoWeekFile() ;

constexpr ::StringW const& __cordl_internal_get_autoMuteType() const;

constexpr ::StringW& __cordl_internal_get_autoMuteType() ;

constexpr ::StringW const& __cordl_internal_get_blueText() const;

constexpr ::StringW& __cordl_internal_get_blueText() ;

constexpr float_t const& __cordl_internal_get_blueValue() const;

constexpr float_t& __cordl_internal_get_blueValue() ;

constexpr ::StringW const& __cordl_internal_get_buildCode() const;

constexpr ::StringW& __cordl_internal_get_buildCode() ;

constexpr ::StringW const& __cordl_internal_get_buildDate() const;

constexpr ::StringW& __cordl_internal_get_buildDate() ;

constexpr float_t const& __cordl_internal_get_buttonFadeTime() const;

constexpr float_t& __cordl_internal_get_buttonFadeTime() ;

constexpr float_t const& __cordl_internal_get_checkIfConnectedSeconds() const;

constexpr float_t& __cordl_internal_get_checkIfConnectedSeconds() ;

constexpr float_t const& __cordl_internal_get_checkIfDisconnectedSeconds() const;

constexpr float_t& __cordl_internal_get_checkIfDisconnectedSeconds() ;

constexpr int32_t const& __cordl_internal_get_colorCursorLine() const;

constexpr int32_t& __cordl_internal_get_colorCursorLine() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_computerScreenRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_computerScreenRenderer() ;

constexpr ::UnityW<::GorillaNetworking::CreditsView> const& __cordl_internal_get_creditsView() const;

constexpr ::UnityW<::GorillaNetworking::CreditsView>& __cordl_internal_get_creditsView() ;

constexpr ::GlobalNamespace::GorillaComputer_ComputerState const& __cordl_internal_get_currentComputerState() const;

constexpr ::GlobalNamespace::GorillaComputer_ComputerState& __cordl_internal_get_currentComputerState() ;

constexpr ::UnityW<::GlobalNamespace::WatchableStringSO> const& __cordl_internal_get_currentGameMode() const;

constexpr ::UnityW<::GlobalNamespace::WatchableStringSO>& __cordl_internal_get_currentGameMode() ;

constexpr ::UnityW<::GlobalNamespace::WatchableStringSO> const& __cordl_internal_get_currentGameModeText() const;

constexpr ::UnityW<::GlobalNamespace::WatchableStringSO>& __cordl_internal_get_currentGameModeText() ;

constexpr ::StringW const& __cordl_internal_get_currentName() const;

constexpr ::StringW& __cordl_internal_get_currentName() ;

constexpr ::StringW const& __cordl_internal_get_currentQueue() const;

constexpr ::StringW& __cordl_internal_get_currentQueue() ;

constexpr int32_t const& __cordl_internal_get_currentStateIndex() const;

constexpr int32_t& __cordl_internal_get_currentStateIndex() ;

constexpr ::StringW const& __cordl_internal_get_currentTextField() const;

constexpr ::StringW& __cordl_internal_get_currentTextField() ;

constexpr int32_t const& __cordl_internal_get_currentTroopPopulation() const;

constexpr int32_t& __cordl_internal_get_currentTroopPopulation() ;

constexpr float_t const& __cordl_internal_get_defaultUpdateCooldown() const;

constexpr float_t& __cordl_internal_get_defaultUpdateCooldown() ;

constexpr float_t const& __cordl_internal_get_deltaTime() const;

constexpr float_t& __cordl_internal_get_deltaTime() ;

constexpr bool const& __cordl_internal_get_didInitializeGameMode() const;

constexpr bool& __cordl_internal_get_didInitializeGameMode() ;

constexpr bool const& __cordl_internal_get_disableParticles() const;

constexpr bool& __cordl_internal_get_disableParticles() ;

constexpr bool const& __cordl_internal_get_displaySupport() const;

constexpr bool& __cordl_internal_get_displaySupport() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_exactOneWeek() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_exactOneWeek() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_exactOneWeekFile() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_exactOneWeekFile() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_friendJoinCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_friendJoinCollider() ;

constexpr ::GorillaNetworking::GorillaText* const& __cordl_internal_get_functionSelectText() const;

constexpr ::GorillaNetworking::GorillaText*& __cordl_internal_get_functionSelectText() ;

constexpr ::StringW const& __cordl_internal_get_greenText() const;

constexpr ::StringW& __cordl_internal_get_greenText() ;

constexpr float_t const& __cordl_internal_get_greenValue() const;

constexpr float_t& __cordl_internal_get_greenValue() ;

constexpr ::StringW const& __cordl_internal_get_groupMapJoin() const;

constexpr ::StringW& __cordl_internal_get_groupMapJoin() ;

constexpr int32_t const& __cordl_internal_get_groupMapJoinIndex() const;

constexpr int32_t& __cordl_internal_get_groupMapJoinIndex() ;

constexpr bool const& __cordl_internal_get_hasRequestedInitialTroopPopulation() const;

constexpr bool& __cordl_internal_get_hasRequestedInitialTroopPopulation() ;

constexpr int32_t const& __cordl_internal_get_highestCharacterCount() const;

constexpr int32_t& __cordl_internal_get_highestCharacterCount() ;

constexpr int32_t const& __cordl_internal_get_includeUpdatedServerSynchTest() const;

constexpr int32_t& __cordl_internal_get_includeUpdatedServerSynchTest() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr float_t const& __cordl_internal_get_instrumentVolume() const;

constexpr float_t& __cordl_internal_get_instrumentVolume() ;

constexpr bool const& __cordl_internal_get_internetFailure() const;

constexpr bool& __cordl_internal_get_internetFailure() ;

constexpr bool const& __cordl_internal_get_iobtMode() const;

constexpr bool& __cordl_internal_get_iobtMode() ;

constexpr bool const& __cordl_internal_get_isConnectedToMaster() const;

constexpr bool& __cordl_internal_get_isConnectedToMaster() ;

constexpr bool const& __cordl_internal_get_isSubcribed() const;

constexpr bool& __cordl_internal_get_isSubcribed() ;

constexpr float_t const& __cordl_internal_get_lastCheckedWifi() const;

constexpr float_t& __cordl_internal_get_lastCheckedWifi() ;

constexpr ::StringW const& __cordl_internal_get_lastPressedGameMode() const;

constexpr ::StringW& __cordl_internal_get_lastPressedGameMode() ;

constexpr ::GorillaGameModes::GameModeType const& __cordl_internal_get_lastPressedGameModeType() const;

constexpr ::GorillaGameModes::GameModeType& __cordl_internal_get_lastPressedGameModeType() ;

constexpr float_t const& __cordl_internal_get_lastUpdateTime() const;

constexpr float_t& __cordl_internal_get_lastUpdateTime() ;

constexpr bool const& __cordl_internal_get_leftHanded() const;

constexpr bool& __cordl_internal_get_leftHanded() ;

constexpr bool const& __cordl_internal_get_limitOnlineScreens() const;

constexpr bool& __cordl_internal_get_limitOnlineScreens() ;

constexpr float_t const& __cordl_internal_get_micInputTestTimer() const;

constexpr float_t& __cordl_internal_get_micInputTestTimer() ;

constexpr float_t const& __cordl_internal_get_micInputTestTimerThreshold() const;

constexpr float_t& __cordl_internal_get_micInputTestTimerThreshold() ;

constexpr float_t const& __cordl_internal_get_micUpdateCooldown() const;

constexpr float_t& __cordl_internal_get_micUpdateCooldown() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ModeSelectButton>> const& __cordl_internal_get_modeSelectButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ModeSelectButton>>& __cordl_internal_get_modeSelectButtons() ;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& __cordl_internal_get_networkController() const;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& __cordl_internal_get_networkController() ;

constexpr float_t const& __cordl_internal_get_nextPopulationCheckTime() const;

constexpr float_t& __cordl_internal_get_nextPopulationCheckTime() ;

constexpr ::StringW const& __cordl_internal_get_offlineTextInitialString() const;

constexpr ::StringW& __cordl_internal_get_offlineTextInitialString() ;

constexpr bool const& __cordl_internal_get_perfMode() const;

constexpr bool& __cordl_internal_get_perfMode() ;

constexpr bool const& __cordl_internal_get_playerInVirtualStump() const;

constexpr bool& __cordl_internal_get_playerInVirtualStump() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_pressedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_pressedMaterial() ;

constexpr ::GlobalNamespace::GorillaComputer_ComputerState const& __cordl_internal_get_previousComputerState() const;

constexpr ::GlobalNamespace::GorillaComputer_ComputerState& __cordl_internal_get_previousComputerState() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>* const& __cordl_internal_get_primaryTriggersByZone() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*& __cordl_internal_get_primaryTriggersByZone() ;

constexpr ::StringW const& __cordl_internal_get_pttType() const;

constexpr ::StringW& __cordl_internal_get_pttType() ;

constexpr ::StringW const& __cordl_internal_get_redText() const;

constexpr ::StringW& __cordl_internal_get_redText() ;

constexpr float_t const& __cordl_internal_get_redValue() const;

constexpr float_t& __cordl_internal_get_redValue() ;

constexpr ::StringW const& __cordl_internal_get_redemptionCode() const;

constexpr ::StringW& __cordl_internal_get_redemptionCode() ;

constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult const& __cordl_internal_get_redemptionResult() const;

constexpr ::GlobalNamespace::GorillaComputer_RedemptionResult& __cordl_internal_get_redemptionResult() ;

constexpr bool const& __cordl_internal_get_rememberTroopQueueState() const;

constexpr bool& __cordl_internal_get_rememberTroopQueueState() ;

constexpr bool const& __cordl_internal_get_roomFull() const;

constexpr bool& __cordl_internal_get_roomFull() ;

constexpr bool const& __cordl_internal_get_roomNotAllowed() const;

constexpr bool& __cordl_internal_get_roomNotAllowed() ;

constexpr ::StringW const& __cordl_internal_get_roomToJoin() const;

constexpr ::StringW& __cordl_internal_get_roomToJoin() ;

constexpr ::StringW const& __cordl_internal_get_savedName() const;

constexpr ::StringW& __cordl_internal_get_savedName() ;

constexpr bool const& __cordl_internal_get_screenChanged() const;

constexpr bool& __cordl_internal_get_screenChanged() ;

constexpr ::GorillaNetworking::GorillaText* const& __cordl_internal_get_screenText() const;

constexpr ::GorillaNetworking::GorillaText*& __cordl_internal_get_screenText() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& __cordl_internal_get_speakerLoudness() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& __cordl_internal_get_speakerLoudness() ;

constexpr int64_t const& __cordl_internal_get_startupMillis() const;

constexpr int64_t& __cordl_internal_get_startupMillis() ;

constexpr ::System::DateTime const& __cordl_internal_get_startupTime() const;

constexpr ::System::DateTime& __cordl_internal_get_startupTime() ;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::GorillaComputer_ComputerState>* const& __cordl_internal_get_stateStack() const;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::GorillaComputer_ComputerState>*& __cordl_internal_get_stateStack() ;

constexpr bool const& __cordl_internal_get_stateUpdated() const;

constexpr bool& __cordl_internal_get_stateUpdated() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_topTroops() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_topTroops() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_topVstumpMaps() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_topVstumpMaps() ;

constexpr ::StringW const& __cordl_internal_get_troopName() const;

constexpr ::StringW& __cordl_internal_get_troopName() ;

constexpr float_t const& __cordl_internal_get_troopPopulationCheckCooldown() const;

constexpr float_t& __cordl_internal_get_troopPopulationCheckCooldown() ;

constexpr bool const& __cordl_internal_get_troopQueueActive() const;

constexpr bool& __cordl_internal_get_troopQueueActive() ;

constexpr ::StringW const& __cordl_internal_get_troopToJoin() const;

constexpr ::StringW& __cordl_internal_get_troopToJoin() ;

constexpr bool const& __cordl_internal_get_tryGetTimeAgain() const;

constexpr bool& __cordl_internal_get_tryGetTimeAgain() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_unpressedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_unpressedMaterial() ;

constexpr float_t const& __cordl_internal_get_updateCooldown() const;

constexpr float_t& __cordl_internal_get_updateCooldown() ;

constexpr int32_t const& __cordl_internal_get_usersBanned() const;

constexpr int32_t& __cordl_internal_get_usersBanned() ;

constexpr ::StringW const& __cordl_internal_get_virtualStumpRoomModePrefix() const;

constexpr ::StringW& __cordl_internal_get_virtualStumpRoomModePrefix() ;

constexpr ::StringW const& __cordl_internal_get_virtualStumpRoomPrepend() const;

constexpr ::StringW& __cordl_internal_get_virtualStumpRoomPrepend() ;

constexpr ::StringW const& __cordl_internal_get_voiceChatOn() const;

constexpr ::StringW& __cordl_internal_get_voiceChatOn() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get_waitOneSecond() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get_waitOneSecond() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_wallScreenRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_wallScreenRenderer() ;

constexpr ::GorillaNetworking::GorillaText* const& __cordl_internal_get_wallScreenText() const;

constexpr ::GorillaNetworking::GorillaText*& __cordl_internal_get_wallScreenText() ;

constexpr ::StringW const& __cordl_internal_get_warningConfirmationInputString() const;

constexpr ::StringW& __cordl_internal_get_warningConfirmationInputString() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_wrongVersionMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_wrongVersionMaterial() ;

constexpr void __cordl_internal_set_FunctionNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_FunctionsCount(int32_t  value) ;

constexpr void __cordl_internal_set_LoadingRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_OnServerTimeUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_OrderList(::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*  value) ;

constexpr void __cordl_internal_set_Pointer(::StringW  value) ;

constexpr void __cordl_internal_set__NametagsEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__RedemptionRestrictionTime_k__BackingField(::System::Nullable_1<::System::DateTimeOffset>  value) ;

constexpr void __cordl_internal_set__activeOrderList(::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*  value) ;

constexpr void __cordl_internal_set__allowedMapsToJoin(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__cachedUnableToConnect(::StringW  value) ;

constexpr void __cordl_internal_set__cachedVersionMismatch(::StringW  value) ;

constexpr void __cordl_internal_set__currentScreentState(::GlobalNamespace::GorillaComputer_EKidScreenState  value) ;

constexpr void __cordl_internal_set__filteredStates(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaComputer_ComputerState>*  value) ;

constexpr void __cordl_internal_set__interestedPermissionNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__languagesDisplaySB(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__lastLocaleChecked_Connect(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set__lastLocaleChecked_Version(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set__nextUpdateAttemptTime(float_t  value) ;

constexpr void __cordl_internal_set__previousLocalisationSetting(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set__updateAttemptCooldown(float_t  value) ;

constexpr void __cordl_internal_set__version_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__waitingForUpdatedSession(bool  value) ;

constexpr void __cordl_internal_set_allowedInCompetitive(bool  value) ;

constexpr void __cordl_internal_set_anywhereOneWeek(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_anywhereOneWeekFile(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_anywhereTwoWeek(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_anywhereTwoWeekFile(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_autoMuteType(::StringW  value) ;

constexpr void __cordl_internal_set_blueText(::StringW  value) ;

constexpr void __cordl_internal_set_blueValue(float_t  value) ;

constexpr void __cordl_internal_set_buildCode(::StringW  value) ;

constexpr void __cordl_internal_set_buildDate(::StringW  value) ;

constexpr void __cordl_internal_set_buttonFadeTime(float_t  value) ;

constexpr void __cordl_internal_set_checkIfConnectedSeconds(float_t  value) ;

constexpr void __cordl_internal_set_checkIfDisconnectedSeconds(float_t  value) ;

constexpr void __cordl_internal_set_colorCursorLine(int32_t  value) ;

constexpr void __cordl_internal_set_computerScreenRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_creditsView(::UnityW<::GorillaNetworking::CreditsView>  value) ;

constexpr void __cordl_internal_set_currentComputerState(::GlobalNamespace::GorillaComputer_ComputerState  value) ;

constexpr void __cordl_internal_set_currentGameMode(::UnityW<::GlobalNamespace::WatchableStringSO>  value) ;

constexpr void __cordl_internal_set_currentGameModeText(::UnityW<::GlobalNamespace::WatchableStringSO>  value) ;

constexpr void __cordl_internal_set_currentName(::StringW  value) ;

constexpr void __cordl_internal_set_currentQueue(::StringW  value) ;

constexpr void __cordl_internal_set_currentStateIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentTextField(::StringW  value) ;

constexpr void __cordl_internal_set_currentTroopPopulation(int32_t  value) ;

constexpr void __cordl_internal_set_defaultUpdateCooldown(float_t  value) ;

constexpr void __cordl_internal_set_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_didInitializeGameMode(bool  value) ;

constexpr void __cordl_internal_set_disableParticles(bool  value) ;

constexpr void __cordl_internal_set_displaySupport(bool  value) ;

constexpr void __cordl_internal_set_exactOneWeek(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_exactOneWeekFile(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_friendJoinCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_functionSelectText(::GorillaNetworking::GorillaText*  value) ;

constexpr void __cordl_internal_set_greenText(::StringW  value) ;

constexpr void __cordl_internal_set_greenValue(float_t  value) ;

constexpr void __cordl_internal_set_groupMapJoin(::StringW  value) ;

constexpr void __cordl_internal_set_groupMapJoinIndex(int32_t  value) ;

constexpr void __cordl_internal_set_hasRequestedInitialTroopPopulation(bool  value) ;

constexpr void __cordl_internal_set_highestCharacterCount(int32_t  value) ;

constexpr void __cordl_internal_set_includeUpdatedServerSynchTest(int32_t  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_instrumentVolume(float_t  value) ;

constexpr void __cordl_internal_set_internetFailure(bool  value) ;

constexpr void __cordl_internal_set_iobtMode(bool  value) ;

constexpr void __cordl_internal_set_isConnectedToMaster(bool  value) ;

constexpr void __cordl_internal_set_isSubcribed(bool  value) ;

constexpr void __cordl_internal_set_lastCheckedWifi(float_t  value) ;

constexpr void __cordl_internal_set_lastPressedGameMode(::StringW  value) ;

constexpr void __cordl_internal_set_lastPressedGameModeType(::GorillaGameModes::GameModeType  value) ;

constexpr void __cordl_internal_set_lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_leftHanded(bool  value) ;

constexpr void __cordl_internal_set_limitOnlineScreens(bool  value) ;

constexpr void __cordl_internal_set_micInputTestTimer(float_t  value) ;

constexpr void __cordl_internal_set_micInputTestTimerThreshold(float_t  value) ;

constexpr void __cordl_internal_set_micUpdateCooldown(float_t  value) ;

constexpr void __cordl_internal_set_modeSelectButtons(::ArrayW<::UnityW<::GlobalNamespace::ModeSelectButton>>  value) ;

constexpr void __cordl_internal_set_networkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value) ;

constexpr void __cordl_internal_set_nextPopulationCheckTime(float_t  value) ;

constexpr void __cordl_internal_set_offlineTextInitialString(::StringW  value) ;

constexpr void __cordl_internal_set_perfMode(bool  value) ;

constexpr void __cordl_internal_set_playerInVirtualStump(bool  value) ;

constexpr void __cordl_internal_set_pressedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_previousComputerState(::GlobalNamespace::GorillaComputer_ComputerState  value) ;

constexpr void __cordl_internal_set_primaryTriggersByZone(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*  value) ;

constexpr void __cordl_internal_set_pttType(::StringW  value) ;

constexpr void __cordl_internal_set_redText(::StringW  value) ;

constexpr void __cordl_internal_set_redValue(float_t  value) ;

constexpr void __cordl_internal_set_redemptionCode(::StringW  value) ;

constexpr void __cordl_internal_set_redemptionResult(::GlobalNamespace::GorillaComputer_RedemptionResult  value) ;

constexpr void __cordl_internal_set_rememberTroopQueueState(bool  value) ;

constexpr void __cordl_internal_set_roomFull(bool  value) ;

constexpr void __cordl_internal_set_roomNotAllowed(bool  value) ;

constexpr void __cordl_internal_set_roomToJoin(::StringW  value) ;

constexpr void __cordl_internal_set_savedName(::StringW  value) ;

constexpr void __cordl_internal_set_screenChanged(bool  value) ;

constexpr void __cordl_internal_set_screenText(::GorillaNetworking::GorillaText*  value) ;

constexpr void __cordl_internal_set_speakerLoudness(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value) ;

constexpr void __cordl_internal_set_startupMillis(int64_t  value) ;

constexpr void __cordl_internal_set_startupTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_stateStack(::System::Collections::Generic::Stack_1<::GlobalNamespace::GorillaComputer_ComputerState>*  value) ;

constexpr void __cordl_internal_set_stateUpdated(bool  value) ;

constexpr void __cordl_internal_set_topTroops(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_topVstumpMaps(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_troopName(::StringW  value) ;

constexpr void __cordl_internal_set_troopPopulationCheckCooldown(float_t  value) ;

constexpr void __cordl_internal_set_troopQueueActive(bool  value) ;

constexpr void __cordl_internal_set_troopToJoin(::StringW  value) ;

constexpr void __cordl_internal_set_tryGetTimeAgain(bool  value) ;

constexpr void __cordl_internal_set_unpressedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_updateCooldown(float_t  value) ;

constexpr void __cordl_internal_set_usersBanned(int32_t  value) ;

constexpr void __cordl_internal_set_virtualStumpRoomModePrefix(::StringW  value) ;

constexpr void __cordl_internal_set_virtualStumpRoomPrepend(::StringW  value) ;

constexpr void __cordl_internal_set_voiceChatOn(::StringW  value) ;

constexpr void __cordl_internal_set_waitOneSecond(::UnityEngine::WaitForSeconds*  value) ;

constexpr void __cordl_internal_set_wallScreenRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_wallScreenText(::GorillaNetworking::GorillaText*  value) ;

constexpr void __cordl_internal_set_warningConfirmationInputString(::StringW  value) ;

constexpr void __cordl_internal_set_wrongVersionMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x5c85844, size 0xb20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GorillaNetworking::GorillaComputer> getStaticF_instance() ;

static inline ::System::Action_1<bool>* getStaticF_onNametagSettingChangedAction() ;

static inline int32_t getStaticF_sessionCount() ;

/// @brief Method get_NameTagPlayerPref, addr 0x5c7492c, size 0x124, virtual false, abstract: false, final false
inline ::StringW get_NameTagPlayerPref() ;

/// [CompilerGenerated]
/// @brief Method get_NametagsEnabled, addr 0x5c74a50, size 0x8, virtual false, abstract: false, final false
inline bool get_NametagsEnabled() ;

/// @brief Method get_RedemptionCode, addr 0x5c74c50, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RedemptionCode() ;

/// [CompilerGenerated]
/// @brief Method get_RedemptionRestrictionTime, addr 0x5c74c68, size 0x14, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_RedemptionRestrictionTime() ;

/// @brief Method get_RedemptionStatus, addr 0x5c74a60, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaComputer_RedemptionResult get_RedemptionStatus() ;

/// @brief Method get_VStumpRoomFullPrepend, addr 0x5c74744, size 0x14, virtual false, abstract: false, final false
inline ::StringW get_VStumpRoomFullPrepend() ;

/// @brief Method get_VStumpRoomPrepend, addr 0x5c74638, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_VStumpRoomPrepend() ;

/// @brief Method get_allowedMapsToJoin, addr 0x5c74610, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_allowedMapsToJoin() ;

/// @brief Method get_currentState, addr 0x5c748cc, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaComputer_ComputerState get_currentState() ;

/// @brief Method get_unableToConnect, addr 0x5c74380, size 0x174, virtual false, abstract: false, final false
inline ::StringW get_unableToConnect() ;

/// [CompilerGenerated]
/// @brief Method get_version, addr 0x5c74620, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_version() ;

/// @brief Method get_versionMismatch, addr 0x5c7420c, size 0x174, virtual false, abstract: false, final false
inline ::StringW get_versionMismatch() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaNetworking::GorillaComputer>  value) ;

static inline void setStaticF_onNametagSettingChangedAction(::System::Action_1<bool>*  value) ;

static inline void setStaticF_sessionCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_NametagsEnabled, addr 0x5c74a58, size 0x8, virtual false, abstract: false, final false
inline void set_NametagsEnabled(bool  value) ;

/// @brief Method set_RedemptionCode, addr 0x5c74c58, size 0x10, virtual false, abstract: false, final false
inline void set_RedemptionCode(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_RedemptionRestrictionTime, addr 0x5c74c7c, size 0x14, virtual false, abstract: false, final false
inline void set_RedemptionRestrictionTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_RedemptionStatus, addr 0x5c74a68, size 0x8, virtual false, abstract: false, final false
inline void set_RedemptionStatus(::GlobalNamespace::GorillaComputer_RedemptionResult  value) ;

/// @brief Method set_allowedMapsToJoin, addr 0x5c74618, size 0x8, virtual false, abstract: false, final false
inline void set_allowedMapsToJoin(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_version, addr 0x5c74628, size 0x10, virtual false, abstract: false, final false
inline void set_version(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputer(GorillaComputer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputer(GorillaComputer const& ) = delete;

/// @brief Field ALL_CHAT_MIC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ALL_CHAT_MIC_KEY{u"ALL_CHAT_MIC"};

/// @brief Field AUTOMOD_AGGRESSIVE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  AUTOMOD_AGGRESSIVE_KEY{u"AUTOMOD_AGGRESSIVE"};

/// @brief Field AUTOMOD_MODERATE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  AUTOMOD_MODERATE_KEY{u"AUTOMOD_MODERATE"};

/// @brief Field AUTOMOD_OFF_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  AUTOMOD_OFF_KEY{u"AUTOMOD_OFF"};

/// @brief Field AUTOMOD_SCREEN_CURRENT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  AUTOMOD_SCREEN_CURRENT_KEY{u"AUTOMOD_SCREEN_CURRENT"};

/// @brief Field AUTOMOD_SCREEN_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  AUTOMOD_SCREEN_INTRO_KEY{u"AUTOMOD_SCREEN_INTRO"};

/// @brief Field AUTOMOD_SCREEN_OPTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  AUTOMOD_SCREEN_OPTIONS_KEY{u"AUTOMOD_SCREEN_OPTIONS"};

/// @brief Field BEAT_OBSTACLE_COURSE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  BEAT_OBSTACLE_COURSE_KEY{u"BEAT_OBSTACLE_COURSE"};

/// @brief Field CHANGE_TO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CHANGE_TO_KEY{u"CHANGE_TO"};

/// @brief Field COLOR_BLUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COLOR_BLUE_KEY{u"COLOR_BLUE"};

/// @brief Field COLOR_GREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COLOR_GREEN_KEY{u"COLOR_GREEN"};

/// @brief Field COLOR_RED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COLOR_RED_KEY{u"COLOR_RED"};

/// @brief Field COLOR_SELECT_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COLOR_SELECT_INTRO_KEY{u"COLOR_SELECT_INTRO"};

/// @brief Field COMPETITIVE_DESC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COMPETITIVE_DESC_KEY{u"COMPETITIVE_DESC"};

/// @brief Field COMPETITIVE_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COMPETITIVE_QUEUE_KEY{u"COMPETITIVE_QUEUE"};

/// @brief Field COMPUTER_KEYBOARD_DELETE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COMPUTER_KEYBOARD_DELETE_KEY{u"COMPUTER_KEYBOARD_DELETE"};

/// @brief Field COMPUTER_KEYBOARD_ENTER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COMPUTER_KEYBOARD_ENTER_KEY{u"COMPUTER_KEYBOARD_ENTER"};

/// @brief Field COMPUTER_KEYBOARD_OPTION1_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COMPUTER_KEYBOARD_OPTION1_KEY{u"COMPUTER_KEYBOARD_OPTION1"};

/// @brief Field COMPUTER_KEYBOARD_OPTION2_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COMPUTER_KEYBOARD_OPTION2_KEY{u"COMPUTER_KEYBOARD_OPTION2"};

/// @brief Field COMPUTER_KEYBOARD_OPTION3_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  COMPUTER_KEYBOARD_OPTION3_KEY{u"COMPUTER_KEYBOARD_OPTION3"};

/// @brief Field CONFIRM_LANGUAGE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CONFIRM_LANGUAGE_KEY{u"CONFIRM_LANGUAGE"};

/// @brief Field CONNECTION_ISSUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CONNECTION_ISSUE_KEY{u"CONNECTION_ISSUE"};

/// @brief Field CREDITS_CONTINUED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CREDITS_CONTINUED_KEY{u"CREDITS_CONTINUED"};

/// @brief Field CREDITS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CREDITS_KEY{u"CREDITS"};

/// @brief Field CREDITS_PRESS_ENTER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CREDITS_PRESS_ENTER_KEY{u"CREDITS_PRESS_ENTER"};

/// @brief Field CURRENT_MODE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CURRENT_MODE_KEY{u"CURRENT_MODE"};

/// @brief Field CURRENT_NAME_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CURRENT_NAME_KEY{u"CURRENT_NAME"};

/// @brief Field CURRENT_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CURRENT_QUEUE_KEY{u"CURRENT_QUEUE"};

/// @brief Field CURRENT_SELECTED_LANGUAGE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CURRENT_SELECTED_LANGUAGE_KEY{u"CURRENT_SELECTED_LANGUAGE"};

/// @brief Field DEFAULT_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_QUEUE_KEY{u"DEFAULT_QUEUE"};

/// @brief Field DISABLED_COLOUR offset 0xffffffff size 0x8
static constexpr ::ConstString  DISABLED_COLOUR{u"\"RED\""};

/// @brief Field ENABLED_COLOUR offset 0xffffffff size 0x8
static constexpr ::ConstString  ENABLED_COLOUR{u"#85ffa5"};

/// @brief Field FALSE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FALSE_KEY{u"FALSE"};

/// @brief Field FAMILY_PORTAL_URL offset 0xffffffff size 0x8
static constexpr ::ConstString  FAMILY_PORTAL_URL{u"k-id.com/code"};

/// @brief Field FUNCTION_AUTOMOD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_AUTOMOD_KEY{u"FUNCTION_AUTOMOD"};

/// @brief Field FUNCTION_COLOR_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_COLOR_KEY{u"FUNCTION_COLOR"};

/// @brief Field FUNCTION_CREDITS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_CREDITS_KEY{u"FUNCTION_CREDITS"};

/// @brief Field FUNCTION_GROUP_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_GROUP_KEY{u"FUNCTION_GROUP"};

/// @brief Field FUNCTION_ITEMS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_ITEMS_KEY{u"FUNCTION_ITEMS"};

/// @brief Field FUNCTION_LANGUAGE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_LANGUAGE_KEY{u"FUNCTION_LANGUAGE"};

/// @brief Field FUNCTION_MIC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_MIC_KEY{u"FUNCTION_MIC"};

/// @brief Field FUNCTION_NAME_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_NAME_KEY{u"FUNCTION_NAME"};

/// @brief Field FUNCTION_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_QUEUE_KEY{u"FUNCTION_QUEUE"};

/// @brief Field FUNCTION_ROOM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_ROOM_KEY{u"FUNCTION_ROOM"};

/// @brief Field FUNCTION_SUPPORT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_SUPPORT_KEY{u"FUNCTION_SUPPORT"};

/// @brief Field FUNCTION_TURN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_TURN_KEY{u"FUNCTION_TURN"};

/// @brief Field FUNCTION_VOICE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  FUNCTION_VOICE_KEY{u"FUNCTION_VOICE"};

/// @brief Field GROUP_SCREEN_ACTIVE_ZONES_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GROUP_SCREEN_ACTIVE_ZONES_KEY{u"GROUP_SCREEN_ACTIVE_ZONES"};

/// @brief Field GROUP_SCREEN_CANNOT_JOIN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GROUP_SCREEN_CANNOT_JOIN_KEY{u"GROUP_SCREEN_CANNOT_JOIN"};

/// @brief Field GROUP_SCREEN_DESTINATIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GROUP_SCREEN_DESTINATIONS_KEY{u"GROUP_SCREEN_DESTINATIONS"};

/// @brief Field GROUP_SCREEN_ENTER_NOPARTY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GROUP_SCREEN_ENTER_NOPARTY_KEY{u"GROUP_SCREEN_ENTER_NOPARTY"};

/// @brief Field GROUP_SCREEN_ENTER_PARTY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GROUP_SCREEN_ENTER_PARTY_KEY{u"GROUP_SCREEN_ENTER_PARTY"};

/// @brief Field GROUP_SCREEN_FULL_OLD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GROUP_SCREEN_FULL_OLD_KEY{u"GROUP_SCREEN_FULL_OLD"};

/// @brief Field GROUP_SCREEN_LIMITED_OLD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GROUP_SCREEN_LIMITED_OLD_KEY{u"GROUP_SCREEN_LIMITED_OLD"};

/// @brief Field GROUP_SCREEN_SELECTION_OLD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GROUP_SCREEN_SELECTION_OLD_KEY{u"GROUP_SCREEN_SELECTION_OLD"};

/// @brief Field HIDE_SCREENS offset 0xffffffff size 0x1
static constexpr bool  HIDE_SCREENS{false};

/// @brief Field KID_CHECK_AGAIN_COOLDOWN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_CHECK_AGAIN_COOLDOWN_KEY{u"KID_CHECK_AGAIN_COOLDOWN"};

/// @brief Field KID_PERMISSION_NEEDED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PERMISSION_NEEDED_KEY{u"KID_PERMISSION_NEEDED"};

/// @brief Field KID_PROHIBITED_MESSAGE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_PROHIBITED_MESSAGE_KEY{u"KID_PROHIBITED_MESSAGE"};

/// @brief Field KID_REFRESH_PERMISSIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_REFRESH_PERMISSIONS_KEY{u"KID_REFRESH_PERMISSIONS"};

/// @brief Field KID_WAITING_PERMISSION_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_WAITING_PERMISSION_KEY{u"KID_WAITING_PERMISSION"};

/// @brief Field LANGUAGE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  LANGUAGE_KEY{u"LANGUAGE"};

/// @brief Field LANG_SCREEN_CURRENT_LANGUAGE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  LANG_SCREEN_CURRENT_LANGUAGE_KEY{u"LANG_SCREEN_CURRENT_LANGUAGE"};

/// @brief Field LANG_SCREEN_INSTRUCTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  LANG_SCREEN_INSTRUCTIONS_KEY{u"LANG_SCREEN_INSTRUCTIONS"};

/// @brief Field LANG_SCREEN_TITLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  LANG_SCREEN_TITLE_KEY{u"LANG_SCREEN_TITLE"};

/// @brief Field LIMITED_ONLINE_FUNC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  LIMITED_ONLINE_FUNC_KEY{u"LIMITED_ONLINE_FUNC"};

/// @brief Field LOADING_SCREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  LOADING_SCREEN_KEY{u"LOADING_SCREEN"};

/// @brief Field MIC_SCREEN_CURRENT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_CURRENT_KEY{u"MIC_SCREEN_CURRENT"};

/// @brief Field MIC_SCREEN_GUARDIAN_FEATURE_DESC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_GUARDIAN_FEATURE_DESC_KEY{u"VOICE_SCREEN_GUARDIAN_FEATURE_DESC"};

/// @brief Field MIC_SCREEN_INPUT_TEST_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_INPUT_TEST_LABEL_KEY{u"MIC_SCREEN_INPUT_TEST_LABEL"};

/// @brief Field MIC_SCREEN_INPUT_TEST_NO_MIC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_INPUT_TEST_NO_MIC_KEY{u"MIC_SCREEN_INPUT_TEST_NO_MIC"};

/// @brief Field MIC_SCREEN_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_INTRO_KEY{u"MIC_SCREEN_INTRO"};

/// @brief Field MIC_SCREEN_MIC_DISABLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_MIC_DISABLED_KEY{u"MIC_SCREEN_MIC_DISABLED"};

/// @brief Field MIC_SCREEN_NO_MIC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_NO_MIC_KEY{u"MIC_SCREEN_NO_MIC"};

/// @brief Field MIC_SCREEN_NO_PERMISSIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_NO_PERMISSIONS_KEY{u"MIC_SCREEN_NO_PERMISSIONS"};

/// @brief Field MIC_SCREEN_OPTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_OPTIONS_KEY{u"MIC_SCREEN_OPTIONS"};

/// @brief Field MIC_SCREEN_PUSH_KEY_INSTRUCTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_PUSH_KEY_INSTRUCTIONS_KEY{u"MIC_SCREEN_PUSH_KEY_INSTRUCTIONS"};

/// @brief Field MIC_SCREEN_PUSH_TO_MUTE_TOOLTIP_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_PUSH_TO_MUTE_TOOLTIP_KEY{u"MIC_SCREEN_PUSH_TO_MUTE_TOOLTIP"};

/// @brief Field MIC_SCREEN_PUSH_TO_TALK_TOOLTIP_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MIC_SCREEN_PUSH_TO_TALK_TOOLTIP_KEY{u"MIC_SCREEN_PUSH_TO_TALK_TOOLTIP"};

/// @brief Field MINIGAMES_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MINIGAMES_QUEUE_KEY{u"MINIGAMES_QUEUE"};

/// @brief Field NAMETAG_PLAYER_PREF_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  NAMETAG_PLAYER_PREF_KEY{u"nameTagsOn"};

/// @brief Field NAME_SCREEN_DISABLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  NAME_SCREEN_DISABLED_KEY{u"NAME_SCREEN_DISABLED"};

/// @brief Field NAME_SCREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  NAME_SCREEN_KEY{u"NAME_SCREEN"};

/// @brief Field NAME_SCREEN_KID_PROHIBITED_VERB_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  NAME_SCREEN_KID_PROHIBITED_VERB_KEY{u"NAME_SCREEN_KID_PROHIBITED_VERB"};

/// @brief Field NAME_SCREEN_TOGGLE_NAMETAGS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  NAME_SCREEN_TOGGLE_NAMETAGS_KEY{u"NAME_SCREEN_TOGGLE_NAMETAGS"};

/// @brief Field NEW_NAME_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  NEW_NAME_KEY{u"NEW_NAME"};

/// @brief Field NOT_IN_ROOM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  NOT_IN_ROOM_KEY{u"NOT_IN_ROOM"};

/// @brief Field NO_CONNECTION_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  NO_CONNECTION_KEY{u"NO_CONNECTION"};

/// @brief Field OCULUS_BUILD_CODE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  OCULUS_BUILD_CODE_KEY{u"OCULUS_BUILD_CODE"};

/// @brief Field OFF_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  OFF_KEY{u"OFF_KEY"};

/// @brief Field ON_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ON_KEY{u"ON_KEY"};

/// @brief Field OPEN_MIC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  OPEN_MIC_KEY{u"OPEN_MIC"};

/// @brief Field PLATFORM_OCULUS_PC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PLATFORM_OCULUS_PC_KEY{u"PLATFORM_OCULUS_PC"};

/// @brief Field PLATFORM_PICO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PLATFORM_PICO_KEY{u"PLATFORM_PICO"};

/// @brief Field PLATFORM_PSVR_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PLATFORM_PSVR_KEY{u"PLATFORM_PSVR"};

/// @brief Field PLATFORM_QUEST_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PLATFORM_QUEST_KEY{u"PLATFORM_QUEST"};

/// @brief Field PLATFORM_STEAM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PLATFORM_STEAM_KEY{u"PLATFORM_STEAM"};

/// @brief Field PLAYERS_IN_ROOM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PLAYERS_IN_ROOM_KEY{u"PLAYERS_IN_ROOM"};

/// @brief Field PLAYERS_ONLINE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PLAYERS_ONLINE_KEY{u"PLAYERS_ONLINE"};

/// @brief Field PUSH_TO_MUTE_MIC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PUSH_TO_MUTE_MIC_KEY{u"PUSH_TO_MUTE_MIC"};

/// @brief Field PUSH_TO_TALK_MIC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PUSH_TO_TALK_MIC_KEY{u"PUSH_TO_TALK_MIC"};

/// @brief Field QUEUE_SCREEN_ALL_QUEUES_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  QUEUE_SCREEN_ALL_QUEUES_KEY{u"QUEUE_SCREEN_ALL_QUEUES"};

/// @brief Field QUEUE_SCREEN_DEFAULT_QUEUES_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  QUEUE_SCREEN_DEFAULT_QUEUES_KEY{u"QUEUE_SCREEN_DEFAULT_QUEUES"};

/// @brief Field QUEUE_SCREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  QUEUE_SCREEN_KEY{u"QUEUE_SCREEN"};

/// @brief Field REDEMPTION_CODE_ALREADY_GRANTED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_CODE_ALREADY_GRANTED_KEY{u"REDEMPTION_CODE_ALREADY_GRANTED"};

/// @brief Field REDEMPTION_CODE_ALREADY_USED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_CODE_ALREADY_USED_KEY{u"REDEMPTION_CODE_ALREADY_USED"};

/// @brief Field REDEMPTION_CODE_INVALID_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_CODE_INVALID_KEY{u"REDEMPTION_CODE_INVALID"};

/// @brief Field REDEMPTION_CODE_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_CODE_LABEL_KEY{u"REDEMPTION_CODE_LABEL"};

/// @brief Field REDEMPTION_CODE_SUCCESS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_CODE_SUCCESS_KEY{u"REDEMPTION_CODE_SUCCESS"};

/// @brief Field REDEMPTION_CODE_TOO_EARLY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_CODE_TOO_EARLY_KEY{u"REDEMPTION_CODE_TOO_EARLY"};

/// @brief Field REDEMPTION_CODE_TOO_LATE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_CODE_TOO_LATE_KEY{u"REDEMPTION_CODE_TOO_LATE"};

/// @brief Field REDEMPTION_CODE_VALIDATING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_CODE_VALIDATING_KEY{u"REDEMPTION_CODE_VALIDATING"};

/// @brief Field REDEMPTION_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  REDEMPTION_INTRO_KEY{u"REDEMPTION_INTRO"};

/// @brief Field ROOM_FULL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_FULL_KEY{u"ROOM_FULL"};

/// @brief Field ROOM_GAME_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_GAME_LABEL_KEY{u"ROOM_GAME_LABEL"};

/// @brief Field ROOM_GROUP_TRAVEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_GROUP_TRAVEL_KEY{u"ROOM_GROUP_TRAVEL"};

/// @brief Field ROOM_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_INTRO_KEY{u"ROOM_INTRO"};

/// @brief Field ROOM_JOIN_NOT_ALLOWED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_JOIN_NOT_ALLOWED_KEY{u"ROOM_JOIN_NOT_ALLOWED"};

/// @brief Field ROOM_OPTION_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_OPTION_KEY{u"ROOM_OPTION"};

/// @brief Field ROOM_PARTY_WARNING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_PARTY_WARNING_KEY{u"ROOM_PARTY_WARNING"};

/// @brief Field ROOM_SCREEN_DISABLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_SCREEN_DISABLED_KEY{u"ROOM_SCREEN_DISABLED"};

/// @brief Field ROOM_SCREEN_KID_PROHIBITED_VERB_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_SCREEN_KID_PROHIBITED_VERB_KEY{u"ROOM_SCREEN_KID_PROHIBITED_VERB"};

/// @brief Field ROOM_TEXT_CURRENT_ROOM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_TEXT_CURRENT_ROOM_KEY{u"ROOM_TEXT_CURRENT_ROOM"};

/// @brief Field ROOM_TO_JOIN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_TO_JOIN_KEY{u"ROOM_TO_JOIN"};

/// @brief Field STARTUP_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTUP_INTRO_KEY{u"STARTUP_INTRO"};

/// @brief Field STARTUP_MANAGED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTUP_MANAGED_KEY{u"STARTUP_MANAGED"};

/// @brief Field STARTUP_PLAYERS_ONLINE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTUP_PLAYERS_ONLINE_KEY{u"STARTUP_PLAYERS_ONLINE"};

/// @brief Field STARTUP_PRESS_KEY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTUP_PRESS_KEY_KEY{u"STARTUP_PRESS_KEY"};

/// @brief Field STARTUP_PRESS_KEY_SHORT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTUP_PRESS_KEY_SHORT_KEY{u"STARTUP_PRESS_KEY_SHORT"};

/// @brief Field STARTUP_TROOP_TEXT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTUP_TROOP_TEXT_KEY{u"STARTUP_TROOP_TEXT"};

/// @brief Field STARTUP_USERS_BANNED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTUP_USERS_BANNED_KEY{u"STARTUP_USERS_BANNED"};

/// @brief Field SUPPORT_FINAL_QUEST_ONE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_FINAL_QUEST_ONE_KEY{u"SUPPORT_FINAL_QUEST_ONE"};

/// @brief Field SUPPORT_KID_ACCOUNT_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_KID_ACCOUNT_TYPE_KEY{u"SUPPORT_KID_ACCOUNT_TYPE"};

/// @brief Field SUPPORT_META_ACCOUNT_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_META_ACCOUNT_TYPE_KEY{u"SUPPORT_META_ACCOUNT_TYPE"};

/// @brief Field SUPPORT_SCREEN_DETAILS_BUILD_DATE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_SCREEN_DETAILS_BUILD_DATE_KEY{u"SUPPORT_SCREEN_DETAILS_BUILD_DATE"};

/// @brief Field SUPPORT_SCREEN_DETAILS_MOTHERSHIP_SESSION_ID_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_SCREEN_DETAILS_MOTHERSHIP_SESSION_ID_KEY{u"SUPPORT_SCREEN_DETAILS_MOTHERSHIP_SESSION_ID"};

/// @brief Field SUPPORT_SCREEN_DETAILS_PLATFORM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_SCREEN_DETAILS_PLATFORM_KEY{u"SUPPORT_SCREEN_DETAILS_PLATFORM"};

/// @brief Field SUPPORT_SCREEN_DETAILS_PLAYER_ID_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_SCREEN_DETAILS_PLAYER_ID_KEY{u"SUPPORT_SCREEN_DETAILS_PLAYERID"};

/// @brief Field SUPPORT_SCREEN_DETAILS_VERSION_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_SCREEN_DETAILS_VERSION_KEY{u"SUPPORT_SCREEN_DETAILS_VERSION"};

/// @brief Field SUPPORT_SCREEN_INITIAL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_SCREEN_INITIAL_KEY{u"SUPPORT_SCREEN_INITIAL"};

/// @brief Field SUPPORT_SCREEN_INITIAL_WARNING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_SCREEN_INITIAL_WARNING_KEY{u"SUPPORT_SCREEN_INITIAL_WARNING"};

/// @brief Field SUPPORT_SCREEN_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPPORT_SCREEN_INTRO_KEY{u"SUPPORT_SCREEN_INTRO"};

/// @brief Field TIME_SCREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_SCREEN_KEY{u"TIME_SCREEN"};

/// @brief Field TROOP_SCREEN_CURRENT_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_CURRENT_QUEUE_KEY{u"TROOP_SCREEN_CURRENT_QUEUE"};

/// @brief Field TROOP_SCREEN_CURRENT_TROOP_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_CURRENT_TROOP_KEY{u"TROOP_SCREEN_CURRENT_TROOP"};

/// @brief Field TROOP_SCREEN_DEFAULT_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_DEFAULT_QUEUE_KEY{u"TROOP_SCREEN_DEFAULT_QUEUE"};

/// @brief Field TROOP_SCREEN_DISABLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_DISABLED_KEY{u"TROOP_SCREEN_DISABLED"};

/// @brief Field TROOP_SCREEN_INSTRUCTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_INSTRUCTIONS_KEY{u"TROOP_SCREEN_INSTRUCTIONS"};

/// @brief Field TROOP_SCREEN_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_INTRO_KEY{u"TROOP_SCREEN_INTRO"};

/// @brief Field TROOP_SCREEN_IN_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_IN_QUEUE_KEY{u"TROOP_SCREEN_IN_QUEUE"};

/// @brief Field TROOP_SCREEN_JOIN_TROOP_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_JOIN_TROOP_KEY{u"TROOP_SCREEN_JOIN_TROOP"};

/// @brief Field TROOP_SCREEN_KID_DESC_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_KID_DESC_KEY{u"TROOP_SCREEN_KID_DESC"};

/// @brief Field TROOP_SCREEN_KID_PROHIBITED_VERB_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_KID_PROHIBITED_VERB_KEY{u"TROOP_SCREEN_KID_PROHIBITED_VERB"};

/// @brief Field TROOP_SCREEN_LEAVE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_LEAVE_KEY{u"TROOP_SCREEN_LEAVE"};

/// @brief Field TROOP_SCREEN_NOT_IN_TROOP_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_NOT_IN_TROOP_KEY{u"TROOP_SCREEN_NOT_IN_TROOP"};

/// @brief Field TROOP_SCREEN_PLAYERS_IN_TROOP_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_PLAYERS_IN_TROOP_KEY{u"TROOP_SCREEN_PLAYERS_IN_TROOP"};

/// @brief Field TROOP_SCREEN_TROOP_QUEUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TROOP_SCREEN_TROOP_QUEUE_KEY{u"TROOP_SCREEN_TROOP_QUEUE"};

/// @brief Field TRUE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TRUE_KEY{u"TRUE"};

/// @brief Field TURN_SCREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TURN_SCREEN_KEY{u"TURN_SCREEN"};

/// @brief Field TURN_SCREEN_TURNING_SPEED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TURN_SCREEN_TURNING_SPEED_KEY{u"TURN_SCREEN_TURNING_SPEED"};

/// @brief Field TURN_SCREEN_TURN_SPEED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TURN_SCREEN_TURN_SPEED_KEY{u"TURN_SCREEN_TURN_SPEED"};

/// @brief Field TURN_SCREEN_TURN_TYPE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TURN_SCREEN_TURN_TYPE_KEY{u"TURN_SCREEN_TURN_TYPE"};

/// @brief Field TURN_TYPE_NO_TURN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TURN_TYPE_NO_TURN_KEY{u"TURN_TYPE_NO_TURN"};

/// @brief Field TURN_TYPE_SMOOTH_TURN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TURN_TYPE_SMOOTH_TURN_KEY{u"TURN_TYPE_SMOOTH_TURN"};

/// @brief Field TURN_TYPE_SNAP_TURN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  TURN_TYPE_SNAP_TURN_KEY{u"TURN_TYPE_SNAP_TURN"};

/// @brief Field VERSION_MISMATCH_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VERSION_MISMATCH_KEY{u"VERSION_MISMATCH"};

/// @brief Field VISUALS_SCREEN_CURRENT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VISUALS_SCREEN_CURRENT_KEY{u"VISUALS_SCREEN_CURRENT"};

/// @brief Field VISUALS_SCREEN_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VISUALS_SCREEN_INTRO_KEY{u"VISUALS_SCREEN_INTRO"};

/// @brief Field VISUALS_SCREEN_OPTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VISUALS_SCREEN_OPTIONS_KEY{u"VISUALS_SCREEN_OPTIONS"};

/// @brief Field VISUALS_SCREEN_VOLUME_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VISUALS_SCREEN_VOLUME_KEY{u"VISUALS_SCREEN_VOLUME"};

/// @brief Field VOICE_CHAT_SCREEN_CURRENT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_CHAT_SCREEN_CURRENT_KEY{u"VOICE_CHAT_SCREEN_CURRENT"};

/// @brief Field VOICE_CHAT_SCREEN_CURRENT_OLD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_CHAT_SCREEN_CURRENT_OLD_KEY{u"VOICE_CHAT_SCREEN_CURRENT_OLD"};

/// @brief Field VOICE_CHAT_SCREEN_INTRO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_CHAT_SCREEN_INTRO_KEY{u"VOICE_CHAT_SCREEN_INTRO"};

/// @brief Field VOICE_CHAT_SCREEN_INTRO_OLD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_CHAT_SCREEN_INTRO_OLD_KEY{u"VOICE_CHAT_SCREEN_INTRO_OLD"};

/// @brief Field VOICE_CHAT_SCREEN_OPTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_CHAT_SCREEN_OPTIONS_KEY{u"VOICE_CHAT_SCREEN_OPTIONS"};

/// @brief Field VOICE_CHAT_SCREEN_OPTIONS_OLD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_CHAT_SCREEN_OPTIONS_OLD_KEY{u"VOICE_CHAT_SCREEN_OPTIONS_OLD"};

/// @brief Field VOICE_OPTION_HUMAN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_OPTION_HUMAN_KEY{u"VOICE_OPTION_HUMAN"};

/// @brief Field VOICE_OPTION_MONKE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_OPTION_MONKE_KEY{u"VOICE_OPTION_MONKE"};

/// @brief Field VOICE_OPTION_OFF_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_OPTION_OFF_KEY{u"VOICE_OPTION_OFF"};

/// @brief Field VOICE_SCREEN_DISABLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_SCREEN_DISABLED_KEY{u"VOICE_SCREEN_DISABLED"};

/// @brief Field VOICE_SCREEN_KID_CURRENT_VOICE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_SCREEN_KID_CURRENT_VOICE_KEY{u"VOICE_SCREEN_KID_CURRENT_VOICE"};

/// @brief Field VOICE_SCREEN_KID_PROHIBITED_VERB_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VOICE_SCREEN_KID_PROHIBITED_VERB_KEY{u"VOICE_SCREEN_KID_PROHIBITED_VERB"};

/// @brief Field WARNING_SCREEN_CONFIRMATION_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  WARNING_SCREEN_CONFIRMATION_KEY{u"WARNING_SCREEN_CONFIRMATION"};

/// @brief Field WARNING_SCREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  WARNING_SCREEN_KEY{u"WARNING_SCREEN"};

/// @brief Field WARNING_SCREEN_TYPE_YES_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  WARNING_SCREEN_TYPE_YES_KEY{u"WARNING_SCREEN_TYPE_YES"};

/// @brief Field WARNING_SCREEN_YES_INPUT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  WARNING_SCREEN_YES_INPUT_KEY{u"WARNING_SCREEN_YES_INPUT"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4333};

/// @brief Field k_debug_shouldResetGameMode offset 0xffffffff size 0x1
static constexpr bool  k_debug_shouldResetGameMode{false};

/// @brief Field k_debug_shouldResetSessionCount offset 0xffffffff size 0x1
static constexpr bool  k_debug_shouldResetSessionCount{false};

/// @brief Field k_defaultGameMode value: I32(11)
static ::GorillaGameModes::GameModeType const k_defaultGameMode;

/// @brief Field k_noobGameMode value: I32(1)
static ::GorillaGameModes::GameModeType const k_noobGameMode;

/// @brief Field k_noobSessionCountThreshold offset 0xffffffff size 0x4
static constexpr int32_t  k_noobSessionCountThreshold{static_cast<int32_t>(0x4)};

/// @brief Field k_sessionCountKey offset 0xffffffff size 0x8
static constexpr ::ConstString  k_sessionCountKey{u"sessionCount"};

/// @brief Field tryGetTimeAgain, offset: 0x20, size: 0x1, def value: None
 bool  ___tryGetTimeAgain;

/// @brief Field unpressedMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___unpressedMaterial;

/// @brief Field pressedMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___pressedMaterial;

/// @brief Field currentTextField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___currentTextField;

/// @brief Field buttonFadeTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___buttonFadeTime;

/// @brief Field offlineTextInitialString, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___offlineTextInitialString;

/// @brief Field screenText, offset: 0x50, size: 0x8, def value: None
 ::GorillaNetworking::GorillaText*  ___screenText;

/// @brief Field functionSelectText, offset: 0x58, size: 0x8, def value: None
 ::GorillaNetworking::GorillaText*  ___functionSelectText;

/// @brief Field wallScreenText, offset: 0x60, size: 0x8, def value: None
 ::GorillaNetworking::GorillaText*  ___wallScreenText;

/// @brief Field _lastLocaleChecked_Version, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ____lastLocaleChecked_Version;

/// @brief Field _lastLocaleChecked_Connect, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ____lastLocaleChecked_Connect;

/// @brief Field _cachedVersionMismatch, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____cachedVersionMismatch;

/// @brief Field _cachedUnableToConnect, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____cachedUnableToConnect;

/// @brief Field wrongVersionMaterial, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___wrongVersionMaterial;

/// @brief Field wallScreenRenderer, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___wallScreenRenderer;

/// @brief Field computerScreenRenderer, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___computerScreenRenderer;

/// @brief Field startupMillis, offset: 0xa0, size: 0x8, def value: None
 int64_t  ___startupMillis;

/// @brief Field startupTime, offset: 0xa8, size: 0x8, def value: None
 ::System::DateTime  ___startupTime;

/// @brief Field lastPressedGameModeType, offset: 0xb0, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  ___lastPressedGameModeType;

/// @brief Field lastPressedGameMode, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___lastPressedGameMode;

/// @brief Field currentGameMode, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WatchableStringSO>  ___currentGameMode;

/// @brief Field currentGameModeText, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WatchableStringSO>  ___currentGameModeText;

/// @brief Field includeUpdatedServerSynchTest, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___includeUpdatedServerSynchTest;

/// @brief Field networkController, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PhotonNetworkController>  ___networkController;

/// @brief Field updateCooldown, offset: 0xe0, size: 0x4, def value: None
 float_t  ___updateCooldown;

/// @brief Field defaultUpdateCooldown, offset: 0xe4, size: 0x4, def value: None
 float_t  ___defaultUpdateCooldown;

/// @brief Field micUpdateCooldown, offset: 0xe8, size: 0x4, def value: None
 float_t  ___micUpdateCooldown;

/// @brief Field lastUpdateTime, offset: 0xec, size: 0x4, def value: None
 float_t  ___lastUpdateTime;

/// @brief Field deltaTime, offset: 0xf0, size: 0x4, def value: None
 float_t  ___deltaTime;

/// @brief Field isConnectedToMaster, offset: 0xf4, size: 0x1, def value: None
 bool  ___isConnectedToMaster;

/// @brief Field internetFailure, offset: 0xf5, size: 0x1, def value: None
 bool  ___internetFailure;

/// @brief Field _allowedMapsToJoin, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____allowedMapsToJoin;

/// @brief Field limitOnlineScreens, offset: 0x100, size: 0x1, def value: None
 bool  ___limitOnlineScreens;

/// [Header("State vars")]
/// @brief Field stateUpdated, offset: 0x101, size: 0x1, def value: None
 bool  ___stateUpdated;

/// @brief Field screenChanged, offset: 0x102, size: 0x1, def value: None
 bool  ___screenChanged;

/// @brief Field initialized, offset: 0x103, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field OrderList, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*  ___OrderList;

/// @brief Field Pointer, offset: 0x110, size: 0x8, def value: None
 ::StringW  ___Pointer;

/// @brief Field highestCharacterCount, offset: 0x118, size: 0x4, def value: None
 int32_t  ___highestCharacterCount;

/// @brief Field FunctionNames, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___FunctionNames;

/// @brief Field FunctionsCount, offset: 0x128, size: 0x4, def value: None
 int32_t  ___FunctionsCount;

/// [Header("Room vars")]
/// @brief Field roomToJoin, offset: 0x130, size: 0x8, def value: None
 ::StringW  ___roomToJoin;

/// @brief Field roomFull, offset: 0x138, size: 0x1, def value: None
 bool  ___roomFull;

/// @brief Field roomNotAllowed, offset: 0x139, size: 0x1, def value: None
 bool  ___roomNotAllowed;

/// [Header("Mic vars")]
/// @brief Field pttType, offset: 0x140, size: 0x8, def value: None
 ::StringW  ___pttType;

/// @brief Field speakerLoudness, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  ___speakerLoudness;

/// @brief Field micInputTestTimer, offset: 0x150, size: 0x4, def value: None
 float_t  ___micInputTestTimer;

/// @brief Field micInputTestTimerThreshold, offset: 0x154, size: 0x4, def value: None
 float_t  ___micInputTestTimerThreshold;

/// [Header("Automute vars")]
/// @brief Field autoMuteType, offset: 0x158, size: 0x8, def value: None
 ::StringW  ___autoMuteType;

/// [Header("Queue vars")]
/// @brief Field currentQueue, offset: 0x160, size: 0x8, def value: None
 ::StringW  ___currentQueue;

/// @brief Field allowedInCompetitive, offset: 0x168, size: 0x1, def value: None
 bool  ___allowedInCompetitive;

/// [Header("Group Vars")]
/// @brief Field groupMapJoin, offset: 0x170, size: 0x8, def value: None
 ::StringW  ___groupMapJoin;

/// @brief Field groupMapJoinIndex, offset: 0x178, size: 0x4, def value: None
 int32_t  ___groupMapJoinIndex;

/// @brief Field friendJoinCollider, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___friendJoinCollider;

/// [Header("Troop vars")]
/// @brief Field troopName, offset: 0x188, size: 0x8, def value: None
 ::StringW  ___troopName;

/// @brief Field troopQueueActive, offset: 0x190, size: 0x1, def value: None
 bool  ___troopQueueActive;

/// @brief Field troopToJoin, offset: 0x198, size: 0x8, def value: None
 ::StringW  ___troopToJoin;

/// @brief Field rememberTroopQueueState, offset: 0x1a0, size: 0x1, def value: None
 bool  ___rememberTroopQueueState;

/// [Header("Join Triggers")]
/// @brief Field primaryTriggersByZone, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*  ___primaryTriggersByZone;

/// @brief Field voiceChatOn, offset: 0x1b0, size: 0x8, def value: None
 ::StringW  ___voiceChatOn;

/// [Header("Mode select vars")]
/// @brief Field modeSelectButtons, offset: 0x1b8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ModeSelectButton>>  ___modeSelectButtons;

/// [CompilerGenerated]
/// @brief Field <version>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
 ::StringW  ____version_k__BackingField;

/// @brief Field buildDate, offset: 0x1c8, size: 0x8, def value: None
 ::StringW  ___buildDate;

/// @brief Field buildCode, offset: 0x1d0, size: 0x8, def value: None
 ::StringW  ___buildCode;

/// [Header("Cosmetics")]
/// @brief Field disableParticles, offset: 0x1d8, size: 0x1, def value: None
 bool  ___disableParticles;

/// @brief Field instrumentVolume, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___instrumentVolume;

/// @brief Field iobtMode, offset: 0x1e0, size: 0x1, def value: None
 bool  ___iobtMode;

/// @brief Field perfMode, offset: 0x1e1, size: 0x1, def value: None
 bool  ___perfMode;

/// @brief Field isSubcribed, offset: 0x1e2, size: 0x1, def value: None
 bool  ___isSubcribed;

/// [Header("Credits")]
/// @brief Field creditsView, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CreditsView>  ___creditsView;

/// [Header("Handedness")]
/// @brief Field leftHanded, offset: 0x1f0, size: 0x1, def value: None
 bool  ___leftHanded;

/// [Header("Name state vars")]
/// @brief Field savedName, offset: 0x1f8, size: 0x8, def value: None
 ::StringW  ___savedName;

/// @brief Field currentName, offset: 0x200, size: 0x8, def value: None
 ::StringW  ___currentName;

/// @brief Field exactOneWeekFile, offset: 0x208, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___exactOneWeekFile;

/// @brief Field anywhereOneWeekFile, offset: 0x210, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___anywhereOneWeekFile;

/// @brief Field anywhereTwoWeekFile, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___anywhereTwoWeekFile;

/// @brief Field _filteredStates, offset: 0x220, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaComputer_ComputerState>*  ____filteredStates;

/// @brief Field _activeOrderList, offset: 0x228, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaComputer_StateOrderItem*>*  ____activeOrderList;

/// @brief Field stateStack, offset: 0x230, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::GlobalNamespace::GorillaComputer_ComputerState>*  ___stateStack;

/// @brief Field currentComputerState, offset: 0x238, size: 0x4, def value: None
 ::GlobalNamespace::GorillaComputer_ComputerState  ___currentComputerState;

/// @brief Field previousComputerState, offset: 0x23c, size: 0x4, def value: None
 ::GlobalNamespace::GorillaComputer_ComputerState  ___previousComputerState;

/// @brief Field currentStateIndex, offset: 0x240, size: 0x4, def value: None
 int32_t  ___currentStateIndex;

/// @brief Field usersBanned, offset: 0x244, size: 0x4, def value: None
 int32_t  ___usersBanned;

/// @brief Field redValue, offset: 0x248, size: 0x4, def value: None
 float_t  ___redValue;

/// @brief Field redText, offset: 0x250, size: 0x8, def value: None
 ::StringW  ___redText;

/// @brief Field blueValue, offset: 0x258, size: 0x4, def value: None
 float_t  ___blueValue;

/// @brief Field blueText, offset: 0x260, size: 0x8, def value: None
 ::StringW  ___blueText;

/// @brief Field greenValue, offset: 0x268, size: 0x4, def value: None
 float_t  ___greenValue;

/// @brief Field greenText, offset: 0x270, size: 0x8, def value: None
 ::StringW  ___greenText;

/// @brief Field colorCursorLine, offset: 0x278, size: 0x4, def value: None
 int32_t  ___colorCursorLine;

/// @brief Field warningConfirmationInputString, offset: 0x280, size: 0x8, def value: None
 ::StringW  ___warningConfirmationInputString;

/// @brief Field displaySupport, offset: 0x288, size: 0x1, def value: None
 bool  ___displaySupport;

/// @brief Field exactOneWeek, offset: 0x290, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___exactOneWeek;

/// @brief Field anywhereOneWeek, offset: 0x298, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___anywhereOneWeek;

/// @brief Field anywhereTwoWeek, offset: 0x2a0, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___anywhereTwoWeek;

/// @brief Field redemptionResult, offset: 0x2a8, size: 0x4, def value: None
 ::GlobalNamespace::GorillaComputer_RedemptionResult  ___redemptionResult;

/// @brief Field redemptionCode, offset: 0x2b0, size: 0x8, def value: None
 ::StringW  ___redemptionCode;

/// @brief Field playerInVirtualStump, offset: 0x2b8, size: 0x1, def value: None
 bool  ___playerInVirtualStump;

/// @brief Field virtualStumpRoomPrepend, offset: 0x2c0, size: 0x8, def value: None
 ::StringW  ___virtualStumpRoomPrepend;

/// @brief Field virtualStumpRoomModePrefix, offset: 0x2c8, size: 0x8, def value: None
 ::StringW  ___virtualStumpRoomModePrefix;

/// @brief Field waitOneSecond, offset: 0x2d0, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ___waitOneSecond;

/// @brief Field LoadingRoutine, offset: 0x2d8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___LoadingRoutine;

/// @brief Field topTroops, offset: 0x2e0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___topTroops;

/// @brief Field hasRequestedInitialTroopPopulation, offset: 0x2e8, size: 0x1, def value: None
 bool  ___hasRequestedInitialTroopPopulation;

/// @brief Field currentTroopPopulation, offset: 0x2ec, size: 0x4, def value: None
 int32_t  ___currentTroopPopulation;

/// @brief Field topVstumpMaps, offset: 0x2f0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___topVstumpMaps;

/// [CompilerGenerated]
/// @brief Field <NametagsEnabled>k__BackingField, offset: 0x2f8, size: 0x1, def value: None
 bool  ____NametagsEnabled_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RedemptionRestrictionTime>k__BackingField, offset: 0x300, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  ____RedemptionRestrictionTime_k__BackingField;

/// @brief Field lastCheckedWifi, offset: 0x310, size: 0x4, def value: None
 float_t  ___lastCheckedWifi;

/// @brief Field checkIfDisconnectedSeconds, offset: 0x314, size: 0x4, def value: None
 float_t  ___checkIfDisconnectedSeconds;

/// @brief Field checkIfConnectedSeconds, offset: 0x318, size: 0x4, def value: None
 float_t  ___checkIfConnectedSeconds;

/// @brief Field didInitializeGameMode, offset: 0x31c, size: 0x1, def value: None
 bool  ___didInitializeGameMode;

/// @brief Field troopPopulationCheckCooldown, offset: 0x320, size: 0x4, def value: None
 float_t  ___troopPopulationCheckCooldown;

/// @brief Field nextPopulationCheckTime, offset: 0x324, size: 0x4, def value: None
 float_t  ___nextPopulationCheckTime;

/// @brief Field OnServerTimeUpdated, offset: 0x328, size: 0x8, def value: None
 ::System::Action*  ___OnServerTimeUpdated;

/// @brief Field _updateAttemptCooldown, offset: 0x330, size: 0x4, def value: None
 float_t  ____updateAttemptCooldown;

/// @brief Field _nextUpdateAttemptTime, offset: 0x334, size: 0x4, def value: None
 float_t  ____nextUpdateAttemptTime;

/// @brief Field _waitingForUpdatedSession, offset: 0x338, size: 0x1, def value: None
 bool  ____waitingForUpdatedSession;

/// @brief Field _currentScreentState, offset: 0x33c, size: 0x4, def value: None
 ::GlobalNamespace::GorillaComputer_EKidScreenState  ____currentScreentState;

/// @brief Field _interestedPermissionNames, offset: 0x340, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____interestedPermissionNames;

/// @brief Field _languagesDisplaySB, offset: 0x348, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____languagesDisplaySB;

/// @brief Field _previousLocalisationSetting, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ____previousLocalisationSetting;

/// @brief Size padding 0x360 - 0x358 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___tryGetTimeAgain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___unpressedMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___pressedMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___currentTextField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___buttonFadeTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___offlineTextInitialString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___screenText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___functionSelectText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___wallScreenText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____lastLocaleChecked_Version) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____lastLocaleChecked_Connect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____cachedVersionMismatch) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____cachedUnableToConnect) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___wrongVersionMaterial) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___wallScreenRenderer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___computerScreenRenderer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___startupMillis) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___startupTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___lastPressedGameModeType) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___lastPressedGameMode) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___currentGameMode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___currentGameModeText) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___includeUpdatedServerSynchTest) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___networkController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___updateCooldown) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___defaultUpdateCooldown) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___micUpdateCooldown) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___lastUpdateTime) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___deltaTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___isConnectedToMaster) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___internetFailure) == 0xf5, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____allowedMapsToJoin) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___limitOnlineScreens) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___stateUpdated) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___screenChanged) == 0x102, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___initialized) == 0x103, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___OrderList) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___Pointer) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___highestCharacterCount) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___FunctionNames) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___FunctionsCount) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___roomToJoin) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___roomFull) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___roomNotAllowed) == 0x139, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___pttType) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___speakerLoudness) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___micInputTestTimer) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___micInputTestTimerThreshold) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___autoMuteType) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___currentQueue) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___allowedInCompetitive) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___groupMapJoin) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___groupMapJoinIndex) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___friendJoinCollider) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___troopName) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___troopQueueActive) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___troopToJoin) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___rememberTroopQueueState) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___primaryTriggersByZone) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___voiceChatOn) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___modeSelectButtons) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____version_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___buildDate) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___buildCode) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___disableParticles) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___instrumentVolume) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___iobtMode) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___perfMode) == 0x1e1, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___isSubcribed) == 0x1e2, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___creditsView) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___leftHanded) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___savedName) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___currentName) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___exactOneWeekFile) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___anywhereOneWeekFile) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___anywhereTwoWeekFile) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____filteredStates) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____activeOrderList) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___stateStack) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___currentComputerState) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___previousComputerState) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___currentStateIndex) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___usersBanned) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___redValue) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___redText) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___blueValue) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___blueText) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___greenValue) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___greenText) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___colorCursorLine) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___warningConfirmationInputString) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___displaySupport) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___exactOneWeek) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___anywhereOneWeek) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___anywhereTwoWeek) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___redemptionResult) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___redemptionCode) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___playerInVirtualStump) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___virtualStumpRoomPrepend) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___virtualStumpRoomModePrefix) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___waitOneSecond) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___LoadingRoutine) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___topTroops) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___hasRequestedInitialTroopPopulation) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___currentTroopPopulation) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___topVstumpMaps) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____NametagsEnabled_k__BackingField) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____RedemptionRestrictionTime_k__BackingField) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___lastCheckedWifi) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___checkIfDisconnectedSeconds) == 0x314, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___checkIfConnectedSeconds) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___didInitializeGameMode) == 0x31c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___troopPopulationCheckCooldown) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___nextPopulationCheckTime) == 0x324, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ___OnServerTimeUpdated) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____updateAttemptCooldown) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____nextUpdateAttemptTime) == 0x334, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____waitingForUpdatedSession) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____currentScreentState) == 0x33c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____interestedPermissionNames) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____languagesDisplaySB) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer, ____previousLocalisationSetting) == 0x350, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaComputer) == 0x360, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaComputer/<HandleInitialTroopQueueState>d__354
class CORDL_TYPE GorillaComputer__HandleInitialTroopQueueState_d__354 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::GorillaComputer>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c8730c, size 0x18c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c87498, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c874a0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c874d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c87308, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::GorillaComputer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::GorillaComputer>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::GorillaComputer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c872e0, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaComputer__HandleInitialTroopQueueState_d__354() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer__HandleInitialTroopQueueState_d__354", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputer__HandleInitialTroopQueueState_d__354(GorillaComputer__HandleInitialTroopQueueState_d__354 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer__HandleInitialTroopQueueState_d__354", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputer__HandleInitialTroopQueueState_d__354(GorillaComputer__HandleInitialTroopQueueState_d__354 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4331};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaComputer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaComputer__HandleInitialTroopQueueState_d__354) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies GorillaNetworking.GorillaComputer::ComputerState, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaComputer/<>c__DisplayClass459_0
class CORDL_TYPE GorillaComputer___c__DisplayClass459_0 : public ::System::Object {
public:
// Declarations
/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GorillaComputer_ComputerState  state;

static inline ::GorillaNetworking::GorillaComputer___c__DisplayClass459_0* New_ctor() ;

/// @brief Method <GetStateIndex>b__0, addr 0x5c86fcc, size 0x20, virtual false, abstract: false, final false
inline bool _GetStateIndex_b__0(::GorillaNetworking::GorillaComputer_StateOrderItem*  s) ;

constexpr ::GlobalNamespace::GorillaComputer_ComputerState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GorillaComputer_ComputerState& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GorillaComputer_ComputerState  value) ;

/// @brief Method .ctor, addr 0x5c86fc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputer___c__DisplayClass459_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer___c__DisplayClass459_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputer___c__DisplayClass459_0(GorillaComputer___c__DisplayClass459_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer___c__DisplayClass459_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputer___c__DisplayClass459_0(GorillaComputer___c__DisplayClass459_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4329};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GorillaComputer_ComputerState  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaComputer___c__DisplayClass459_0, ___state) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaComputer___c__DisplayClass459_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaComputer/<>c__DisplayClass418_0
class CORDL_TYPE GorillaComputer___c__DisplayClass418_0 : public ::System::Object {
public:
// Declarations
using __LoadingScreen_g__LoadingScreenLocal_0_d = ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::GorillaComputer>  __4__this;

/// @brief Field result, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::StringW  result;

static inline ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0* New_ctor() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.GorillaComputer::<>c__DisplayClass418_0::<<LoadingScreen>g__LoadingScreenLocal|0>d))]
/// @brief Method <LoadingScreen>g__LoadingScreenLocal|0, addr 0x5c86d54, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _LoadingScreen_g__LoadingScreenLocal_0() ;

constexpr ::UnityW<::GorillaNetworking::GorillaComputer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::GorillaComputer>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_result() const;

constexpr ::StringW& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::GorillaComputer>  value) ;

constexpr void __cordl_internal_set_result(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c86d4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputer___c__DisplayClass418_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer___c__DisplayClass418_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputer___c__DisplayClass418_0(GorillaComputer___c__DisplayClass418_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer___c__DisplayClass418_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputer___c__DisplayClass418_0(GorillaComputer___c__DisplayClass418_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4328};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaComputer>  _____4__this;

/// @brief Field result, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaComputer___c__DisplayClass418_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer___c__DisplayClass418_0, ___result) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaComputer___c__DisplayClass418_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaComputer/<>c__DisplayClass418_0/<<LoadingScreen>g__LoadingScreenLocal|0>d
class CORDL_TYPE __c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*  __4__this;

/// @brief Field <dotsCount>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__dotsCount_5__2, put=__cordl_internal_set__dotsCount_5__2)) int32_t  _dotsCount_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c86dec, size 0x124, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c86f7c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c86f84, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c86fbc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c86de8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0* const& __cordl_internal_get___4__this() const;

constexpr ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__dotsCount_5__2() const;

constexpr int32_t& __cordl_internal_get__dotsCount_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*  value) ;

constexpr void __cordl_internal_set__dotsCount_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c86dc0, size 0x28, virtual false, abstract: false, final false
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
constexpr __c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d(__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d(__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4327};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GorillaNetworking::GorillaComputer___c__DisplayClass418_0*  _____4__this;

/// @brief Field <dotsCount>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____dotsCount_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d, ____dotsCount_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::__c__DisplayClass418_0_GorillaComputer___LoadingScreen_g__LoadingScreenLocal_0_d) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaComputer/<>c
class CORDL_TYPE GorillaComputer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::GorillaComputer___c*  __9;

/// @brief Field <>9__449_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__449_0, put=setStaticF___9__449_0)) ::System::Predicate_1<char16_t>*  __9__449_0;

static inline ::GorillaNetworking::GorillaComputer___c* New_ctor() ;

/// @brief Method <CheckAutoBanListForName>b__449_0, addr 0x5c86d1c, size 0x30, virtual false, abstract: false, final false
inline bool _CheckAutoBanListForName_b__449_0(char16_t  c) ;

/// @brief Method .ctor, addr 0x5c86d14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::GorillaComputer___c* getStaticF___9() ;

static inline ::System::Predicate_1<char16_t>* getStaticF___9__449_0() ;

static inline void setStaticF___9(::GorillaNetworking::GorillaComputer___c*  value) ;

static inline void setStaticF___9__449_0(::System::Predicate_1<char16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputer___c(GorillaComputer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputer___c(GorillaComputer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4326};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::GorillaComputer___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies GorillaNetworking.GorillaComputer::ComputerState, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaComputer/StateOrderItem
class CORDL_TYPE GorillaComputer_StateOrderItem : public ::System::Object {
public:
// Declarations
/// @brief Field OverrideName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OverrideName, put=__cordl_internal_set_OverrideName)) ::StringW  OverrideName;

/// @brief Field State, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_State, put=__cordl_internal_set_State)) ::GlobalNamespace::GorillaComputer_ComputerState  State;

/// @brief Field StringReference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StringReference, put=__cordl_internal_set_StringReference)) ::UnityEngine::Localization::LocalizedString*  StringReference;

/// @brief Field _cachedTranslation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTranslation, put=__cordl_internal_set__cachedTranslation)) ::StringW  _cachedTranslation;

/// @brief Field _previousLocale, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousLocale, put=__cordl_internal_set__previousLocale)) ::UnityW<::UnityEngine::Localization::Locale>  _previousLocale;

/// @brief Method GetName, addr 0x5c86904, size 0x304, virtual false, abstract: false, final false
inline ::StringW GetName() ;

/// @brief Method GetPreLocalisedName, addr 0x5c86c08, size 0xa4, virtual false, abstract: false, final false
inline ::StringW GetPreLocalisedName() ;

static inline ::GorillaNetworking::GorillaComputer_StateOrderItem* New_ctor() ;

static inline ::GorillaNetworking::GorillaComputer_StateOrderItem* New_ctor(::GlobalNamespace::GorillaComputer_ComputerState  state) ;

static inline ::GorillaNetworking::GorillaComputer_StateOrderItem* New_ctor(::GlobalNamespace::GorillaComputer_ComputerState  state, ::StringW  overrideName) ;

constexpr ::StringW const& __cordl_internal_get_OverrideName() const;

constexpr ::StringW& __cordl_internal_get_OverrideName() ;

constexpr ::GlobalNamespace::GorillaComputer_ComputerState const& __cordl_internal_get_State() const;

constexpr ::GlobalNamespace::GorillaComputer_ComputerState& __cordl_internal_get_State() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_StringReference() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_StringReference() ;

constexpr ::StringW const& __cordl_internal_get__cachedTranslation() const;

constexpr ::StringW& __cordl_internal_get__cachedTranslation() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get__previousLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get__previousLocale() ;

constexpr void __cordl_internal_set_OverrideName(::StringW  value) ;

constexpr void __cordl_internal_set_State(::GlobalNamespace::GorillaComputer_ComputerState  value) ;

constexpr void __cordl_internal_set_StringReference(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set__cachedTranslation(::StringW  value) ;

constexpr void __cordl_internal_set__previousLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

/// @brief Method .ctor, addr 0x5c86790, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5c867f8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GorillaComputer_ComputerState  state) ;

/// @brief Method .ctor, addr 0x5c86874, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GorillaComputer_ComputerState  state, ::StringW  overrideName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputer_StateOrderItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer_StateOrderItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputer_StateOrderItem(GorillaComputer_StateOrderItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputer_StateOrderItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputer_StateOrderItem(GorillaComputer_StateOrderItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4324};

/// @brief Field State, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GorillaComputer_ComputerState  ___State;

/// [Tooltip("Case not important - ToUpper applied at runtime")]
/// @brief Field OverrideName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___OverrideName;

/// @brief Field StringReference, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___StringReference;

/// @brief Field _previousLocale, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ____previousLocale;

/// @brief Field _cachedTranslation, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____cachedTranslation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaComputer_StateOrderItem, ___State) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer_StateOrderItem, ___OverrideName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer_StateOrderItem, ___StringReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer_StateOrderItem, ____previousLocale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaComputer_StateOrderItem, ____cachedTranslation) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaComputer_StateOrderItem) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking
