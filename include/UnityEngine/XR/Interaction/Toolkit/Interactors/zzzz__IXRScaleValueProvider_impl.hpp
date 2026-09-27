#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRScaleValueProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRScaleValueProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__ScaleMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider.get_scaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::get_scaleMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider.set_scaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::set_scaleMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider.get_scaleValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::get_scaleValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::get_scaleMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::set_scaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider::get_scaleValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
