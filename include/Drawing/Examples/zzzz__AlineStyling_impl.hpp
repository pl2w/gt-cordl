#pragma once
// IWYU pragma private; include "Drawing/Examples/AlineStyling.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Drawing/Examples/zzzz__AlineStyling_def.hpp"
//  Writing Method size for method: ::Drawing::Examples::AlineStyling.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::AlineStyling::*)()>(&::Drawing::Examples::AlineStyling::Update)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x55e1d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::AlineStyling*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::AlineStyling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::AlineStyling::*)()>(&::Drawing::Examples::AlineStyling::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x55e2334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::AlineStyling*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Drawing::Examples::AlineStyling::__cordl_internal_get_gizmoColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor;
}
constexpr ::UnityEngine::Color const& Drawing::Examples::AlineStyling::__cordl_internal_get_gizmoColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor;
}
constexpr void Drawing::Examples::AlineStyling::__cordl_internal_set_gizmoColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoColor = value;
}
constexpr ::UnityEngine::Color& Drawing::Examples::AlineStyling::__cordl_internal_get_gizmoColor2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor2;
}
constexpr ::UnityEngine::Color const& Drawing::Examples::AlineStyling::__cordl_internal_get_gizmoColor2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor2;
}
constexpr void Drawing::Examples::AlineStyling::__cordl_internal_set_gizmoColor2(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoColor2 = value;
}
inline void Drawing::Examples::AlineStyling::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::AlineStyling*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::AlineStyling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::AlineStyling*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::Examples::AlineStyling* Drawing::Examples::AlineStyling::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::Examples::AlineStyling*>());
}
// Ctor Parameters []
constexpr ::Drawing::Examples::AlineStyling::AlineStyling()   {
}
