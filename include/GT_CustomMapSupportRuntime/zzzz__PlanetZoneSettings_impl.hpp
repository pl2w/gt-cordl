#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/PlanetZoneSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__PlanetZoneSettings_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::PlanetZoneSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::PlanetZoneSettings::*)()>(&::GT_CustomMapSupportRuntime::PlanetZoneSettings::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9cb6bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::PlanetZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_get_rotationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDistance;
}
constexpr float_t const& GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_get_rotationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDistance;
}
constexpr void GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_set_rotationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationDistance = value;
}
constexpr bool& GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_get_alwaysRotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRotate;
}
constexpr bool const& GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_get_alwaysRotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRotate;
}
constexpr void GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_set_alwaysRotate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysRotate = value;
}
constexpr bool& GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_get_useGravityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGravityCurve;
}
constexpr bool const& GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_get_useGravityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGravityCurve;
}
constexpr void GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_set_useGravityCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGravityCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_get_gravityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_get_gravityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCurve;
}
constexpr void GT_CustomMapSupportRuntime::PlanetZoneSettings::__cordl_internal_set_gravityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityCurve = value;
}
inline void GT_CustomMapSupportRuntime::PlanetZoneSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::PlanetZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::PlanetZoneSettings* GT_CustomMapSupportRuntime::PlanetZoneSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::PlanetZoneSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::PlanetZoneSettings::PlanetZoneSettings()   {
}
