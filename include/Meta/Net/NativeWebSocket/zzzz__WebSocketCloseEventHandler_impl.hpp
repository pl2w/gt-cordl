#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketCloseEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketCloseEventHandler_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e01108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler::*)(::Meta::Net::NativeWebSocket::WebSocketCloseCode)>(&::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e011a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>(),
                    {::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Net::NativeWebSocket::WebSocketCloseEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Net::NativeWebSocket::WebSocketCloseEventHandler::Invoke(::Meta::Net::NativeWebSocket::WebSocketCloseCode  closeCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeCode);
}
inline ::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler* Meta::Net::NativeWebSocket::WebSocketCloseEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler::WebSocketCloseEventHandler()   {
}
