#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/IXRBodyTransformation.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyTransformation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRMovableBody_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation::Apply(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
