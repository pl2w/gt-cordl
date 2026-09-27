#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_Settings_AtlasSettings.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_Settings_AtlasSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Settings_LightCookieManager_AtlasSettings.get_isPow2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Settings_LightCookieManager_AtlasSettings::*)()>(&::GlobalNamespace::Settings_LightCookieManager_AtlasSettings::get_isPow2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb2573e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Settings_LightCookieManager_AtlasSettings>(),
                        {"get_isPow2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Settings_LightCookieManager_AtlasSettings.get_isSquare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Settings_LightCookieManager_AtlasSettings::*)()>(&::GlobalNamespace::Settings_LightCookieManager_AtlasSettings::get_isSquare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb257c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Settings_LightCookieManager_AtlasSettings>(),
                        {"get_isSquare", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Settings_LightCookieManager_AtlasSettings::get_isPow2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Settings_LightCookieManager_AtlasSettings>(),
                        {"get_isPow2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::Settings_LightCookieManager_AtlasSettings::get_isSquare()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Settings_LightCookieManager_AtlasSettings>(),
                        {"get_isSquare", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Settings_LightCookieManager_AtlasSettings::Settings_LightCookieManager_AtlasSettings(::UnityEngine::Vector2Int  resolution, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) noexcept  {
this->resolution = resolution;
this->format = format;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Settings_LightCookieManager_AtlasSettings::Settings_LightCookieManager_AtlasSettings()   {
}
