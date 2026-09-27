#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketMessageEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketMessageEventHandler_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocketMessageEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketMessageEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::NativeWebSocket::WebSocketMessageEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f34964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketMessageEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketMessageEventHandler::*)(::ArrayW<uint8_t>)>(&::NativeWebSocket::WebSocketMessageEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f34a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketMessageEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::NativeWebSocket::WebSocketMessageEventHandler::*)(::ArrayW<uint8_t>, ::System::AsyncCallback*, ::System::Object*)>(&::NativeWebSocket::WebSocketMessageEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f34a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketMessageEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketMessageEventHandler::*)(::System::IAsyncResult*)>(&::NativeWebSocket::WebSocketMessageEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f34a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(),
                    {::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void NativeWebSocket::WebSocketMessageEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void NativeWebSocket::WebSocketMessageEventHandler::Invoke(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* NativeWebSocket::WebSocketMessageEventHandler::BeginInvoke(::ArrayW<uint8_t>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void NativeWebSocket::WebSocketMessageEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::WebSocketMessageEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::NativeWebSocket::WebSocketMessageEventHandler* NativeWebSocket::WebSocketMessageEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketMessageEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketMessageEventHandler::WebSocketMessageEventHandler()   {
}
