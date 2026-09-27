#pragma once
// IWYU pragma private; include "Unity/Cinemachine/DelayedVectorAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__DelayedVectorAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::DelayedVectorAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::DelayedVectorAttribute::*)()>(&::Unity::Cinemachine::DelayedVectorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb372c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DelayedVectorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::DelayedVectorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DelayedVectorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::DelayedVectorAttribute* Unity::Cinemachine::DelayedVectorAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::DelayedVectorAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::DelayedVectorAttribute::DelayedVectorAttribute()   {
}
