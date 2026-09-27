#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/ITunnelingVignetteProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__ITunnelingVignetteProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__VignetteParameters_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider.get_vignetteParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider::get_vignetteParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider::get_vignetteParameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>(this, ___internal_method);
}
