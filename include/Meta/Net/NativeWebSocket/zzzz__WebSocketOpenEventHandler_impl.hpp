#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketOpenEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketOpenEventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e00ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler::*)()>(&::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e00f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>(),
                    {::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Net::NativeWebSocket::WebSocketOpenEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Net::NativeWebSocket::WebSocketOpenEventHandler::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler* Meta::Net::NativeWebSocket::WebSocketOpenEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler::WebSocketOpenEventHandler()   {
}
