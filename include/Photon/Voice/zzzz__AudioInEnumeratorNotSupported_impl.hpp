#pragma once
// IWYU pragma private; include "Photon/Voice/AudioInEnumeratorNotSupported.hpp"
#include "Photon/Voice/zzzz__DeviceEnumeratorNotSupported_impl.hpp"
#include "Photon/Voice/zzzz__AudioInEnumeratorNotSupported_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
//  Writing Method size for method: ::Photon::Voice::AudioInEnumeratorNotSupported._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioInEnumeratorNotSupported::*)(::Photon::Voice::ILogger*)>(&::Photon::Voice::AudioInEnumeratorNotSupported::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa746330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInEnumeratorNotSupported*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::AudioInEnumeratorNotSupported::_ctor(::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInEnumeratorNotSupported*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline ::Photon::Voice::AudioInEnumeratorNotSupported* Photon::Voice::AudioInEnumeratorNotSupported::New_ctor(::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioInEnumeratorNotSupported*>(logger));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioInEnumeratorNotSupported::AudioInEnumeratorNotSupported()   {
}
