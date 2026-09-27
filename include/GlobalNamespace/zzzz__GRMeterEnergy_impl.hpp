#pragma once
// IWYU pragma private; include "GlobalNamespace/GRMeterEnergy.hpp"
#include "GlobalNamespace/zzzz__GRMeterEnergy_MeterType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__GRMeterEnergy_def.hpp"
#include "GlobalNamespace/zzzz__GRMeterEnergy_MeterType_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRMeterEnergy.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMeterEnergy::*)()>(&::GlobalNamespace::GRMeterEnergy::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589ed34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMeterEnergy*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMeterEnergy.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMeterEnergy::*)()>(&::GlobalNamespace::GRMeterEnergy::Refresh)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x589ed38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMeterEnergy*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMeterEnergy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMeterEnergy::*)()>(&::GlobalNamespace::GRMeterEnergy::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x589ef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMeterEnergy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRMeterEnergy::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_meter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_meter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meter;
}
constexpr void GlobalNamespace::GRMeterEnergy::__cordl_internal_set_meter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_chargePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_chargePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargePoint;
}
constexpr void GlobalNamespace::GRMeterEnergy::__cordl_internal_set_chargePoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargePoint = value;
}
constexpr ::GlobalNamespace::GRMeterEnergy_MeterType& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_meterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meterType;
}
constexpr ::GlobalNamespace::GRMeterEnergy_MeterType const& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_meterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meterType;
}
constexpr void GlobalNamespace::GRMeterEnergy::__cordl_internal_set_meterType(::GlobalNamespace::GRMeterEnergy_MeterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meterType = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_angularRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_angularRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularRange;
}
constexpr void GlobalNamespace::GRMeterEnergy::__cordl_internal_set_angularRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularRange = value;
}
constexpr int32_t& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_rotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAxis;
}
constexpr int32_t const& GlobalNamespace::GRMeterEnergy::__cordl_internal_get_rotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAxis;
}
constexpr void GlobalNamespace::GRMeterEnergy::__cordl_internal_set_rotationAxis(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationAxis = value;
}
inline void GlobalNamespace::GRMeterEnergy::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMeterEnergy*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRMeterEnergy::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMeterEnergy*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRMeterEnergy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMeterEnergy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRMeterEnergy* GlobalNamespace::GRMeterEnergy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRMeterEnergy*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRMeterEnergy::GRMeterEnergy()   {
}
