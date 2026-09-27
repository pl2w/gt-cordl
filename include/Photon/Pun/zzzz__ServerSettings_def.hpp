#pragma once
// IWYU pragma private; include "Photon/Pun/ServerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PunLogLevel_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ServerSettings)
namespace Photon::Realtime {
class AppSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Photon::Pun {
class ServerSettings;
}
// Write type traits
MARK_REF_T(::Photon::Pun::ServerSettings*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::ServerSettings*, "Photon.Pun", "ServerSettings");
// [HelpURL("https://doc.photonengine.com/en-us/pun/v2/getting-started/initial-setup")]
// Dependencies Photon.Pun.PunLogLevel, UnityEngine.ScriptableObject
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.ServerSettings
class CORDL_TYPE ServerSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AppSettings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppSettings, put=__cordl_internal_set_AppSettings)) ::Photon::Realtime::AppSettings*  AppSettings;

/// @brief Field DevRegion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DevRegion, put=__cordl_internal_set_DevRegion)) ::StringW  DevRegion;

/// @brief Field EnableSupportLogger, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableSupportLogger, put=__cordl_internal_set_EnableSupportLogger)) bool  EnableSupportLogger;

/// @brief Field PunLogging, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PunLogging, put=__cordl_internal_set_PunLogging)) ::Photon::Pun::PunLogLevel  PunLogging;

/// @brief Field RpcList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RpcList, put=__cordl_internal_set_RpcList)) ::System::Collections::Generic::List_1<::StringW>*  RpcList;

/// @brief Field RunInBackground, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_RunInBackground, put=__cordl_internal_set_RunInBackground)) bool  RunInBackground;

/// @brief Field StartInOfflineMode, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_StartInOfflineMode, put=__cordl_internal_set_StartInOfflineMode)) bool  StartInOfflineMode;

/// @brief Method IsAppId, addr 0xa72cca8, size 0xc8, virtual false, abstract: false, final false
static inline bool IsAppId(::StringW  val) ;

static inline ::Photon::Pun::ServerSettings* New_ctor() ;

/// @brief Method ResetBestRegionCodeInPreferences, addr 0xa72cdbc, size 0x50, virtual false, abstract: false, final false
static inline void ResetBestRegionCodeInPreferences() ;

/// @brief Method ToString, addr 0xa72ce0c, size 0x64, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UseCloud, addr 0xa72cc40, size 0x68, virtual false, abstract: false, final false
inline void UseCloud(::StringW  cloudAppid, ::StringW  code) ;

constexpr ::Photon::Realtime::AppSettings* const& __cordl_internal_get_AppSettings() const;

constexpr ::Photon::Realtime::AppSettings*& __cordl_internal_get_AppSettings() ;

constexpr ::StringW const& __cordl_internal_get_DevRegion() const;

constexpr ::StringW& __cordl_internal_get_DevRegion() ;

constexpr bool const& __cordl_internal_get_EnableSupportLogger() const;

constexpr bool& __cordl_internal_get_EnableSupportLogger() ;

constexpr ::Photon::Pun::PunLogLevel const& __cordl_internal_get_PunLogging() const;

constexpr ::Photon::Pun::PunLogLevel& __cordl_internal_get_PunLogging() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_RpcList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_RpcList() ;

constexpr bool const& __cordl_internal_get_RunInBackground() const;

constexpr bool& __cordl_internal_get_RunInBackground() ;

constexpr bool const& __cordl_internal_get_StartInOfflineMode() const;

constexpr bool& __cordl_internal_get_StartInOfflineMode() ;

constexpr void __cordl_internal_set_AppSettings(::Photon::Realtime::AppSettings*  value) ;

constexpr void __cordl_internal_set_DevRegion(::StringW  value) ;

constexpr void __cordl_internal_set_EnableSupportLogger(bool  value) ;

constexpr void __cordl_internal_set_PunLogging(::Photon::Pun::PunLogLevel  value) ;

constexpr void __cordl_internal_set_RpcList(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_RunInBackground(bool  value) ;

constexpr void __cordl_internal_set_StartInOfflineMode(bool  value) ;

/// @brief Method .ctor, addr 0xa72ce70, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BestRegionSummaryInPreferences, addr 0xa72cd70, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW get_BestRegionSummaryInPreferences() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerSettings(ServerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerSettings(ServerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29721};

/// [Tooltip("Core Photon Server/Cloud settings.")]
/// @brief Field AppSettings, offset: 0x18, size: 0x8, def value: None
 ::Photon::Realtime::AppSettings*  ___AppSettings;

/// [Tooltip("Developer build override for Best Region.")]
/// @brief Field DevRegion, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DevRegion;

/// [Tooltip("Log output by PUN.")]
/// @brief Field PunLogging, offset: 0x28, size: 0x4, def value: None
 ::Photon::Pun::PunLogLevel  ___PunLogging;

/// [Tooltip("Logs additional info for debugging.")]
/// @brief Field EnableSupportLogger, offset: 0x2c, size: 0x1, def value: None
 bool  ___EnableSupportLogger;

/// [Tooltip("Enables apps to keep the connection without focus.")]
/// @brief Field RunInBackground, offset: 0x2d, size: 0x1, def value: None
 bool  ___RunInBackground;

/// [Tooltip("Simulates an online connection.\nPUN can be used as usual.")]
/// @brief Field StartInOfflineMode, offset: 0x2e, size: 0x1, def value: None
 bool  ___StartInOfflineMode;

/// [Tooltip("RPC name list.\nUsed as shortcut when sending calls.")]
/// @brief Field RpcList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___RpcList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::ServerSettings, ___AppSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___DevRegion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___PunLogging) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___EnableSupportLogger) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___RunInBackground) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___StartInOfflineMode) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::ServerSettings, ___RpcList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::ServerSettings) == 0x38, "Size mismatch!");

} // namespace end def Photon::Pun
