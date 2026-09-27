#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketOpenEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketOpenEventHandler_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocketOpenEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketOpenEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::NativeWebSocket::WebSocketOpenEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f3488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketOpenEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketOpenEventHandler::*)()>(&::NativeWebSocket::WebSocketOpenEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f34928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketOpenEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::NativeWebSocket::WebSocketOpenEventHandler::*)(::System::AsyncCallback*, ::System::Object*)>(&::NativeWebSocket::WebSocketOpenEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f3493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketOpenEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketOpenEventHandler::*)(::System::IAsyncResult*)>(&::NativeWebSocket::WebSocketOpenEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f34958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void NativeWebSocket::WebSocketOpenEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void NativeWebSocket::WebSocketOpenEventHandler::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* NativeWebSocket::WebSocketOpenEventHandler::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void NativeWebSocket::WebSocketOpenEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketOpenEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::NativeWebSocket::WebSocketOpenEventHandler* NativeWebSocket::WebSocketOpenEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketOpenEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketOpenEventHandler::WebSocketOpenEventHandler()   {
}
