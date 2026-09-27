#pragma once
// IWYU pragma private; include "Photon/Pun/PunEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PunEvent_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PunEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PunEvent::*)()>(&::Photon::Pun::PunEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::PunEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PunEvent* Photon::Pun::PunEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PunEvent*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PunEvent::PunEvent()   {
}
