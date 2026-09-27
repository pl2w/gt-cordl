#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/DisconnectException.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__DisconnectException_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::DisconnectException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::DisconnectException::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::Async::DisconnectException::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f69124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::DisconnectException*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::DisconnectCause& Fusion::Photon::Realtime::Async::DisconnectException::__cordl_internal_get_Cause()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cause;
}
constexpr ::Fusion::Photon::Realtime::DisconnectCause const& Fusion::Photon::Realtime::Async::DisconnectException::__cordl_internal_get_Cause() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cause;
}
constexpr void Fusion::Photon::Realtime::Async::DisconnectException::__cordl_internal_set_Cause(::Fusion::Photon::Realtime::DisconnectCause  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cause = value;
}
inline void Fusion::Photon::Realtime::Async::DisconnectException::_ctor(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::DisconnectException*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline ::Fusion::Photon::Realtime::Async::DisconnectException* Fusion::Photon::Realtime::Async::DisconnectException::New_ctor(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::DisconnectException*>(cause));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::DisconnectException::DisconnectException()   {
}
