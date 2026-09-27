#pragma once
// IWYU pragma private; include "UnityEngine/LightmapSettings.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightmapSettings_def.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightmapSettings.get_lightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LightmapData*> (*)()>(&::UnityEngine::LightmapSettings::get_lightmaps)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb580a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapSettings*>(),
                        {"get_lightmaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.set_lightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::LightmapData*>)>(&::UnityEngine::LightmapSettings::set_lightmaps)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb580a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapSettings*>(),
                        {"set_lightmaps", {}, {::i2c::type_of<::ArrayW<::UnityEngine::LightmapData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.set_lightmapsMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LightmapsMode)>(&::UnityEngine::LightmapSettings::set_lightmapsMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb580ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapSettings*>(),
                        {"set_lightmapsMode", {}, {::i2c::type_of<::UnityEngine::LightmapsMode>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::LightmapData*> UnityEngine::LightmapSettings::get_lightmaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapSettings*>(),
                        {"get_lightmaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LightmapData*>>(nullptr, ___internal_method);
}
inline void UnityEngine::LightmapSettings::set_lightmaps(/* [Unmarshalled] */ ::ArrayW<::UnityEngine::LightmapData*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapSettings*>(),
                        {"set_lightmaps", {}, {::i2c::type_of<::ArrayW<::UnityEngine::LightmapData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightmapSettings::set_lightmapsMode(::UnityEngine::LightmapsMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightmapSettings*>(),
                        {"set_lightmapsMode", {}, {::i2c::type_of<::UnityEngine::LightmapsMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::LightmapSettings::LightmapSettings()   {
}
