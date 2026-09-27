#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/IBoundsClipper.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IBoundsClipper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::IBoundsClipper.GetLocalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::IBoundsClipper::*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Bounds>)>(&::Oculus::Interaction::Surfaces::IBoundsClipper::GetLocalBounds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::IBoundsClipper*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::IBoundsClipper*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::Surfaces::IBoundsClipper::GetLocalBounds(::UnityEngine::Transform*  localTo, ::by_ref<::UnityEngine::Bounds>  bounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::IBoundsClipper*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localTo, bounds);
}
