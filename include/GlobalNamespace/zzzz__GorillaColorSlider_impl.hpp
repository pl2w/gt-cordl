#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaColorSlider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaColorSlider_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaColorSlider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColorSlider::*)()>(&::GlobalNamespace::GorillaColorSlider::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x599695c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaColorSlider.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColorSlider::*)(float_t)>(&::GlobalNamespace::GorillaColorSlider::SetPosition)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5996994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {"SetPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaColorSlider.InterpolateValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaColorSlider::*)(float_t)>(&::GlobalNamespace::GorillaColorSlider::InterpolateValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5996a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {"InterpolateValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaColorSlider.OnSliderRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColorSlider::*)()>(&::GlobalNamespace::GorillaColorSlider::OnSliderRelease)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5996a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {"OnSliderRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaColorSlider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColorSlider::*)()>(&::GlobalNamespace::GorillaColorSlider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5996c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_setRandomly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setRandomly;
}
constexpr bool const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_setRandomly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setRandomly;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_setRandomly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setRandomly = value;
}
constexpr float_t& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_zRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zRange;
}
constexpr float_t const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_zRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zRange;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_zRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zRange = value;
}
constexpr float_t& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr float_t const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_maxValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxValue = value;
}
constexpr float_t& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr float_t const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_minValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minValue = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_startingLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingLocation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_startingLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingLocation;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_startingLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingLocation = value;
}
constexpr int32_t& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_valueIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_valueIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueIndex;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_valueIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueIndex = value;
}
constexpr float_t& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_valueImReporting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueImReporting;
}
constexpr float_t const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_valueImReporting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueImReporting;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_valueImReporting(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueImReporting = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerBox>& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_gorilla()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorilla;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerBox> const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_gorilla() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorilla;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_gorilla(::UnityW<::GlobalNamespace::GorillaTriggerBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorilla = value;
}
constexpr float_t& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_startingZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingZ;
}
constexpr float_t const& GlobalNamespace::GorillaColorSlider::__cordl_internal_get_startingZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingZ;
}
constexpr void GlobalNamespace::GorillaColorSlider::__cordl_internal_set_startingZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingZ = value;
}
inline void GlobalNamespace::GorillaColorSlider::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaColorSlider::SetPosition(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {"SetPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline float_t GlobalNamespace::GorillaColorSlider::InterpolateValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {"InterpolateValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaColorSlider::OnSliderRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {"OnSliderRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaColorSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorSlider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaColorSlider* GlobalNamespace::GorillaColorSlider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaColorSlider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaColorSlider::GorillaColorSlider()   {
}
