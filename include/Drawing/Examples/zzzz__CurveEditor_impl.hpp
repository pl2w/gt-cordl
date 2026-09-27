#pragma once
// IWYU pragma private; include "Drawing/Examples/CurveEditor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Drawing/Examples/zzzz__CurveEditor_def.hpp"
#include "Drawing/Examples/zzzz__CurveEditor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Drawing::Examples::CurveEditor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::CurveEditor::*)()>(&::Drawing::Examples::CurveEditor::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x55e121c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::CurveEditor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::CurveEditor::*)()>(&::Drawing::Examples::CurveEditor::Update)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x55e1240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::CurveEditor.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::CurveEditor::*)()>(&::Drawing::Examples::CurveEditor::Render)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x55e14ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor*>(),
                        {"Render", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::CurveEditor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::CurveEditor::*)()>(&::Drawing::Examples::CurveEditor::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55e198c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Drawing::Examples::CurveEditor_CurvePoint*>*& Drawing::Examples::CurveEditor::__cordl_internal_get_curves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curves;
}
constexpr ::System::Collections::Generic::List_1<::Drawing::Examples::CurveEditor_CurvePoint*>* const& Drawing::Examples::CurveEditor::__cordl_internal_get_curves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curves;
}
constexpr void Drawing::Examples::CurveEditor::__cordl_internal_set_curves(::System::Collections::Generic::List_1<::Drawing::Examples::CurveEditor_CurvePoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curves = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Drawing::Examples::CurveEditor::__cordl_internal_get_cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Drawing::Examples::CurveEditor::__cordl_internal_get_cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr void Drawing::Examples::CurveEditor::__cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cam = value;
}
constexpr ::UnityEngine::Color& Drawing::Examples::CurveEditor::__cordl_internal_get_curveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveColor;
}
constexpr ::UnityEngine::Color const& Drawing::Examples::CurveEditor::__cordl_internal_get_curveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveColor;
}
constexpr void Drawing::Examples::CurveEditor::__cordl_internal_set_curveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curveColor = value;
}
inline void Drawing::Examples::CurveEditor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::CurveEditor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::CurveEditor::Render()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor*>(),
                        {"Render", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::CurveEditor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::Examples::CurveEditor* Drawing::Examples::CurveEditor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::Examples::CurveEditor*>());
}
// Ctor Parameters []
constexpr ::Drawing::Examples::CurveEditor::CurveEditor()   {
}
//  Writing Method size for method: ::Drawing::Examples::CurveEditor_CurvePoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::CurveEditor_CurvePoint::*)()>(&::Drawing::Examples::CurveEditor_CurvePoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e14a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor_CurvePoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector2 const& Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_set_position(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Vector2& Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_get_controlPoint0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoint0;
}
constexpr ::UnityEngine::Vector2 const& Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_get_controlPoint0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoint0;
}
constexpr void Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_set_controlPoint0(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPoint0 = value;
}
constexpr ::UnityEngine::Vector2& Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_get_controlPoint1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoint1;
}
constexpr ::UnityEngine::Vector2 const& Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_get_controlPoint1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoint1;
}
constexpr void Drawing::Examples::CurveEditor_CurvePoint::__cordl_internal_set_controlPoint1(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPoint1 = value;
}
inline void Drawing::Examples::CurveEditor_CurvePoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::CurveEditor_CurvePoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::Examples::CurveEditor_CurvePoint* Drawing::Examples::CurveEditor_CurvePoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::Examples::CurveEditor_CurvePoint*>());
}
// Ctor Parameters []
constexpr ::Drawing::Examples::CurveEditor_CurvePoint::CurveEditor_CurvePoint()   {
}
