#pragma once
// IWYU pragma private; include "Photon/Realtime/ErrorCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__ErrorCode_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ErrorCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ErrorCode::*)()>(&::Photon::Realtime::ErrorCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7095a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ErrorCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::ErrorCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ErrorCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::ErrorCode* Photon::Realtime::ErrorCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::ErrorCode*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ErrorCode::ErrorCode()   {
}
