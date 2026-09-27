#pragma once
// IWYU pragma private; include "NanoSockets/Socket.hpp"
#include "NanoSockets/zzzz__Socket_def.hpp"
//  Writing Method size for method: ::NanoSockets::Socket.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::NanoSockets::Socket::*)()>(&::NanoSockets::Socket::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa36796c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::Socket>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::Socket.op_Implicit_int64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::NanoSockets::Socket)>(&::NanoSockets::Socket::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa36797c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::Socket>(),
                        {"op_Implicit", {}, {::i2c::type_of<::NanoSockets::Socket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::Socket.op_Implicit___NanoSockets__Socket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NanoSockets::Socket (*)(int64_t)>(&::NanoSockets::Socket::op_Implicit___NanoSockets__Socket)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa367980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::Socket>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& NanoSockets::Socket::__cordl_internal_get_handle()  {
return this->___handle;
}
constexpr int64_t const& NanoSockets::Socket::__cordl_internal_get_handle() const {
return this->___handle;
}
constexpr void NanoSockets::Socket::__cordl_internal_set_handle(int64_t  value)  {
this->___handle = value;
}
inline bool NanoSockets::Socket::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::Socket>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int64_t NanoSockets::Socket::op_Implicit_int64_t(::NanoSockets::Socket  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::Socket>(),
                        {"op_Implicit", {}, {::i2c::type_of<::NanoSockets::Socket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, socket);
}
inline ::NanoSockets::Socket NanoSockets::Socket::op_Implicit___NanoSockets__Socket(int64_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::Socket>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NanoSockets::Socket>(nullptr, ___internal_method, handle);
}
// Ctor Parameters [CppParam { name: "handle", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::NanoSockets::Socket::Socket(int64_t  handle) noexcept  {
this->handle = handle;
}
// Ctor Parameters []
constexpr ::NanoSockets::Socket::Socket()   {
}
