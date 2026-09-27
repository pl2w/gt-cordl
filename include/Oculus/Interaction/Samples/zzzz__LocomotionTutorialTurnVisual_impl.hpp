#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/LocomotionTutorialTurnVisual.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__LocomotionTutorialTurnVisual_def.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyBlockEditor_def.hpp"
#include "Oculus/Interaction/zzzz__TubePoint_def.hpp"
#include "Oculus/Interaction/zzzz__TubeRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.get_VerticalOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_VerticalOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa438e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"get_VerticalOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.set_VerticalOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(float_t)>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_VerticalOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa438e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"set_VerticalOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.get_DisabledColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_DisabledColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa438e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"get_DisabledColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.set_DisabledColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_DisabledColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa438e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"set_DisabledColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.get_EnabledColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_EnabledColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa438e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"get_EnabledColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.set_EnabledColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_EnabledColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa438e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"set_EnabledColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.get_HighligtedColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_HighligtedColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa438e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"get_HighligtedColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.set_HighligtedColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_HighligtedColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa438e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"set_HighligtedColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa438e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa438ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa438f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa438fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.InitializeVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::InitializeVisuals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa438e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"InitializeVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.UpdateArrows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateArrows)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa438fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"UpdateArrows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.UpdateArrowPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(float_t, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateArrowPosition)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa4395b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"UpdateArrowPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.RotateTrail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(float_t, ::Oculus::Interaction::TubeRenderer*)>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::RotateTrail)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa439770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"RotateTrail", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::TubeRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.UpdateTrail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(float_t, ::Oculus::Interaction::TubeRenderer*)>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateTrail)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4397f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"UpdateTrail", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::TubeRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.UpdateColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateColors)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa4390f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"UpdateColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual.InitializeSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Oculus::Interaction::TubePoint> (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::InitializeSegment)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xa43927c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"InitializeSegment", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa43984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__leftArrow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftArrow;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__leftArrow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftArrow;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__leftArrow(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftArrow = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__rightArrow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightArrow;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__rightArrow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightArrow;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__rightArrow(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightArrow = value;
}
constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__leftTrail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftTrail;
}
constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__leftTrail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftTrail;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__leftTrail(::UnityW<::Oculus::Interaction::TubeRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftTrail = value;
}
constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__rightTrail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightTrail;
}
constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__rightTrail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightTrail;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__rightTrail(::UnityW<::Oculus::Interaction::TubeRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightTrail = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__leftMaterialBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftMaterialBlock;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__leftMaterialBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftMaterialBlock;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__leftMaterialBlock(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftMaterialBlock = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__rightMaterialBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightMaterialBlock;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__rightMaterialBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightMaterialBlock;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__rightMaterialBlock(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightMaterialBlock = value;
}
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__verticalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalOffset;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__verticalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalOffset;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__verticalOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____verticalOffset = value;
}
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radius = value;
}
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__margin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____margin;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__margin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____margin;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__margin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____margin = value;
}
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__trailLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trailLength;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__trailLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trailLength;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__trailLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trailLength = value;
}
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__maxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAngle;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__maxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAngle;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__maxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAngle = value;
}
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__railGap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____railGap;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__railGap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____railGap;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__railGap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____railGap = value;
}
constexpr float_t& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__squeezeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____squeezeLength;
}
constexpr float_t const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__squeezeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____squeezeLength;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__squeezeLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____squeezeLength = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__disabledColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__disabledColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledColor;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__disabledColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__enabledColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__enabledColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledColor;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__enabledColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabledColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__highligtedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highligtedColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__highligtedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highligtedColor;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__highligtedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highligtedColor = value;
}
constexpr bool& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::setStaticF__rotationCorrectionLeft(::UnityEngine::Quaternion  value)  {
::cordl_internals::setStaticField<::UnityEngine::Quaternion, "_rotationCorrectionLeft", ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::getStaticF__rotationCorrectionLeft()  {
return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "_rotationCorrectionLeft", ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>();
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::setStaticF__colorShaderPropertyID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_colorShaderPropertyID", ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::getStaticF__colorShaderPropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_colorShaderPropertyID", ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>();
}
inline float_t Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_VerticalOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"get_VerticalOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_VerticalOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"set_VerticalOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_DisabledColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"get_DisabledColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_DisabledColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"set_DisabledColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_EnabledColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"get_EnabledColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_EnabledColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"set_EnabledColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::get_HighligtedColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"get_HighligtedColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::set_HighligtedColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"set_HighligtedColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::InitializeVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"InitializeVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateArrows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"UpdateArrows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateArrowPosition(float_t  angle, ::UnityEngine::Transform*  arrow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"UpdateArrowPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle, arrow);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::RotateTrail(float_t  angle, ::Oculus::Interaction::TubeRenderer*  trail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"RotateTrail", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::TubeRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle, trail);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateTrail(float_t  angle, ::Oculus::Interaction::TubeRenderer*  trail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"UpdateTrail", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::TubeRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle, trail);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::UpdateColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"UpdateColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::Oculus::Interaction::TubePoint> Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::InitializeSegment(::UnityEngine::Vector2  minMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {"InitializeSegment", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Oculus::Interaction::TubePoint>>(this, ___internal_method, minMax);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual* Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::LocomotionTutorialTurnVisual::LocomotionTutorialTurnVisual()   {
}
