#pragma once
// IWYU pragma private; include "Meta/XR/IEnvironmentRaycastProvider.hpp"
#include "Meta/XR/zzzz__IEnvironmentRaycastProvider_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHit_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::Meta::XR::IEnvironmentRaycastProvider.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::IEnvironmentRaycastProvider::*)()>(&::Meta::XR::IEnvironmentRaycastProvider::get_IsSupported)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(),
                    {::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::IEnvironmentRaycastProvider.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::IEnvironmentRaycastProvider::*)(bool)>(&::Meta::XR::IEnvironmentRaycastProvider::SetEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(),
                    {::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::IEnvironmentRaycastProvider.get_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::IEnvironmentRaycastProvider::*)()>(&::Meta::XR::IEnvironmentRaycastProvider::get_IsReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(),
                    {::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::IEnvironmentRaycastProvider.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::IEnvironmentRaycastProvider::*)(::UnityEngine::Ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>, float_t, bool, bool)>(&::Meta::XR::IEnvironmentRaycastProvider::Raycast)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(),
                    {::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Meta::XR::IEnvironmentRaycastProvider::get_IsSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::IEnvironmentRaycastProvider::SetEnabled(bool  isEnabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled);
}
inline bool Meta::XR::IEnvironmentRaycastProvider::get_IsReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::IEnvironmentRaycastProvider::Raycast(::UnityEngine::Ray  ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit, float_t  maxDistance, bool  reconstructNormal, bool  allowOccludedRayOrigin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::IEnvironmentRaycastProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance, reconstructNormal, allowOccludedRayOrigin);
}
