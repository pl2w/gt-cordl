#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/XRDebugLineVisualizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__XRDebugLineVisualizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__XRDebugLineVisualizer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::Update)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb429ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb429e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer.UpdateOrCreateLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::UpdateOrCreateLine)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xb429fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {"UpdateOrCreateLine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer.ClearLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::ClearLines)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb429e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {"ClearLines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb42a3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>*& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::__cordl_internal_get_m_DebugLines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugLines;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::__cordl_internal_get_m_DebugLines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugLines;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::__cordl_internal_set_m_DebugLines(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugLines = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::UpdateOrCreateLine(::StringW  lineName, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  decayTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {"UpdateOrCreateLine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineName, start, end, color, decayTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::ClearLines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {"ClearLines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer* UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer::XRDebugLineVisualizer()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb42a39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0._UpdateOrCreateLine_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::*)(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::_UpdateOrCreateLine_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb42a434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0*>(),
                        {"<UpdateOrCreateLine>b__0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::__cordl_internal_get_lineName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineName;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::__cordl_internal_get_lineName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineName;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::__cordl_internal_set_lineName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineName = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::_UpdateOrCreateLine_b__0(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*  l)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0*>(),
                        {"<UpdateOrCreateLine>b__0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0* UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0::XRDebugLineVisualizer___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb42a3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityEngine::Color& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_get_lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_get_lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineRenderer = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_get_decayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decayTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_get_decayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decayTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::__cordl_internal_set_decayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decayTime = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine* UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine::XRDebugLineVisualizer_DebugLine()   {
}
