#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/IAttachPointVelocityTracker.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IAttachPointVelocityTracker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IAttachPointVelocityProvider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker.UpdateAttachPointVelocityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker::UpdateAttachPointVelocityData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker.UpdateAttachPointVelocityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker::UpdateAttachPointVelocityData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker::UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attachTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker::UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform, ::UnityEngine::Transform*  xrOriginTransform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attachTransform, xrOriginTransform);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker::operator ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider* UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker::i___UnityEngine__XR__Interaction__Toolkit__Attachment__IAttachPointVelocityProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*>(static_cast<void*>(this));
}
