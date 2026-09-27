#pragma once
// IWYU pragma private; include "Fusion/SimulationArgs.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__SimulationModes_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__SimulationArgs_def.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationArgs.get_IsPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationArgs::*)()>(&::Fusion::SimulationArgs::get_IsPlayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6001a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationArgs>(),
                        {"get_IsPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationArgs.get_IsServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationArgs::*)()>(&::Fusion::SimulationArgs::get_IsServer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6001a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationArgs>(),
                        {"get_IsServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::SimulationArgs::get_IsPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationArgs>(),
                        {"get_IsPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::SimulationArgs::get_IsServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationArgs>(),
                        {"get_IsServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Mode", ty: "::Fusion::SimulationModes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Socket", ty: "::Fusion::Sockets::INetSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Config", ty: "::Fusion::NetworkProjectConfig*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Callbacks", ty: "::Fusion::Simulation_ICallbacks*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResumeTick", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResumeState", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResumeNetworkId", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationArgs::SimulationArgs(::Fusion::SimulationModes  Mode, ::Fusion::Sockets::NetAddress  Address, ::Fusion::Sockets::INetSocket*  Socket, ::Fusion::NetworkProjectConfig*  Config, ::Fusion::Simulation_ICallbacks*  Callbacks, ::Fusion::Tick  ResumeTick, ::ArrayW<uint8_t>  ResumeState, ::Fusion::NetworkId  ResumeNetworkId) noexcept  {
this->Mode = Mode;
this->Address = Address;
this->Socket = Socket;
this->Config = Config;
this->Callbacks = Callbacks;
this->ResumeTick = ResumeTick;
this->ResumeState = ResumeState;
this->ResumeNetworkId = ResumeNetworkId;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationArgs::SimulationArgs()   {
}
