#pragma once
// IWYU pragma private; include "Viveport/DLC.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__DLC_def.hpp"
//  Writing Method size for method: ::Viveport::DLC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::DLC::*)()>(&::Viveport::DLC::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::DLC*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::DLC::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::DLC*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::DLC* Viveport::DLC::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::DLC*>());
}
// Ctor Parameters []
constexpr ::Viveport::DLC::DLC()   {
}
