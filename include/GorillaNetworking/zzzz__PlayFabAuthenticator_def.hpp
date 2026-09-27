#pragma once
// IWYU pragma private; include "GorillaNetworking/PlayFabAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__PlayFabAuthenticator_SafetyType_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabAuthenticator)
namespace GlobalNamespace {
class MetaAuthenticator;
}
namespace GlobalNamespace {
class MothershipAuthenticator;
}
namespace GlobalNamespace {
class PhotonAuthenticator;
}
namespace GlobalNamespace {
class PlatformTagJoin;
}
namespace GlobalNamespace {
struct PlayFabAuthenticator_SafetyType;
}
namespace GlobalNamespace {
class SteamAuthTicket;
}
namespace GlobalNamespace {
class SteamAuthenticator;
}
namespace GorillaNetworking {
class GorillaComputer;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_BanInfo;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_CachePlayFabIdRequest;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_CachePlayFabIdResponse;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_ErrorInfo;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_PlayfabAuthRequestData;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_PlayfabAuthResponseData;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__CachePlayFabId_d__75;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__PlayfabAuthenticate_d__70;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__VerifyKidAuthenticated_d__52;
}
namespace GorillaNetworking {
class PlayFabAuthenticator___c;
}
namespace GorillaNetworking {
class PlayFabAuthenticator___c__DisplayClass52_0;
}
namespace GorillaNetworking {
class PlayFabAuthenticator___c__DisplayClass63_0;
}
namespace PlayFab::ClientModels {
class GetPlayerProfileResult;
}
namespace PlayFab::ClientModels {
class LoginResult;
}
namespace PlayFab::ClientModels {
class UpdateUserTitleDisplayNameResult;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace Steamworks {
struct EResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
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
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
// Forward declare root types
namespace GorillaNetworking {
class PlayFabAuthenticator;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_BanInfo;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_CachePlayFabIdRequest;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_CachePlayFabIdResponse;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_ErrorInfo;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_PlayfabAuthRequestData;
}
namespace GorillaNetworking {
class PlayFabAuthenticator_PlayfabAuthResponseData;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__CachePlayFabId_d__75;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__PlayfabAuthenticate_d__70;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72;
}
namespace GorillaNetworking {
class PlayFabAuthenticator__VerifyKidAuthenticated_d__52;
}
namespace GorillaNetworking {
class PlayFabAuthenticator___c;
}
namespace GorillaNetworking {
class PlayFabAuthenticator___c__DisplayClass52_0;
}
namespace GorillaNetworking {
class PlayFabAuthenticator___c__DisplayClass63_0;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator_BanInfo*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator_ErrorInfo*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator___c*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*);
MARK_REF_T(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator*, "GorillaNetworking", "PlayFabAuthenticator");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator_BanInfo*, "GorillaNetworking", "PlayFabAuthenticator/BanInfo");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*, "GorillaNetworking", "PlayFabAuthenticator/CachePlayFabIdRequest");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*, "GorillaNetworking", "PlayFabAuthenticator/CachePlayFabIdResponse");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator_ErrorInfo*, "GorillaNetworking", "PlayFabAuthenticator/ErrorInfo");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*, "GorillaNetworking", "PlayFabAuthenticator/PlayfabAuthRequestData");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*, "GorillaNetworking", "PlayFabAuthenticator/PlayfabAuthResponseData");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75*, "GorillaNetworking", "PlayFabAuthenticator/<CachePlayFabId>d__75");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59*, "GorillaNetworking", "PlayFabAuthenticator/<ComputerOnConnectedToMaster>d__59");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54*, "GorillaNetworking", "PlayFabAuthenticator/<DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError>d__54");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53*, "GorillaNetworking", "PlayFabAuthenticator/<DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame>d__53");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70*, "GorillaNetworking", "PlayFabAuthenticator/<PlayfabAuthenticate>d__70");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72*, "GorillaNetworking", "PlayFabAuthenticator/<ShowMothershipAuthErrorMessageCoroutine>d__72");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52*, "GorillaNetworking", "PlayFabAuthenticator/<VerifyKidAuthenticated>d__52");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator___c*, "GorillaNetworking", "PlayFabAuthenticator/<>c");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*, "GorillaNetworking", "PlayFabAuthenticator/<>c__DisplayClass52_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0*, "GorillaNetworking", "PlayFabAuthenticator/<>c__DisplayClass63_0");
// Dependencies GorillaNetworking.PlayFabAuthenticator::SafetyType, UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator
class CORDL_TYPE PlayFabAuthenticator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SafetyType = ::GlobalNamespace::PlayFabAuthenticator_SafetyType;

using BanInfo = ::GorillaNetworking::PlayFabAuthenticator_BanInfo;

using CachePlayFabIdRequest = ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest;

using CachePlayFabIdResponse = ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse;

using ErrorInfo = ::GorillaNetworking::PlayFabAuthenticator_ErrorInfo;

using PlayfabAuthRequestData = ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData;

using PlayfabAuthResponseData = ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData;

using _CachePlayFabId_d__75 = ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75;

using _ComputerOnConnectedToMaster_d__59 = ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59;

using _DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54 = ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54;

using _DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53 = ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53;

using _PlayfabAuthenticate_d__70 = ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70;

using _ShowMothershipAuthErrorMessageCoroutine_d__72 = ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72;

using _VerifyKidAuthenticated_d__52 = ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52;

using __c = ::GorillaNetworking::PlayFabAuthenticator___c;

using __c__DisplayClass52_0 = ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0;

using __c__DisplayClass63_0 = ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0;

 __declspec(property(get=get_IsReturningPlayer, put=set_IsReturningPlayer)) bool  IsReturningPlayer;

/// @brief Field OnSafetyUpdate, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSafetyUpdate, put=__cordl_internal_set_OnSafetyUpdate)) ::System::Action_1<bool>*  OnSafetyUpdate;

/// @brief Field <IsReturningPlayer>k__BackingField, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReturningPlayer_k__BackingField, put=__cordl_internal_set__IsReturningPlayer_k__BackingField)) bool  _IsReturningPlayer_k__BackingField;

/// @brief Field _displayName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _nonce, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__nonce, put=__cordl_internal_set__nonce)) ::StringW  _nonce;

/// @brief Field _playFabPlayerIdCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__playFabPlayerIdCache, put=__cordl_internal_set__playFabPlayerIdCache)) ::StringW  _playFabPlayerIdCache;

/// @brief Field <postAuthSetSafety>k__BackingField, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get__postAuthSetSafety_k__BackingField, put=__cordl_internal_set__postAuthSetSafety_k__BackingField)) bool  _postAuthSetSafety_k__BackingField;

/// @brief Field _sessionTicket, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionTicket, put=__cordl_internal_set__sessionTicket)) ::StringW  _sessionTicket;

/// @brief Field dbg_isReturningPlayer, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_dbg_isReturningPlayer, put=__cordl_internal_set_dbg_isReturningPlayer)) bool  dbg_isReturningPlayer;

/// @brief Field debugText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugText, put=__cordl_internal_set_debugText)) ::UnityW<::UnityEngine::UI::Text>  debugText;

/// @brief Field emptyObject, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyObject, put=__cordl_internal_set_emptyObject)) ::UnityW<::UnityEngine::GameObject>  emptyObject;

 __declspec(property(get=get_gorillaComputer)) ::UnityW<::GorillaNetworking::GorillaComputer>  gorillaComputer;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  instance;

/// @brief Field isSafeAccount, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSafeAccount, put=__cordl_internal_set_isSafeAccount)) bool  isSafeAccount;

/// @brief Field loginFailed, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_loginFailed, put=__cordl_internal_set_loginFailed)) bool  loginFailed;

/// @brief Field m_Ticket, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ticket, put=__cordl_internal_set_m_Ticket)) ::ArrayW<uint8_t>  m_Ticket;

/// @brief Field m_pcbTicket, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_pcbTicket, put=__cordl_internal_set_m_pcbTicket)) uint32_t  m_pcbTicket;

/// @brief Field metaAuthenticator, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_metaAuthenticator, put=__cordl_internal_set_metaAuthenticator)) ::UnityW<::GlobalNamespace::MetaAuthenticator>  metaAuthenticator;

/// @brief Field mothershipAuthenticator, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipAuthenticator, put=__cordl_internal_set_mothershipAuthenticator)) ::UnityW<::GlobalNamespace::MothershipAuthenticator>  mothershipAuthenticator;

/// @brief Field photonAuthenticator, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonAuthenticator, put=__cordl_internal_set_photonAuthenticator)) ::UnityW<::GlobalNamespace::PhotonAuthenticator>  photonAuthenticator;

/// @brief Field platform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::UnityW<::GlobalNamespace::PlatformTagJoin>  platform;

/// @brief Field playFabAuthRetryCount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_playFabAuthRetryCount, put=__cordl_internal_set_playFabAuthRetryCount)) int32_t  playFabAuthRetryCount;

/// @brief Field playFabCacheMaxRetries, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_playFabCacheMaxRetries, put=__cordl_internal_set_playFabCacheMaxRetries)) int32_t  playFabCacheMaxRetries;

/// @brief Field playFabCacheRetryCount, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_playFabCacheRetryCount, put=__cordl_internal_set_playFabCacheRetryCount)) int32_t  playFabCacheRetryCount;

/// @brief Field playFabMaxRetries, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_playFabMaxRetries, put=__cordl_internal_set_playFabMaxRetries)) int32_t  playFabMaxRetries;

 __declspec(property(get=get_postAuthSetSafety, put=set_postAuthSetSafety)) bool  postAuthSetSafety;

/// @brief Field safetyType, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_safetyType, put=__cordl_internal_set_safetyType)) ::GlobalNamespace::PlayFabAuthenticator_SafetyType  safetyType;

/// @brief Field screenDebugMode, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_screenDebugMode, put=__cordl_internal_set_screenDebugMode)) bool  screenDebugMode;

/// @brief Field steamAuthIdForPhoton, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamAuthIdForPhoton, put=__cordl_internal_set_steamAuthIdForPhoton)) ::StringW  steamAuthIdForPhoton;

/// @brief Field steamAuthTicketForPhoton, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamAuthTicketForPhoton, put=__cordl_internal_set_steamAuthTicketForPhoton)) ::GlobalNamespace::SteamAuthTicket*  steamAuthTicketForPhoton;

/// @brief Field steamAuthTicketForPlayFab, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamAuthTicketForPlayFab, put=__cordl_internal_set_steamAuthTicketForPlayFab)) ::GlobalNamespace::SteamAuthTicket*  steamAuthTicketForPlayFab;

/// @brief Field steamAuthenticator, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamAuthenticator, put=__cordl_internal_set_steamAuthenticator)) ::UnityW<::GlobalNamespace::SteamAuthenticator>  steamAuthenticator;

/// @brief Field userID, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_userID, put=__cordl_internal_set_userID)) ::StringW  userID;

/// @brief Field userToken, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_userToken, put=__cordl_internal_set_userToken)) ::StringW  userToken;

/// @brief Method AdvanceLogin, addr 0x5c9763c, size 0xdc, virtual false, abstract: false, final false
inline void AdvanceLogin() ;

/// @brief Method AuthenticateWithPhoton, addr 0x5c97d1c, size 0x6a4, virtual false, abstract: false, final false
inline void AuthenticateWithPhoton() ;

/// @brief Method AuthenticateWithPlayFab, addr 0x5c96d30, size 0x29c, virtual false, abstract: false, final false
inline void AuthenticateWithPlayFab() ;

/// @brief Method Awake, addr 0x5c9650c, size 0x434, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BeginLoginFlow, addr 0x5c96940, size 0x3f0, virtual false, abstract: false, final false
inline void BeginLoginFlow() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PlayFabAuthenticator::<CachePlayFabId>d__75))]
/// @brief Method CachePlayFabId, addr 0x5c97b04, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CachePlayFabId(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*  data, ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*  callback) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PlayFabAuthenticator::<ComputerOnConnectedToMaster>d__59))]
/// @brief Method ComputerOnConnectedToMaster, addr 0x5c985a8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ComputerOnConnectedToMaster() ;

/// @brief Method DefaultSafetiesByAgeCategory, addr 0x5c97718, size 0x80, virtual false, abstract: false, final false
inline void DefaultSafetiesByAgeCategory() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PlayFabAuthenticator::<DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame>d__53))]
/// @brief Method DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame, addr 0x5c9782c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PlayFabAuthenticator::<DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError>d__54))]
/// @brief Method DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError, addr 0x5c97798, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError() ;

/// @brief Method GetNonceForPlayFab, addr 0x5c97338, size 0x4, virtual false, abstract: false, final false
inline void GetNonceForPlayFab() ;

/// @brief Method GetPlayFabPlayerId, addr 0x5c996fc, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetPlayFabPlayerId() ;

/// @brief Method GetPlayFabSessionTicket, addr 0x5c996f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetPlayFabSessionTicket() ;

/// @brief Method GetPlayerDisplayName, addr 0x5c983c0, size 0x1e8, virtual false, abstract: false, final false
inline void GetPlayerDisplayName(::StringW  playFabId) ;

/// @brief Method GetSafety, addr 0x5c99704, size 0x8, virtual false, abstract: false, final false
inline bool GetSafety() ;

/// @brief Method GetSafetyType, addr 0x5c9970c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayFabAuthenticator_SafetyType GetSafetyType() ;

/// @brief Method GetUserID, addr 0x5c99714, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetUserID() ;

/// @brief Method LogMessage, addr 0x5c97d18, size 0x4, virtual false, abstract: false, final false
inline void LogMessage(::StringW  message) ;

static inline ::GorillaNetworking::PlayFabAuthenticator* New_ctor() ;

/// @brief Method OnCachePlayFabIdRequest, addr 0x5c97ba0, size 0x178, virtual false, abstract: false, final false
inline void OnCachePlayFabIdRequest(/* [CanBeNull] */ ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*  response) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x5c97268, size 0xd0, virtual false, abstract: false, final false
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  response) ;

/// @brief Method OnDisable, addr 0x5c97108, size 0xec, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c9704c, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLoginWithSteamResponse, addr 0x5c978e8, size 0x214, virtual false, abstract: false, final false
inline void OnLoginWithSteamResponse(::PlayFab::ClientModels::LoginResult*  obj) ;

/// @brief Method OnPlayFabAuthResponse, addr 0x5c9733c, size 0x284, virtual false, abstract: false, final false
inline void OnPlayFabAuthResponse(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*  response) ;

/// @brief Method OnPlayFabError, addr 0x5c9863c, size 0x6f8, virtual false, abstract: false, final false
inline void OnPlayFabError(::PlayFab::PlayFabError*  obj) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PlayFabAuthenticator::<PlayfabAuthenticate>d__70))]
/// @brief Method PlayfabAuthenticate, addr 0x5c98e70, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayfabAuthenticate(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*  data, ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*  callback) ;

/// @brief Method RefreshSteamAuthTicketForPhoton, addr 0x5c971f4, size 0x74, virtual false, abstract: false, final false
inline void RefreshSteamAuthTicketForPhoton(::System::Action_1<::StringW>*  successCallback, ::System::Action_1<::Steamworks::EResult>*  failureCallback) ;

/// @brief Method ScreenDebug, addr 0x5c98d3c, size 0xd8, virtual false, abstract: false, final false
inline void ScreenDebug(::StringW  debugString) ;

/// @brief Method ScreenDebugClear, addr 0x5c98e14, size 0x5c, virtual false, abstract: false, final false
inline void ScreenDebugClear() ;

/// @brief Method SetDisplayName, addr 0x5c946c8, size 0x1e4, virtual false, abstract: false, final false
inline void SetDisplayName(::StringW  playerName) ;

/// @brief Method SetLoginFailed, addr 0x5c96fcc, size 0x7c, virtual false, abstract: false, final false
inline void SetLoginFailed() ;

/// @brief Method SetSafety, addr 0x5c9954c, size 0x1a8, virtual false, abstract: false, final false
inline void SetSafety(bool  isSafety, bool  isAutoSet, bool  setPlayfab) ;

/// @brief Method ShowBanMessage, addr 0x5c9924c, size 0x2d8, virtual false, abstract: false, final false
inline void ShowBanMessage(::GorillaNetworking::PlayFabAuthenticator_BanInfo*  banInfo) ;

/// @brief Method ShowMothershipAuthErrorMessage, addr 0x5c98f34, size 0x20, virtual false, abstract: false, final false
inline void ShowMothershipAuthErrorMessage(::StringW  errorMessage, ::StringW  errorCode, ::StringW  traceId) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PlayFabAuthenticator::<ShowMothershipAuthErrorMessageCoroutine>d__72))]
/// @brief Method ShowMothershipAuthErrorMessageCoroutine, addr 0x5c98f54, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ShowMothershipAuthErrorMessageCoroutine(::StringW  errorMessage, ::StringW  errorCode, ::StringW  traceId) ;

/// @brief Method ShowPlayFabAuthErrorMessage, addr 0x5c99034, size 0x218, virtual false, abstract: false, final false
inline void ShowPlayFabAuthErrorMessage(::StringW  errorJson) ;

/// @brief Method Start, addr 0x5c97048, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PlayFabAuthenticator::<VerifyKidAuthenticated>d__52))]
/// @brief Method VerifyKidAuthenticated, addr 0x5c975c0, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* VerifyKidAuthenticated(::System::DateTime  accountCreationDateTime) ;

/// [CompilerGenerated]
/// @brief Method <AdvanceLogin>b__57_0, addr 0x5c99964, size 0x90, virtual false, abstract: false, final false
inline void _AdvanceLogin_b__57_0(::StringW  ticket) ;

/// [CompilerGenerated]
/// @brief Method <AdvanceLogin>b__57_1, addr 0x5c999f4, size 0x74, virtual false, abstract: false, final false
inline void _AdvanceLogin_b__57_1(::Steamworks::EResult  result) ;

/// [CompilerGenerated]
/// @brief Method <AuthenticateWithPlayFab>b__51_0, addr 0x5c99780, size 0x1c4, virtual false, abstract: false, final false
inline void _AuthenticateWithPlayFab_b__51_0(::StringW  ticket) ;

/// [CompilerGenerated]
/// @brief Method <AuthenticateWithPlayFab>b__51_1, addr 0x5c99944, size 0x20, virtual false, abstract: false, final false
inline void _AuthenticateWithPlayFab_b__51_1(::Steamworks::EResult  result) ;

/// [CompilerGenerated]
/// @brief Method <BeginLoginFlow>b__42_1, addr 0x5c99730, size 0x50, virtual false, abstract: false, final false
inline void _BeginLoginFlow_b__42_1(::StringW  errorMessage, ::StringW  errorCode, ::StringW  traceId) ;

/// [CompilerGenerated]
/// @brief Method <GetPlayerDisplayName>b__62_0, addr 0x5c99a68, size 0x24, virtual false, abstract: false, final false
inline void _GetPlayerDisplayName_b__62_0(::PlayFab::ClientModels::GetPlayerProfileResult*  result) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnSafetyUpdate() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnSafetyUpdate() ;

constexpr bool const& __cordl_internal_get__IsReturningPlayer_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReturningPlayer_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr ::StringW const& __cordl_internal_get__nonce() const;

constexpr ::StringW& __cordl_internal_get__nonce() ;

constexpr ::StringW const& __cordl_internal_get__playFabPlayerIdCache() const;

constexpr ::StringW& __cordl_internal_get__playFabPlayerIdCache() ;

constexpr bool const& __cordl_internal_get__postAuthSetSafety_k__BackingField() const;

constexpr bool& __cordl_internal_get__postAuthSetSafety_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__sessionTicket() const;

constexpr ::StringW& __cordl_internal_get__sessionTicket() ;

constexpr bool const& __cordl_internal_get_dbg_isReturningPlayer() const;

constexpr bool& __cordl_internal_get_dbg_isReturningPlayer() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_debugText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_debugText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_emptyObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_emptyObject() ;

constexpr bool const& __cordl_internal_get_isSafeAccount() const;

constexpr bool& __cordl_internal_get_isSafeAccount() ;

constexpr bool const& __cordl_internal_get_loginFailed() const;

constexpr bool& __cordl_internal_get_loginFailed() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_Ticket() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_Ticket() ;

constexpr uint32_t const& __cordl_internal_get_m_pcbTicket() const;

constexpr uint32_t& __cordl_internal_get_m_pcbTicket() ;

constexpr ::UnityW<::GlobalNamespace::MetaAuthenticator> const& __cordl_internal_get_metaAuthenticator() const;

constexpr ::UnityW<::GlobalNamespace::MetaAuthenticator>& __cordl_internal_get_metaAuthenticator() ;

constexpr ::UnityW<::GlobalNamespace::MothershipAuthenticator> const& __cordl_internal_get_mothershipAuthenticator() const;

constexpr ::UnityW<::GlobalNamespace::MothershipAuthenticator>& __cordl_internal_get_mothershipAuthenticator() ;

constexpr ::UnityW<::GlobalNamespace::PhotonAuthenticator> const& __cordl_internal_get_photonAuthenticator() const;

constexpr ::UnityW<::GlobalNamespace::PhotonAuthenticator>& __cordl_internal_get_photonAuthenticator() ;

constexpr ::UnityW<::GlobalNamespace::PlatformTagJoin> const& __cordl_internal_get_platform() const;

constexpr ::UnityW<::GlobalNamespace::PlatformTagJoin>& __cordl_internal_get_platform() ;

constexpr int32_t const& __cordl_internal_get_playFabAuthRetryCount() const;

constexpr int32_t& __cordl_internal_get_playFabAuthRetryCount() ;

constexpr int32_t const& __cordl_internal_get_playFabCacheMaxRetries() const;

constexpr int32_t& __cordl_internal_get_playFabCacheMaxRetries() ;

constexpr int32_t const& __cordl_internal_get_playFabCacheRetryCount() const;

constexpr int32_t& __cordl_internal_get_playFabCacheRetryCount() ;

constexpr int32_t const& __cordl_internal_get_playFabMaxRetries() const;

constexpr int32_t& __cordl_internal_get_playFabMaxRetries() ;

constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType const& __cordl_internal_get_safetyType() const;

constexpr ::GlobalNamespace::PlayFabAuthenticator_SafetyType& __cordl_internal_get_safetyType() ;

constexpr bool const& __cordl_internal_get_screenDebugMode() const;

constexpr bool& __cordl_internal_get_screenDebugMode() ;

constexpr ::StringW const& __cordl_internal_get_steamAuthIdForPhoton() const;

constexpr ::StringW& __cordl_internal_get_steamAuthIdForPhoton() ;

constexpr ::GlobalNamespace::SteamAuthTicket* const& __cordl_internal_get_steamAuthTicketForPhoton() const;

constexpr ::GlobalNamespace::SteamAuthTicket*& __cordl_internal_get_steamAuthTicketForPhoton() ;

constexpr ::GlobalNamespace::SteamAuthTicket* const& __cordl_internal_get_steamAuthTicketForPlayFab() const;

constexpr ::GlobalNamespace::SteamAuthTicket*& __cordl_internal_get_steamAuthTicketForPlayFab() ;

constexpr ::UnityW<::GlobalNamespace::SteamAuthenticator> const& __cordl_internal_get_steamAuthenticator() const;

constexpr ::UnityW<::GlobalNamespace::SteamAuthenticator>& __cordl_internal_get_steamAuthenticator() ;

constexpr ::StringW const& __cordl_internal_get_userID() const;

constexpr ::StringW& __cordl_internal_get_userID() ;

constexpr ::StringW const& __cordl_internal_get_userToken() const;

constexpr ::StringW& __cordl_internal_get_userToken() ;

constexpr void __cordl_internal_set_OnSafetyUpdate(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__IsReturningPlayer_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__nonce(::StringW  value) ;

constexpr void __cordl_internal_set__playFabPlayerIdCache(::StringW  value) ;

constexpr void __cordl_internal_set__postAuthSetSafety_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__sessionTicket(::StringW  value) ;

constexpr void __cordl_internal_set_dbg_isReturningPlayer(bool  value) ;

constexpr void __cordl_internal_set_debugText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_emptyObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isSafeAccount(bool  value) ;

constexpr void __cordl_internal_set_loginFailed(bool  value) ;

constexpr void __cordl_internal_set_m_Ticket(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_pcbTicket(uint32_t  value) ;

constexpr void __cordl_internal_set_metaAuthenticator(::UnityW<::GlobalNamespace::MetaAuthenticator>  value) ;

constexpr void __cordl_internal_set_mothershipAuthenticator(::UnityW<::GlobalNamespace::MothershipAuthenticator>  value) ;

constexpr void __cordl_internal_set_photonAuthenticator(::UnityW<::GlobalNamespace::PhotonAuthenticator>  value) ;

constexpr void __cordl_internal_set_platform(::UnityW<::GlobalNamespace::PlatformTagJoin>  value) ;

constexpr void __cordl_internal_set_playFabAuthRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_playFabCacheMaxRetries(int32_t  value) ;

constexpr void __cordl_internal_set_playFabCacheRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_playFabMaxRetries(int32_t  value) ;

constexpr void __cordl_internal_set_safetyType(::GlobalNamespace::PlayFabAuthenticator_SafetyType  value) ;

constexpr void __cordl_internal_set_screenDebugMode(bool  value) ;

constexpr void __cordl_internal_set_steamAuthIdForPhoton(::StringW  value) ;

constexpr void __cordl_internal_set_steamAuthTicketForPhoton(::GlobalNamespace::SteamAuthTicket*  value) ;

constexpr void __cordl_internal_set_steamAuthTicketForPlayFab(::GlobalNamespace::SteamAuthTicket*  value) ;

constexpr void __cordl_internal_set_steamAuthenticator(::UnityW<::GlobalNamespace::SteamAuthenticator>  value) ;

constexpr void __cordl_internal_set_userID(::StringW  value) ;

constexpr void __cordl_internal_set_userToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c9971c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaNetworking::PlayFabAuthenticator> getStaticF_instance() ;

/// [CompilerGenerated]
/// @brief Method get_IsReturningPlayer, addr 0x5c964ec, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReturningPlayer() ;

/// @brief Method get_gorillaComputer, addr 0x5c9648c, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::GorillaComputer> get_gorillaComputer() ;

/// [CompilerGenerated]
/// @brief Method get_postAuthSetSafety, addr 0x5c964fc, size 0x8, virtual false, abstract: false, final false
inline bool get_postAuthSetSafety() ;

static inline void setStaticF_instance(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsReturningPlayer, addr 0x5c964f4, size 0x8, virtual false, abstract: false, final false
inline void set_IsReturningPlayer(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_postAuthSetSafety, addr 0x5c96504, size 0x8, virtual false, abstract: false, final false
inline void set_postAuthSetSafety(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator(PlayFabAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator(PlayFabAuthenticator const& ) = delete;

/// @brief Field PlayFabAuthRequestTimeout offset 0xffffffff size 0x4
static constexpr int32_t  PlayFabAuthRequestTimeout{static_cast<int32_t>(0x1e)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4392};

/// @brief Field _playFabPlayerIdCache, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____playFabPlayerIdCache;

/// @brief Field _sessionTicket, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____sessionTicket;

/// @brief Field _displayName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _nonce, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____nonce;

/// @brief Field userID, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___userID;

/// @brief Field userToken, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___userToken;

/// @brief Field platform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlatformTagJoin>  ___platform;

/// @brief Field isSafeAccount, offset: 0x58, size: 0x1, def value: None
 bool  ___isSafeAccount;

/// @brief Field OnSafetyUpdate, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnSafetyUpdate;

/// @brief Field safetyType, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::PlayFabAuthenticator_SafetyType  ___safetyType;

/// @brief Field m_Ticket, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_Ticket;

/// @brief Field m_pcbTicket, offset: 0x78, size: 0x4, def value: None
 uint32_t  ___m_pcbTicket;

/// @brief Field debugText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___debugText;

/// @brief Field screenDebugMode, offset: 0x88, size: 0x1, def value: None
 bool  ___screenDebugMode;

/// @brief Field loginFailed, offset: 0x89, size: 0x1, def value: None
 bool  ___loginFailed;

/// [FormerlySerializedAs("loginDisplayID")]
/// @brief Field emptyObject, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___emptyObject;

/// @brief Field playFabAuthRetryCount, offset: 0x98, size: 0x4, def value: None
 int32_t  ___playFabAuthRetryCount;

/// @brief Field playFabMaxRetries, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___playFabMaxRetries;

/// @brief Field playFabCacheRetryCount, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___playFabCacheRetryCount;

/// @brief Field playFabCacheMaxRetries, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___playFabCacheMaxRetries;

/// @brief Field metaAuthenticator, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaAuthenticator>  ___metaAuthenticator;

/// @brief Field steamAuthenticator, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SteamAuthenticator>  ___steamAuthenticator;

/// @brief Field mothershipAuthenticator, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MothershipAuthenticator>  ___mothershipAuthenticator;

/// @brief Field photonAuthenticator, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PhotonAuthenticator>  ___photonAuthenticator;

/// [SerializeField]
/// @brief Field dbg_isReturningPlayer, offset: 0xc8, size: 0x1, def value: None
 bool  ___dbg_isReturningPlayer;

/// [CompilerGenerated]
/// @brief Field <IsReturningPlayer>k__BackingField, offset: 0xc9, size: 0x1, def value: None
 bool  ____IsReturningPlayer_k__BackingField;

/// @brief Field steamAuthTicketForPlayFab, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::SteamAuthTicket*  ___steamAuthTicketForPlayFab;

/// @brief Field steamAuthTicketForPhoton, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::SteamAuthTicket*  ___steamAuthTicketForPhoton;

/// @brief Field steamAuthIdForPhoton, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___steamAuthIdForPhoton;

/// [CompilerGenerated]
/// @brief Field <postAuthSetSafety>k__BackingField, offset: 0xe8, size: 0x1, def value: None
 bool  ____postAuthSetSafety_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ____playFabPlayerIdCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ____sessionTicket) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ____displayName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ____nonce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___userID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___userToken) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___platform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___isSafeAccount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___OnSafetyUpdate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___safetyType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___m_Ticket) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___m_pcbTicket) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___debugText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___screenDebugMode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___loginFailed) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___emptyObject) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___playFabAuthRetryCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___playFabMaxRetries) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___playFabCacheRetryCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___playFabCacheMaxRetries) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___metaAuthenticator) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___steamAuthenticator) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___mothershipAuthenticator) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___photonAuthenticator) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___dbg_isReturningPlayer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ____IsReturningPlayer_k__BackingField) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___steamAuthTicketForPlayFab) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___steamAuthTicketForPhoton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ___steamAuthIdForPhoton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator, ____postAuthSetSafety_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator) == 0xf0, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.DateTime, System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<VerifyKidAuthenticated>d__52
class CORDL_TYPE PlayFabAuthenticator__VerifyKidAuthenticated_d__52 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  __4__this;

/// @brief Field <>8__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*  __8__1;

/// @brief Field accountCreationDateTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_accountCreationDateTime, put=__cordl_internal_set_accountCreationDateTime)) ::System::DateTime  accountCreationDateTime;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c9b8b0, size 0x228, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9bad8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9bae0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9bb18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c9b8ac, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0* const& __cordl_internal_get___8__1() const;

constexpr ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*& __cordl_internal_get___8__1() ;

constexpr ::System::DateTime const& __cordl_internal_get_accountCreationDateTime() const;

constexpr ::System::DateTime& __cordl_internal_get_accountCreationDateTime() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

constexpr void __cordl_internal_set___8__1(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*  value) ;

constexpr void __cordl_internal_set_accountCreationDateTime(::System::DateTime  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c97804, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabAuthenticator__VerifyKidAuthenticated_d__52() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__VerifyKidAuthenticated_d__52", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator__VerifyKidAuthenticated_d__52(PlayFabAuthenticator__VerifyKidAuthenticated_d__52 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__VerifyKidAuthenticated_d__52", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator__VerifyKidAuthenticated_d__52(PlayFabAuthenticator__VerifyKidAuthenticated_d__52 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4391};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>8__1, offset: 0x20, size: 0x8, def value: None
 ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0*  _____8__1;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  _____4__this;

/// @brief Field accountCreationDateTime, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___accountCreationDateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52, _____8__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52, ___accountCreationDateTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator__VerifyKidAuthenticated_d__52) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<ShowMothershipAuthErrorMessageCoroutine>d__72
class CORDL_TYPE PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  __4__this;

/// @brief Field <frameYield>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameYield_5__2, put=__cordl_internal_set__frameYield_5__2)) ::UnityEngine::WaitForEndOfFrame*  _frameYield_5__2;

/// @brief Field errorCode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCode, put=__cordl_internal_set_errorCode)) ::StringW  errorCode;

/// @brief Field errorMessage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorMessage, put=__cordl_internal_set_errorMessage)) ::StringW  errorMessage;

/// @brief Field traceId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_traceId, put=__cordl_internal_set_traceId)) ::StringW  traceId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c9b514, size 0x350, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9b864, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9b86c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9b8a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c9b510, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::WaitForEndOfFrame* const& __cordl_internal_get__frameYield_5__2() const;

constexpr ::UnityEngine::WaitForEndOfFrame*& __cordl_internal_get__frameYield_5__2() ;

constexpr ::StringW const& __cordl_internal_get_errorCode() const;

constexpr ::StringW& __cordl_internal_get_errorCode() ;

constexpr ::StringW const& __cordl_internal_get_errorMessage() const;

constexpr ::StringW& __cordl_internal_get_errorMessage() ;

constexpr ::StringW const& __cordl_internal_get_traceId() const;

constexpr ::StringW& __cordl_internal_get_traceId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

constexpr void __cordl_internal_set__frameYield_5__2(::UnityEngine::WaitForEndOfFrame*  value) ;

constexpr void __cordl_internal_set_errorCode(::StringW  value) ;

constexpr void __cordl_internal_set_errorMessage(::StringW  value) ;

constexpr void __cordl_internal_set_traceId(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c9900c, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72(PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72(PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4390};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  _____4__this;

/// @brief Field errorMessage, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___errorMessage;

/// @brief Field errorCode, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___errorCode;

/// @brief Field traceId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___traceId;

/// @brief Field <frameYield>5__2, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::WaitForEndOfFrame*  ____frameYield_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72, ___errorMessage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72, ___errorCode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72, ___traceId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72, ____frameYield_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator__ShowMothershipAuthErrorMessageCoroutine_d__72) == 0x48, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<PlayfabAuthenticate>d__70
class CORDL_TYPE PlayFabAuthenticator__PlayfabAuthenticate_d__70 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c9acb4, size 0x814, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9b4c8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9b4d0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9b508, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c9acb0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*& __cordl_internal_get_callback() ;

constexpr ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData* const& __cordl_internal_get_data() const;

constexpr ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*  value) ;

constexpr void __cordl_internal_set_data(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c98f0c, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabAuthenticator__PlayfabAuthenticate_d__70() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__PlayfabAuthenticate_d__70", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator__PlayfabAuthenticate_d__70(PlayFabAuthenticator__PlayfabAuthenticate_d__70 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__PlayfabAuthenticate_d__70", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator__PlayfabAuthenticate_d__70(PlayFabAuthenticator__PlayfabAuthenticate_d__70 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4389};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator__PlayfabAuthenticate_d__70) == 0x48, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError>d__54
class CORDL_TYPE PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c9aaf0, size 0x178, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9ac68, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9ac70, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9aca8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c9aaec, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c978c0, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54(PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54(PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4388};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1FrameDiffernetError_d__54) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame>d__53
class CORDL_TYPE PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c9a920, size 0x184, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9aaa4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9aaac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9aae4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c9a91c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c97898, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53(PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53(PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4387};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator__DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame_d__53) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<ComputerOnConnectedToMaster>d__59
class CORDL_TYPE PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  __4__this;

/// @brief Field <frameYield>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameYield_5__2, put=__cordl_internal_set__frameYield_5__2)) ::UnityEngine::WaitForEndOfFrame*  _frameYield_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c9a7cc, size 0x108, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9a8d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9a8dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9a914, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c9a7c8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::WaitForEndOfFrame* const& __cordl_internal_get__frameYield_5__2() const;

constexpr ::UnityEngine::WaitForEndOfFrame*& __cordl_internal_get__frameYield_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

constexpr void __cordl_internal_set__frameYield_5__2(::UnityEngine::WaitForEndOfFrame*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c98614, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59(PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59(PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4386};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  _____4__this;

/// @brief Field <frameYield>5__2, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::WaitForEndOfFrame*  ____frameYield_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59, ____frameYield_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator__ComputerOnConnectedToMaster_d__59) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<CachePlayFabId>d__75
class CORDL_TYPE PlayFabAuthenticator__CachePlayFabId_d__75 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c99ff8, size 0x788, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9a780, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9a788, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9a7c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c99ff4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*& __cordl_internal_get_callback() ;

constexpr ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest* const& __cordl_internal_get_data() const;

constexpr ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*  value) ;

constexpr void __cordl_internal_set_data(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c99524, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabAuthenticator__CachePlayFabId_d__75() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__CachePlayFabId_d__75", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator__CachePlayFabId_d__75(PlayFabAuthenticator__CachePlayFabId_d__75 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator__CachePlayFabId_d__75", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator__CachePlayFabId_d__75(PlayFabAuthenticator__CachePlayFabId_d__75 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4385};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator__CachePlayFabId_d__75) == 0x48, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<>c__DisplayClass63_0
class CORDL_TYPE PlayFabAuthenticator___c__DisplayClass63_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  __4__this;

/// @brief Field playerName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::StringW  playerName;

static inline ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0* New_ctor() ;

/// @brief Method <SetDisplayName>b__0, addr 0x5c99f0c, size 0x20, virtual false, abstract: false, final false
inline void _SetDisplayName_b__0(::PlayFab::ClientModels::UpdateUserTitleDisplayNameResult*  result) ;

/// @brief Method <SetDisplayName>b__1, addr 0x5c99f2c, size 0xc8, virtual false, abstract: false, final false
inline void _SetDisplayName_b__1(::PlayFab::PlayFabError*  error) ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_playerName() const;

constexpr ::StringW& __cordl_internal_get_playerName() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

constexpr void __cordl_internal_set_playerName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c98d34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator___c__DisplayClass63_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator___c__DisplayClass63_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator___c__DisplayClass63_0(PlayFabAuthenticator___c__DisplayClass63_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator___c__DisplayClass63_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator___c__DisplayClass63_0(PlayFabAuthenticator___c__DisplayClass63_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4384};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  _____4__this;

/// @brief Field playerName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___playerName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0, ___playerName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass63_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<>c__DisplayClass52_0
class CORDL_TYPE PlayFabAuthenticator___c__DisplayClass52_0 : public ::System::Object {
public:
// Declarations
/// @brief Field getNewPlayerDateTimeTask, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_getNewPlayerDateTimeTask, put=__cordl_internal_set_getNewPlayerDateTimeTask)) ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*  getNewPlayerDateTimeTask;

static inline ::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0* New_ctor() ;

/// @brief Method <VerifyKidAuthenticated>b__0, addr 0x5c99ef4, size 0x18, virtual false, abstract: false, final false
inline bool _VerifyKidAuthenticated_b__0() ;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* const& __cordl_internal_get_getNewPlayerDateTimeTask() const;

constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*& __cordl_internal_get_getNewPlayerDateTimeTask() ;

constexpr void __cordl_internal_set_getNewPlayerDateTimeTask(::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*  value) ;

/// @brief Method .ctor, addr 0x5c99eec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator___c__DisplayClass52_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator___c__DisplayClass52_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator___c__DisplayClass52_0(PlayFabAuthenticator___c__DisplayClass52_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator___c__DisplayClass52_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator___c__DisplayClass52_0(PlayFabAuthenticator___c__DisplayClass52_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4383};

/// @brief Field getNewPlayerDateTimeTask, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>*  ___getNewPlayerDateTimeTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0, ___getNewPlayerDateTimeTask) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator___c__DisplayClass52_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/<>c
class CORDL_TYPE PlayFabAuthenticator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::PlayFabAuthenticator___c*  __9;

/// @brief Field <>9__42_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_0, put=setStaticF___9__42_0)) ::System::Action*  __9__42_0;

/// @brief Field <>9__58_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_0, put=setStaticF___9__58_0)) ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  __9__58_0;

/// @brief Field <>9__58_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_1, put=setStaticF___9__58_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__58_1;

/// @brief Field <>9__62_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__62_1, put=setStaticF___9__62_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__62_1;

static inline ::GorillaNetworking::PlayFabAuthenticator___c* New_ctor() ;

/// @brief Method <AuthenticateWithPhoton>b__58_0, addr 0x5c99b7c, size 0x170, virtual false, abstract: false, final false
inline void _AuthenticateWithPhoton_b__58_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method <AuthenticateWithPhoton>b__58_1, addr 0x5c99cec, size 0x18c, virtual false, abstract: false, final false
inline void _AuthenticateWithPhoton_b__58_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method <BeginLoginFlow>b__42_0, addr 0x5c99b24, size 0x58, virtual false, abstract: false, final false
inline void _BeginLoginFlow_b__42_0() ;

/// @brief Method <GetPlayerDisplayName>b__62_1, addr 0x5c99e78, size 0x74, virtual false, abstract: false, final false
inline void _GetPlayerDisplayName_b__62_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x5c99b1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::PlayFabAuthenticator___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__42_0() ;

static inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* getStaticF___9__58_0() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__58_1() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__62_1() ;

static inline void setStaticF___9(::GorillaNetworking::PlayFabAuthenticator___c*  value) ;

static inline void setStaticF___9__42_0(::System::Action*  value) ;

static inline void setStaticF___9__58_0(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value) ;

static inline void setStaticF___9__58_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__62_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator___c(PlayFabAuthenticator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator___c(PlayFabAuthenticator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/BanInfo
class CORDL_TYPE PlayFabAuthenticator_BanInfo : public ::System::Object {
public:
// Declarations
/// @brief Field BanExpirationTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BanExpirationTime, put=__cordl_internal_set_BanExpirationTime)) ::StringW  BanExpirationTime;

/// @brief Field BanMessage, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BanMessage, put=__cordl_internal_set_BanMessage)) ::StringW  BanMessage;

static inline ::GorillaNetworking::PlayFabAuthenticator_BanInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BanExpirationTime() const;

constexpr ::StringW& __cordl_internal_get_BanExpirationTime() ;

constexpr ::StringW const& __cordl_internal_get_BanMessage() const;

constexpr ::StringW& __cordl_internal_get_BanMessage() ;

constexpr void __cordl_internal_set_BanExpirationTime(::StringW  value) ;

constexpr void __cordl_internal_set_BanMessage(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c99aac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator_BanInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_BanInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator_BanInfo(PlayFabAuthenticator_BanInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_BanInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator_BanInfo(PlayFabAuthenticator_BanInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4381};

/// @brief Field BanMessage, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___BanMessage;

/// @brief Field BanExpirationTime, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BanExpirationTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_BanInfo, ___BanMessage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_BanInfo, ___BanExpirationTime) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator_BanInfo) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/ErrorInfo
class CORDL_TYPE PlayFabAuthenticator_ErrorInfo : public ::System::Object {
public:
// Declarations
/// @brief Field Error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field Message, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

static inline ::GorillaNetworking::PlayFabAuthenticator_ErrorInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c99aa4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator_ErrorInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_ErrorInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator_ErrorInfo(PlayFabAuthenticator_ErrorInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_ErrorInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator_ErrorInfo(PlayFabAuthenticator_ErrorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4380};

/// @brief Field Message, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field Error, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_ErrorInfo, ___Message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_ErrorInfo, ___Error) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator_ErrorInfo) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/CachePlayFabIdResponse
class CORDL_TYPE PlayFabAuthenticator_CachePlayFabIdResponse : public ::System::Object {
public:
// Declarations
/// @brief Field AccountCreationIsoTimestamp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AccountCreationIsoTimestamp, put=__cordl_internal_set_AccountCreationIsoTimestamp)) ::StringW  AccountCreationIsoTimestamp;

/// @brief Field PlayFabId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field SteamAuthIdForPhoton, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamAuthIdForPhoton, put=__cordl_internal_set_SteamAuthIdForPhoton)) ::StringW  SteamAuthIdForPhoton;

static inline ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AccountCreationIsoTimestamp() const;

constexpr ::StringW& __cordl_internal_get_AccountCreationIsoTimestamp() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_SteamAuthIdForPhoton() const;

constexpr ::StringW& __cordl_internal_get_SteamAuthIdForPhoton() ;

constexpr void __cordl_internal_set_AccountCreationIsoTimestamp(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_SteamAuthIdForPhoton(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c99a9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator_CachePlayFabIdResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_CachePlayFabIdResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator_CachePlayFabIdResponse(PlayFabAuthenticator_CachePlayFabIdResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_CachePlayFabIdResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator_CachePlayFabIdResponse(PlayFabAuthenticator_CachePlayFabIdResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4379};

/// @brief Field PlayFabId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field SteamAuthIdForPhoton, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SteamAuthIdForPhoton;

/// @brief Field AccountCreationIsoTimestamp, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AccountCreationIsoTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse, ___PlayFabId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse, ___SteamAuthIdForPhoton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse, ___AccountCreationIsoTimestamp) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/PlayfabAuthResponseData
class CORDL_TYPE PlayFabAuthenticator_PlayfabAuthResponseData : public ::System::Object {
public:
// Declarations
/// @brief Field AccountCreationIsoTimestamp, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_AccountCreationIsoTimestamp, put=__cordl_internal_set_AccountCreationIsoTimestamp)) ::StringW  AccountCreationIsoTimestamp;

/// @brief Field EntityId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityId, put=__cordl_internal_set_EntityId)) ::StringW  EntityId;

/// @brief Field EntityToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityToken, put=__cordl_internal_set_EntityToken)) ::StringW  EntityToken;

/// @brief Field EntityType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityType, put=__cordl_internal_set_EntityType)) ::StringW  EntityType;

/// @brief Field PlayFabId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field SessionTicket, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionTicket, put=__cordl_internal_set_SessionTicket)) ::StringW  SessionTicket;

static inline ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AccountCreationIsoTimestamp() const;

constexpr ::StringW& __cordl_internal_get_AccountCreationIsoTimestamp() ;

constexpr ::StringW const& __cordl_internal_get_EntityId() const;

constexpr ::StringW& __cordl_internal_get_EntityId() ;

constexpr ::StringW const& __cordl_internal_get_EntityToken() const;

constexpr ::StringW& __cordl_internal_get_EntityToken() ;

constexpr ::StringW const& __cordl_internal_get_EntityType() const;

constexpr ::StringW& __cordl_internal_get_EntityType() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_SessionTicket() const;

constexpr ::StringW& __cordl_internal_get_SessionTicket() ;

constexpr void __cordl_internal_set_AccountCreationIsoTimestamp(::StringW  value) ;

constexpr void __cordl_internal_set_EntityId(::StringW  value) ;

constexpr void __cordl_internal_set_EntityToken(::StringW  value) ;

constexpr void __cordl_internal_set_EntityType(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionTicket(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c99a94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator_PlayfabAuthResponseData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_PlayfabAuthResponseData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator_PlayfabAuthResponseData(PlayFabAuthenticator_PlayfabAuthResponseData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_PlayfabAuthResponseData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator_PlayfabAuthResponseData(PlayFabAuthenticator_PlayfabAuthResponseData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4378};

/// @brief Field SessionTicket, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___SessionTicket;

/// @brief Field EntityToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EntityToken;

/// @brief Field PlayFabId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field EntityId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___EntityId;

/// @brief Field EntityType, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___EntityType;

/// @brief Field AccountCreationIsoTimestamp, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___AccountCreationIsoTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData, ___SessionTicket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData, ___EntityToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData, ___PlayFabId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData, ___EntityId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData, ___EntityType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData, ___AccountCreationIsoTimestamp) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData) == 0x40, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/PlayfabAuthRequestData
class CORDL_TYPE PlayFabAuthenticator_PlayfabAuthRequestData : public ::System::Object {
public:
// Declarations
/// @brief Field AgeCategory, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_AgeCategory, put=__cordl_internal_set_AgeCategory)) ::StringW  AgeCategory;

/// @brief Field AppId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppId, put=__cordl_internal_set_AppId)) ::StringW  AppId;

/// @brief Field MothershipDeploymentId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipDeploymentId, put=__cordl_internal_set_MothershipDeploymentId)) ::StringW  MothershipDeploymentId;

/// @brief Field MothershipEnvId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipEnvId, put=__cordl_internal_set_MothershipEnvId)) ::StringW  MothershipEnvId;

/// @brief Field MothershipId, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

/// @brief Field MothershipToken, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipToken, put=__cordl_internal_set_MothershipToken)) ::StringW  MothershipToken;

/// @brief Field Nonce, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Nonce, put=__cordl_internal_set_Nonce)) ::StringW  Nonce;

/// @brief Field OculusId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OculusId, put=__cordl_internal_set_OculusId)) ::StringW  OculusId;

/// @brief Field Platform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::StringW  Platform;

static inline ::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AgeCategory() const;

constexpr ::StringW& __cordl_internal_get_AgeCategory() ;

constexpr ::StringW const& __cordl_internal_get_AppId() const;

constexpr ::StringW& __cordl_internal_get_AppId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipDeploymentId() const;

constexpr ::StringW& __cordl_internal_get_MothershipDeploymentId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_MothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipToken() const;

constexpr ::StringW& __cordl_internal_get_MothershipToken() ;

constexpr ::StringW const& __cordl_internal_get_Nonce() const;

constexpr ::StringW& __cordl_internal_get_Nonce() ;

constexpr ::StringW const& __cordl_internal_get_OculusId() const;

constexpr ::StringW& __cordl_internal_get_OculusId() ;

constexpr ::StringW const& __cordl_internal_get_Platform() const;

constexpr ::StringW& __cordl_internal_get_Platform() ;

constexpr void __cordl_internal_set_AgeCategory(::StringW  value) ;

constexpr void __cordl_internal_set_AppId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipDeploymentId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipToken(::StringW  value) ;

constexpr void __cordl_internal_set_Nonce(::StringW  value) ;

constexpr void __cordl_internal_set_OculusId(::StringW  value) ;

constexpr void __cordl_internal_set_Platform(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c99a8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator_PlayfabAuthRequestData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_PlayfabAuthRequestData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator_PlayfabAuthRequestData(PlayFabAuthenticator_PlayfabAuthRequestData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_PlayfabAuthRequestData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator_PlayfabAuthRequestData(PlayFabAuthenticator_PlayfabAuthRequestData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4377};

/// @brief Field AppId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___AppId;

/// @brief Field Nonce, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Nonce;

/// @brief Field OculusId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___OculusId;

/// @brief Field Platform, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Platform;

/// @brief Field AgeCategory, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___AgeCategory;

/// @brief Field MothershipEnvId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___MothershipEnvId;

/// @brief Field MothershipDeploymentId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___MothershipDeploymentId;

/// @brief Field MothershipToken, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___MothershipToken;

/// @brief Field MothershipId, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___MothershipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___AppId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___Nonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___OculusId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___Platform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___AgeCategory) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___MothershipEnvId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___MothershipDeploymentId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___MothershipToken) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData, ___MothershipId) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData) == 0x58, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabAuthenticator/CachePlayFabIdRequest
class CORDL_TYPE PlayFabAuthenticator_CachePlayFabIdRequest : public ::System::Object {
public:
// Declarations
/// @brief Field MothershipDeploymentId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipDeploymentId, put=__cordl_internal_set_MothershipDeploymentId)) ::StringW  MothershipDeploymentId;

/// @brief Field MothershipEnvId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipEnvId, put=__cordl_internal_set_MothershipEnvId)) ::StringW  MothershipEnvId;

/// @brief Field MothershipId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

/// @brief Field MothershipToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipToken, put=__cordl_internal_set_MothershipToken)) ::StringW  MothershipToken;

/// @brief Field Platform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::StringW  Platform;

/// @brief Field PlayFabId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field SessionTicket, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionTicket, put=__cordl_internal_set_SessionTicket)) ::StringW  SessionTicket;

/// @brief Field TitleId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_MothershipDeploymentId() const;

constexpr ::StringW& __cordl_internal_get_MothershipDeploymentId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_MothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipToken() const;

constexpr ::StringW& __cordl_internal_get_MothershipToken() ;

constexpr ::StringW const& __cordl_internal_get_Platform() const;

constexpr ::StringW& __cordl_internal_get_Platform() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_SessionTicket() const;

constexpr ::StringW& __cordl_internal_get_SessionTicket() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_MothershipDeploymentId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipToken(::StringW  value) ;

constexpr void __cordl_internal_set_Platform(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionTicket(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c97afc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator_CachePlayFabIdRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_CachePlayFabIdRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabAuthenticator_CachePlayFabIdRequest(PlayFabAuthenticator_CachePlayFabIdRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabAuthenticator_CachePlayFabIdRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabAuthenticator_CachePlayFabIdRequest(PlayFabAuthenticator_CachePlayFabIdRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4376};

/// @brief Field Platform, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Platform;

/// @brief Field SessionTicket, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SessionTicket;

/// @brief Field PlayFabId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field TitleId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field MothershipEnvId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___MothershipEnvId;

/// @brief Field MothershipDeploymentId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___MothershipDeploymentId;

/// @brief Field MothershipToken, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___MothershipToken;

/// @brief Field MothershipId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___MothershipId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest, ___Platform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest, ___SessionTicket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest, ___PlayFabId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest, ___TitleId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest, ___MothershipEnvId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest, ___MothershipDeploymentId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest, ___MothershipToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest, ___MothershipId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest) == 0x50, "Size mismatch!");

} // namespace end def GorillaNetworking
