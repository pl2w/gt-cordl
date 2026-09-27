#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/BasicGravityZoneSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_GravityZoneRule_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_GravityZoneScaleFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_GravityZoneRule_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_GravityZoneScaleFilter_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::BasicGravityZoneSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::BasicGravityZoneSettings::*)()>(&::GT_CustomMapSupportRuntime::BasicGravityZoneSettings::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9cb185c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_gravityStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr float_t const& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_gravityStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_set_gravityStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityStrength = value;
}
constexpr ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_scaleFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFilter;
}
constexpr ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter const& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_scaleFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFilter;
}
constexpr void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_set_scaleFilter(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleFilter = value;
}
constexpr ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_gravityRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityRule;
}
constexpr ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule const& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_gravityRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityRule;
}
constexpr void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_set_gravityRule(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneRule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityRule = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_authorityLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authorityLevel;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_authorityLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authorityLevel;
}
constexpr void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_set_authorityLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authorityLevel = value;
}
constexpr bool& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_invertRotationDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertRotationDirection;
}
constexpr bool const& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_invertRotationDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertRotationDirection;
}
constexpr void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_set_invertRotationDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertRotationDirection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_rotateTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateTarget;
}
constexpr bool const& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_rotateTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateTarget;
}
constexpr void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_set_rotateTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateTarget = value;
}
constexpr bool& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_useRotationSpeedOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRotationSpeedOverride;
}
constexpr bool const& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_useRotationSpeedOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRotationSpeedOverride;
}
constexpr void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_set_useRotationSpeedOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRotationSpeedOverride = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_rotationSpeedOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeedOverride;
}
constexpr float_t const& GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_get_rotationSpeedOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeedOverride;
}
constexpr void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::__cordl_internal_set_rotationSpeedOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeedOverride = value;
}
inline void GT_CustomMapSupportRuntime::BasicGravityZoneSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::BasicGravityZoneSettings* GT_CustomMapSupportRuntime::BasicGravityZoneSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::BasicGravityZoneSettings::BasicGravityZoneSettings()   {
}
