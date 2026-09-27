#pragma once
// IWYU pragma private; include "Fusion/SimulationArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationArgs)
namespace Fusion::Sockets {
class INetSocket;
}
namespace Fusion {
class NetworkProjectConfig;
}
namespace Fusion {
class Simulation_ICallbacks;
}
// Forward declare root types
namespace Fusion {
struct SimulationArgs;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationArgs);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationArgs, "Fusion", "SimulationArgs");
// Dependencies Fusion.NetworkId, Fusion.SimulationModes, Fusion.Sockets.NetAddress, Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationArgs
struct CORDL_TYPE SimulationArgs {
public:
// Declarations
 __declspec(property(get=get_IsPlayer)) bool  IsPlayer;

 __declspec(property(get=get_IsServer)) bool  IsServer;

/// @brief Method get_IsPlayer, addr 0x6001a40, size 0x14, virtual false, abstract: false, final false
inline bool get_IsPlayer() ;

/// @brief Method get_IsServer, addr 0x6001a54, size 0x14, virtual false, abstract: false, final false
inline bool get_IsServer() ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationArgs() ;

// Ctor Parameters [CppParam { name: "Mode", ty: "::Fusion::SimulationModes", modifiers: "", def_value: None, comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: None, comment: None }, CppParam { name: "Socket", ty: "::Fusion::Sockets::INetSocket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Config", ty: "::Fusion::NetworkProjectConfig*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Callbacks", ty: "::Fusion::Simulation_ICallbacks*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResumeTick", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResumeState", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResumeNetworkId", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }]
constexpr SimulationArgs(::Fusion::SimulationModes  Mode, ::Fusion::Sockets::NetAddress  Address, ::Fusion::Sockets::INetSocket*  Socket, ::Fusion::NetworkProjectConfig*  Config, ::Fusion::Simulation_ICallbacks*  Callbacks, ::Fusion::Tick  ResumeTick, ::ArrayW<uint8_t>  ResumeState, ::Fusion::NetworkId  ResumeNetworkId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19328};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field Mode, offset: 0x0, size: 0x4, def value: None
 ::Fusion::SimulationModes  Mode;

/// @brief Field Address, offset: 0x8, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  Address;

/// @brief Field Socket, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Sockets::INetSocket*  Socket;

/// @brief Field Config, offset: 0x28, size: 0x8, def value: None
 ::Fusion::NetworkProjectConfig*  Config;

/// @brief Field Callbacks, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Simulation_ICallbacks*  Callbacks;

/// @brief Field ResumeTick, offset: 0x38, size: 0x4, def value: None
 ::Fusion::Tick  ResumeTick;

/// @brief Field ResumeState, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ResumeState;

/// @brief Field ResumeNetworkId, offset: 0x48, size: 0x4, def value: None
 ::Fusion::NetworkId  ResumeNetworkId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationArgs, Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationArgs, Address) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationArgs, Socket) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationArgs, Config) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationArgs, Callbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationArgs, ResumeTick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationArgs, ResumeState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationArgs, ResumeNetworkId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationArgs) == 0x50, "Size mismatch!");

} // namespace end def Fusion
