#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyboxSettings.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SkyboxSettings_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkyboxSettings.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxSettings::*)()>(&::GlobalNamespace::SkyboxSettings::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56ad800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxSettings*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxSettings::*)()>(&::GlobalNamespace::SkyboxSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ad878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SkyboxSettings::__cordl_internal_get__skyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skyMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SkyboxSettings::__cordl_internal_get__skyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skyMaterial;
}
constexpr void GlobalNamespace::SkyboxSettings::__cordl_internal_set__skyMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skyMaterial = value;
}
inline void GlobalNamespace::SkyboxSettings::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxSettings*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyboxSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkyboxSettings* GlobalNamespace::SkyboxSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkyboxSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyboxSettings::SkyboxSettings()   {
}
