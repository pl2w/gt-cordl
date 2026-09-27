#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManagerEventRelay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameLightingManagerEventRelay_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLightingManagerEventRelay.SetCustomDynamicLightingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManagerEventRelay::*)(bool)>(&::GlobalNamespace::GameLightingManagerEventRelay::SetCustomDynamicLightingEnabled)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5705d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManagerEventRelay*>(),
                        {"SetCustomDynamicLightingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManagerEventRelay.SetNearsightedDimLightIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManagerEventRelay::*)(float_t)>(&::GlobalNamespace::GameLightingManagerEventRelay::SetNearsightedDimLightIntensity)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5705e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManagerEventRelay*>(),
                        {"SetNearsightedDimLightIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManagerEventRelay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManagerEventRelay::*)()>(&::GlobalNamespace::GameLightingManagerEventRelay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5705f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManagerEventRelay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameLightingManagerEventRelay::SetCustomDynamicLightingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManagerEventRelay*>(),
                        {"SetCustomDynamicLightingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLightingManagerEventRelay::SetNearsightedDimLightIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManagerEventRelay*>(),
                        {"SetNearsightedDimLightIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLightingManagerEventRelay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManagerEventRelay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLightingManagerEventRelay* GlobalNamespace::GameLightingManagerEventRelay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLightingManagerEventRelay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLightingManagerEventRelay::GameLightingManagerEventRelay()   {
}
