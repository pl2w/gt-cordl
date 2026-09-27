#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/IBounds.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IBounds_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::IBounds.get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Oculus::Interaction::Surfaces::IBounds::*)()>(&::Oculus::Interaction::Surfaces::IBounds::get_Bounds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::IBounds*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::IBounds*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Bounds Oculus::Interaction::Surfaces::IBounds::get_Bounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::IBounds*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
