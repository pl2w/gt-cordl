#pragma once
// IWYU pragma private; include "GlobalNamespace/LegacyBalloonHoldable.hpp"
#include "GlobalNamespace/zzzz__LegacyTransferrableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LegacyBalloonHoldable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegacyBalloonHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegacyBalloonHoldable::*)()>(&::GlobalNamespace::LegacyBalloonHoldable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573690c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyBalloonHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LegacyBalloonHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyBalloonHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LegacyBalloonHoldable* GlobalNamespace::LegacyBalloonHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegacyBalloonHoldable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegacyBalloonHoldable::LegacyBalloonHoldable()   {
}
