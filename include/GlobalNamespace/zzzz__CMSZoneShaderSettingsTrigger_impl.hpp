#pragma once
// IWYU pragma private; include "GlobalNamespace/CMSZoneShaderSettingsTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CMSZoneShaderSettingsTrigger_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ZoneShaderTriggerSettings_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CMSZoneShaderSettingsTrigger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CMSZoneShaderSettingsTrigger::*)()>(&::GlobalNamespace::CMSZoneShaderSettingsTrigger::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59a97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CMSZoneShaderSettingsTrigger.CopySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CMSZoneShaderSettingsTrigger::*)(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*)>(&::GlobalNamespace::CMSZoneShaderSettingsTrigger::CopySettings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x59a990c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {"CopySettings", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CMSZoneShaderSettingsTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CMSZoneShaderSettingsTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CMSZoneShaderSettingsTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59a99e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CMSZoneShaderSettingsTrigger.ActivateShaderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CMSZoneShaderSettingsTrigger::*)()>(&::GlobalNamespace::CMSZoneShaderSettingsTrigger::ActivateShaderSettings)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59a9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {"ActivateShaderSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CMSZoneShaderSettingsTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CMSZoneShaderSettingsTrigger::*)()>(&::GlobalNamespace::CMSZoneShaderSettingsTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a9ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_get_shaderSettingsObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderSettingsObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_get_shaderSettingsObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderSettingsObject;
}
constexpr void GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_set_shaderSettingsObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderSettingsObject = value;
}
constexpr bool& GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_get_activateCustomMapDefaults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateCustomMapDefaults;
}
constexpr bool const& GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_get_activateCustomMapDefaults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateCustomMapDefaults;
}
constexpr void GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_set_activateCustomMapDefaults(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activateCustomMapDefaults = value;
}
constexpr bool& GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_get_activateOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnEnable;
}
constexpr bool const& GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_get_activateOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnEnable;
}
constexpr void GlobalNamespace::CMSZoneShaderSettingsTrigger::__cordl_internal_set_activateOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activateOnEnable = value;
}
inline void GlobalNamespace::CMSZoneShaderSettingsTrigger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CMSZoneShaderSettingsTrigger::CopySettings(::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*  triggerSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {"CopySettings", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerSettings);
}
inline void GlobalNamespace::CMSZoneShaderSettingsTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::CMSZoneShaderSettingsTrigger::ActivateShaderSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {"ActivateShaderSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CMSZoneShaderSettingsTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CMSZoneShaderSettingsTrigger* GlobalNamespace::CMSZoneShaderSettingsTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CMSZoneShaderSettingsTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CMSZoneShaderSettingsTrigger::CMSZoneShaderSettingsTrigger()   {
}
