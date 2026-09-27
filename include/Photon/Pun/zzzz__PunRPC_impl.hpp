#pragma once
// IWYU pragma private; include "Photon/Pun/PunRPC.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Photon/Pun/zzzz__PunRPC_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PunRPC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PunRPC::*)()>(&::Photon::Pun::PunRPC::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72b6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunRPC*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::PunRPC::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunRPC*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PunRPC* Photon::Pun::PunRPC::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PunRPC*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PunRPC::PunRPC()   {
}
