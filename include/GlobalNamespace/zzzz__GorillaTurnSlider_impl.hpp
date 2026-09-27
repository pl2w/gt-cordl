#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTurnSlider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTurnSlider_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTurning_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTurnSlider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurnSlider::*)()>(&::GlobalNamespace::GorillaTurnSlider::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59a2424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTurnSlider.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurnSlider::*)()>(&::GlobalNamespace::GorillaTurnSlider::FixedUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a24dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTurnSlider.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurnSlider::*)(float_t)>(&::GlobalNamespace::GorillaTurnSlider::SetPosition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59a2464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"SetPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTurnSlider.InterpolateValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaTurnSlider::*)(float_t)>(&::GlobalNamespace::GorillaTurnSlider::InterpolateValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59a24e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"InterpolateValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTurnSlider.OnSliderRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurnSlider::*)()>(&::GlobalNamespace::GorillaTurnSlider::OnSliderRelease)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59a2518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"OnSliderRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTurnSlider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurnSlider::*)()>(&::GlobalNamespace::GorillaTurnSlider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a2668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_zRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zRange;
}
constexpr float_t const& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_zRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zRange;
}
constexpr void GlobalNamespace::GorillaTurnSlider::__cordl_internal_set_zRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zRange = value;
}
constexpr float_t& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr float_t const& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr void GlobalNamespace::GorillaTurnSlider::__cordl_internal_set_maxValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxValue = value;
}
constexpr float_t& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr float_t const& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr void GlobalNamespace::GorillaTurnSlider::__cordl_internal_set_minValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minValue = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTurning>& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_gorillaTurn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaTurn;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTurning> const& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_gorillaTurn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaTurn;
}
constexpr void GlobalNamespace::GorillaTurnSlider::__cordl_internal_set_gorillaTurn(::UnityW<::GlobalNamespace::GorillaTurning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaTurn = value;
}
constexpr float_t& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_startingZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingZ;
}
constexpr float_t const& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_startingZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingZ;
}
constexpr void GlobalNamespace::GorillaTurnSlider::__cordl_internal_set_startingZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingZ = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_startingLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingLocation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTurnSlider::__cordl_internal_get_startingLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingLocation;
}
constexpr void GlobalNamespace::GorillaTurnSlider::__cordl_internal_set_startingLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingLocation = value;
}
inline void GlobalNamespace::GorillaTurnSlider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTurnSlider::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTurnSlider::SetPosition(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"SetPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline float_t GlobalNamespace::GorillaTurnSlider::InterpolateValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"InterpolateValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTurnSlider::OnSliderRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {"OnSliderRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTurnSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurnSlider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTurnSlider* GlobalNamespace::GorillaTurnSlider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTurnSlider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTurnSlider::GorillaTurnSlider()   {
}
