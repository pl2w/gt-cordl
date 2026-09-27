#pragma once
// IWYU pragma private; include "GorillaTag/IDynamicFloat.hpp"
#include "GorillaTag/zzzz__IDynamicFloat_def.hpp"
//  Writing Method size for method: ::GorillaTag::IDynamicFloat.get_floatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::IDynamicFloat::*)()>(&::GorillaTag::IDynamicFloat::get_floatValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::IDynamicFloat*>(),
                    {::i2c::class_of<::GorillaTag::IDynamicFloat*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t GorillaTag::IDynamicFloat::get_floatValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::IDynamicFloat*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
