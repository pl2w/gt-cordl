#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxisControllerManagerAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxisControllerManagerAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::InputAxisControllerManagerAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::InputAxisControllerManagerAttribute::*)()>(&::Unity::Cinemachine::InputAxisControllerManagerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb853c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManagerAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::InputAxisControllerManagerAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxisControllerManagerAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::InputAxisControllerManagerAttribute* Unity::Cinemachine::InputAxisControllerManagerAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::InputAxisControllerManagerAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::InputAxisControllerManagerAttribute::InputAxisControllerManagerAttribute()   {
}
