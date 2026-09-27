#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ZoneShaderTriggerSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ZoneShaderTriggerSettings_ActivationType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ZoneShaderTriggerSettings_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ZoneShaderTriggerSettings_ActivationType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb8e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType& GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_get_activationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationType;
}
constexpr ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType const& GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_get_activationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationType;
}
constexpr void GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_set_activationType(::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationType = value;
}
constexpr bool& GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_get_activateOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnEnable;
}
constexpr bool const& GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_get_activateOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnEnable;
}
constexpr void GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_set_activateOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activateOnEnable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_get_zoneShaderSettingsObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneShaderSettingsObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_get_zoneShaderSettingsObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneShaderSettingsObject;
}
constexpr void GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::__cordl_internal_set_zoneShaderSettingsObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneShaderSettingsObject = value;
}
inline void GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings* GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::ZoneShaderTriggerSettings::ZoneShaderTriggerSettings()   {
}
