#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/UberShaderDynamicLight.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__UberShaderDynamicLight_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::UberShaderDynamicLight.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::UberShaderDynamicLight::*)()>(&::GT_CustomMapSupportRuntime::UberShaderDynamicLight::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9cb8d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::UberShaderDynamicLight*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::UberShaderDynamicLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::UberShaderDynamicLight::*)()>(&::GT_CustomMapSupportRuntime::UberShaderDynamicLight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb8e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::UberShaderDynamicLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& GT_CustomMapSupportRuntime::UberShaderDynamicLight::__cordl_internal_get_dynamicLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& GT_CustomMapSupportRuntime::UberShaderDynamicLight::__cordl_internal_get_dynamicLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicLight;
}
constexpr void GT_CustomMapSupportRuntime::UberShaderDynamicLight::__cordl_internal_set_dynamicLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicLight = value;
}
inline void GT_CustomMapSupportRuntime::UberShaderDynamicLight::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::UberShaderDynamicLight*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::UberShaderDynamicLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::UberShaderDynamicLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::UberShaderDynamicLight* GT_CustomMapSupportRuntime::UberShaderDynamicLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::UberShaderDynamicLight*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::UberShaderDynamicLight::UberShaderDynamicLight()   {
}
