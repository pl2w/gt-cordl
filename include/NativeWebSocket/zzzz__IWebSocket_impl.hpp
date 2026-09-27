#pragma once
// IWYU pragma private; include "NativeWebSocket/IWebSocket.hpp"
#include "NativeWebSocket/zzzz__IWebSocket_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketCloseEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketErrorEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketMessageEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketOpenEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketState_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.add_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::IWebSocket::*)(::NativeWebSocket::WebSocketOpenEventHandler*)>(&::NativeWebSocket::IWebSocket::add_OnOpen)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.remove_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::IWebSocket::*)(::NativeWebSocket::WebSocketOpenEventHandler*)>(&::NativeWebSocket::IWebSocket::remove_OnOpen)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.add_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::IWebSocket::*)(::NativeWebSocket::WebSocketMessageEventHandler*)>(&::NativeWebSocket::IWebSocket::add_OnMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.remove_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::IWebSocket::*)(::NativeWebSocket::WebSocketMessageEventHandler*)>(&::NativeWebSocket::IWebSocket::remove_OnMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.add_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::IWebSocket::*)(::NativeWebSocket::WebSocketErrorEventHandler*)>(&::NativeWebSocket::IWebSocket::add_OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.remove_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::IWebSocket::*)(::NativeWebSocket::WebSocketErrorEventHandler*)>(&::NativeWebSocket::IWebSocket::remove_OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.add_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::IWebSocket::*)(::NativeWebSocket::WebSocketCloseEventHandler*)>(&::NativeWebSocket::IWebSocket::add_OnClose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.remove_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::IWebSocket::*)(::NativeWebSocket::WebSocketCloseEventHandler*)>(&::NativeWebSocket::IWebSocket::remove_OnClose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::IWebSocket.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NativeWebSocket::WebSocketState (::NativeWebSocket::IWebSocket::*)()>(&::NativeWebSocket::IWebSocket::get_State)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NativeWebSocket::IWebSocket*>(),
                    {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void NativeWebSocket::IWebSocket::add_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::IWebSocket::remove_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::IWebSocket::add_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::IWebSocket::remove_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::IWebSocket::add_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::IWebSocket::remove_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::IWebSocket::add_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::IWebSocket::remove_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::NativeWebSocket::WebSocketState NativeWebSocket::IWebSocket::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NativeWebSocket::IWebSocket*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::NativeWebSocket::WebSocketState>(this, ___internal_method);
}
