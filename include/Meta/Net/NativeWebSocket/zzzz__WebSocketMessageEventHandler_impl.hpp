#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketMessageEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketMessageEventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e00f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e01030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>(),
                    {::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Net::NativeWebSocket::WebSocketMessageEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Net::NativeWebSocket::WebSocketMessageEventHandler::Invoke(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
inline ::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler* Meta::Net::NativeWebSocket::WebSocketMessageEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler::WebSocketMessageEventHandler()   {
}
