#pragma once
// IWYU pragma private; include "Fusion/TickRate_Resolved.hpp"
#include "Fusion/zzzz__TickRate_Resolved_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TickRate_Resolved::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::TickRate_Resolved::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa60e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved.get_ServerTickDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::TickRate_Resolved::*)()>(&::GlobalNamespace::TickRate_Resolved::get_ServerTickDelta)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fa614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ServerTickDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved.get_ServerSendDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::TickRate_Resolved::*)()>(&::GlobalNamespace::TickRate_Resolved::get_ServerSendDelta)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fa616c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ServerSendDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved.get_ServerTickStride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TickRate_Resolved::*)()>(&::GlobalNamespace::TickRate_Resolved::get_ServerTickStride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa618c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ServerTickStride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved.get_ClientTickDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::TickRate_Resolved::*)()>(&::GlobalNamespace::TickRate_Resolved::get_ClientTickDelta)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fa619c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ClientTickDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved.get_ClientSendDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::TickRate_Resolved::*)()>(&::GlobalNamespace::TickRate_Resolved::get_ClientSendDelta)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fa61bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ClientSendDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved.get_ClientTickStride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TickRate_Resolved::*)()>(&::GlobalNamespace::TickRate_Resolved::get_ClientTickStride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa61dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ClientTickStride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TickRate_Resolved::*)()>(&::GlobalNamespace::TickRate_Resolved::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fa61e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                    {::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TickRate_Resolved.Inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t)>(&::GlobalNamespace::TickRate_Resolved::Inverse)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fa63b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"Inverse", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TickRate_Resolved::__cordl_internal_get_Client()  {
return this->___Client;
}
constexpr int32_t const& GlobalNamespace::TickRate_Resolved::__cordl_internal_get_Client() const {
return this->___Client;
}
constexpr void GlobalNamespace::TickRate_Resolved::__cordl_internal_set_Client(int32_t  value)  {
this->___Client = value;
}
constexpr int32_t& GlobalNamespace::TickRate_Resolved::__cordl_internal_get_ClientSend()  {
return this->___ClientSend;
}
constexpr int32_t const& GlobalNamespace::TickRate_Resolved::__cordl_internal_get_ClientSend() const {
return this->___ClientSend;
}
constexpr void GlobalNamespace::TickRate_Resolved::__cordl_internal_set_ClientSend(int32_t  value)  {
this->___ClientSend = value;
}
constexpr int32_t& GlobalNamespace::TickRate_Resolved::__cordl_internal_get_Server()  {
return this->___Server;
}
constexpr int32_t const& GlobalNamespace::TickRate_Resolved::__cordl_internal_get_Server() const {
return this->___Server;
}
constexpr void GlobalNamespace::TickRate_Resolved::__cordl_internal_set_Server(int32_t  value)  {
this->___Server = value;
}
constexpr int32_t& GlobalNamespace::TickRate_Resolved::__cordl_internal_get_ServerSend()  {
return this->___ServerSend;
}
constexpr int32_t const& GlobalNamespace::TickRate_Resolved::__cordl_internal_get_ServerSend() const {
return this->___ServerSend;
}
constexpr void GlobalNamespace::TickRate_Resolved::__cordl_internal_set_ServerSend(int32_t  value)  {
this->___ServerSend = value;
}
inline void GlobalNamespace::TickRate_Resolved::_ctor(int32_t  client, int32_t  clientSend, int32_t  server, int32_t  serverSend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, client, clientSend, server, serverSend);
}
inline double_t GlobalNamespace::TickRate_Resolved::get_ServerTickDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ServerTickDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t GlobalNamespace::TickRate_Resolved::get_ServerSendDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ServerSendDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TickRate_Resolved::get_ServerTickStride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ServerTickStride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline double_t GlobalNamespace::TickRate_Resolved::get_ClientTickDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ClientTickDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t GlobalNamespace::TickRate_Resolved::get_ClientSendDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ClientSendDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TickRate_Resolved::get_ClientTickStride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"get_ClientTickStride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::TickRate_Resolved::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline double_t GlobalNamespace::TickRate_Resolved::Inverse(int32_t  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TickRate_Resolved>(),
                        {"Inverse", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, rate);
}
// Ctor Parameters [CppParam { name: "Client", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClientSend", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Server", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ServerSend", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TickRate_Resolved::TickRate_Resolved(int32_t  Client, int32_t  ClientSend, int32_t  Server, int32_t  ServerSend) noexcept  {
this->Client = Client;
this->ClientSend = ClientSend;
this->Server = Server;
this->ServerSend = ServerSend;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TickRate_Resolved::TickRate_Resolved()   {
}
