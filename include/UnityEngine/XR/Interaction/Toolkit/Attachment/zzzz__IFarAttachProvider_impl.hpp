#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/IFarAttachProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IFarAttachProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractableFarAttachMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider.get_farAttachMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode (::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider::get_farAttachMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider.set_farAttachMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider::set_farAttachMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider::get_farAttachMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider::set_farAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
