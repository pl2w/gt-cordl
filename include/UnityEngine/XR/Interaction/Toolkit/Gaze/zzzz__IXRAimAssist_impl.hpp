#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Gaze/IXRAimAssist.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Gaze/zzzz__IXRAimAssist_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist.GetAssistedVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist::GetAssistedVelocity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist.GetAssistedVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist::GetAssistedVelocity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist::GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, source, velocity, gravity);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist::GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, source, velocity, gravity, maxAngle);
}
