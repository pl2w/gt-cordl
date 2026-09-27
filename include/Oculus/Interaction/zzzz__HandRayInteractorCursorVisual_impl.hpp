#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandRayInteractorCursorVisual.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__HandRayInteractorCursorVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.get_PlayerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandRayInteractorCursorVisual::*)()>(&::Oculus::Interaction::HandRayInteractorCursorVisual::get_PlayerHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45da14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"get_PlayerHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.set_PlayerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::set_PlayerHead)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa45da1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"set_PlayerHead", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.get_OutlineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::HandRayInteractorCursorVisual::*)()>(&::Oculus::Interaction::HandRayInteractorCursorVisual::get_OutlineColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"get_OutlineColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.set_OutlineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::set_OutlineColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45da8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"set_OutlineColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.get_OffsetAlongNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandRayInteractorCursorVisual::*)()>(&::Oculus::Interaction::HandRayInteractorCursorVisual::get_OffsetAlongNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45da98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"get_OffsetAlongNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.set_OffsetAlongNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(float_t)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::set_OffsetAlongNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"set_OffsetAlongNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)()>(&::Oculus::Interaction::HandRayInteractorCursorVisual::Start)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa45daa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)()>(&::Oculus::Interaction::HandRayInteractorCursorVisual::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa45db64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)()>(&::Oculus::Interaction::HandRayInteractorCursorVisual::OnDisable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa45e190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)()>(&::Oculus::Interaction::HandRayInteractorCursorVisual::UpdateVisual)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0xa45dc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"UpdateVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::UpdateVisualState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa45e2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.InjectAllHandRayInteractorCursorVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::RayInteractor*, ::UnityEngine::GameObject*, ::UnityEngine::Renderer*)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::InjectAllHandRayInteractorCursorVisual)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa45e2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectAllHandRayInteractorCursorVisual", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::RayInteractor*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa45e31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.InjectRayInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(::Oculus::Interaction::RayInteractor*)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::InjectRayInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45e3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.InjectCursor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::InjectCursor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45e3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectCursor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual.InjectRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)(::UnityEngine::Renderer*)>(&::Oculus::Interaction::HandRayInteractorCursorVisual::InjectRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45e3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandRayInteractorCursorVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandRayInteractorCursorVisual::*)()>(&::Oculus::Interaction::HandRayInteractorCursorVisual::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa45e404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get_Hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get_Hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hand = value;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__rayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractor;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__rayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractor;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayInteractor = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__cursor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cursor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__cursor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cursor;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__cursor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cursor = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__outlineColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outlineColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__outlineColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outlineColor;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__outlineColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outlineColor = value;
}
constexpr float_t& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__offsetAlongNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetAlongNormal;
}
constexpr float_t const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__offsetAlongNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetAlongNormal;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__offsetAlongNormal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offsetAlongNormal = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__playerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__playerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerHead = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__startScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__startScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startScale;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__startScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startScale = value;
}
constexpr int32_t& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientScale;
}
constexpr int32_t const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientScale;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__shaderRadialGradientScale(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderRadialGradientScale = value;
}
constexpr int32_t& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientIntensity;
}
constexpr int32_t const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientIntensity;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__shaderRadialGradientIntensity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderRadialGradientIntensity = value;
}
constexpr int32_t& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientBackgroundOpacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientBackgroundOpacity;
}
constexpr int32_t const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__shaderRadialGradientBackgroundOpacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderRadialGradientBackgroundOpacity;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__shaderRadialGradientBackgroundOpacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderRadialGradientBackgroundOpacity = value;
}
constexpr int32_t& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__shaderOutlineColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderOutlineColor;
}
constexpr int32_t const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__shaderOutlineColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderOutlineColor;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__shaderOutlineColor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shaderOutlineColor = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__selectObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__selectObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectObject;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__selectObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectObject = value;
}
constexpr bool& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandRayInteractorCursorVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandRayInteractorCursorVisual::get_PlayerHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"get_PlayerHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::set_PlayerHead(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"set_PlayerHead", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::HandRayInteractorCursorVisual::get_OutlineColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"get_OutlineColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::set_OutlineColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"set_OutlineColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::HandRayInteractorCursorVisual::get_OffsetAlongNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"get_OffsetAlongNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::set_OffsetAlongNormal(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"set_OffsetAlongNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::UpdateVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"UpdateVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::InjectAllHandRayInteractorCursorVisual(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::RayInteractor*  rayInteractor, ::UnityEngine::GameObject*  cursor, ::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectAllHandRayInteractorCursorVisual", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::RayInteractor*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, rayInteractor, cursor, renderer);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::InjectRayInteractor(::Oculus::Interaction::RayInteractor*  rayInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayInteractor);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::InjectCursor(::UnityEngine::GameObject*  cursor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectCursor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursor);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::InjectRenderer(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {"InjectRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void Oculus::Interaction::HandRayInteractorCursorVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandRayInteractorCursorVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandRayInteractorCursorVisual* Oculus::Interaction::HandRayInteractorCursorVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandRayInteractorCursorVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandRayInteractorCursorVisual::HandRayInteractorCursorVisual()   {
}
