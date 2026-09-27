#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/TransformFeatureDebugVisual.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__TransformFeatureDebugVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformRecognizerActiveState_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4b0740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4b07c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::*)(::Oculus::Interaction::Input::Handedness, ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*, ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*, ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*)>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::Initialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4b0824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::Update)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xa4b0878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4b0c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__normalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__normalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__normalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__activeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__activeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__activeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeColor = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__targetText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__targetText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetText;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__targetText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetText = value;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__transformFeatureStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureStateProvider;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider> const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__transformFeatureStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureStateProvider;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__transformFeatureStateProvider(::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformFeatureStateProvider = value;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__transformRecognizerActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformRecognizerActiveState;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState> const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__transformRecognizerActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformRecognizerActiveState;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__transformRecognizerActiveState(::UnityW<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformRecognizerActiveState = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__lastActiveValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActiveValue;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__lastActiveValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActiveValue;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__lastActiveValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastActiveValue = value;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__targetConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetConfig;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfig* const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__targetConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetConfig;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__targetConfig(::Oculus::Interaction::PoseDetection::TransformFeatureConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetConfig = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr ::Oculus::Interaction::Input::Handedness& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr ::Oculus::Interaction::Input::Handedness const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_get__handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::__cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handedness = value;
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::Initialize(::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::PoseDetection::TransformFeatureConfig*  targetConfig, ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*  transformFeatureStateProvider, ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*  transformActiveState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handedness, targetConfig, transformFeatureStateProvider, transformActiveState);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual* Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureDebugVisual::TransformFeatureDebugVisual()   {
}
