#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvasEventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__PointableCanvasEventArgs_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasEventArgs::*)(::UnityEngine::Canvas*, ::UnityEngine::GameObject*, bool)>(&::Oculus::Interaction::PointableCanvasEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa485224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Canvas>& Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_get_Canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_get_Canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Canvas;
}
constexpr void Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_set_Canvas(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Canvas = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_get_Hovered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hovered;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_get_Hovered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hovered;
}
constexpr void Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_set_Hovered(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hovered = value;
}
constexpr bool& Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_get_Dragging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dragging;
}
constexpr bool const& Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_get_Dragging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dragging;
}
constexpr void Oculus::Interaction::PointableCanvasEventArgs::__cordl_internal_set_Dragging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Dragging = value;
}
inline void Oculus::Interaction::PointableCanvasEventArgs::_ctor(::UnityEngine::Canvas*  canvas, ::UnityEngine::GameObject*  hovered, bool  dragging)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvas, hovered, dragging);
}
inline ::Oculus::Interaction::PointableCanvasEventArgs* Oculus::Interaction::PointableCanvasEventArgs::New_ctor(::UnityEngine::Canvas*  canvas, ::UnityEngine::GameObject*  hovered, bool  dragging)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableCanvasEventArgs*>(canvas, hovered, dragging));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableCanvasEventArgs::PointableCanvasEventArgs()   {
}
