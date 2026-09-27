#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketInvalidStateException.hpp"
#include "NativeWebSocket/zzzz__WebSocketException_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketInvalidStateException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocketInvalidStateException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketInvalidStateException::*)()>(&::NativeWebSocket::WebSocketInvalidStateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f34f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketInvalidStateException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketInvalidStateException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketInvalidStateException::*)(::StringW)>(&::NativeWebSocket::WebSocketInvalidStateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f34f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketInvalidStateException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketInvalidStateException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketInvalidStateException::*)(::StringW, ::System::Exception*)>(&::NativeWebSocket::WebSocketInvalidStateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f34e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketInvalidStateException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void NativeWebSocket::WebSocketInvalidStateException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketInvalidStateException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NativeWebSocket::WebSocketInvalidStateException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketInvalidStateException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void NativeWebSocket::WebSocketInvalidStateException::_ctor(::StringW  message, ::System::Exception*  inner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketInvalidStateException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inner);
}
inline ::NativeWebSocket::WebSocketInvalidStateException* NativeWebSocket::WebSocketInvalidStateException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketInvalidStateException*>());
}
inline ::NativeWebSocket::WebSocketInvalidStateException* NativeWebSocket::WebSocketInvalidStateException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketInvalidStateException*>(message));
}
inline ::NativeWebSocket::WebSocketInvalidStateException* NativeWebSocket::WebSocketInvalidStateException::New_ctor(::StringW  message, ::System::Exception*  inner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketInvalidStateException*>(message, inner));
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketInvalidStateException::WebSocketInvalidStateException()   {
}
