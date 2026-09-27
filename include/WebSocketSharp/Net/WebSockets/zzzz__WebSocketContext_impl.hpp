#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/WebSockets/WebSocketContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/WebSockets/zzzz__WebSocketContext_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::WebSockets::WebSocketContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebSockets::WebSocketContext::*)()>(&::WebSocketSharp::Net::WebSockets::WebSocketContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98b5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebSockets::WebSocketContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WebSocketSharp::Net::WebSockets::WebSocketContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebSockets::WebSocketContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WebSocketSharp::Net::WebSockets::WebSocketContext* WebSocketSharp::Net::WebSockets::WebSocketContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::WebSockets::WebSocketContext*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::WebSockets::WebSocketContext::WebSocketContext()   {
}
