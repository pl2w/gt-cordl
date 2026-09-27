#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ConsensusGravityZoneSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ConsensusGravityZoneSettings_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::*)()>(&::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9cb3d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_weightForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightForce;
}
constexpr float_t const& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_weightForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightForce;
}
constexpr void GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_set_weightForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weightForce = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_centeringForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centeringForce;
}
constexpr float_t const& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_centeringForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centeringForce;
}
constexpr void GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_set_centeringForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centeringForce = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_rotMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotMin;
}
constexpr float_t const& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_rotMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotMin;
}
constexpr void GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_set_rotMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotMin = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_rotMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotMax;
}
constexpr float_t const& GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_get_rotMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotMax;
}
constexpr void GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::__cordl_internal_set_rotMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotMax = value;
}
inline void GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings* GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::ConsensusGravityZoneSettings::ConsensusGravityZoneSettings()   {
}
