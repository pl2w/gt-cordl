#pragma once
// IWYU pragma private; include "Photon/Voice/UnsupportedSampleTypeException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Photon/Voice/zzzz__UnsupportedSampleTypeException_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Photon::Voice::UnsupportedSampleTypeException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::UnsupportedSampleTypeException::*)(::System::Type*)>(&::Photon::Voice::UnsupportedSampleTypeException::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa753030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::UnsupportedSampleTypeException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::UnsupportedSampleTypeException::_ctor(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::UnsupportedSampleTypeException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::Photon::Voice::UnsupportedSampleTypeException* Photon::Voice::UnsupportedSampleTypeException::New_ctor(::System::Type*  t)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::UnsupportedSampleTypeException*>(t));
}
// Ctor Parameters []
constexpr ::Photon::Voice::UnsupportedSampleTypeException::UnsupportedSampleTypeException()   {
}
