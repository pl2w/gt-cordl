#pragma once
// IWYU pragma private; include "Steamworks/NativeMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct ESteamAPIInitResult;
}
namespace Steamworks {
struct HAuthTicket;
}
namespace Steamworks {
struct HSteamPipe;
}
namespace Steamworks {
struct HSteamUser;
}
namespace Steamworks {
class InteropHelp_UTF8StringHandle;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
class SteamAPIWarningMessageHook_t;
}
namespace Steamworks {
struct SteamNetworkingIdentity;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class NativeMethods;
}
// Write type traits
MARK_REF_T(::Steamworks::NativeMethods*);
DEFINE_IL2CPP_CLASS(::Steamworks::NativeMethods*, "Steamworks", "NativeMethods");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.NativeMethods
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
// Declarations
/// @brief Method ISteamClient_GetISteamApps, addr 0x5f2d0f8, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamApps(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamFriends, addr 0x5f2c474, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamFriends(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamHTMLSurface, addr 0x5f2e374, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamHTMLSurface(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamHTTP, addr 0x5f2dbe8, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamHTTP(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamInput, addr 0x5f2ed84, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamInput(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamInventory, addr 0x5f2e5f8, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamInventory(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamMatchmaking, addr 0x5f2c96c, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamMatchmaking(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamMatchmakingServers, addr 0x5f2cbf0, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamMatchmakingServers(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamMusic, addr 0x5f2e0f0, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamMusic(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamNetworking, addr 0x5f2d37c, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamNetworking(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamParentalSettings, addr 0x5f2eb00, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamParentalSettings(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamParties, addr 0x5f2f008, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamParties(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamRemotePlay, addr 0x5f2f28c, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamRemotePlay(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamRemoteStorage, addr 0x5f2d600, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamRemoteStorage(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamScreenshots, addr 0x5f2d884, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamScreenshots(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamUGC, addr 0x5f2de6c, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamUGC(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamUser, addr 0x5f2c1f0, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamUser(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamUserStats, addr 0x5f2ce74, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamUserStats(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamUtils, addr 0x5f2c6f0, size 0xdc, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamUtils(::System::IntPtr  instancePtr, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamVideo, addr 0x5f2e87c, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamVideo(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_SetWarningMessageHook, addr 0x5f2d9bc, size 0x8c, virtual false, abstract: false, final false
static inline void ISteamClient_SetWarningMessageHook(::System::IntPtr  instancePtr, ::Steamworks::SteamAPIWarningMessageHook_t*  pFunction) ;

/// @brief Method ISteamUser_CancelAuthTicket, addr 0x5f2f8cc, size 0x84, virtual false, abstract: false, final false
static inline void ISteamUser_CancelAuthTicket(::System::IntPtr  instancePtr, ::Steamworks::HAuthTicket  hAuthTicket) ;

/// @brief Method ISteamUser_GetAuthSessionTicket, addr 0x5f2f548, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t ISteamUser_GetAuthSessionTicket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pSteamNetworkingIdentity) ;

/// @brief Method ISteamUser_GetAuthTicketForWebApi, addr 0x5f2f7ac, size 0xcc, virtual false, abstract: false, final false
static inline uint32_t ISteamUser_GetAuthTicketForWebApi(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchIdentity) ;

/// @brief Method ISteamUser_GetSteamID, addr 0x5f2f404, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t ISteamUser_GetSteamID(::System::IntPtr  instancePtr) ;

/// @brief Method SteamAPI_GetHSteamPipe, addr 0x5f2fb04, size 0x64, virtual false, abstract: false, final false
static inline int32_t SteamAPI_GetHSteamPipe() ;

/// @brief Method SteamAPI_GetHSteamUser, addr 0x5f2fb68, size 0x64, virtual false, abstract: false, final false
static inline int32_t SteamAPI_GetHSteamUser() ;

/// @brief Method SteamAPI_ManualDispatch_FreeLastCallback, addr 0x5f2ff94, size 0x7c, virtual false, abstract: false, final false
static inline void SteamAPI_ManualDispatch_FreeLastCallback(::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method SteamAPI_ManualDispatch_GetAPICallResult, addr 0x5f30010, size 0xd0, virtual false, abstract: false, final false
static inline bool SteamAPI_ManualDispatch_GetAPICallResult(::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::SteamAPICall_t  hSteamAPICall, ::System::IntPtr  pCallback, int32_t  cubCallback, int32_t  iCallbackExpected, ::by_ref<bool>  pbFailed) ;

/// @brief Method SteamAPI_ManualDispatch_GetNextCallback, addr 0x5f2ff08, size 0x8c, virtual false, abstract: false, final false
static inline bool SteamAPI_ManualDispatch_GetNextCallback(::Steamworks::HSteamPipe  hSteamPipe, ::System::IntPtr  pCallbackMsg) ;

/// @brief Method SteamAPI_ManualDispatch_Init, addr 0x5f2fe28, size 0x64, virtual false, abstract: false, final false
static inline void SteamAPI_ManualDispatch_Init() ;

/// @brief Method SteamAPI_ManualDispatch_RunFrame, addr 0x5f2fe8c, size 0x7c, virtual false, abstract: false, final false
static inline void SteamAPI_ManualDispatch_RunFrame(::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method SteamAPI_RestartAppIfNecessary, addr 0x5f2fa80, size 0x84, virtual false, abstract: false, final false
static inline bool SteamAPI_RestartAppIfNecessary(::Steamworks::AppId_t  unOwnAppID) ;

/// @brief Method SteamAPI_Shutdown, addr 0x5f2fa1c, size 0x64, virtual false, abstract: false, final false
static inline void SteamAPI_Shutdown() ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_IsEqualTo, addr 0x5f30144, size 0x8c, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_IsEqualTo(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::by_ref<::Steamworks::SteamNetworkingIdentity>  x) ;

/// @brief Method SteamGameServer_GetHSteamPipe, addr 0x5f300e0, size 0x64, virtual false, abstract: false, final false
static inline int32_t SteamGameServer_GetHSteamPipe() ;

/// @brief Method SteamInternal_CreateInterface, addr 0x5f2fbcc, size 0xc4, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamInternal_CreateInterface(::Steamworks::InteropHelp_UTF8StringHandle*  ver) ;

/// @brief Method SteamInternal_FindOrCreateGameServerInterface, addr 0x5f2fd5c, size 0xcc, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamInternal_FindOrCreateGameServerInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pszVersion) ;

/// @brief Method SteamInternal_FindOrCreateUserInterface, addr 0x5f2fc90, size 0xcc, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamInternal_FindOrCreateUserInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pszVersion) ;

/// @brief Method SteamInternal_SteamAPI_Init, addr 0x5f2f950, size 0xcc, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamAPIInitResult SteamInternal_SteamAPI_Init(::Steamworks::InteropHelp_UTF8StringHandle*  pszInternalCheckInterfaceVersions, ::System::IntPtr  pOutErrMsg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeMethods(NativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeMethods(NativeMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::NativeMethods) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
