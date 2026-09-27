#pragma once
// IWYU pragma private; include "Oculus/Interaction/ArcTubeVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Oculus/Interaction/zzzz__ArcTubeVisual_def.hpp"
#include "Oculus/Interaction/zzzz__TubePoint_def.hpp"
#include "Oculus/Interaction/zzzz__TubeRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ArcTubeVisual::*)()>(&::Oculus::Interaction::ArcTubeVisual::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa400e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual.InitializeVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ArcTubeVisual::*)()>(&::Oculus::Interaction::ArcTubeVisual::InitializeVisuals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa400ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InitializeVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual.InitializeSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Oculus::Interaction::TubePoint> (::Oculus::Interaction::ArcTubeVisual::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::ArcTubeVisual::InitializeSegment)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xa400f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InitializeSegment", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual.InjectAllArcTubeVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ArcTubeVisual::*)(::Oculus::Interaction::TubeRenderer*, float_t, float_t, float_t)>(&::Oculus::Interaction::ArcTubeVisual::InjectAllArcTubeVisual)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa401354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectAllArcTubeVisual", {}, {::i2c::type_of<::Oculus::Interaction::TubeRenderer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual.InjectTubeRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ArcTubeVisual::*)(::Oculus::Interaction::TubeRenderer*)>(&::Oculus::Interaction::ArcTubeVisual::InjectTubeRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa401394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectTubeRenderer", {}, {::i2c::type_of<::Oculus::Interaction::TubeRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual.InjectRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ArcTubeVisual::*)(float_t)>(&::Oculus::Interaction::ArcTubeVisual::InjectRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40139c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual.InjectMinAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ArcTubeVisual::*)(float_t)>(&::Oculus::Interaction::ArcTubeVisual::InjectMinAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4013a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectMinAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual.InjectMaxAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ArcTubeVisual::*)(float_t)>(&::Oculus::Interaction::ArcTubeVisual::InjectMaxAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4013ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectMaxAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ArcTubeVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ArcTubeVisual::*)()>(&::Oculus::Interaction::ArcTubeVisual::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4013b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__tubeRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tubeRenderer;
}
constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__tubeRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tubeRenderer;
}
constexpr void Oculus::Interaction::ArcTubeVisual::__cordl_internal_set__tubeRenderer(::UnityW<::Oculus::Interaction::TubeRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tubeRenderer = value;
}
constexpr float_t& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr float_t const& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr void Oculus::Interaction::ArcTubeVisual::__cordl_internal_set__radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radius = value;
}
constexpr float_t& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__minAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minAngle;
}
constexpr float_t const& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__minAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minAngle;
}
constexpr void Oculus::Interaction::ArcTubeVisual::__cordl_internal_set__minAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minAngle = value;
}
constexpr float_t& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__maxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAngle;
}
constexpr float_t const& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__maxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAngle;
}
constexpr void Oculus::Interaction::ArcTubeVisual::__cordl_internal_set__maxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAngle = value;
}
constexpr bool& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::ArcTubeVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::ArcTubeVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::ArcTubeVisual::setStaticF__rotationCorrectionLeft(::UnityEngine::Quaternion  value)  {
::cordl_internals::setStaticField<::UnityEngine::Quaternion, "_rotationCorrectionLeft", ::Oculus::Interaction::ArcTubeVisual*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion Oculus::Interaction::ArcTubeVisual::getStaticF__rotationCorrectionLeft()  {
return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "_rotationCorrectionLeft", ::Oculus::Interaction::ArcTubeVisual*>();
}
inline void Oculus::Interaction::ArcTubeVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ArcTubeVisual::InitializeVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InitializeVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::Oculus::Interaction::TubePoint> Oculus::Interaction::ArcTubeVisual::InitializeSegment(::UnityEngine::Vector2  minMaxAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InitializeSegment", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Oculus::Interaction::TubePoint>>(this, ___internal_method, minMaxAngle);
}
inline void Oculus::Interaction::ArcTubeVisual::InjectAllArcTubeVisual(::Oculus::Interaction::TubeRenderer*  tubeRenderer, float_t  radius, float_t  minAngle, float_t  maxAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectAllArcTubeVisual", {}, {::i2c::type_of<::Oculus::Interaction::TubeRenderer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tubeRenderer, radius, minAngle, maxAngle);
}
inline void Oculus::Interaction::ArcTubeVisual::InjectTubeRenderer(::Oculus::Interaction::TubeRenderer*  tubeRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectTubeRenderer", {}, {::i2c::type_of<::Oculus::Interaction::TubeRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tubeRenderer);
}
inline void Oculus::Interaction::ArcTubeVisual::InjectRadius(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radius);
}
inline void Oculus::Interaction::ArcTubeVisual::InjectMinAngle(float_t  minAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectMinAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minAngle);
}
inline void Oculus::Interaction::ArcTubeVisual::InjectMaxAngle(float_t  maxAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {"InjectMaxAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxAngle);
}
inline void Oculus::Interaction::ArcTubeVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ArcTubeVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ArcTubeVisual* Oculus::Interaction::ArcTubeVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ArcTubeVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ArcTubeVisual::ArcTubeVisual()   {
}
