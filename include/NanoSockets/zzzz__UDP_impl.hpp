#pragma once
// IWYU pragma private; include "NanoSockets/UDP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NanoSockets/zzzz__UDP_def.hpp"
#include "NanoSockets/zzzz__Address_def.hpp"
#include "NanoSockets/zzzz__Status_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::NanoSockets::UDP.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NanoSockets::Status (*)()>(&::NanoSockets::UDP::Initialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa367c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t)>(&::NanoSockets::UDP::Create)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa367cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int64_t>)>(&::NanoSockets::UDP::Destroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa367d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Destroy", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, ::by_ref<::NanoSockets::Address>)>(&::NanoSockets::UDP::Bind)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa367ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Bind", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::NanoSockets::Address>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.SetNonBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NanoSockets::Status (*)(int64_t)>(&::NanoSockets::UDP::SetNonBlocking)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa367e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"SetNonBlocking", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, ::NanoSockets::Address*, uint8_t*, int32_t)>(&::NanoSockets::UDP::Send)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa367ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Send", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::NanoSockets::Address*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, ::NanoSockets::Address*, uint8_t*, int32_t)>(&::NanoSockets::UDP::Receive)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa367f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Receive", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::NanoSockets::Address*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.GetAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NanoSockets::Status (*)(int64_t, ::by_ref<::NanoSockets::Address>)>(&::NanoSockets::UDP::GetAddress)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa368010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"GetAddress", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::NanoSockets::Address>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.SetIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NanoSockets::Status (*)(::by_ref<::NanoSockets::Address>, ::StringW)>(&::NanoSockets::UDP::SetIP)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa368094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"SetIP", {}, {::i2c::type_of<::by_ref<::NanoSockets::Address>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::UDP.GetIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NanoSockets::Status (*)(::by_ref<::NanoSockets::Address>, ::System::IntPtr, int32_t)>(&::NanoSockets::UDP::GetIP)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa367be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"GetIP", {}, {::i2c::type_of<::by_ref<::NanoSockets::Address>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::NanoSockets::Status NanoSockets::UDP::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NanoSockets::Status>(nullptr, ___internal_method);
}
inline int64_t NanoSockets::UDP::Create(int32_t  sendBufferSize, int32_t  receiveBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, sendBufferSize, receiveBufferSize);
}
inline void NanoSockets::UDP::Destroy(::by_ref<int64_t>  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Destroy", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socket);
}
inline int32_t NanoSockets::UDP::Bind(int64_t  socket, ::by_ref<::NanoSockets::Address>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Bind", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::NanoSockets::Address>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, socket, address);
}
inline ::NanoSockets::Status NanoSockets::UDP::SetNonBlocking(int64_t  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"SetNonBlocking", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NanoSockets::Status>(nullptr, ___internal_method, socket);
}
inline int32_t NanoSockets::UDP::Send(int64_t  socket, ::NanoSockets::Address*  address, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Send", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::NanoSockets::Address*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, socket, address, buffer, bufferLength);
}
inline int32_t NanoSockets::UDP::Receive(int64_t  socket, ::NanoSockets::Address*  address, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"Receive", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::NanoSockets::Address*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, socket, address, buffer, bufferLength);
}
inline ::NanoSockets::Status NanoSockets::UDP::GetAddress(int64_t  socket, ::by_ref<::NanoSockets::Address>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"GetAddress", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::NanoSockets::Address>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NanoSockets::Status>(nullptr, ___internal_method, socket, address);
}
inline ::NanoSockets::Status NanoSockets::UDP::SetIP(::by_ref<::NanoSockets::Address>  address, ::StringW  ip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"SetIP", {}, {::i2c::type_of<::by_ref<::NanoSockets::Address>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NanoSockets::Status>(nullptr, ___internal_method, address, ip);
}
inline ::NanoSockets::Status NanoSockets::UDP::GetIP(::by_ref<::NanoSockets::Address>  address, ::System::IntPtr  ip, int32_t  ipLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::UDP*>(),
                        {"GetIP", {}, {::i2c::type_of<::by_ref<::NanoSockets::Address>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NanoSockets::Status>(nullptr, ___internal_method, address, ip, ipLength);
}
// Ctor Parameters []
constexpr ::NanoSockets::UDP::UDP()   {
}
