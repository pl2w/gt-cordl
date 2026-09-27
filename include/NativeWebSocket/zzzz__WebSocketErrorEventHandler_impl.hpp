#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketErrorEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketErrorEventHandler_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocketErrorEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketErrorEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::NativeWebSocket::WebSocketErrorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f34a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketErrorEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketErrorEventHandler::*)(::StringW)>(&::NativeWebSocket::WebSocketErrorEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f34b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketErrorEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::NativeWebSocket::WebSocketErrorEventHandler::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::NativeWebSocket::WebSocketErrorEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f34b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketErrorEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketErrorEventHandler::*)(::System::IAsyncResult*)>(&::NativeWebSocket::WebSocketErrorEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f34b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void NativeWebSocket::WebSocketErrorEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void NativeWebSocket::WebSocketErrorEventHandler::Invoke(::StringW  errorMsg)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMsg);
}
inline ::System::IAsyncResult* NativeWebSocket::WebSocketErrorEventHandler::BeginInvoke(::StringW  errorMsg, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, errorMsg, callback, object);
}
inline void NativeWebSocket::WebSocketErrorEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketErrorEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::NativeWebSocket::WebSocketErrorEventHandler* NativeWebSocket::WebSocketErrorEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketErrorEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketErrorEventHandler::WebSocketErrorEventHandler()   {
}
