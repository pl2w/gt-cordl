#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Vector2AsRangeAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__Vector2AsRangeAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::Vector2AsRangeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Vector2AsRangeAttribute::*)()>(&::Unity::Cinemachine::Vector2AsRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb3724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Vector2AsRangeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::Vector2AsRangeAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Vector2AsRangeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::Vector2AsRangeAttribute* Unity::Cinemachine::Vector2AsRangeAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::Vector2AsRangeAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Vector2AsRangeAttribute::Vector2AsRangeAttribute()   {
}
