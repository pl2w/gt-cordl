#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SaveDuringPlayAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__SaveDuringPlayAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::SaveDuringPlayAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SaveDuringPlayAttribute::*)()>(&::Unity::Cinemachine::SaveDuringPlayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee7328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SaveDuringPlayAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::SaveDuringPlayAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SaveDuringPlayAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::SaveDuringPlayAttribute* Unity::Cinemachine::SaveDuringPlayAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::SaveDuringPlayAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::SaveDuringPlayAttribute::SaveDuringPlayAttribute()   {
}
