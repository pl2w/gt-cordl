#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CubicPlanetZoneSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__PlanetZoneSettings_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CubicPlanetZoneSettings_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings::*)()>(&::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cb6bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GT_CustomMapSupportRuntime::CubicPlanetZoneSettings::__cordl_internal_get_constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraints;
}
constexpr ::UnityEngine::Vector3 const& GT_CustomMapSupportRuntime::CubicPlanetZoneSettings::__cordl_internal_get_constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraints;
}
constexpr void GT_CustomMapSupportRuntime::CubicPlanetZoneSettings::__cordl_internal_set_constraints(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constraints = value;
}
inline void GT_CustomMapSupportRuntime::CubicPlanetZoneSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings* GT_CustomMapSupportRuntime::CubicPlanetZoneSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings::CubicPlanetZoneSettings()   {
}
