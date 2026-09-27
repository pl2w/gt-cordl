#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineDecorator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__SplineDecorator_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineDecorator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineDecorator::*)()>(&::GlobalNamespace::SplineDecorator::Awake)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5b16070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineDecorator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineDecorator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineDecorator::*)()>(&::GlobalNamespace::SplineDecorator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b16288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineDecorator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BezierSpline>& GlobalNamespace::SplineDecorator::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& GlobalNamespace::SplineDecorator::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GlobalNamespace::SplineDecorator::__cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr int32_t& GlobalNamespace::SplineDecorator::__cordl_internal_get_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
constexpr int32_t const& GlobalNamespace::SplineDecorator::__cordl_internal_get_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
constexpr void GlobalNamespace::SplineDecorator::__cordl_internal_set_frequency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frequency = value;
}
constexpr bool& GlobalNamespace::SplineDecorator::__cordl_internal_get_lookForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookForward;
}
constexpr bool const& GlobalNamespace::SplineDecorator::__cordl_internal_get_lookForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookForward;
}
constexpr void GlobalNamespace::SplineDecorator::__cordl_internal_set_lookForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookForward = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::SplineDecorator::__cordl_internal_get_items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::SplineDecorator::__cordl_internal_get_items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr void GlobalNamespace::SplineDecorator::__cordl_internal_set_items(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___items = value;
}
inline void GlobalNamespace::SplineDecorator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineDecorator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplineDecorator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineDecorator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineDecorator* GlobalNamespace::SplineDecorator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SplineDecorator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineDecorator::SplineDecorator()   {
}
