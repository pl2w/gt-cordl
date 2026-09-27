#pragma once
// IWYU pragma private; include "Photon/Voice/VideoInEnumeratorNotSupported.hpp"
#include "Photon/Voice/zzzz__DeviceEnumeratorNotSupported_impl.hpp"
#include "Photon/Voice/zzzz__VideoInEnumeratorNotSupported_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
//  Writing Method size for method: ::Photon::Voice::VideoInEnumeratorNotSupported._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VideoInEnumeratorNotSupported::*)(::Photon::Voice::ILogger*)>(&::Photon::Voice::VideoInEnumeratorNotSupported::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa746398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VideoInEnumeratorNotSupported*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::VideoInEnumeratorNotSupported::_ctor(::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VideoInEnumeratorNotSupported*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline ::Photon::Voice::VideoInEnumeratorNotSupported* Photon::Voice::VideoInEnumeratorNotSupported::New_ctor(::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VideoInEnumeratorNotSupported*>(logger));
}
// Ctor Parameters []
constexpr ::Photon::Voice::VideoInEnumeratorNotSupported::VideoInEnumeratorNotSupported()   {
}
