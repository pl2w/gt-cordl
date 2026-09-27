#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ParameterCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__ParameterCode_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::ParameterCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ParameterCode::*)()>(&::Fusion::Photon::Realtime::ParameterCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ParameterCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::ParameterCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ParameterCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::ParameterCode* Fusion::Photon::Realtime::ParameterCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::ParameterCode*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::ParameterCode::ParameterCode()   {
}
