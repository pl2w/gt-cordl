#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketUnexpectedException.hpp"
#include "NativeWebSocket/zzzz__WebSocketException_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocketUnexpectedException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocketUnexpectedException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketUnexpectedException::*)()>(&::NativeWebSocket::WebSocketUnexpectedException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f34f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketUnexpectedException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketUnexpectedException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketUnexpectedException::*)(::StringW)>(&::NativeWebSocket::WebSocketUnexpectedException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f34f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketUnexpectedException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocketUnexpectedException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocketUnexpectedException::*)(::StringW, ::System::Exception*)>(&::NativeWebSocket::WebSocketUnexpectedException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f34e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketUnexpectedException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void NativeWebSocket::WebSocketUnexpectedException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketUnexpectedException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NativeWebSocket::WebSocketUnexpectedException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketUnexpectedException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void NativeWebSocket::WebSocketUnexpectedException::_ctor(::StringW  message, ::System::Exception*  inner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocketUnexpectedException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inner);
}
inline ::NativeWebSocket::WebSocketUnexpectedException* NativeWebSocket::WebSocketUnexpectedException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketUnexpectedException*>());
}
inline ::NativeWebSocket::WebSocketUnexpectedException* NativeWebSocket::WebSocketUnexpectedException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketUnexpectedException*>(message));
}
inline ::NativeWebSocket::WebSocketUnexpectedException* NativeWebSocket::WebSocketUnexpectedException::New_ctor(::StringW  message, ::System::Exception*  inner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocketUnexpectedException*>(message, inner));
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocketUnexpectedException::WebSocketUnexpectedException()   {
}
