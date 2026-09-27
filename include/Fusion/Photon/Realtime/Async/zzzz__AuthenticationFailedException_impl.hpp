#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/AuthenticationFailedException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__AuthenticationFailedException_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::AuthenticationFailedException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::AuthenticationFailedException::*)(::StringW)>(&::Fusion::Photon::Realtime::Async::AuthenticationFailedException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f691d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::AuthenticationFailedException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::Async::AuthenticationFailedException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::AuthenticationFailedException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Fusion::Photon::Realtime::Async::AuthenticationFailedException* Fusion::Photon::Realtime::Async::AuthenticationFailedException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::AuthenticationFailedException*>(message));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::AuthenticationFailedException::AuthenticationFailedException()   {
}
