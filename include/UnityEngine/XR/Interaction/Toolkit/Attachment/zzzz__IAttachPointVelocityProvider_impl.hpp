#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/IAttachPointVelocityProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IAttachPointVelocityProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider.GetAttachPointVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider::GetAttachPointVelocity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider.GetAttachPointAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider::GetAttachPointAngularVelocity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider::GetAttachPointVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider::GetAttachPointAngularVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
