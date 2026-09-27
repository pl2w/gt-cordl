#pragma once
// IWYU pragma private; include "Fusion/Simulation_Client.hpp"
#include "Fusion/zzzz__SimulationInput_impl.hpp"
#include "Fusion/zzzz__Simulation_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Fusion/zzzz__Simulation_Client_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationArgs_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__TimeSyncConfiguration_def.hpp"
#include "Fusion/zzzz__Timeline_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_TimeSyncConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TimeSyncConfiguration* (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_TimeSyncConfig)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ff33c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_TimeSyncConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_ServerConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_ServerConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff3688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_ServerConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_LatestServerTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_LatestServerTick)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ff3690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_LatestServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_LatestServerTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ff370c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_LatestServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_IsConnectedToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_IsConnectedToServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ff374c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_IsConnectedToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_ServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_ServerAddress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ff375c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_RttToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_RttToServer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff378c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_RttToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_LocalPlayer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ff37a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.get_ActivePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::get_ActivePlayers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ff3848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)(::Fusion::SimulationArgs)>(&::GlobalNamespace::Simulation_Client::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5ff38fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)(::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::GlobalNamespace::Simulation_Client::Connect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ff3ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)(::StringW, uint16_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::GlobalNamespace::Simulation_Client::Connect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ff3b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.NetworkConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)(::Fusion::Sockets::NetConnection*)>(&::GlobalNamespace::Simulation_Client::NetworkConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff3b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.NetworkDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetDisconnectReason)>(&::GlobalNamespace::Simulation_Client::NetworkDisconnected)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ff3b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.OnNetworkShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::OnNetworkShutdown)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ff3cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.ResetRttToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)(double_t)>(&::GlobalNamespace::Simulation_Client::ResetRttToServer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ff3cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"ResetRttToServer", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.GetPlayerRtt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::Simulation_Client::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::Simulation_Client::GetPlayerRtt)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ff3d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.Connection2Player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::GlobalNamespace::Simulation_Client::*)(::Fusion::Sockets::NetConnection*)>(&::GlobalNamespace::Simulation_Client::Connection2Player)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ff3dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.Player2Connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Simulation_Client::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::Simulation_Client::Player2Connection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff3dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.RecvPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::RecvPacket)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ff3de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.NetworkReceiveDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::NetworkReceiveDone)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x5ff42b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.WritePackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::WritePackets)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ff4a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.WriteInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::WriteInput)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5ff4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"WriteInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.GetSortedInputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::ArrayW<::Fusion::SimulationInput*>,int32_t> (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::GetSortedInputs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ff5014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"GetSortedInputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.GetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::GlobalNamespace::Simulation_Client::*)(::Fusion::Tick, ::Fusion::PlayerRef)>(&::GlobalNamespace::Simulation_Client::GetInput)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5ff509c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.BeforeFirstTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::BeforeFirstTick)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ff52ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.BeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::BeforeUpdate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5ff5390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.BeforeSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::BeforeSimulation)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5ff551c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.ResetClientSimulationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::ResetClientSimulationState)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ff5d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"ResetClientSimulationState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.ResetPredictedObjectsToLatestServerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::ResetPredictedObjectsToLatestServerState)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5ff5828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"ResetPredictedObjectsToLatestServerState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.RunClientSideResimulationLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)(int32_t)>(&::GlobalNamespace::Simulation_Client::RunClientSideResimulationLoop)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ff5ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"RunClientSideResimulationLoop", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.NoSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::NoSimulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ff5e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.UpdateInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::UpdateInterpolation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ff5c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"UpdateInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.UpdateObjectInterpolationParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)(double_t)>(&::GlobalNamespace::Simulation_Client::UpdateObjectInterpolationParams)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ff5e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"UpdateObjectInterpolationParams", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Client.UpdateObjectTimelines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Client::*)()>(&::GlobalNamespace::Simulation_Client::UpdateObjectTimelines)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ff4170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"UpdateObjectTimelines", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetConnection*& GlobalNamespace::Simulation_Client::__cordl_internal_get__server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
constexpr ::Fusion::Sockets::NetConnection* const& GlobalNamespace::Simulation_Client::__cordl_internal_get__server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
constexpr void GlobalNamespace::Simulation_Client::__cordl_internal_set__server(::Fusion::Sockets::NetConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server = value;
}
constexpr bool& GlobalNamespace::Simulation_Client::__cordl_internal_get__stateReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateReceived;
}
constexpr bool const& GlobalNamespace::Simulation_Client::__cordl_internal_get__stateReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateReceived;
}
constexpr void GlobalNamespace::Simulation_Client::__cordl_internal_set__stateReceived(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateReceived = value;
}
constexpr ::Fusion::Timeline*& GlobalNamespace::Simulation_Client::__cordl_internal_get__history()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____history;
}
constexpr ::Fusion::Timeline* const& GlobalNamespace::Simulation_Client::__cordl_internal_get__history() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____history;
}
constexpr void GlobalNamespace::Simulation_Client::__cordl_internal_set__history(::Fusion::Timeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____history = value;
}
constexpr ::Fusion::SimulationInput_Buffer*& GlobalNamespace::Simulation_Client::__cordl_internal_get__inputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr ::Fusion::SimulationInput_Buffer* const& GlobalNamespace::Simulation_Client::__cordl_internal_get__inputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr void GlobalNamespace::Simulation_Client::__cordl_internal_set__inputBuffer(::Fusion::SimulationInput_Buffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputBuffer = value;
}
constexpr ::ArrayW<::Fusion::SimulationInput*>& GlobalNamespace::Simulation_Client::__cordl_internal_get__inputArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputArray;
}
constexpr ::ArrayW<::Fusion::SimulationInput*> const& GlobalNamespace::Simulation_Client::__cordl_internal_get__inputArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputArray;
}
constexpr void GlobalNamespace::Simulation_Client::__cordl_internal_set__inputArray(::ArrayW<::Fusion::SimulationInput*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputArray = value;
}
constexpr ::System::Nullable_1<bool>& GlobalNamespace::Simulation_Client::__cordl_internal_get__previousWasMC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousWasMC;
}
constexpr ::System::Nullable_1<bool> const& GlobalNamespace::Simulation_Client::__cordl_internal_get__previousWasMC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousWasMC;
}
constexpr void GlobalNamespace::Simulation_Client::__cordl_internal_set__previousWasMC(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousWasMC = value;
}
constexpr ::Fusion::Tick& GlobalNamespace::Simulation_Client::__cordl_internal_get_PreviousServerTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousServerTick;
}
constexpr ::Fusion::Tick const& GlobalNamespace::Simulation_Client::__cordl_internal_get_PreviousServerTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousServerTick;
}
constexpr void GlobalNamespace::Simulation_Client::__cordl_internal_set_PreviousServerTick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousServerTick = value;
}
inline ::Fusion::TimeSyncConfiguration* GlobalNamespace::Simulation_Client::get_TimeSyncConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_TimeSyncConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TimeSyncConfiguration*>(this, ___internal_method);
}
inline ::Fusion::Sockets::NetConnection* GlobalNamespace::Simulation_Client::get_ServerConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_ServerConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(this, ___internal_method);
}
inline ::Fusion::Tick GlobalNamespace::Simulation_Client::get_LatestServerTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline double_t GlobalNamespace::Simulation_Client::get_LatestServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_LatestServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool GlobalNamespace::Simulation_Client::get_IsConnectedToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_IsConnectedToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::Sockets::NetAddress GlobalNamespace::Simulation_Client::get_ServerAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_ServerAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method);
}
inline double_t GlobalNamespace::Simulation_Client::get_RttToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"get_RttToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::Fusion::PlayerRef GlobalNamespace::Simulation_Client::get_LocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>* GlobalNamespace::Simulation_Client::get_ActivePlayers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::StringW GlobalNamespace::Simulation_Client::NullableToString(::System::Nullable_1<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                    {"NullableToString", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Nullable_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::Simulation_Client::_ctor(::Fusion::SimulationArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::Simulation_Client::Connect(::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, token, uniqueId);
}
inline void GlobalNamespace::Simulation_Client::Connect(::StringW  ip, uint16_t  port, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ip, port, token, uniqueId);
}
inline void GlobalNamespace::Simulation_Client::NetworkConnected(::Fusion::Sockets::NetConnection*  connection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
inline void GlobalNamespace::Simulation_Client::NetworkDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, reason);
}
inline void GlobalNamespace::Simulation_Client::OnNetworkShutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::ResetRttToServer(double_t  rtt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"ResetRttToServer", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rtt);
}
inline double_t GlobalNamespace::Simulation_Client::GetPlayerRtt(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, player);
}
inline ::Fusion::PlayerRef GlobalNamespace::Simulation_Client::Connection2Player(::Fusion::Sockets::NetConnection*  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method, c);
}
inline int32_t GlobalNamespace::Simulation_Client::Player2Connection(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline void GlobalNamespace::Simulation_Client::RecvPacket()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::NetworkReceiveDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::WritePackets()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::WriteInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"WriteInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::ArrayW<::Fusion::SimulationInput*>,int32_t> GlobalNamespace::Simulation_Client::GetSortedInputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"GetSortedInputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ArrayW<::Fusion::SimulationInput*>,int32_t>>(this, ___internal_method);
}
inline ::Fusion::SimulationInput* GlobalNamespace::Simulation_Client::GetInput(::Fusion::Tick  tick, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method, tick, player);
}
inline void GlobalNamespace::Simulation_Client::BeforeFirstTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::BeforeUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::Simulation_Client::BeforeSimulation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::ResetClientSimulationState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"ResetClientSimulationState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::ResetPredictedObjectsToLatestServerState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"ResetPredictedObjectsToLatestServerState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::RunClientSideResimulationLoop(int32_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"RunClientSideResimulationLoop", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ticks);
}
inline void GlobalNamespace::Simulation_Client::NoSimulation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Client*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::UpdateInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"UpdateInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Client::UpdateObjectInterpolationParams(double_t  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"UpdateObjectInterpolationParams", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, now);
}
inline void GlobalNamespace::Simulation_Client::UpdateObjectTimelines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Client*>(),
                        {"UpdateObjectTimelines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Simulation_Client* GlobalNamespace::Simulation_Client::New_ctor(::Fusion::SimulationArgs  args)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Simulation_Client*>(args));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_Client::Simulation_Client()   {
}
