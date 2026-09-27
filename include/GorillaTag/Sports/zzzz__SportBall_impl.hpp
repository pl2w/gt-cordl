#pragma once
// IWYU pragma private; include "GorillaTag/Sports/SportBall.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Sports/zzzz__SportBall_def.hpp"
//  Writing Method size for method: ::GorillaTag::Sports::SportBall._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportBall::*)()>(&::GorillaTag::Sports::SportBall::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3bc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportBall*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Sports::SportBall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportBall*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Sports::SportBall* GorillaTag::Sports::SportBall::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Sports::SportBall*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Sports::SportBall::SportBall()   {
}
