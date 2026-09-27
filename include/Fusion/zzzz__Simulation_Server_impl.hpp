#pragma once
// IWYU pragma private; include "Fusion/Simulation_Server.hpp"
#include "Fusion/zzzz__Simulation_impl.hpp"
#include "Fusion/zzzz__Simulation_Server_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPtr_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshot_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationArgs_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/zzzz__SimulationRuntimeConfig_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.get_LatestServerTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::get_LatestServerTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff7278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.get_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::get_LocalPlayer)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ff7280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.GetPlayerRtt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::Simulation_Server::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::Simulation_Server::GetPlayerRtt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ff7368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)(::Fusion::SimulationArgs)>(&::GlobalNamespace::Simulation_Server::_ctor)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5ff7448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)(::Fusion::PlayerRef, ::ArrayW<uint8_t>)>(&::GlobalNamespace::Simulation_Server::Disconnect)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ff7a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)(::Fusion::Sockets::NetAddress)>(&::GlobalNamespace::Simulation_Server::Disconnect)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5ff7b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.AfterSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::AfterSimulation)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ff7d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.BeforeSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::BeforeSimulation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ff7ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.NetworkDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetDisconnectReason)>(&::GlobalNamespace::Simulation_Server::NetworkDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ff7fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.RecvPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::RecvPacket)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ff7fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.NetworkConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)(::Fusion::Sockets::NetConnection*)>(&::GlobalNamespace::Simulation_Server::NetworkConnected)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ff8660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.WritePackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::WritePackets)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ff8c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.CreateRuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationRuntimeConfig (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::CreateRuntimeConfiguration)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ff7814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"CreateRuntimeConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.SpawnRuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::SpawnRuntimeConfiguration)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ff8db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"SpawnRuntimeConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.BeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::BeforeUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ff8e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.CreateInternalStateObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::Simulation_Server::CreateInternalStateObjects)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ff8f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"CreateInternalStateObjects", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.BeforeFirstTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::BeforeFirstTick)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ff8fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.GetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::GlobalNamespace::Simulation_Server::*)(::Fusion::Tick, ::Fusion::PlayerRef)>(&::GlobalNamespace::Simulation_Server::GetInput)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5ff9130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.ReadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::ReadInput)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5ff8014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"ReadInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.ReadStateTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::ReadStateTick)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ff858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"ReadStateTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.get_NetworkObjectMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>* (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::get_NetworkObjectMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ff9660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"get_NetworkObjectMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.GetResumeObjectHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*,::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*> (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::GetResumeObjectHeader)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5ff9668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"GetResumeObjectHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.DisposeHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)()>(&::GlobalNamespace::Simulation_Server::DisposeHostMigration)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5ff9a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"DisposeHostMigration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.WriteHostMigrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Simulation_Server::*)(::by_ref<::ArrayW<uint8_t>>, int32_t)>(&::GlobalNamespace::Simulation_Server::WriteHostMigrationData)> {
  constexpr static std::size_t size = 0xce8;
  constexpr static std::size_t addrs = 0x5ff9c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"WriteHostMigrationData", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.ReadHostMigrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_Server::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::Simulation_Server::ReadHostMigrationData)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5ff78f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"ReadHostMigrationData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_Server.ProcessHostMigrationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*, ::Fusion::Allocator*)>(&::GlobalNamespace::Simulation_Server::ProcessHostMigrationData)> {
  constexpr static std::size_t size = 0xe30;
  constexpr static std::size_t addrs = 0x5ffa968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"ProcessHostMigrationData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*>(), ::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::SimulationInput*& GlobalNamespace::Simulation_Server::__cordl_internal_get__inputReadTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputReadTarget;
}
constexpr ::Fusion::SimulationInput* const& GlobalNamespace::Simulation_Server::__cordl_internal_get__inputReadTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputReadTarget;
}
constexpr void GlobalNamespace::Simulation_Server::__cordl_internal_set__inputReadTarget(::Fusion::SimulationInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputReadTarget = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*& GlobalNamespace::Simulation_Server::__cordl_internal_get__NetworkObjectMap_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkObjectMap_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>* const& GlobalNamespace::Simulation_Server::__cordl_internal_get__NetworkObjectMap_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkObjectMap_k__BackingField;
}
constexpr void GlobalNamespace::Simulation_Server::__cordl_internal_set__NetworkObjectMap_k__BackingField(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NetworkObjectMap_k__BackingField = value;
}
constexpr ::Fusion::Sockets::NetBitBuffer*& GlobalNamespace::Simulation_Server::__cordl_internal_get__hostMigrationWriteBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hostMigrationWriteBuffer;
}
constexpr ::Fusion::Sockets::NetBitBuffer* const& GlobalNamespace::Simulation_Server::__cordl_internal_get__hostMigrationWriteBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hostMigrationWriteBuffer;
}
constexpr void GlobalNamespace::Simulation_Server::__cordl_internal_set__hostMigrationWriteBuffer(::Fusion::Sockets::NetBitBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hostMigrationWriteBuffer = value;
}
constexpr ::System::Object*& GlobalNamespace::Simulation_Server::__cordl_internal_get__hmLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmLock;
}
constexpr ::System::Object* const& GlobalNamespace::Simulation_Server::__cordl_internal_get__hmLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmLock;
}
constexpr void GlobalNamespace::Simulation_Server::__cordl_internal_set__hmLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmLock = value;
}
inline ::Fusion::Tick GlobalNamespace::Simulation_Server::get_LatestServerTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline ::Fusion::PlayerRef GlobalNamespace::Simulation_Server::get_LocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline double_t GlobalNamespace::Simulation_Server::GetPlayerRtt(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, player);
}
inline void GlobalNamespace::Simulation_Server::_ctor(::Fusion::SimulationArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::Simulation_Server::Disconnect(::Fusion::PlayerRef  player, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, token);
}
inline void GlobalNamespace::Simulation_Server::Disconnect(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void GlobalNamespace::Simulation_Server::AfterSimulation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::Simulation_Server::BeforeSimulation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Server::NetworkDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, reason);
}
inline void GlobalNamespace::Simulation_Server::RecvPacket()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Server::NetworkConnected(::Fusion::Sockets::NetConnection*  connection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
inline void GlobalNamespace::Simulation_Server::WritePackets()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationRuntimeConfig GlobalNamespace::Simulation_Server::CreateRuntimeConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"CreateRuntimeConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationRuntimeConfig>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Server::SpawnRuntimeConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"SpawnRuntimeConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Server::BeforeUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Server::CreateInternalStateObjects(::Fusion::PlayerRef  sceneInfoStateAuth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"CreateInternalStateObjects", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneInfoStateAuth);
}
inline void GlobalNamespace::Simulation_Server::BeforeFirstTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationInput* GlobalNamespace::Simulation_Server::GetInput(::Fusion::Tick  tick, ::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_Server*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method, tick, player);
}
inline void GlobalNamespace::Simulation_Server::ReadInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"ReadInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Server::ReadStateTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"ReadStateTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>* GlobalNamespace::Simulation_Server::get_NetworkObjectMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"get_NetworkObjectMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*,::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*> GlobalNamespace::Simulation_Server::GetResumeObjectHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"GetResumeObjectHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderPtr>*,::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::System::Collections::Generic::List_1<::Fusion::NetworkId>*>*>>(this, ___internal_method);
}
inline void GlobalNamespace::Simulation_Server::DisposeHostMigration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"DisposeHostMigration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::Simulation_Server::WriteHostMigrationData(::by_ref<::ArrayW<uint8_t>>  target, int32_t  targetBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"WriteHostMigrationData", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, target, targetBytes);
}
inline void GlobalNamespace::Simulation_Server::ReadHostMigrationData(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"ReadHostMigrationData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::Simulation_Server::ProcessHostMigrationData(::ArrayW<uint8_t>  data, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*  networkObjectMap, ::Fusion::Allocator*  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_Server*>(),
                        {"ProcessHostMigrationData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectHeaderSnapshot*>*>(), ::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, networkObjectMap, allocator);
}
inline ::GlobalNamespace::Simulation_Server* GlobalNamespace::Simulation_Server::New_ctor(::Fusion::SimulationArgs  args)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Simulation_Server*>(args));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_Server::Simulation_Server()   {
}
