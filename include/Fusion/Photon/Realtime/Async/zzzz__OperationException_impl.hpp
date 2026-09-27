#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/OperationException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__OperationException_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::OperationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::OperationException::*)(int16_t, ::StringW)>(&::Fusion::Photon::Realtime::Async::OperationException::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f6923c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationException*>(),
                        {".ctor", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int16_t& Fusion::Photon::Realtime::Async::OperationException::__cordl_internal_get_ErrorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorCode;
}
constexpr int16_t const& Fusion::Photon::Realtime::Async::OperationException::__cordl_internal_get_ErrorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorCode;
}
constexpr void Fusion::Photon::Realtime::Async::OperationException::__cordl_internal_set_ErrorCode(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorCode = value;
}
inline void Fusion::Photon::Realtime::Async::OperationException::_ctor(int16_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::OperationException*>(),
                        {".ctor", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, message);
}
inline ::Fusion::Photon::Realtime::Async::OperationException* Fusion::Photon::Realtime::Async::OperationException::New_ctor(int16_t  errorCode, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::OperationException*>(errorCode, message));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::OperationException::OperationException()   {
}
