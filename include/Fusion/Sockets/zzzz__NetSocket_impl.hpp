#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocket.hpp"
#include "NanoSockets/zzzz__Socket_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetSocket.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetSocket::*)()>(&::Fusion::Sockets::NetSocket::get_IsCreated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6033c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocket>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Fusion::Sockets::NetSocket::__cordl_internal_get_Handle()  {
return this->___Handle;
}
constexpr int64_t const& Fusion::Sockets::NetSocket::__cordl_internal_get_Handle() const {
return this->___Handle;
}
constexpr void Fusion::Sockets::NetSocket::__cordl_internal_set_Handle(int64_t  value)  {
this->___Handle = value;
}
constexpr ::NanoSockets::Socket& Fusion::Sockets::NetSocket::__cordl_internal_get_NativeSocket()  {
return this->___NativeSocket;
}
constexpr ::NanoSockets::Socket const& Fusion::Sockets::NetSocket::__cordl_internal_get_NativeSocket() const {
return this->___NativeSocket;
}
constexpr void Fusion::Sockets::NetSocket::__cordl_internal_set_NativeSocket(::NanoSockets::Socket  value)  {
this->___NativeSocket = value;
}
inline bool Fusion::Sockets::NetSocket::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocket>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Handle", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NativeSocket", ty: "::NanoSockets::Socket", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetSocket::NetSocket(int64_t  Handle, ::NanoSockets::Socket  NativeSocket) noexcept  {
this->Handle = Handle;
this->NativeSocket = NativeSocket;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSocket::NetSocket()   {
}
