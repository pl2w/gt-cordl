#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractorCursorVisual.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__RayInteractorCursorVisual_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.get_PlayerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::get_PlayerHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45e500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_PlayerHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.set_PlayerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::RayInteractorCursorVisual::set_PlayerHead)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa45e508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_PlayerHead", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.get_HoverColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::get_HoverColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45e56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_HoverColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.set_HoverColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::RayInteractorCursorVisual::set_HoverColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45e578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_HoverColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.get_SelectColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::get_SelectColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45e584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_SelectColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.set_SelectColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::RayInteractorCursorVisual::set_SelectColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_SelectColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.get_OutlineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::get_OutlineColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45e59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_OutlineColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.set_OutlineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::RayInteractorCursorVisual::set_OutlineColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45e5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_OutlineColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.get_OffsetAlongNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::get_OffsetAlongNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45e5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_OffsetAlongNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.set_OffsetAlongNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(float_t)>(&::Oculus::Interaction::RayInteractorCursorVisual::set_OffsetAlongNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45e5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_OffsetAlongNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa45e5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa45ea4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::OnDisable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa45eb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::UpdateVisual)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0xa45e61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"UpdateVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::RayInteractorCursorVisual::UpdateVisualState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa45ecac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.InjectAllRayInteractorCursorVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(::Oculus::Interaction::RayInteractor*, ::UnityEngine::Renderer*)>(&::Oculus::Interaction::RayInteractorCursorVisual::InjectAllRayInteractorCursorVisual)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa45ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"InjectAllRayInteractorCursorVisual", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>(), ::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.InjectRayInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(::Oculus::Interaction::RayInteractor*)>(&::Oculus::Interaction::RayInteractorCursorVisual::InjectRayInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45ece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"InjectRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual.InjectRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)(::UnityEngine::Renderer*)>(&::Oculus::Interaction::RayInteractorCursorVisual::InjectRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45ece8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"InjectRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorCursorVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorCursorVisual::*)()>(&::Oculus::Interaction::RayInteractorCursorVisual::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa45ecf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__rayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractor;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__rayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractor;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayInteractor = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__hoverColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__hoverColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColor;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__hoverColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__selectColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__selectColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectColor;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__selectColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__outlineColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outlineColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__outlineColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outlineColor;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__outlineColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outlineColor = value;
}
constexpr float_t& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__offsetAlongNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetAlongNormal;
}
constexpr float_t const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__offsetAlongNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetAlongNormal;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__offsetAlongNormal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offsetAlongNormal = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__playerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__playerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerHead = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__startScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__startScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startScale;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__startScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startScale = value;
}
constexpr int32_t& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientScale;
}
constexpr int32_t const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientScale;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__shaderRadialGradientScale(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderRadialGradientScale = value;
}
constexpr int32_t& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientIntensity;
}
constexpr int32_t const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientIntensity;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__shaderRadialGradientIntensity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderRadialGradientIntensity = value;
}
constexpr int32_t& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientBackgroundOpacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientBackgroundOpacity;
}
constexpr int32_t const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientBackgroundOpacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientBackgroundOpacity;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__shaderRadialGradientBackgroundOpacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderRadialGradientBackgroundOpacity = value;
}
constexpr int32_t& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderInnerColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderInnerColor;
}
constexpr int32_t const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderInnerColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderInnerColor;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__shaderInnerColor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderInnerColor = value;
}
constexpr int32_t& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderOutlineColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderOutlineColor;
}
constexpr int32_t const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__shaderOutlineColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderOutlineColor;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__shaderOutlineColor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderOutlineColor = value;
}
constexpr bool& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::RayInteractorCursorVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::RayInteractorCursorVisual::get_PlayerHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_PlayerHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::set_PlayerHead(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_PlayerHead", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::RayInteractorCursorVisual::get_HoverColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_HoverColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::set_HoverColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_HoverColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::RayInteractorCursorVisual::get_SelectColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_SelectColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::set_SelectColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_SelectColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::RayInteractorCursorVisual::get_OutlineColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_OutlineColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::set_OutlineColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_OutlineColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::RayInteractorCursorVisual::get_OffsetAlongNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"get_OffsetAlongNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::set_OffsetAlongNormal(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"set_OffsetAlongNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::UpdateVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"UpdateVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::InjectAllRayInteractorCursorVisual(::Oculus::Interaction::RayInteractor*  rayInteractor, ::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"InjectAllRayInteractorCursorVisual", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>(), ::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayInteractor, renderer);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::InjectRayInteractor(::Oculus::Interaction::RayInteractor*  rayInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"InjectRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayInteractor);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::InjectRenderer(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {"InjectRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void Oculus::Interaction::RayInteractorCursorVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorCursorVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::RayInteractorCursorVisual* Oculus::Interaction::RayInteractorCursorVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RayInteractorCursorVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::RayInteractorCursorVisual::RayInteractorCursorVisual()   {
}
