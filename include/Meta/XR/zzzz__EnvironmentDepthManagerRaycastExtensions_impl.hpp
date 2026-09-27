#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepthManagerRaycastExtensions.hpp"
#include "Meta/XR/zzzz__Eye_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/zzzz__EnvironmentDepthManagerRaycastExtensions_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__EnvironmentDepthManager_def.hpp"
#include "Meta/XR/zzzz__DepthRaycastHit_def.hpp"
#include "Meta/XR/zzzz__EnvironmentDepthRaycaster_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHit_def.hpp"
#include "Meta/XR/zzzz__Eye_def.hpp"
#include "Meta/XR/zzzz__IEnvironmentRaycastProvider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthManagerRaycastExtensions.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*, ::UnityEngine::Ray, ::by_ref<::Meta::XR::DepthRaycastHit>, float_t, ::Meta::XR::Eye, bool, bool)>(&::Meta::XR::EnvironmentDepthManagerRaycastExtensions::Raycast)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9efec3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"Raycast", {}, {::i2c::type_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Meta::XR::DepthRaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::Eye>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthManagerRaycastExtensions.SetRaycastWarmUpEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*, bool)>(&::Meta::XR::EnvironmentDepthManagerRaycastExtensions::SetRaycastWarmUpEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9eff280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"SetRaycastWarmUpEnabled", {}, {::i2c::type_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthManagerRaycastExtensions.EnsureDepthRaycastComponentIsPresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*)>(&::Meta::XR::EnvironmentDepthManagerRaycastExtensions::EnsureDepthRaycastComponentIsPresent)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9efedac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"EnsureDepthRaycastComponentIsPresent", {}, {::i2c::type_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthManagerRaycastExtensions.PlaceBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::IEnvironmentRaycastProvider*, ::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::Meta::XR::EnvironmentRaycastHit>, float_t)>(&::Meta::XR::EnvironmentDepthManagerRaycastExtensions::PlaceBox)> {
  constexpr static std::size_t size = 0xcb8;
  constexpr static std::size_t addrs = 0x9eff2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"PlaceBox", {}, {::i2c::type_of<::Meta::XR::IEnvironmentRaycastProvider*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Meta::XR::EnvironmentRaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthManagerRaycastExtensions.CheckBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::IEnvironmentRaycastProvider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Meta::XR::EnvironmentDepthManagerRaycastExtensions::CheckBox)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x9efffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"CheckBox", {}, {::i2c::type_of<::Meta::XR::IEnvironmentRaycastProvider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthManagerRaycastExtensions.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Meta::XR::EnvironmentDepthManagerRaycastExtensions::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f0063c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthManagerRaycastExtensions.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::Meta::XR::EnvironmentDepthManagerRaycastExtensions::DrawLine)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9f006f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::EnvironmentDepthManagerRaycastExtensions::setStaticF__depthRaycast(::UnityW<::Meta::XR::EnvironmentDepthRaycaster>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::XR::EnvironmentDepthRaycaster>, "_depthRaycast", ::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(std::forward<::UnityW<::Meta::XR::EnvironmentDepthRaycaster>>(value));
}
inline ::UnityW<::Meta::XR::EnvironmentDepthRaycaster> Meta::XR::EnvironmentDepthManagerRaycastExtensions::getStaticF__depthRaycast()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::EnvironmentDepthRaycaster>, "_depthRaycast", ::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>();
}
inline bool Meta::XR::EnvironmentDepthManagerRaycastExtensions::Raycast(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*  depthManager, ::UnityEngine::Ray  ray, ::by_ref<::Meta::XR::DepthRaycastHit>  hitInfo, float_t  maxDistance, ::Meta::XR::Eye  eye, bool  reconstructNormal, bool  allowOccludedRayOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"Raycast", {}, {::i2c::type_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Meta::XR::DepthRaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::Eye>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, depthManager, ray, hitInfo, maxDistance, eye, reconstructNormal, allowOccludedRayOrigin);
}
inline void Meta::XR::EnvironmentDepthManagerRaycastExtensions::SetRaycastWarmUpEnabled(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*  depthManager, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"SetRaycastWarmUpEnabled", {}, {::i2c::type_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, depthManager, value);
}
inline void Meta::XR::EnvironmentDepthManagerRaycastExtensions::EnsureDepthRaycastComponentIsPresent(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*  depthManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"EnsureDepthRaycastComponentIsPresent", {}, {::i2c::type_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, depthManager);
}
inline bool Meta::XR::EnvironmentDepthManagerRaycastExtensions::PlaceBox(::Meta::XR::IEnvironmentRaycastProvider*  provider, ::UnityEngine::Ray  ray, ::UnityEngine::Vector3  boxSize, ::UnityEngine::Vector3  upwards, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"PlaceBox", {}, {::i2c::type_of<::Meta::XR::IEnvironmentRaycastProvider*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Meta::XR::EnvironmentRaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, provider, ray, boxSize, upwards, hit, maxDistance);
}
inline bool Meta::XR::EnvironmentDepthManagerRaycastExtensions::CheckBox(::Meta::XR::IEnvironmentRaycastProvider*  provider, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"CheckBox", {}, {::i2c::type_of<::Meta::XR::IEnvironmentRaycastProvider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, provider, center, halfExtents, orientation);
}
inline void Meta::XR::EnvironmentDepthManagerRaycastExtensions::Log(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Meta::XR::EnvironmentDepthManagerRaycastExtensions::DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthManagerRaycastExtensions*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color);
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepthManagerRaycastExtensions::EnvironmentDepthManagerRaycastExtensions()   {
}
constexpr ::Meta::XR::Eye  Meta::XR::EnvironmentDepthManagerRaycastExtensions::DefaultEye{static_cast<int32_t>(0x2)};
