#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/AttachPointVelocityProviderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__AttachPointVelocityProviderExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IAttachPointVelocityProvider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions.GetAttachPointVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions::GetAttachPointVelocity)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4adff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions*>(),
                        {"GetAttachPointVelocity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions.GetAttachPointAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions::GetAttachPointAngularVelocity)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4ae0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions*>(),
                        {"GetAttachPointAngularVelocity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions::GetAttachPointVelocity(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*  provider, ::UnityEngine::Transform*  xrOriginTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions*>(),
                        {"GetAttachPointVelocity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, provider, xrOriginTransform);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions::GetAttachPointAngularVelocity(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*  provider, ::UnityEngine::Transform*  xrOriginTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions*>(),
                        {"GetAttachPointAngularVelocity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, provider, xrOriginTransform);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions::AttachPointVelocityProviderExtensions()   {
}
