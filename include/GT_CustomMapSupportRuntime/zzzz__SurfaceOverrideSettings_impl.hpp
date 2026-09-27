#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/SurfaceOverrideSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SurfaceSoundOverride_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SurfaceOverrideSettings_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::SurfaceOverrideSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::SurfaceOverrideSettings::*)()>(&::GT_CustomMapSupportRuntime::SurfaceOverrideSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9cb8c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::SurfaceOverrideSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GT_CustomMapSupportRuntime::SurfaceSoundOverride& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_soundOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundOverride;
}
constexpr ::GT_CustomMapSupportRuntime::SurfaceSoundOverride const& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_soundOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundOverride;
}
constexpr void GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_set_soundOverride(::GT_CustomMapSupportRuntime::SurfaceSoundOverride  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundOverride = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_extraVelMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraVelMultiplier;
}
constexpr float_t const& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_extraVelMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraVelMultiplier;
}
constexpr void GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_set_extraVelMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraVelMultiplier = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_extraVelMaxMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraVelMaxMultiplier;
}
constexpr float_t const& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_extraVelMaxMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraVelMaxMultiplier;
}
constexpr void GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_set_extraVelMaxMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraVelMaxMultiplier = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_slidePercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidePercentage;
}
constexpr float_t const& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_slidePercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidePercentage;
}
constexpr void GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_set_slidePercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slidePercentage = value;
}
constexpr bool& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_disablePushBackEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disablePushBackEffect;
}
constexpr bool const& GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_get_disablePushBackEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disablePushBackEffect;
}
constexpr void GT_CustomMapSupportRuntime::SurfaceOverrideSettings::__cordl_internal_set_disablePushBackEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disablePushBackEffect = value;
}
inline void GT_CustomMapSupportRuntime::SurfaceOverrideSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::SurfaceOverrideSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::SurfaceOverrideSettings* GT_CustomMapSupportRuntime::SurfaceOverrideSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::SurfaceOverrideSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::SurfaceOverrideSettings::SurfaceOverrideSettings()   {
}
