#pragma once
// IWYU pragma private; include "Steamworks/SteamClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SteamClient)
namespace Steamworks {
struct HSteamPipe;
}
namespace Steamworks {
struct HSteamUser;
}
namespace Steamworks {
class SteamAPIWarningMessageHook_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class SteamClient;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamClient*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamClient*, "Steamworks", "SteamClient");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamClient
class CORDL_TYPE SteamClient : public ::System::Object {
public:
// Declarations
/// @brief Method GetISteamApps, addr 0x5f2cf58, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamApps(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamFriends, addr 0x5f2c2d4, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamFriends(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamHTMLSurface, addr 0x5f2e1d4, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamHTMLSurface(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamHTTP, addr 0x5f2da48, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamHTTP(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamInput, addr 0x5f2ebe4, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamInput(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamInventory, addr 0x5f2e458, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamInventory(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMatchmaking, addr 0x5f2c7cc, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMatchmaking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMatchmakingServers, addr 0x5f2ca50, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMatchmakingServers(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMusic, addr 0x5f2df50, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMusic(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamNetworking, addr 0x5f2d1dc, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamNetworking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamParentalSettings, addr 0x5f2e960, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamParentalSettings(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamParties, addr 0x5f2ee68, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamParties(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamRemotePlay, addr 0x5f2f0ec, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamRemotePlay(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamRemoteStorage, addr 0x5f2d460, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamRemoteStorage(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamScreenshots, addr 0x5f2d6e4, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamScreenshots(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUGC, addr 0x5f2dccc, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUGC(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUser, addr 0x5f2beac, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUser(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUserStats, addr 0x5f2ccd4, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUserStats(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUtils, addr 0x5f2c558, size 0x198, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUtils(::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamVideo, addr 0x5f2e6dc, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamVideo(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method SetWarningMessageHook, addr 0x5f2d968, size 0x54, virtual false, abstract: false, final false
static inline void SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamClient(SteamClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamClient(SteamClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamClient) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
