#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/AppSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthModeOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppSettings)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class AppSettings;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::AppSettings*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::AppSettings*, "Fusion.Photon.Realtime", "AppSettings");
// Dependencies ExitGames.Client.Photon.ConnectionProtocol, Fusion.Photon.Realtime.AuthModeOption, System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.AppSettings
class CORDL_TYPE AppSettings : public ::System::Object {
public:
// Declarations
/// @brief Field AppIdChat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppIdChat, put=__cordl_internal_set_AppIdChat)) ::StringW  AppIdChat;

/// @brief Field AppIdFusion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppIdFusion, put=__cordl_internal_set_AppIdFusion)) ::StringW  AppIdFusion;

/// @brief Field AppIdRealtime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppIdRealtime, put=__cordl_internal_set_AppIdRealtime)) ::StringW  AppIdRealtime;

/// @brief Field AppIdVoice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppIdVoice, put=__cordl_internal_set_AppIdVoice)) ::StringW  AppIdVoice;

/// @brief Field AppVersion, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppVersion, put=__cordl_internal_set_AppVersion)) ::StringW  AppVersion;

/// @brief Field AuthMode, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_AuthMode, put=__cordl_internal_set_AuthMode)) ::Fusion::Photon::Realtime::AuthModeOption  AuthMode;

/// @brief Field BestRegionSummaryFromStorage, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_BestRegionSummaryFromStorage, put=__cordl_internal_set_BestRegionSummaryFromStorage)) ::StringW  BestRegionSummaryFromStorage;

/// @brief Field EnableLobbyStatistics, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableLobbyStatistics, put=__cordl_internal_set_EnableLobbyStatistics)) bool  EnableLobbyStatistics;

/// @brief Field EnableProtocolFallback, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableProtocolFallback, put=__cordl_internal_set_EnableProtocolFallback)) bool  EnableProtocolFallback;

/// @brief Field FixedRegion, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_FixedRegion, put=__cordl_internal_set_FixedRegion)) ::StringW  FixedRegion;

 __declspec(property(get=get_IsBestRegion)) bool  IsBestRegion;

 __declspec(property(get=get_IsDefaultNameServer)) bool  IsDefaultNameServer;

 __declspec(property(get=get_IsDefaultPort)) bool  IsDefaultPort;

 __declspec(property(get=get_IsMasterServerAddress)) bool  IsMasterServerAddress;

 __declspec(property(get=get_NetworkLogging, put=set_NetworkLogging)) ::ExitGames::Client::Photon::DebugLevel  NetworkLogging;

/// @brief Field Port, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_Port, put=__cordl_internal_set_Port)) int32_t  Port;

/// @brief Field Protocol, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_Protocol, put=__cordl_internal_set_Protocol)) ::ExitGames::Client::Photon::ConnectionProtocol  Protocol;

/// @brief Field ProxyServer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProxyServer, put=__cordl_internal_set_ProxyServer)) ::StringW  ProxyServer;

/// @brief Field Server, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Server, put=__cordl_internal_set_Server)) ::StringW  Server;

/// @brief Field UseNameServer, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseNameServer, put=__cordl_internal_set_UseNameServer)) bool  UseNameServer;

/// @brief Method CopyTo, addr 0x5f4bdc4, size 0xec, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::AppSettings* CopyTo(::Fusion::Photon::Realtime::AppSettings*  d) ;

/// @brief Method GetCopy, addr 0x5f49c4c, size 0x70, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::AppSettings* GetCopy() ;

/// @brief Method HideAppId, addr 0x5f4bc6c, size 0x90, virtual false, abstract: false, final false
inline ::StringW HideAppId(::StringW  appId) ;

/// @brief Method IsAppId, addr 0x5f4bcfc, size 0xc8, virtual false, abstract: false, final false
static inline bool IsAppId(::StringW  val) ;

static inline ::Fusion::Photon::Realtime::AppSettings* New_ctor() ;

/// @brief Method ToStringFull, addr 0x5f4b5b0, size 0x6bc, virtual false, abstract: false, final false
inline ::StringW ToStringFull() ;

constexpr ::StringW const& __cordl_internal_get_AppIdChat() const;

constexpr ::StringW& __cordl_internal_get_AppIdChat() ;

constexpr ::StringW const& __cordl_internal_get_AppIdFusion() const;

constexpr ::StringW& __cordl_internal_get_AppIdFusion() ;

constexpr ::StringW const& __cordl_internal_get_AppIdRealtime() const;

constexpr ::StringW& __cordl_internal_get_AppIdRealtime() ;

constexpr ::StringW const& __cordl_internal_get_AppIdVoice() const;

constexpr ::StringW& __cordl_internal_get_AppIdVoice() ;

constexpr ::StringW const& __cordl_internal_get_AppVersion() const;

constexpr ::StringW& __cordl_internal_get_AppVersion() ;

constexpr ::Fusion::Photon::Realtime::AuthModeOption const& __cordl_internal_get_AuthMode() const;

constexpr ::Fusion::Photon::Realtime::AuthModeOption& __cordl_internal_get_AuthMode() ;

constexpr ::StringW const& __cordl_internal_get_BestRegionSummaryFromStorage() const;

constexpr ::StringW& __cordl_internal_get_BestRegionSummaryFromStorage() ;

constexpr bool const& __cordl_internal_get_EnableLobbyStatistics() const;

constexpr bool& __cordl_internal_get_EnableLobbyStatistics() ;

constexpr bool const& __cordl_internal_get_EnableProtocolFallback() const;

constexpr bool& __cordl_internal_get_EnableProtocolFallback() ;

constexpr ::StringW const& __cordl_internal_get_FixedRegion() const;

constexpr ::StringW& __cordl_internal_get_FixedRegion() ;

constexpr int32_t const& __cordl_internal_get_Port() const;

constexpr int32_t& __cordl_internal_get_Port() ;

constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& __cordl_internal_get_Protocol() const;

constexpr ::ExitGames::Client::Photon::ConnectionProtocol& __cordl_internal_get_Protocol() ;

constexpr ::StringW const& __cordl_internal_get_ProxyServer() const;

constexpr ::StringW& __cordl_internal_get_ProxyServer() ;

constexpr ::StringW const& __cordl_internal_get_Server() const;

constexpr ::StringW& __cordl_internal_get_Server() ;

constexpr bool const& __cordl_internal_get_UseNameServer() const;

constexpr bool& __cordl_internal_get_UseNameServer() ;

constexpr void __cordl_internal_set_AppIdChat(::StringW  value) ;

constexpr void __cordl_internal_set_AppIdFusion(::StringW  value) ;

constexpr void __cordl_internal_set_AppIdRealtime(::StringW  value) ;

constexpr void __cordl_internal_set_AppIdVoice(::StringW  value) ;

constexpr void __cordl_internal_set_AppVersion(::StringW  value) ;

constexpr void __cordl_internal_set_AuthMode(::Fusion::Photon::Realtime::AuthModeOption  value) ;

constexpr void __cordl_internal_set_BestRegionSummaryFromStorage(::StringW  value) ;

constexpr void __cordl_internal_set_EnableLobbyStatistics(bool  value) ;

constexpr void __cordl_internal_set_EnableProtocolFallback(bool  value) ;

constexpr void __cordl_internal_set_FixedRegion(::StringW  value) ;

constexpr void __cordl_internal_set_Port(int32_t  value) ;

constexpr void __cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol  value) ;

constexpr void __cordl_internal_set_ProxyServer(::StringW  value) ;

constexpr void __cordl_internal_set_Server(::StringW  value) ;

constexpr void __cordl_internal_set_UseNameServer(bool  value) ;

/// @brief Method .ctor, addr 0x5f4beb0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsBestRegion, addr 0x5f4b578, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsBestRegion() ;

/// @brief Method get_IsDefaultNameServer, addr 0x5f4b594, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsDefaultNameServer() ;

/// @brief Method get_IsDefaultPort, addr 0x5f49cbc, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDefaultPort() ;

/// @brief Method get_IsMasterServerAddress, addr 0x5f4b568, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMasterServerAddress() ;

/// @brief Method get_NetworkLogging, addr 0x5f4b4c8, size 0x9c, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::DebugLevel get_NetworkLogging() ;

/// @brief Method set_NetworkLogging, addr 0x5f4b564, size 0x4, virtual false, abstract: false, final false
inline void set_NetworkLogging(::ExitGames::Client::Photon::DebugLevel  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppSettings(AppSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppSettings(AppSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28038};

/// [InlineHelp]
/// @brief Field AppIdRealtime, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___AppIdRealtime;

/// [InlineHelp]
/// @brief Field AppIdFusion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AppIdFusion;

/// [InlineHelp]
/// @brief Field AppIdChat, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AppIdChat;

/// [InlineHelp]
/// @brief Field AppIdVoice, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___AppIdVoice;

/// [InlineHelp]
/// @brief Field AppVersion, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___AppVersion;

/// [InlineHelp]
/// @brief Field UseNameServer, offset: 0x38, size: 0x1, def value: None
 bool  ___UseNameServer;

/// [InlineHelp]
/// @brief Field FixedRegion, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___FixedRegion;

/// [InlineHelp]
/// @brief Field BestRegionSummaryFromStorage, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___BestRegionSummaryFromStorage;

/// [InlineHelp]
/// @brief Field Server, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___Server;

/// [InlineHelp]
/// @brief Field Port, offset: 0x58, size: 0x4, def value: None
 int32_t  ___Port;

/// [InlineHelp]
/// @brief Field ProxyServer, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___ProxyServer;

/// [Header("Miscellaneous")]
/// [InlineHelp]
/// @brief Field Protocol, offset: 0x68, size: 0x1, def value: None
 ::ExitGames::Client::Photon::ConnectionProtocol  ___Protocol;

/// [InlineHelp]
/// @brief Field EnableProtocolFallback, offset: 0x69, size: 0x1, def value: None
 bool  ___EnableProtocolFallback;

/// [InlineHelp]
/// @brief Field AuthMode, offset: 0x6c, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::AuthModeOption  ___AuthMode;

/// [InlineHelp]
/// @brief Field EnableLobbyStatistics, offset: 0x70, size: 0x1, def value: None
 bool  ___EnableLobbyStatistics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___AppIdRealtime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___AppIdFusion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___AppIdChat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___AppIdVoice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___AppVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___UseNameServer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___FixedRegion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___BestRegionSummaryFromStorage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___Server) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___Port) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___ProxyServer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___Protocol) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___EnableProtocolFallback) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___AuthMode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AppSettings, ___EnableLobbyStatistics) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::AppSettings) == 0x78, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
