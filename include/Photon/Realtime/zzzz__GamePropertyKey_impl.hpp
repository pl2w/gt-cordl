#pragma once
// IWYU pragma private; include "Photon/Realtime/GamePropertyKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__GamePropertyKey_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::GamePropertyKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::GamePropertyKey::*)()>(&::Photon::Realtime::GamePropertyKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7095b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::GamePropertyKey*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::GamePropertyKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::GamePropertyKey*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::GamePropertyKey* Photon::Realtime::GamePropertyKey::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::GamePropertyKey*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::GamePropertyKey::GamePropertyKey()   {
}
