#pragma once
// IWYU pragma private; include "Fusion/Simulation_Client.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_Client)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConnection;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace Fusion {
class Client_Simulation__get_ActivePlayers_d__24;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct SimulationArgs;
}
namespace Fusion {
class SimulationInput_Buffer;
}
namespace Fusion {
class SimulationInput;
}
namespace Fusion {
struct Tick;
}
namespace Fusion {
class TimeSyncConfiguration;
}
namespace Fusion {
class Timeline;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class Simulation_Client;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Simulation_Client*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Simulation_Client*, "Fusion", "Simulation/Client");
// Dependencies Fusion.Simulation, Fusion.SimulationInput, Fusion.Tick, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: Fusion.Simulation/Client
class CORDL_TYPE Simulation_Client : public ::Fusion::Simulation {
public:
// Declarations
using _get_ActivePlayers_d__24 = ::Fusion::Client_Simulation__get_ActivePlayers_d__24;

 __declspec(property(get=get_ActivePlayers)) ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*  ActivePlayers;

 __declspec(property(get=get_IsConnectedToServer)) bool  IsConnectedToServer;

 __declspec(property(get=get_LatestServerTick)) ::Fusion::Tick  LatestServerTick;

 __declspec(property(get=get_LatestServerTime)) double_t  LatestServerTime;

 __declspec(property(get=get_LocalPlayer)) ::Fusion::PlayerRef  LocalPlayer;

/// @brief Field PreviousServerTick, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviousServerTick, put=__cordl_internal_set_PreviousServerTick)) ::Fusion::Tick  PreviousServerTick;

 __declspec(property(get=get_RttToServer)) double_t  RttToServer;

 __declspec(property(get=get_ServerAddress)) ::Fusion::Sockets::NetAddress  ServerAddress;

 __declspec(property(get=get_ServerConnection)) ::Fusion::Sockets::NetConnection*  ServerConnection;

 __declspec(property(get=get_TimeSyncConfig)) ::Fusion::TimeSyncConfiguration*  TimeSyncConfig;

/// @brief Field _history, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__history, put=__cordl_internal_set__history)) ::Fusion::Timeline*  _history;

/// @brief Field _inputArray, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputArray, put=__cordl_internal_set__inputArray)) ::ArrayW<::Fusion::SimulationInput*>  _inputArray;

/// @brief Field _inputBuffer, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputBuffer, put=__cordl_internal_set__inputBuffer)) ::Fusion::SimulationInput_Buffer*  _inputBuffer;

/// @brief Field _previousWasMC, offset 0x1e8, size 0x10 
 __declspec(property(get=__cordl_internal_get__previousWasMC, put=__cordl_internal_set__previousWasMC)) ::System::Nullable_1<bool>  _previousWasMC;

/// @brief Field _server, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__server, put=__cordl_internal_set__server)) ::Fusion::Sockets::NetConnection*  _server;

/// @brief Field _stateReceived, offset 0x1c8, size 0x1 
 __declspec(property(get=__cordl_internal_get__stateReceived, put=__cordl_internal_set__stateReceived)) bool  _stateReceived;

/// @brief Method BeforeFirstTick, addr 0x5ff52ec, size 0xa4, virtual true, abstract: false, final false
inline void BeforeFirstTick() ;

/// @brief Method BeforeSimulation, addr 0x5ff551c, size 0x30c, virtual true, abstract: false, final false
inline int32_t BeforeSimulation() ;

/// @brief Method BeforeUpdate, addr 0x5ff5390, size 0x18c, virtual true, abstract: false, final false
inline void BeforeUpdate() ;

/// @brief Method Connect, addr 0x5ff3ad8, size 0x54, virtual false, abstract: false, final false
inline void Connect(::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId) ;

/// @brief Method Connect, addr 0x5ff3b2c, size 0xc, virtual false, abstract: false, final false
inline void Connect(::StringW  ip, uint16_t  port, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId) ;

/// @brief Method Connection2Player, addr 0x5ff3dbc, size 0x10, virtual true, abstract: false, final false
inline ::Fusion::PlayerRef Connection2Player(::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method GetInput, addr 0x5ff509c, size 0x250, virtual true, abstract: false, final false
inline ::Fusion::SimulationInput* GetInput(::Fusion::Tick  tick, ::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerRtt, addr 0x5ff3d04, size 0xb8, virtual true, abstract: false, final false
inline double_t GetPlayerRtt(::Fusion::PlayerRef  player) ;

/// @brief Method GetSortedInputs, addr 0x5ff5014, size 0x7c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::ArrayW<::Fusion::SimulationInput*>,int32_t> GetSortedInputs() ;

/// @brief Method NetworkConnected, addr 0x5ff3b38, size 0x8, virtual true, abstract: false, final false
inline void NetworkConnected(::Fusion::Sockets::NetConnection*  connection) ;

/// @brief Method NetworkDisconnected, addr 0x5ff3b40, size 0x180, virtual true, abstract: false, final false
inline void NetworkDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method NetworkReceiveDone, addr 0x5ff42b8, size 0x750, virtual true, abstract: false, final false
inline void NetworkReceiveDone() ;

static inline ::GlobalNamespace::Simulation_Client* New_ctor(::Fusion::SimulationArgs  args) ;

/// @brief Method NoSimulation, addr 0x5ff5e54, size 0x4, virtual true, abstract: false, final false
inline void NoSimulation() ;

/// @brief Method NullableToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::StringW NullableToString(::System::Nullable_1<T>  value) ;

/// @brief Method OnNetworkShutdown, addr 0x5ff3cc0, size 0x38, virtual true, abstract: false, final false
inline void OnNetworkShutdown() ;

/// @brief Method Player2Connection, addr 0x5ff3dcc, size 0x18, virtual true, abstract: false, final false
inline int32_t Player2Connection(::Fusion::PlayerRef  player) ;

/// @brief Method RecvPacket, addr 0x5ff3de4, size 0x174, virtual true, abstract: false, final false
inline void RecvPacket() ;

/// @brief Method ResetClientSimulationState, addr 0x5ff5d2c, size 0x128, virtual false, abstract: false, final false
inline void ResetClientSimulationState() ;

/// @brief Method ResetPredictedObjectsToLatestServerState, addr 0x5ff5828, size 0x2c0, virtual false, abstract: false, final false
inline void ResetPredictedObjectsToLatestServerState() ;

/// @brief Method ResetRttToServer, addr 0x5ff3cf8, size 0xc, virtual false, abstract: false, final false
inline void ResetRttToServer(double_t  rtt) ;

/// @brief Method RunClientSideResimulationLoop, addr 0x5ff5ae8, size 0x11c, virtual false, abstract: false, final false
inline void RunClientSideResimulationLoop(int32_t  ticks) ;

/// @brief Method UpdateInterpolation, addr 0x5ff5c04, size 0x128, virtual false, abstract: false, final false
inline void UpdateInterpolation() ;

/// @brief Method UpdateObjectInterpolationParams, addr 0x5ff5e58, size 0x170, virtual false, abstract: false, final false
inline void UpdateObjectInterpolationParams(double_t  now) ;

/// @brief Method UpdateObjectTimelines, addr 0x5ff4170, size 0x148, virtual false, abstract: false, final false
inline void UpdateObjectTimelines() ;

/// @brief Method WriteInput, addr 0x5ff4a50, size 0x434, virtual false, abstract: false, final false
inline void WriteInput() ;

/// @brief Method WritePackets, addr 0x5ff4a08, size 0x48, virtual true, abstract: false, final false
inline void WritePackets() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_PreviousServerTick() const;

constexpr ::Fusion::Tick& __cordl_internal_get_PreviousServerTick() ;

constexpr ::Fusion::Timeline* const& __cordl_internal_get__history() const;

constexpr ::Fusion::Timeline*& __cordl_internal_get__history() ;

constexpr ::ArrayW<::Fusion::SimulationInput*> const& __cordl_internal_get__inputArray() const;

constexpr ::ArrayW<::Fusion::SimulationInput*>& __cordl_internal_get__inputArray() ;

constexpr ::Fusion::SimulationInput_Buffer* const& __cordl_internal_get__inputBuffer() const;

constexpr ::Fusion::SimulationInput_Buffer*& __cordl_internal_get__inputBuffer() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__previousWasMC() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__previousWasMC() ;

constexpr ::Fusion::Sockets::NetConnection* const& __cordl_internal_get__server() const;

constexpr ::Fusion::Sockets::NetConnection*& __cordl_internal_get__server() ;

constexpr bool const& __cordl_internal_get__stateReceived() const;

constexpr bool& __cordl_internal_get__stateReceived() ;

constexpr void __cordl_internal_set_PreviousServerTick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__history(::Fusion::Timeline*  value) ;

constexpr void __cordl_internal_set__inputArray(::ArrayW<::Fusion::SimulationInput*>  value) ;

constexpr void __cordl_internal_set__inputBuffer(::Fusion::SimulationInput_Buffer*  value) ;

constexpr void __cordl_internal_set__previousWasMC(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__server(::Fusion::Sockets::NetConnection*  value) ;

constexpr void __cordl_internal_set__stateReceived(bool  value) ;

/// @brief Method .ctor, addr 0x5ff38fc, size 0x1dc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SimulationArgs  args) ;

/// [IteratorStateMachine(typeof(Fusion.Simulation::Client::<get_ActivePlayers>d__24))]
/// @brief Method get_ActivePlayers, addr 0x5ff3848, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* get_ActivePlayers() ;

/// @brief Method get_IsConnectedToServer, addr 0x5ff374c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsConnectedToServer() ;

/// @brief Method get_LatestServerTick, addr 0x5ff3690, size 0x7c, virtual true, abstract: false, final false
inline ::Fusion::Tick get_LatestServerTick() ;

/// @brief Method get_LatestServerTime, addr 0x5ff370c, size 0x40, virtual false, abstract: false, final false
inline double_t get_LatestServerTime() ;

/// @brief Method get_LocalPlayer, addr 0x5ff37a4, size 0xa4, virtual true, abstract: false, final false
inline ::Fusion::PlayerRef get_LocalPlayer() ;

/// @brief Method get_RttToServer, addr 0x5ff378c, size 0x18, virtual false, abstract: false, final false
inline double_t get_RttToServer() ;

/// @brief Method get_ServerAddress, addr 0x5ff375c, size 0x30, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_ServerAddress() ;

/// @brief Method get_ServerConnection, addr 0x5ff3688, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnection* get_ServerConnection() ;

/// @brief Method get_TimeSyncConfig, addr 0x5ff33c8, size 0x8c, virtual false, abstract: false, final false
inline ::Fusion::TimeSyncConfiguration* get_TimeSyncConfig() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation_Client() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation_Client", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation_Client(Simulation_Client && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation_Client", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation_Client(Simulation_Client const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19306};

/// @brief Field _server, offset: 0x1c0, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnection*  ____server;

/// @brief Field _stateReceived, offset: 0x1c8, size: 0x1, def value: None
 bool  ____stateReceived;

/// @brief Field _history, offset: 0x1d0, size: 0x8, def value: None
 ::Fusion::Timeline*  ____history;

/// @brief Field _inputBuffer, offset: 0x1d8, size: 0x8, def value: None
 ::Fusion::SimulationInput_Buffer*  ____inputBuffer;

/// @brief Field _inputArray, offset: 0x1e0, size: 0x8, def value: None
 ::ArrayW<::Fusion::SimulationInput*>  ____inputArray;

/// @brief Size padding 0x1e0 - 0x200 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

/// @brief Field _previousWasMC, offset: 0x1e8, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____previousWasMC;

/// @brief Field PreviousServerTick, offset: 0x1f8, size: 0x4, def value: None
 ::Fusion::Tick  ___PreviousServerTick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Simulation_Client, ____server) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Client, ____stateReceived) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Client, ____history) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Client, ____inputBuffer) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Client, ____inputArray) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Client, ____previousWasMC) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Client, ___PreviousServerTick) == 0x1f8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Simulation_Client) == 0x1e0, "Size mismatch!");

} // namespace end def GlobalNamespace
