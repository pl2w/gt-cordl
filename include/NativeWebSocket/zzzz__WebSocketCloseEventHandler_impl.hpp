#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketCloseEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketCloseEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocketCloseEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketCloseEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::NativeWebSocket::WebSocketCloseEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f34b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketCloseEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketCloseEventHandler::*)(::NativeWebSocket::WebSocketCloseCode)>(&::NativeWebSocket::WebSocketCloseEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f34be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketCloseEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::NativeWebSocket::WebSocketCloseEventHandler::*)(::NativeWebSocket::WebSocketCloseCode, ::System::AsyncCallback*, ::System::Object*)>(&::NativeWebSocket::WebSocketCloseEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f34bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketCloseEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketCloseEventHandler::*)(::System::IAsyncResult*)>(&::NativeWebSocket::WebSocketCloseEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f34c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void NativeWebSocket::WebSocketCloseEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void NativeWebSocket::WebSocketCloseEventHandler::Invoke(::NativeWebSocket::WebSocketCloseCode  closeCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeCode);
}
inline ::System::IAsyncResult* NativeWebSocket::WebSocketCloseEventHandler::BeginInvoke(::NativeWebSocket::WebSocketCloseCode  closeCode, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, closeCode, callback, object);
}
inline void NativeWebSocket::WebSocketCloseEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketCloseEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::NativeWebSocket::WebSocketCloseEventHandler* NativeWebSocket::WebSocketCloseEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketCloseEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketCloseEventHandler::WebSocketCloseEventHandler()   {
}
