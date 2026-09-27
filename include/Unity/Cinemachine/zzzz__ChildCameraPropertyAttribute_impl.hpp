#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ChildCameraPropertyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__ChildCameraPropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ChildCameraPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ChildCameraPropertyAttribute::*)()>(&::Unity::Cinemachine::ChildCameraPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb37a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ChildCameraPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::ChildCameraPropertyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ChildCameraPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ChildCameraPropertyAttribute* Unity::Cinemachine::ChildCameraPropertyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::ChildCameraPropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ChildCameraPropertyAttribute::ChildCameraPropertyAttribute()   {
}
