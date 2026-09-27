#pragma once
// IWYU pragma private; include "Fusion/NetworkConfiguration.hpp"
#include "Fusion/zzzz__NetworkConfiguration_ReliableDataTransfers_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkConfiguration_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/zzzz__NetworkConfiguration_ReliableDataTransfers_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkConfiguration.get_SocketSendBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkConfiguration::*)()>(&::Fusion::NetworkConfiguration::get_SocketSendBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_SocketSendBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkConfiguration.get_SocketRecvBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkConfiguration::*)()>(&::Fusion::NetworkConfiguration::get_SocketRecvBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_SocketRecvBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkConfiguration.get_ConnectAttempts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkConfiguration::*)()>(&::Fusion::NetworkConfiguration::get_ConnectAttempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_ConnectAttempts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkConfiguration.get_ConnectInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::NetworkConfiguration::*)()>(&::Fusion::NetworkConfiguration::get_ConnectInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_ConnectInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkConfiguration.get_ConnectionDefaultRtt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::NetworkConfiguration::*)()>(&::Fusion::NetworkConfiguration::get_ConnectionDefaultRtt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6001e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_ConnectionDefaultRtt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkConfiguration.get_ConnectionPingInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::NetworkConfiguration::*)()>(&::Fusion::NetworkConfiguration::get_ConnectionPingInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6001e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_ConnectionPingInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkConfiguration.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkConfiguration* (::Fusion::NetworkConfiguration::*)()>(&::Fusion::NetworkConfiguration::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6001e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkConfiguration.ToNetConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConfig (::Fusion::NetworkConfiguration::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::NetworkConfiguration::ToNetConfig)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6001eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"ToNetConfig", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkConfiguration::*)()>(&::Fusion::NetworkConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6001fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Fusion::NetworkConfiguration::__cordl_internal_get_ConnectionTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionTimeout;
}
constexpr double_t const& Fusion::NetworkConfiguration::__cordl_internal_get_ConnectionTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionTimeout;
}
constexpr void Fusion::NetworkConfiguration::__cordl_internal_set_ConnectionTimeout(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionTimeout = value;
}
constexpr double_t& Fusion::NetworkConfiguration::__cordl_internal_get_ConnectionShutdownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionShutdownTime;
}
constexpr double_t const& Fusion::NetworkConfiguration::__cordl_internal_get_ConnectionShutdownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionShutdownTime;
}
constexpr void Fusion::NetworkConfiguration::__cordl_internal_set_ConnectionShutdownTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionShutdownTime = value;
}
constexpr ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers& Fusion::NetworkConfiguration::__cordl_internal_get_ReliableDataTransferModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReliableDataTransferModes;
}
constexpr ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers const& Fusion::NetworkConfiguration::__cordl_internal_get_ReliableDataTransferModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReliableDataTransferModes;
}
constexpr void Fusion::NetworkConfiguration::__cordl_internal_set_ReliableDataTransferModes(::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReliableDataTransferModes = value;
}
inline int32_t Fusion::NetworkConfiguration::get_SocketSendBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_SocketSendBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::NetworkConfiguration::get_SocketRecvBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_SocketRecvBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::NetworkConfiguration::get_ConnectAttempts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_ConnectAttempts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t Fusion::NetworkConfiguration::get_ConnectInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_ConnectInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::NetworkConfiguration::get_ConnectionDefaultRtt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_ConnectionDefaultRtt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::NetworkConfiguration::get_ConnectionPingInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"get_ConnectionPingInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::Fusion::NetworkConfiguration* Fusion::NetworkConfiguration::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkConfiguration*>(this, ___internal_method);
}
inline ::Fusion::Sockets::NetConfig Fusion::NetworkConfiguration::ToNetConfig(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {"ToNetConfig", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConfig>(this, ___internal_method, address);
}
inline void Fusion::NetworkConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkConfiguration* Fusion::NetworkConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkConfiguration*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkConfiguration::NetworkConfiguration()   {
}
