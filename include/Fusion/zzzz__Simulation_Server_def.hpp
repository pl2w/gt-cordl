#pragma once
// IWYU pragma private; include "Fusion/Simulation_Server.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Simulation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_Server)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion::Sockets {
struct NetConnection;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace Fusion {
class Allocator;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
struct NetworkObjectHeaderPtr;
}
namespace Fusion {
class NetworkObjectHeaderSnapshot;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct SimulationArgs;
}
namespace Fusion {
class SimulationInput;
}
namespace Fusion {
struct SimulationRuntimeConfig;
}
namespace Fusion {
struct Tick;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class Simulation_Server;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Simulation_Server*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Simulation_Server*, "Fusion", "Simulation/Server");
// Dependencies Fusion.Simulation
namespace GlobalNamespace {
// Is value type: false
// CS Name: Fusion.Simulation/Server
class CORDL_TYPE Simulation_Server : public ::Fusion::Simulation {
public:
// Declarations
 __declspec(property(get=get_LatestServerTick)) ::Fusion::Tick  LatestServerTick;

 __declspec(property(get=get_LocalPlayer)) ::Fusion::PlayerRef  LocalPlayer;

 __declspec(property(get=get_NetworkObjectMap)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*  NetworkObjectMap;

/// @brief Field <NetworkObjectMap>k__BackingField, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__NetworkObjectMap_k__BackingField, put=__cordl_internal_set__NetworkObjectMap_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*  _NetworkObjectMap_k__BackingField;

/// @brief Field _hmLock, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmLock, put=__cordl_internal_set__hmLock)) ::System::Object*  _hmLock;

/// @brief Field _hostMigrationWriteBuffer, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hostMigrationWriteBuffer, put=__cordl_internal_set__hostMigrationWriteBuffer)) ::Fusion::Sockets::NetBitBuffer*  _hostMigrationWriteBuffer;

/// @brief Field _inputReadTarget, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputReadTarget, put=__cordl_internal_set__inputReadTarget)) ::Fusion::SimulationInput*  _inputReadTarget;

/// @brief Method AfterSimulation, addr 0x5ff7d90, size 0x168, virtual true, abstract: false, final false
inline void AfterSimulation() ;

/// @brief Method BeforeFirstTick, addr 0x5ff8fe4, size 0x14c, virtual true, abstract: false, final false
inline void BeforeFirstTick() ;

/// @brief Method BeforeSimulation, addr 0x5ff7ef8, size 0xc8, virtual true, abstract: false, final false
inline int32_t BeforeSimulation() ;

/// @brief Method BeforeUpdate, addr 0x5ff8e90, size 0x7c, virtual true, abstract: false, final false
inline void BeforeUpdate() ;

/// @brief Method CreateInternalStateObjects, addr 0x5ff8f0c, size 0xd8, virtual false, abstract: false, final false
inline void CreateInternalStateObjects(::Fusion::PlayerRef  sceneInfoStateAuth) ;

/// @brief Method CreateRuntimeConfiguration, addr 0x5ff7814, size 0xe4, virtual false, abstract: false, final false
inline ::Fusion::SimulationRuntimeConfig CreateRuntimeConfiguration() ;

/// @brief Method Disconnect, addr 0x5ff7b38, size 0x258, virtual false, abstract: false, final false
inline void Disconnect(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Disconnect, addr 0x5ff7a90, size 0xa8, virtual false, abstract: false, final false
inline void Disconnect(::Fusion::PlayerRef  player, ::ArrayW<uint8_t>  token) ;

/// @brief Method DisposeHostMigration, addr 0x5ff9a30, size 0x250, virtual false, abstract: false, final false
inline void DisposeHostMigration() ;

/// @brief Method GetInput, addr 0x5ff9130, size 0x4fc, virtual true, abstract: false, final false
inline ::Fusion::SimulationInput* GetInput(::Fusion::Tick  tick, ::Fusion::PlayerRef  player) ;

/// @brief Method GetPlayerRtt, addr 0x5ff7368, size 0xe0, virtual true, abstract: false, final false
inline double_t GetPlayerRtt(::Fusion::PlayerRef  player) ;

/// @brief Method GetResumeObjectHeader, addr 0x5ff9668, size 0x3c8, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*,::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*> GetResumeObjectHeader() ;

/// @brief Method NetworkConnected, addr 0x5ff8660, size 0x19c, virtual true, abstract: false, final false
inline void NetworkConnected(::Fusion::Sockets::NetConnection*  connection) ;

/// @brief Method NetworkDisconnected, addr 0x5ff7fc0, size 0x4, virtual true, abstract: false, final false
inline void NetworkDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason) ;

static inline ::GlobalNamespace::Simulation_Server* New_ctor(::Fusion::SimulationArgs  args) ;

/// @brief Method ProcessHostMigrationData, addr 0x5ffa968, size 0xe30, virtual false, abstract: false, final false
static inline void ProcessHostMigrationData(::ArrayW<uint8_t>  data, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*  networkObjectMap, ::Fusion::Allocator*  allocator) ;

/// @brief Method ReadHostMigrationData, addr 0x5ff78f8, size 0x198, virtual false, abstract: false, final false
inline void ReadHostMigrationData(::ArrayW<uint8_t>  data) ;

/// @brief Method ReadInput, addr 0x5ff8014, size 0x578, virtual false, abstract: false, final false
inline void ReadInput() ;

/// @brief Method ReadStateTick, addr 0x5ff858c, size 0xd4, virtual false, abstract: false, final false
inline void ReadStateTick() ;

/// @brief Method RecvPacket, addr 0x5ff7fc4, size 0x50, virtual true, abstract: false, final false
inline void RecvPacket() ;

/// @brief Method SpawnRuntimeConfiguration, addr 0x5ff8db8, size 0xd8, virtual false, abstract: false, final false
inline void SpawnRuntimeConfiguration() ;

/// @brief Method WriteHostMigrationData, addr 0x5ff9c80, size 0xce8, virtual false, abstract: false, final false
inline int32_t WriteHostMigrationData(::by_ref<::ArrayW<uint8_t>>  target, int32_t  targetBytes) ;

/// @brief Method WritePackets, addr 0x5ff8c48, size 0x134, virtual true, abstract: false, final false
inline void WritePackets() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>* const& __cordl_internal_get__NetworkObjectMap_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*& __cordl_internal_get__NetworkObjectMap_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__hmLock() const;

constexpr ::System::Object*& __cordl_internal_get__hmLock() ;

constexpr ::Fusion::Sockets::NetBitBuffer* const& __cordl_internal_get__hostMigrationWriteBuffer() const;

constexpr ::Fusion::Sockets::NetBitBuffer*& __cordl_internal_get__hostMigrationWriteBuffer() ;

constexpr ::Fusion::SimulationInput* const& __cordl_internal_get__inputReadTarget() const;

constexpr ::Fusion::SimulationInput*& __cordl_internal_get__inputReadTarget() ;

constexpr void __cordl_internal_set__NetworkObjectMap_k__BackingField(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*  value) ;

constexpr void __cordl_internal_set__hmLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__hostMigrationWriteBuffer(::Fusion::Sockets::NetBitBuffer*  value) ;

constexpr void __cordl_internal_set__inputReadTarget(::Fusion::SimulationInput*  value) ;

/// @brief Method .ctor, addr 0x5ff7448, size 0x3cc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SimulationArgs  args) ;

/// @brief Method get_LatestServerTick, addr 0x5ff7278, size 0x8, virtual true, abstract: false, final false
inline ::Fusion::Tick get_LatestServerTick() ;

/// @brief Method get_LocalPlayer, addr 0x5ff7280, size 0xe8, virtual true, abstract: false, final false
inline ::Fusion::PlayerRef get_LocalPlayer() ;

/// [CompilerGenerated]
/// @brief Method get_NetworkObjectMap, addr 0x5ff9660, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>* get_NetworkObjectMap() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulation_Server() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulation_Server", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulation_Server(Simulation_Server && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulation_Server", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulation_Server(Simulation_Server const& ) = delete;

/// @brief Field HostMigrationBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  HostMigrationBufferSize{static_cast<int32_t>(0x10000)};

/// @brief Field HostMigrationMaxTransferBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  HostMigrationMaxTransferBufferSize{static_cast<int32_t>(0x8000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19318};

/// @brief Field _inputReadTarget, offset: 0x1c0, size: 0x8, def value: None
 ::Fusion::SimulationInput*  ____inputReadTarget;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <NetworkObjectMap>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*  ____NetworkObjectMap_k__BackingField;

/// @brief Field _hostMigrationWriteBuffer, offset: 0x1d0, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  ____hostMigrationWriteBuffer;

/// @brief Size padding 0x1d0 - 0x1e0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field _hmLock, offset: 0x1d8, size: 0x8, def value: None
 ::System::Object*  ____hmLock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Simulation_Server, ____inputReadTarget) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Server, ____NetworkObjectMap_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Server, ____hostMigrationWriteBuffer) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_Server, ____hmLock) == 0x1d8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Simulation_Server) == 0x1d0, "Size mismatch!");

} // namespace end def GlobalNamespace
