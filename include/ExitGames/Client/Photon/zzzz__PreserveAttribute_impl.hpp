#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::PreserveAttribute::*)()>(&::ExitGames::Client::Photon::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ec54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PreserveAttribute* ExitGames::Client::Photon::PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PreserveAttribute::PreserveAttribute()   {
}
