#pragma once
// IWYU pragma private; include "Fusion/StartGameArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__MatchmakingMode_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StartGameArgs)
namespace Fusion::Photon::Realtime {
class AuthenticationValues;
}
namespace Fusion::Photon::Realtime {
class FusionAppSettings;
}
namespace Fusion {
class HostMigrationToken;
}
namespace Fusion {
class INetworkObjectInitializer;
}
namespace Fusion {
class INetworkObjectProvider;
}
namespace Fusion {
class INetworkRunnerUpdater;
}
namespace Fusion {
class INetworkSceneManager;
}
namespace Fusion {
class NetworkProjectConfig;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class SessionProperty;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
struct StartGameArgs;
}
// Write type traits
MARK_VAL_T(::Fusion::StartGameArgs);
DEFINE_IL2CPP_CLASS(::Fusion::StartGameArgs, "Fusion", "StartGameArgs");
// Dependencies Fusion.GameMode, Fusion.NetworkSceneInfo, Fusion.Photon.Realtime.MatchmakingMode, Fusion.Sockets.NetAddress, System.Nullable`1<T>, System.Threading.CancellationToken, System.Type
namespace Fusion {
// Is value type: true
// CS Name: Fusion.StartGameArgs
struct CORDL_TYPE StartGameArgs {
public:
// Declarations
/// @brief Method ToString, addr 0x5fdbf74, size 0xae8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr StartGameArgs() ;

// Ctor Parameters [CppParam { name: "GameMode", ty: "::Fusion::GameMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "SessionName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "SessionNameGenerator", ty: "::System::Func_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Address", ty: "::System::Nullable_1<::Fusion::Sockets::NetAddress>", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomPublicAddress", ty: "::System::Nullable_1<::Fusion::Sockets::NetAddress>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectProvider", ty: "::Fusion::INetworkObjectProvider*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SceneManager", ty: "::Fusion::INetworkSceneManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Updater", ty: "::Fusion::INetworkRunnerUpdater*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectInitializer", ty: "::Fusion::INetworkObjectInitializer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Config", ty: "::Fusion::NetworkProjectConfig*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlayerCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Scene", ty: "::System::Nullable_1<::Fusion::NetworkSceneInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnGameStarted", ty: "::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisableNATPunchthrough", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomCallbackInterfaces", ty: "::ArrayW<::System::Type*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionToken", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SessionProperties", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsOpen", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsVisible", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MatchmakingMode", ty: "::System::Nullable_1<::Fusion::Photon::Realtime::MatchmakingMode>", modifiers: "", def_value: None, comment: None }, CppParam { name: "UseDefaultPhotonCloudPorts", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomLobbyName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomSTUNServer", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "AuthValues", ty: "::Fusion::Photon::Realtime::AuthenticationValues*", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomPhotonAppSettings", ty: "::Fusion::Photon::Realtime::FusionAppSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "EnableClientSessionCreation", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "HostMigrationToken", ty: "::Fusion::HostMigrationToken*", modifiers: "", def_value: None, comment: None }, CppParam { name: "HostMigrationResume", ty: "::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "StartGameCancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "UseCachedRegions", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr StartGameArgs(::Fusion::GameMode  GameMode, ::StringW  SessionName, ::System::Func_1<::StringW>*  SessionNameGenerator, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  Address, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  CustomPublicAddress, ::Fusion::INetworkObjectProvider*  ObjectProvider, ::Fusion::INetworkSceneManager*  SceneManager, ::Fusion::INetworkRunnerUpdater*  Updater, ::Fusion::INetworkObjectInitializer*  ObjectInitializer, ::Fusion::NetworkProjectConfig*  Config, ::System::Nullable_1<int32_t>  PlayerCount, ::System::Nullable_1<::Fusion::NetworkSceneInfo>  Scene, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnGameStarted, bool  DisableNATPunchthrough, ::ArrayW<::System::Type*>  CustomCallbackInterfaces, ::ArrayW<uint8_t>  ConnectionToken, ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  SessionProperties, ::System::Nullable_1<bool>  IsOpen, ::System::Nullable_1<bool>  IsVisible, ::System::Nullable_1<::Fusion::Photon::Realtime::MatchmakingMode>  MatchmakingMode, ::System::Nullable_1<bool>  UseDefaultPhotonCloudPorts, ::StringW  CustomLobbyName, ::StringW  CustomSTUNServer, ::Fusion::Photon::Realtime::AuthenticationValues*  AuthValues, ::Fusion::Photon::Realtime::FusionAppSettings*  CustomPhotonAppSettings, ::System::Nullable_1<bool>  EnableClientSessionCreation, ::Fusion::HostMigrationToken*  HostMigrationToken, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  HostMigrationResume, ::System::Threading::CancellationToken  StartGameCancellationToken, ::System::Nullable_1<bool>  UseCachedRegions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19274};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x138};

/// @brief Field GameMode, offset: 0x0, size: 0x4, def value: None
 ::Fusion::GameMode  GameMode;

/// @brief Field SessionName, offset: 0x8, size: 0x8, def value: None
 ::StringW  SessionName;

/// @brief Field SessionNameGenerator, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::StringW>*  SessionNameGenerator;

/// @brief Field Address, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Sockets::NetAddress>  Address;

/// @brief Field CustomPublicAddress, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Sockets::NetAddress>  CustomPublicAddress;

/// @brief Field ObjectProvider, offset: 0x38, size: 0x8, def value: None
 ::Fusion::INetworkObjectProvider*  ObjectProvider;

/// @brief Field SceneManager, offset: 0x40, size: 0x8, def value: None
 ::Fusion::INetworkSceneManager*  SceneManager;

/// @brief Field Updater, offset: 0x48, size: 0x8, def value: None
 ::Fusion::INetworkRunnerUpdater*  Updater;

/// @brief Field ObjectInitializer, offset: 0x50, size: 0x8, def value: None
 ::Fusion::INetworkObjectInitializer*  ObjectInitializer;

/// @brief Field Config, offset: 0x58, size: 0x8, def value: None
 ::Fusion::NetworkProjectConfig*  Config;

/// @brief Field PlayerCount, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  PlayerCount;

/// @brief Field Scene, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::NetworkSceneInfo>  Scene;

/// @brief Field OnGameStarted, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnGameStarted;

/// @brief Field DisableNATPunchthrough, offset: 0x88, size: 0x1, def value: None
 bool  DisableNATPunchthrough;

/// @brief Field CustomCallbackInterfaces, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  CustomCallbackInterfaces;

/// @brief Field ConnectionToken, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ConnectionToken;

/// @brief Field SessionProperties, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  SessionProperties;

/// @brief Field IsOpen, offset: 0xa8, size: 0x10, def value: None
 ::System::Nullable_1<bool>  IsOpen;

/// @brief Field IsVisible, offset: 0xb8, size: 0x10, def value: None
 ::System::Nullable_1<bool>  IsVisible;

/// @brief Field MatchmakingMode, offset: 0xc8, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Photon::Realtime::MatchmakingMode>  MatchmakingMode;

/// @brief Field UseDefaultPhotonCloudPorts, offset: 0xd8, size: 0x10, def value: None
 ::System::Nullable_1<bool>  UseDefaultPhotonCloudPorts;

/// @brief Field CustomLobbyName, offset: 0xe8, size: 0x8, def value: None
 ::StringW  CustomLobbyName;

/// @brief Field CustomSTUNServer, offset: 0xf0, size: 0x8, def value: None
 ::StringW  CustomSTUNServer;

/// @brief Field AuthValues, offset: 0xf8, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::AuthenticationValues*  AuthValues;

/// @brief Field CustomPhotonAppSettings, offset: 0x100, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::FusionAppSettings*  CustomPhotonAppSettings;

/// @brief Field EnableClientSessionCreation, offset: 0x108, size: 0x10, def value: None
 ::System::Nullable_1<bool>  EnableClientSessionCreation;

/// @brief Field HostMigrationToken, offset: 0x118, size: 0x8, def value: None
 ::Fusion::HostMigrationToken*  HostMigrationToken;

/// @brief Field HostMigrationResume, offset: 0x120, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  HostMigrationResume;

/// @brief Field StartGameCancellationToken, offset: 0x128, size: 0x8, def value: None
 ::System::Threading::CancellationToken  StartGameCancellationToken;

/// @brief Field UseCachedRegions, offset: 0x130, size: 0x10, def value: None
 ::System::Nullable_1<bool>  UseCachedRegions;

/// @brief Size padding 0x138 - 0x140 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::StartGameArgs, GameMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, SessionName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, SessionNameGenerator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, Address) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, CustomPublicAddress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, ObjectProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, SceneManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, Updater) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, ObjectInitializer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, Config) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, PlayerCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, Scene) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, OnGameStarted) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, DisableNATPunchthrough) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, CustomCallbackInterfaces) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, ConnectionToken) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, SessionProperties) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, IsOpen) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, IsVisible) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, MatchmakingMode) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, UseDefaultPhotonCloudPorts) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, CustomLobbyName) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, CustomSTUNServer) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, AuthValues) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, CustomPhotonAppSettings) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, EnableClientSessionCreation) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, HostMigrationToken) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, HostMigrationResume) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, StartGameCancellationToken) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameArgs, UseCachedRegions) == 0x130, "Offset mismatch!");

static_assert(sizeof(::Fusion::StartGameArgs) == 0x138, "Size mismatch!");

} // namespace end def Fusion
