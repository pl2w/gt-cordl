#pragma once
// IWYU pragma private; include "Photon/Realtime/ParameterCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__ParameterCode_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ParameterCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ParameterCode::*)()>(&::Photon::Realtime::ParameterCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7095c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ParameterCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::ParameterCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ParameterCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::ParameterCode* Photon::Realtime::ParameterCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::ParameterCode*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ParameterCode::ParameterCode()   {
}
