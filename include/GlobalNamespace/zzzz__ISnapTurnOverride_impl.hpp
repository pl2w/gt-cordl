#pragma once
// IWYU pragma private; include "GlobalNamespace/ISnapTurnOverride.hpp"
#include "GlobalNamespace/zzzz__ISnapTurnOverride_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISnapTurnOverride.TurnOverrideActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ISnapTurnOverride::*)()>(&::GlobalNamespace::ISnapTurnOverride::TurnOverrideActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ISnapTurnOverride*>(),
                    {::i2c::class_of<::GlobalNamespace::ISnapTurnOverride*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ISnapTurnOverride::TurnOverrideActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ISnapTurnOverride*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
