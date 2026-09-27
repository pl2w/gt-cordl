#pragma once
// IWYU pragma private; include "Photon/Voice/UnsupportedPlatformException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Photon/Voice/zzzz__UnsupportedPlatformException_def.hpp"
//  Writing Method size for method: ::Photon::Voice::UnsupportedPlatformException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::UnsupportedPlatformException::*)(::StringW, ::StringW)>(&::Photon::Voice::UnsupportedPlatformException::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa7531e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::UnsupportedPlatformException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::UnsupportedPlatformException::_ctor(::StringW  subject, ::StringW  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::UnsupportedPlatformException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subject, platform);
}
inline ::Photon::Voice::UnsupportedPlatformException* Photon::Voice::UnsupportedPlatformException::New_ctor(::StringW  subject, ::StringW  platform)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::UnsupportedPlatformException*>(subject, platform));
}
// Ctor Parameters []
constexpr ::Photon::Voice::UnsupportedPlatformException::UnsupportedPlatformException()   {
}
