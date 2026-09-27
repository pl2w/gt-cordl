#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerInitializeArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunnerInitializeArgs)
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
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
struct NetworkRunnerInitializeArgs;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkRunnerInitializeArgs);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerInitializeArgs, "Fusion", "NetworkRunnerInitializeArgs");
// Dependencies Fusion.NetworkId, Fusion.NetworkSceneInfo, Fusion.SimulationModes, Fusion.Sockets.NetAddress, Fusion.Tick, System.Nullable`1<T>, System.Type
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkRunnerInitializeArgs
struct CORDL_TYPE NetworkRunnerInitializeArgs {
public:
// Declarations
 __declspec(property(get=get_IsSinglePlayer)) bool  IsSinglePlayer;

/// @brief Method get_IsSinglePlayer, addr 0x5fda8ec, size 0x64, virtual false, abstract: false, final false
inline bool get_IsSinglePlayer() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerInitializeArgs() ;

// Ctor Parameters [CppParam { name: "Scene", ty: "::System::Nullable_1<::Fusion::NetworkSceneInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Address", ty: "::System::Nullable_1<::Fusion::Sockets::NetAddress>", modifiers: "", def_value: None, comment: None }, CppParam { name: "PublicAddress", ty: "::System::Nullable_1<::Fusion::Sockets::NetAddress>", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlayerCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SimulationMode", ty: "::System::Nullable_1<::Fusion::SimulationModes>", modifiers: "", def_value: None, comment: None }, CppParam { name: "InputWordCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SceneInfoWordCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Config", ty: "::Fusion::NetworkProjectConfig*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnGameStarted", ty: "::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectProvider", ty: "::Fusion::INetworkObjectProvider*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SceneManager", ty: "::Fusion::INetworkSceneManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Updater", ty: "::Fusion::INetworkRunnerUpdater*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectInitializer", ty: "::Fusion::INetworkObjectInitializer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomCallbackInterfaces", ty: "::ArrayW<::System::Type*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionToken", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResumeId", ty: "::System::Nullable_1<::Fusion::NetworkId>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResumeTick", ty: "::System::Nullable_1<::Fusion::Tick>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResumeState", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "HostMigrationResume", ty: "::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunnerInitializeArgs(::System::Nullable_1<::Fusion::NetworkSceneInfo>  Scene, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  Address, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  PublicAddress, ::System::Nullable_1<int32_t>  PlayerCount, ::System::Nullable_1<::Fusion::SimulationModes>  SimulationMode, ::System::Nullable_1<int32_t>  InputWordCount, ::System::Nullable_1<int32_t>  SceneInfoWordCount, ::Fusion::NetworkProjectConfig*  Config, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnGameStarted, ::Fusion::INetworkObjectProvider*  ObjectProvider, ::Fusion::INetworkSceneManager*  SceneManager, ::Fusion::INetworkRunnerUpdater*  Updater, ::Fusion::INetworkObjectInitializer*  ObjectInitializer, ::ArrayW<::System::Type*>  CustomCallbackInterfaces, ::ArrayW<uint8_t>  ConnectionToken, ::System::Nullable_1<::Fusion::NetworkId>  ResumeId, ::System::Nullable_1<::Fusion::Tick>  ResumeTick, ::ArrayW<uint8_t>  ResumeState, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  HostMigrationResume) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19265};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf8};

/// @brief Field Scene, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::NetworkSceneInfo>  Scene;

/// @brief Field Address, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Sockets::NetAddress>  Address;

/// @brief Field PublicAddress, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Sockets::NetAddress>  PublicAddress;

/// @brief Field PlayerCount, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  PlayerCount;

/// @brief Field SimulationMode, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::SimulationModes>  SimulationMode;

/// @brief Field InputWordCount, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  InputWordCount;

/// @brief Field SceneInfoWordCount, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  SceneInfoWordCount;

/// @brief Field Config, offset: 0x70, size: 0x8, def value: None
 ::Fusion::NetworkProjectConfig*  Config;

/// @brief Field OnGameStarted, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnGameStarted;

/// @brief Field ObjectProvider, offset: 0x80, size: 0x8, def value: None
 ::Fusion::INetworkObjectProvider*  ObjectProvider;

/// @brief Field SceneManager, offset: 0x88, size: 0x8, def value: None
 ::Fusion::INetworkSceneManager*  SceneManager;

/// @brief Field Updater, offset: 0x90, size: 0x8, def value: None
 ::Fusion::INetworkRunnerUpdater*  Updater;

/// @brief Field ObjectInitializer, offset: 0x98, size: 0x8, def value: None
 ::Fusion::INetworkObjectInitializer*  ObjectInitializer;

/// @brief Field CustomCallbackInterfaces, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  CustomCallbackInterfaces;

/// @brief Field ConnectionToken, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ConnectionToken;

/// @brief Field ResumeId, offset: 0xb0, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::NetworkId>  ResumeId;

/// @brief Field ResumeTick, offset: 0xc0, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Tick>  ResumeTick;

/// @brief Field ResumeState, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ResumeState;

/// @brief Field HostMigrationResume, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  HostMigrationResume;

/// @brief Size padding 0xf8 - 0xe0 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, Scene) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, Address) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, PublicAddress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, PlayerCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, SimulationMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, InputWordCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, SceneInfoWordCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, Config) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, OnGameStarted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, ObjectProvider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, SceneManager) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, Updater) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, ObjectInitializer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, CustomCallbackInterfaces) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, ConnectionToken) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, ResumeId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, ResumeTick) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, ResumeState) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerInitializeArgs, HostMigrationResume) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunnerInitializeArgs) == 0xf8, "Size mismatch!");

} // namespace end def Fusion
