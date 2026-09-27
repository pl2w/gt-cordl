#pragma once
// IWYU pragma private; include "Drawing/Examples/GizmoCharacterExample.hpp"
#include "Drawing/zzzz__MonoBehaviourGizmos_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Drawing/Examples/zzzz__GizmoCharacterExample_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Drawing::Examples::GizmoCharacterExample.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoCharacterExample::*)()>(&::Drawing::Examples::GizmoCharacterExample::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x55dfc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::GizmoCharacterExample.GetSmoothRandomVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Drawing::Examples::GizmoCharacterExample::*)(float_t, ::UnityEngine::Vector3)>(&::Drawing::Examples::GizmoCharacterExample::GetSmoothRandomVelocity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x55dfc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {"GetSmoothRandomVelocity", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::GizmoCharacterExample.PlotFuturePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoCharacterExample::*)(float_t, ::UnityEngine::Vector3)>(&::Drawing::Examples::GizmoCharacterExample::PlotFuturePath)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x55dfd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {"PlotFuturePath", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::GizmoCharacterExample.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoCharacterExample::*)()>(&::Drawing::Examples::GizmoCharacterExample::Update)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x55dff54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::GizmoCharacterExample.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoCharacterExample::*)()>(&::Drawing::Examples::GizmoCharacterExample::DrawGizmos)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x55e00c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                    {::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::GizmoCharacterExample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoCharacterExample::*)()>(&::Drawing::Examples::GizmoCharacterExample::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55e043c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_gizmoColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor;
}
constexpr ::UnityEngine::Color const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_gizmoColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_gizmoColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoColor = value;
}
constexpr ::UnityEngine::Color& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_gizmoColor2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor2;
}
constexpr ::UnityEngine::Color const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_gizmoColor2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor2;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_gizmoColor2(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoColor2 = value;
}
constexpr float_t& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_movementNoiseScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementNoiseScale;
}
constexpr float_t const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_movementNoiseScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementNoiseScale;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_movementNoiseScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementNoiseScale = value;
}
constexpr float_t& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_startPointAttractionStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPointAttractionStrength;
}
constexpr float_t const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_startPointAttractionStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPointAttractionStrength;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_startPointAttractionStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPointAttractionStrength = value;
}
constexpr int32_t& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_futurePathPlotSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___futurePathPlotSteps;
}
constexpr int32_t const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_futurePathPlotSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___futurePathPlotSteps;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_futurePathPlotSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___futurePathPlotSteps = value;
}
constexpr int32_t& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_plotStartStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotStartStep;
}
constexpr int32_t const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_plotStartStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotStartStep;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_plotStartStep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plotStartStep = value;
}
constexpr int32_t& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_plotEveryNSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotEveryNSteps;
}
constexpr int32_t const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_plotEveryNSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotEveryNSteps;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_plotEveryNSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plotEveryNSteps = value;
}
constexpr float_t& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr float_t const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_seed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr ::UnityEngine::Vector3& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPosition;
}
constexpr ::UnityEngine::Vector3 const& Drawing::Examples::GizmoCharacterExample::__cordl_internal_get_startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPosition;
}
constexpr void Drawing::Examples::GizmoCharacterExample::__cordl_internal_set_startPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPosition = value;
}
inline void Drawing::Examples::GizmoCharacterExample::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Drawing::Examples::GizmoCharacterExample::GetSmoothRandomVelocity(float_t  time, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {"GetSmoothRandomVelocity", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, time, position);
}
inline void Drawing::Examples::GizmoCharacterExample::PlotFuturePath(float_t  time, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {"PlotFuturePath", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, position);
}
inline void Drawing::Examples::GizmoCharacterExample::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::GizmoCharacterExample::DrawGizmos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::GizmoCharacterExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoCharacterExample*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::Examples::GizmoCharacterExample* Drawing::Examples::GizmoCharacterExample::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::Examples::GizmoCharacterExample*>());
}
// Ctor Parameters []
constexpr ::Drawing::Examples::GizmoCharacterExample::GizmoCharacterExample()   {
}
