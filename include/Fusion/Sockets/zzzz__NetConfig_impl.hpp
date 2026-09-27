#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfig.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConfigNotify_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulation_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetConfig.get_ConnectionsPerGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetConfig::*)()>(&::Fusion::Sockets::NetConfig::get_ConnectionsPerGroup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6029e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfig>(),
                        {"get_ConnectionsPerGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConfig.get_Defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConfig (*)()>(&::Fusion::Sockets::NetConfig::get_Defaults)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6029e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfig>(),
                        {"get_Defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::Sockets::NetConfig::get_ConnectionsPerGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfig>(),
                        {"get_ConnectionsPerGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetConfig Fusion::Sockets::NetConfig::get_Defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfig>(),
                        {"get_Defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConfig>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ConnectionSendBuffers", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionGroups", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxConnections", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SocketSendBuffer", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SocketRecvBuffer", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PacketSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectAttempts", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectInterval", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OperationExpireTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionDefaultRtt", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionTimeout", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionPingInterval", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionShutdownTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Notify", ty: "::Fusion::Sockets::NetConfigNotify", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Simulation", ty: "::Fusion::Sockets::NetConfigSimulation", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConfig::NetConfig(int32_t  ConnectionSendBuffers, int32_t  ConnectionGroups, int32_t  MaxConnections, int32_t  SocketSendBuffer, int32_t  SocketRecvBuffer, int32_t  PacketSize, int32_t  ConnectAttempts, double_t  ConnectInterval, double_t  OperationExpireTime, double_t  ConnectionDefaultRtt, double_t  ConnectionTimeout, double_t  ConnectionPingInterval, double_t  ConnectionShutdownTime, ::Fusion::Sockets::NetAddress  Address, ::Fusion::Sockets::NetConfigNotify  Notify, ::Fusion::Sockets::NetConfigSimulation  Simulation) noexcept  {
this->ConnectionSendBuffers = ConnectionSendBuffers;
this->ConnectionGroups = ConnectionGroups;
this->MaxConnections = MaxConnections;
this->SocketSendBuffer = SocketSendBuffer;
this->SocketRecvBuffer = SocketRecvBuffer;
this->PacketSize = PacketSize;
this->ConnectAttempts = ConnectAttempts;
this->ConnectInterval = ConnectInterval;
this->OperationExpireTime = OperationExpireTime;
this->ConnectionDefaultRtt = ConnectionDefaultRtt;
this->ConnectionTimeout = ConnectionTimeout;
this->ConnectionPingInterval = ConnectionPingInterval;
this->ConnectionShutdownTime = ConnectionShutdownTime;
this->Address = Address;
this->Notify = Notify;
this->Simulation = Simulation;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConfig::NetConfig()   {
}
