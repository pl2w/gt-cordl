#pragma once
// IWYU pragma private; include "Viveport/Arcade/Session.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/Arcade/zzzz__Session_def.hpp"
//  Writing Method size for method: ::Viveport::Arcade::Session._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Arcade::Session::*)()>(&::Viveport::Arcade::Session::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5a588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Arcade::Session*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Arcade::Session::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Arcade::Session*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Arcade::Session* Viveport::Arcade::Session::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Arcade::Session*>());
}
// Ctor Parameters []
constexpr ::Viveport::Arcade::Session::Session()   {
}
