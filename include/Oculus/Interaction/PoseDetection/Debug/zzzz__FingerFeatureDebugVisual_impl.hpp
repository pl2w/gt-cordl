#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/FingerFeatureDebugVisual.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__FingerFeatureDebugVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFingerFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizer_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4ab810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4ab898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*, ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*)>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::Initialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4ab8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::Update)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0xa4ab934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4abe64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__normalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__normalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__normalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__activeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__activeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__activeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeColor = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__targetText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__targetText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetText;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__targetText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetText = value;
}
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__fingerFeatureState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureState;
}
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__fingerFeatureState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureState;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__fingerFeatureState(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerFeatureState = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__lastActiveValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActiveValue;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__lastActiveValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActiveValue;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__lastActiveValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastActiveValue = value;
}
constexpr ::Oculus::Interaction::Input::HandFinger& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__handFinger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handFinger;
}
constexpr ::Oculus::Interaction::Input::HandFinger const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__handFinger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handFinger;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__handFinger(::Oculus::Interaction::Input::HandFinger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handFinger = value;
}
constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__featureConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfig;
}
constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__featureConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfig;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__featureConfig(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureConfig = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::Initialize(::Oculus::Interaction::Input::HandFinger  handFinger, ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  config, ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handFinger, config, fingerFeatureState);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual* Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureDebugVisual::FingerFeatureDebugVisual()   {
}
