#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketErrorEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketErrorEventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e01044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler::*)(::StringW)>(&::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e010f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>(),
                    {::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Net::NativeWebSocket::WebSocketErrorEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Net::NativeWebSocket::WebSocketErrorEventHandler::Invoke(::StringW  errorMsg)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMsg);
}
inline ::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler* Meta::Net::NativeWebSocket::WebSocketErrorEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler::WebSocketErrorEventHandler()   {
}
