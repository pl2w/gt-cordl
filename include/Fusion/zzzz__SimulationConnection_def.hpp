#pragma once
// IWYU pragma private; include "Fusion/SimulationConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetConnectionId_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationMessageList_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__Timer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationConnection)
namespace Fusion::Sockets {
struct NetConnection;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
class NetworkObjectConnectionData;
}
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
class NetworkObjectPriorityList;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
class SimulationInput_Buffer;
}
namespace Fusion {
class Simulation;
}
namespace Fusion {
struct Tick;
}
namespace Fusion {
class TimeSeries;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Fusion {
class SimulationConnection;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationConnection*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationConnection*, "Fusion", "SimulationConnection");
// Dependencies Fusion.PlayerRef, Fusion.SimulationMessageList, Fusion.Sockets.NetConnectionId, Fusion.Tick, Fusion.Timer, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationConnection
class CORDL_TYPE SimulationConnection : public ::System::Object {
public:
// Declarations
/// @brief Field ActiveStructs, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveStructs, put=__cordl_internal_set_ActiveStructs)) ::System::Collections::Generic::List_1<::Fusion::NetworkObjectConnectionData*>*  ActiveStructs;

/// @brief Field ActiveStructsIndex, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActiveStructsIndex, put=__cordl_internal_set_ActiveStructsIndex)) int32_t  ActiveStructsIndex;

/// @brief Field ActiveStructsVersion, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActiveStructsVersion, put=__cordl_internal_set_ActiveStructsVersion)) int32_t  ActiveStructsVersion;

/// @brief Field AreaOfInterestCells, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_AreaOfInterestCells, put=__cordl_internal_set_AreaOfInterestCells)) ::System::Collections::Generic::HashSet_1<int32_t>*  AreaOfInterestCells;

/// @brief Field AreaOfInterestHasBeenUpdated, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_AreaOfInterestHasBeenUpdated, put=__cordl_internal_set_AreaOfInterestHasBeenUpdated)) bool  AreaOfInterestHasBeenUpdated;

/// @brief Field Connection, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Connection, put=__cordl_internal_set_Connection)) ::Fusion::Sockets::NetConnection*  Connection;

/// @brief Field ConnectionId, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionId, put=__cordl_internal_set_ConnectionId)) ::Fusion::Sockets::NetConnectionId  ConnectionId;

 __declspec(property(get=get_ConnectionIndex)) int32_t  ConnectionIndex;

 __declspec(property(get=get_DestroysPending)) int32_t  DestroysPending;

/// @brief Field LastSend, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastSend, put=__cordl_internal_set_LastSend)) double_t  LastSend;

/// @brief Field MessagesIn, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_MessagesIn, put=__cordl_internal_set_MessagesIn)) ::Fusion::SimulationMessageList  MessagesIn;

/// @brief Field MessagesInSequence, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MessagesInSequence, put=__cordl_internal_set_MessagesInSequence)) uint64_t  MessagesInSequence;

/// @brief Field MessagesOut, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_MessagesOut, put=__cordl_internal_set_MessagesOut)) ::Fusion::SimulationMessageList  MessagesOut;

/// @brief Field MessagesOutSequence, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MessagesOutSequence, put=__cordl_internal_set_MessagesOutSequence)) uint64_t  MessagesOutSequence;

/// @brief Field ObjectPriorityList, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObjectPriorityList, put=__cordl_internal_set_ObjectPriorityList)) ::Fusion::NetworkObjectPriorityList*  ObjectPriorityList;

/// @brief Field PendingDeleteMainTRSP, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PendingDeleteMainTRSP, put=__cordl_internal_set_PendingDeleteMainTRSP)) ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  PendingDeleteMainTRSP;

/// @brief Field Player, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Player, put=__cordl_internal_set_Player)) ::Fusion::PlayerRef  Player;

/// @brief Field _clientOffset, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientOffset, put=__cordl_internal_set__clientOffset)) ::Fusion::TimeSeries*  _clientOffset;

/// @brief Field _inputs, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputs, put=__cordl_internal_set__inputs)) ::Fusion::SimulationInput_Buffer*  _inputs;

/// @brief Field _latestTickAcknowledged, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__latestTickAcknowledged, put=__cordl_internal_set__latestTickAcknowledged)) ::Fusion::Tick  _latestTickAcknowledged;

/// @brief Field _latestTickReceived, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__latestTickReceived, put=__cordl_internal_set__latestTickReceived)) ::Fusion::Tick  _latestTickReceived;

/// @brief Field _objects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__objects, put=__cordl_internal_set__objects)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectConnectionData*>*  _objects;

/// @brief Field _objectsDestroyed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectsDestroyed, put=__cordl_internal_set__objectsDestroyed)) ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  _objectsDestroyed;

/// @brief Field _packetRecvDelta, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__packetRecvDelta, put=__cordl_internal_set__packetRecvDelta)) ::Fusion::TimeSeries*  _packetRecvDelta;

/// @brief Field _packetRecvDeltaTimer, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get__packetRecvDeltaTimer, put=__cordl_internal_set__packetRecvDeltaTimer)) ::Fusion::Timer  _packetRecvDeltaTimer;

/// @brief Field _simulation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__simulation, put=__cordl_internal_set__simulation)) ::Fusion::Simulation*  _simulation;

/// @brief Method AddAlwaysInterested, addr 0x6002dec, size 0x1b8, virtual false, abstract: false, final false
inline void AddAlwaysInterested(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method DestroyedNextId, addr 0x5ffef40, size 0xf0, virtual false, abstract: false, final false
inline bool DestroyedNextId(::by_ref<::Fusion::NetworkId>  id) ;

/// @brief Method Free, addr 0x6002b3c, size 0x48, virtual false, abstract: false, final false
inline void Free(::Fusion::Simulation*  simulation) ;

/// @brief Method GetObjectData, addr 0x5ff87fc, size 0x44c, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectConnectionData* GetObjectData(::Fusion::NetworkId  id, bool  create, bool  allowFail) ;

/// @brief Method GetPriority, addr 0x6002a98, size 0x20, virtual false, abstract: false, final false
inline int32_t GetPriority(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method InputReceiveDelta, addr 0x5ff962c, size 0x34, virtual false, abstract: false, final false
inline void InputReceiveDelta(::Fusion::Tick  tick, double_t  receive, double_t  expected) ;

static inline ::Fusion::SimulationConnection* New_ctor(::Fusion::Simulation*  simulation) ;

/// @brief Method ObjectData_Destroyed, addr 0x6000aec, size 0x114, virtual false, abstract: false, final false
inline void ObjectData_Destroyed(::Fusion::NetworkId  id, bool  force) ;

/// @brief Method ObjectData_IsCreateUnconfirmed, addr 0x6002ab8, size 0x84, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> ObjectData_IsCreateUnconfirmed(::Fusion::NetworkId  id) ;

/// @brief Method ObjectData_IsDestroyUnconfirmed, addr 0x5ffea78, size 0x84, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> ObjectData_IsDestroyUnconfirmed(::Fusion::NetworkId  id) ;

/// @brief Method ObjectData_Remove, addr 0x6000e54, size 0xc0, virtual false, abstract: false, final false
inline void ObjectData_Remove(::Fusion::NetworkId  id) ;

/// @brief Method PacketReceiveDelta, addr 0x6002b84, size 0x268, virtual false, abstract: false, final false
inline void PacketReceiveDelta() ;

/// @brief Method RemoveAlwaysInterested, addr 0x6002fa4, size 0x630, virtual false, abstract: false, final false
inline void RemoveAlwaysInterested(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method ResetTimeFeedback, addr 0x5ff8d7c, size 0x3c, virtual false, abstract: false, final false
inline void ResetTimeFeedback() ;

/// @brief Method SetActive, addr 0x5ffeafc, size 0x18, virtual false, abstract: false, final false
inline void SetActive(::Fusion::NetworkObjectConnectionData*  data, ::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method SetIdle, addr 0x5ffeb14, size 0x18, virtual false, abstract: false, final false
inline void SetIdle(::Fusion::NetworkObjectConnectionData*  data) ;

/// @brief Method TryGetObjectData, addr 0x5fff980, size 0x44, virtual false, abstract: false, final false
inline bool TryGetObjectData(::Fusion::NetworkId  id, ::by_ref<::Fusion::NetworkObjectConnectionData*>  data) ;

constexpr ::System::Collections::Generic::List_1<::Fusion::NetworkObjectConnectionData*>* const& __cordl_internal_get_ActiveStructs() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::NetworkObjectConnectionData*>*& __cordl_internal_get_ActiveStructs() ;

constexpr int32_t const& __cordl_internal_get_ActiveStructsIndex() const;

constexpr int32_t& __cordl_internal_get_ActiveStructsIndex() ;

constexpr int32_t const& __cordl_internal_get_ActiveStructsVersion() const;

constexpr int32_t& __cordl_internal_get_ActiveStructsVersion() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_AreaOfInterestCells() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_AreaOfInterestCells() ;

constexpr bool const& __cordl_internal_get_AreaOfInterestHasBeenUpdated() const;

constexpr bool& __cordl_internal_get_AreaOfInterestHasBeenUpdated() ;

constexpr ::Fusion::Sockets::NetConnection* const& __cordl_internal_get_Connection() const;

constexpr ::Fusion::Sockets::NetConnection*& __cordl_internal_get_Connection() ;

constexpr ::Fusion::Sockets::NetConnectionId const& __cordl_internal_get_ConnectionId() const;

constexpr ::Fusion::Sockets::NetConnectionId& __cordl_internal_get_ConnectionId() ;

constexpr double_t const& __cordl_internal_get_LastSend() const;

constexpr double_t& __cordl_internal_get_LastSend() ;

constexpr ::Fusion::SimulationMessageList const& __cordl_internal_get_MessagesIn() const;

constexpr ::Fusion::SimulationMessageList& __cordl_internal_get_MessagesIn() ;

constexpr uint64_t const& __cordl_internal_get_MessagesInSequence() const;

constexpr uint64_t& __cordl_internal_get_MessagesInSequence() ;

constexpr ::Fusion::SimulationMessageList const& __cordl_internal_get_MessagesOut() const;

constexpr ::Fusion::SimulationMessageList& __cordl_internal_get_MessagesOut() ;

constexpr uint64_t const& __cordl_internal_get_MessagesOutSequence() const;

constexpr uint64_t& __cordl_internal_get_MessagesOutSequence() ;

constexpr ::Fusion::NetworkObjectPriorityList* const& __cordl_internal_get_ObjectPriorityList() const;

constexpr ::Fusion::NetworkObjectPriorityList*& __cordl_internal_get_ObjectPriorityList() ;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* const& __cordl_internal_get_PendingDeleteMainTRSP() const;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& __cordl_internal_get_PendingDeleteMainTRSP() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Player() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Player() ;

constexpr ::Fusion::TimeSeries* const& __cordl_internal_get__clientOffset() const;

constexpr ::Fusion::TimeSeries*& __cordl_internal_get__clientOffset() ;

constexpr ::Fusion::SimulationInput_Buffer* const& __cordl_internal_get__inputs() const;

constexpr ::Fusion::SimulationInput_Buffer*& __cordl_internal_get__inputs() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__latestTickAcknowledged() const;

constexpr ::Fusion::Tick& __cordl_internal_get__latestTickAcknowledged() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__latestTickReceived() const;

constexpr ::Fusion::Tick& __cordl_internal_get__latestTickReceived() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectConnectionData*>* const& __cordl_internal_get__objects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectConnectionData*>*& __cordl_internal_get__objects() ;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& __cordl_internal_get__objectsDestroyed() const;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& __cordl_internal_get__objectsDestroyed() ;

constexpr ::Fusion::TimeSeries* const& __cordl_internal_get__packetRecvDelta() const;

constexpr ::Fusion::TimeSeries*& __cordl_internal_get__packetRecvDelta() ;

constexpr ::Fusion::Timer const& __cordl_internal_get__packetRecvDeltaTimer() const;

constexpr ::Fusion::Timer& __cordl_internal_get__packetRecvDeltaTimer() ;

constexpr ::Fusion::Simulation* const& __cordl_internal_get__simulation() const;

constexpr ::Fusion::Simulation*& __cordl_internal_get__simulation() ;

constexpr void __cordl_internal_set_ActiveStructs(::System::Collections::Generic::List_1<::Fusion::NetworkObjectConnectionData*>*  value) ;

constexpr void __cordl_internal_set_ActiveStructsIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ActiveStructsVersion(int32_t  value) ;

constexpr void __cordl_internal_set_AreaOfInterestCells(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_AreaOfInterestHasBeenUpdated(bool  value) ;

constexpr void __cordl_internal_set_Connection(::Fusion::Sockets::NetConnection*  value) ;

constexpr void __cordl_internal_set_ConnectionId(::Fusion::Sockets::NetConnectionId  value) ;

constexpr void __cordl_internal_set_LastSend(double_t  value) ;

constexpr void __cordl_internal_set_MessagesIn(::Fusion::SimulationMessageList  value) ;

constexpr void __cordl_internal_set_MessagesInSequence(uint64_t  value) ;

constexpr void __cordl_internal_set_MessagesOut(::Fusion::SimulationMessageList  value) ;

constexpr void __cordl_internal_set_MessagesOutSequence(uint64_t  value) ;

constexpr void __cordl_internal_set_ObjectPriorityList(::Fusion::NetworkObjectPriorityList*  value) ;

constexpr void __cordl_internal_set_PendingDeleteMainTRSP(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set_Player(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set__clientOffset(::Fusion::TimeSeries*  value) ;

constexpr void __cordl_internal_set__inputs(::Fusion::SimulationInput_Buffer*  value) ;

constexpr void __cordl_internal_set__latestTickAcknowledged(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__latestTickReceived(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__objects(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectConnectionData*>*  value) ;

constexpr void __cordl_internal_set__objectsDestroyed(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__packetRecvDelta(::Fusion::TimeSeries*  value) ;

constexpr void __cordl_internal_set__packetRecvDeltaTimer(::Fusion::Timer  value) ;

constexpr void __cordl_internal_set__simulation(::Fusion::Simulation*  value) ;

/// @brief Method .ctor, addr 0x6002684, size 0x414, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Simulation*  simulation) ;

/// @brief Method get_ConnectionIndex, addr 0x60025fc, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ConnectionIndex() ;

/// @brief Method get_DestroysPending, addr 0x5ffeef8, size 0x48, virtual false, abstract: false, final false
inline int32_t get_DestroysPending() ;

/// @brief Method op_Implicit, addr 0x6002614, size 0x70, virtual false, abstract: false, final false
static inline ::Fusion::PlayerRef op_Implicit___Fusion__PlayerRef(::Fusion::SimulationConnection*  c) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationConnection(SimulationConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationConnection(SimulationConnection const& ) = delete;

/// @brief Field INTEGRATOR_HISTORY_MULT offset 0xffffffff size 0x4
static constexpr int32_t  INTEGRATOR_HISTORY_MULT{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19339};

/// @brief Field _simulation, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Simulation*  ____simulation;

/// @brief Field _objects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectConnectionData*>*  ____objects;

/// @brief Field _objectsDestroyed, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  ____objectsDestroyed;

/// @brief Field Player, offset: 0x28, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Player;

/// @brief Field AreaOfInterestHasBeenUpdated, offset: 0x2c, size: 0x1, def value: None
 bool  ___AreaOfInterestHasBeenUpdated;

/// @brief Field AreaOfInterestCells, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___AreaOfInterestCells;

/// @brief Field MessagesInSequence, offset: 0x38, size: 0x8, def value: None
 uint64_t  ___MessagesInSequence;

/// @brief Field MessagesOutSequence, offset: 0x40, size: 0x8, def value: None
 uint64_t  ___MessagesOutSequence;

/// @brief Field MessagesIn, offset: 0x48, size: 0x18, def value: None
 ::Fusion::SimulationMessageList  ___MessagesIn;

/// @brief Field MessagesOut, offset: 0x60, size: 0x18, def value: None
 ::Fusion::SimulationMessageList  ___MessagesOut;

/// @brief Field LastSend, offset: 0x78, size: 0x8, def value: None
 double_t  ___LastSend;

/// @brief Field ActiveStructsVersion, offset: 0x80, size: 0x4, def value: None
 int32_t  ___ActiveStructsVersion;

/// @brief Field ActiveStructsIndex, offset: 0x84, size: 0x4, def value: None
 int32_t  ___ActiveStructsIndex;

/// @brief Field ActiveStructs, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::NetworkObjectConnectionData*>*  ___ActiveStructs;

/// @brief Field _packetRecvDelta, offset: 0x90, size: 0x8, def value: None
 ::Fusion::TimeSeries*  ____packetRecvDelta;

/// @brief Field _packetRecvDeltaTimer, offset: 0x98, size: 0x18, def value: None
 ::Fusion::Timer  ____packetRecvDeltaTimer;

/// @brief Field _inputs, offset: 0xb0, size: 0x8, def value: None
 ::Fusion::SimulationInput_Buffer*  ____inputs;

/// @brief Field _clientOffset, offset: 0xb8, size: 0x8, def value: None
 ::Fusion::TimeSeries*  ____clientOffset;

/// @brief Field _latestTickReceived, offset: 0xc0, size: 0x4, def value: None
 ::Fusion::Tick  ____latestTickReceived;

/// @brief Field _latestTickAcknowledged, offset: 0xc4, size: 0x4, def value: None
 ::Fusion::Tick  ____latestTickAcknowledged;

/// @brief Field ObjectPriorityList, offset: 0xc8, size: 0x8, def value: None
 ::Fusion::NetworkObjectPriorityList*  ___ObjectPriorityList;

/// @brief Field Connection, offset: 0xd0, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnection*  ___Connection;

/// @brief Field ConnectionId, offset: 0xd8, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  ___ConnectionId;

/// @brief Field PendingDeleteMainTRSP, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  ___PendingDeleteMainTRSP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationConnection, ____simulation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ____objects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ____objectsDestroyed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___Player) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___AreaOfInterestHasBeenUpdated) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___AreaOfInterestCells) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___MessagesInSequence) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___MessagesOutSequence) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___MessagesIn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___MessagesOut) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___LastSend) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___ActiveStructsVersion) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___ActiveStructsIndex) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___ActiveStructs) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ____packetRecvDelta) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ____packetRecvDeltaTimer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ____inputs) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ____clientOffset) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ____latestTickReceived) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ____latestTickAcknowledged) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___ObjectPriorityList) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___Connection) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___ConnectionId) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConnection, ___PendingDeleteMainTRSP) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationConnection) == 0xe8, "Size mismatch!");

} // namespace end def Fusion
