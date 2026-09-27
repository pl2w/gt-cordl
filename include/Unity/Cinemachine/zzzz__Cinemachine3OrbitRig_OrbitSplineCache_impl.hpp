#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Cinemachine3OrbitRig_OrbitSplineCache.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_Settings_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_OrbitSplineCache_def.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_Settings_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache.SettingsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::*)(::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>)>(&::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::SettingsChanged)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaea055c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache>(),
                        {"SettingsChanged", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache.UpdateOrbitCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::*)(::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>)>(&::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::UpdateOrbitCache)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xaea05d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache>(),
                        {"UpdateOrbitCache", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache.SplineValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::*)(float_t)>(&::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::SplineValue)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xaea03a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache>(),
                        {"SplineValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::SettingsChanged(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache>(),
                        {"SettingsChanged", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::UpdateOrbitCache(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>  orbits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache>(),
                        {"UpdateOrbitCache", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, orbits);
}
inline ::UnityEngine::Vector4 GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::SplineValue(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache>(),
                        {"SplineValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, t);
}
// Ctor Parameters [CppParam { name: "OrbitSettings", ty: "::GlobalNamespace::Cinemachine3OrbitRig_Settings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CachedKnots", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CachedCtrl1", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CachedCtrl2", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::Cinemachine3OrbitRig_OrbitSplineCache(::GlobalNamespace::Cinemachine3OrbitRig_Settings  OrbitSettings, ::ArrayW<::UnityEngine::Vector4>  CachedKnots, ::ArrayW<::UnityEngine::Vector4>  CachedCtrl1, ::ArrayW<::UnityEngine::Vector4>  CachedCtrl2) noexcept  {
this->OrbitSettings = OrbitSettings;
this->CachedKnots = CachedKnots;
this->CachedCtrl1 = CachedCtrl1;
this->CachedCtrl2 = CachedCtrl2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache::Cinemachine3OrbitRig_OrbitSplineCache()   {
}
