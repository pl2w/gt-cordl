#pragma once
// IWYU pragma private; include "GlobalNamespace/RoundedBoxVideoController_BoxAnimation.hpp"
#include "GlobalNamespace/zzzz__RoundedBoxVideoController_BoxAnimation_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoundedBoxVideoController_BoxAnimation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoundedBoxVideoController_BoxAnimation::*)(float_t)>(&::GlobalNamespace::RoundedBoxVideoController_BoxAnimation::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa426584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoundedBoxVideoController_BoxAnimation.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoundedBoxVideoController_BoxAnimation::*)(::UnityEngine::Color)>(&::GlobalNamespace::RoundedBoxVideoController_BoxAnimation::SetColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa426564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoundedBoxVideoController_BoxAnimation::Update(float_t  animationTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, animationTime);
}
inline void GlobalNamespace::RoundedBoxVideoController_BoxAnimation::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
// Ctor Parameters [CppParam { name: "rectTransform", ty: "::UnityW<::UnityEngine::RectTransform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "image", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "animationMaxHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startVelocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "acceleration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RoundedBoxVideoController_BoxAnimation::RoundedBoxVideoController_BoxAnimation(::UnityW<::UnityEngine::RectTransform>  rectTransform, ::UnityW<::UnityEngine::UI::Image>  image, float_t  duration, float_t  startHeight, float_t  animationMaxHeight, float_t  startVelocity, float_t  startTime, float_t  acceleration) noexcept  {
this->rectTransform = rectTransform;
this->image = image;
this->duration = duration;
this->startHeight = startHeight;
this->animationMaxHeight = animationMaxHeight;
this->startVelocity = startVelocity;
this->startTime = startTime;
this->acceleration = acceleration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoundedBoxVideoController_BoxAnimation::RoundedBoxVideoController_BoxAnimation()   {
}
