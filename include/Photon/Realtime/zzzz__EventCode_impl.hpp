#pragma once
// IWYU pragma private; include "Photon/Realtime/EventCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__EventCode_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::EventCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::EventCode::*)()>(&::Photon::Realtime::EventCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7095bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::EventCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::EventCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::EventCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::EventCode* Photon::Realtime::EventCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::EventCode*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::EventCode::EventCode()   {
}
