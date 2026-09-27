#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ConfettiPopperHoldable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ConfettiPopperHoldable_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ConfettiPopperHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ConfettiPopperHoldable::*)()>(&::GorillaTag::Cosmetics::ConfettiPopperHoldable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d6dee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ConfettiPopperHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Cosmetics::ConfettiPopperHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ConfettiPopperHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ConfettiPopperHoldable* GorillaTag::Cosmetics::ConfettiPopperHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ConfettiPopperHoldable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ConfettiPopperHoldable::ConfettiPopperHoldable()   {
}
