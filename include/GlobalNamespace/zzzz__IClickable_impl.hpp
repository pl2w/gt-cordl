#pragma once
// IWYU pragma private; include "GlobalNamespace/IClickable.hpp"
#include "GlobalNamespace/zzzz__IClickable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IClickable.Click
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IClickable::*)(bool)>(&::GlobalNamespace::IClickable::Click)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IClickable*>(),
                    {::i2c::class_of<::GlobalNamespace::IClickable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IClickable::Click(bool  leftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IClickable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
