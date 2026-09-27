#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/InvalidDataException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__InvalidDataException_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::InvalidDataException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::InvalidDataException::*)(::StringW)>(&::ExitGames::Client::Photon::InvalidDataException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6d21fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::InvalidDataException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::InvalidDataException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::InvalidDataException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::ExitGames::Client::Photon::InvalidDataException* ExitGames::Client::Photon::InvalidDataException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::InvalidDataException*>(message));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::InvalidDataException::InvalidDataException()   {
}
