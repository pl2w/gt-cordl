#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/OperationTimeoutException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__OperationTimeoutException_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationTimeoutException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationTimeoutException::*)(::StringW)>(&::Fusion::Photon::Realtime::Async::OperationTimeoutException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f6936c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationTimeoutException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::Async::OperationTimeoutException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationTimeoutException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Fusion::Photon::Realtime::Async::OperationTimeoutException* Fusion::Photon::Realtime::Async::OperationTimeoutException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::OperationTimeoutException*>(message));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::OperationTimeoutException::OperationTimeoutException()   {
}
