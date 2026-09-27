#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/TorusZoneSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TorusZoneSettings_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::TorusZoneSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::TorusZoneSettings::*)()>(&::GT_CustomMapSupportRuntime::TorusZoneSettings::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9cb8d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::TorusZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_get_majorRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___majorRadius;
}
constexpr float_t const& GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_get_majorRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___majorRadius;
}
constexpr void GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_set_majorRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___majorRadius = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_get_rotationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDistance;
}
constexpr float_t const& GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_get_rotationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDistance;
}
constexpr void GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_set_rotationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationDistance = value;
}
constexpr bool& GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_get_alwaysRotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRotate;
}
constexpr bool const& GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_get_alwaysRotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRotate;
}
constexpr void GT_CustomMapSupportRuntime::TorusZoneSettings::__cordl_internal_set_alwaysRotate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysRotate = value;
}
inline void GT_CustomMapSupportRuntime::TorusZoneSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::TorusZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::TorusZoneSettings* GT_CustomMapSupportRuntime::TorusZoneSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::TorusZoneSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::TorusZoneSettings::TorusZoneSettings()   {
}
