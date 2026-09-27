#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBoxShaderSettings.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBoxShaderSettings_def.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxShaderSettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxShaderSettings::*)()>(&::GlobalNamespace::GorillaTriggerBoxShaderSettings::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x579df78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxShaderSettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxShaderSettings.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxShaderSettings::*)()>(&::GlobalNamespace::GorillaTriggerBoxShaderSettings::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x579e018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxShaderSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxShaderSettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxShaderSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxShaderSettings::*)()>(&::GlobalNamespace::GorillaTriggerBoxShaderSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579e160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxShaderSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_get_settingsRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_get_settingsRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsRef;
}
constexpr void GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_set_settingsRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsRef = value;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_get_sameSceneSettingsRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sameSceneSettingsRef;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_get_sameSceneSettingsRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sameSceneSettingsRef;
}
constexpr void GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_set_sameSceneSettingsRef(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sameSceneSettingsRef = value;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GlobalNamespace::GorillaTriggerBoxShaderSettings::__cordl_internal_set_settings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
inline void GlobalNamespace::GorillaTriggerBoxShaderSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxShaderSettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTriggerBoxShaderSettings::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxShaderSettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTriggerBoxShaderSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxShaderSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTriggerBoxShaderSettings* GlobalNamespace::GorillaTriggerBoxShaderSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTriggerBoxShaderSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTriggerBoxShaderSettings::GorillaTriggerBoxShaderSettings()   {
}
