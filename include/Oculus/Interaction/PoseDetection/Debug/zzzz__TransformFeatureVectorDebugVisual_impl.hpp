#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/TransformFeatureVectorDebugVisual.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__TransformFeatureVectorDebugVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__TransformFeatureVectorDebugParentVisual_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b11b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b11c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4b11c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::*)(::Oculus::Interaction::PoseDetection::TransformFeature, bool, ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*, ::UnityEngine::Color)>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::Initialize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4b10d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::Update)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa4b11e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4b13d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineRenderer;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineRenderer = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__lineWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineWidth;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__lineWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineWidth;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_set__lineWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineWidth = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__lineScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineScale;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__lineScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineScale;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_set__lineScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineScale = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_set__isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized = value;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__feature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__feature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_set__feature(::Oculus::Interaction::PoseDetection::TransformFeature  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feature = value;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual>& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual> const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_set__parent(::UnityW<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__trackingHandVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingHandVector;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_get__trackingHandVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingHandVector;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::__cordl_internal_set__trackingHandVector(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingHandVector = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::Initialize(::Oculus::Interaction::PoseDetection::TransformFeature  feature, bool  trackingHandVector, ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*  parent, ::UnityEngine::Color  lineColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, trackingHandVector, parent, lineColor);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual* Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual::TransformFeatureVectorDebugVisual()   {
}
