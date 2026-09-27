#pragma once
// IWYU pragma private; include "Photon/Voice/UnsupportedCodecException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Photon/Voice/zzzz__UnsupportedCodecException_def.hpp"
#include "Photon/Voice/zzzz__Codec_def.hpp"
//  Writing Method size for method: ::Photon::Voice::UnsupportedCodecException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::UnsupportedCodecException::*)(::StringW, ::Photon::Voice::Codec)>(&::Photon::Voice::UnsupportedCodecException::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa7530e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::UnsupportedCodecException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Voice::Codec>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::UnsupportedCodecException::_ctor(::StringW  info, ::Photon::Voice::Codec  codec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::UnsupportedCodecException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Voice::Codec>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, codec);
}
inline ::Photon::Voice::UnsupportedCodecException* Photon::Voice::UnsupportedCodecException::New_ctor(::StringW  info, ::Photon::Voice::Codec  codec)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::UnsupportedCodecException*>(info, codec));
}
// Ctor Parameters []
constexpr ::Photon::Voice::UnsupportedCodecException::UnsupportedCodecException()   {
}
