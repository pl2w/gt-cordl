#pragma once
// IWYU pragma private; include "GlobalNamespace/IBuilderTappable.hpp"
#include "GlobalNamespace/zzzz__IBuilderTappable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBuilderTappable.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBuilderTappable::*)(float_t)>(&::GlobalNamespace::IBuilderTappable::OnTapLocal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IBuilderTappable*>(),
                    {::i2c::class_of<::GlobalNamespace::IBuilderTappable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBuilderTappable::OnTapLocal(float_t  tapStrength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IBuilderTappable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength);
}
