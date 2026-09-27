#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/FingerFeatureSkeletalDebugVisual.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__FingerFeatureSkeletalDebugVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizer_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4abe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual.UpdateFeatureActiveValueAndVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::*)(bool)>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::UpdateFeatureActiveValueAndVisual)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4abe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"UpdateFeatureActiveValueAndVisual", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*)>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::Initialize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4abf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa4ac004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual.ToggleLineRendererEnableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::*)(bool)>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::ToggleLineRendererEnableState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4ac0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"ToggleLineRendererEnableState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual.UpdateDebugSkeletonLineRendererJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::UpdateDebugSkeletonLineRendererJoints)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xa4ac140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"UpdateDebugSkeletonLineRendererJoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual.UpdateFeatureActiveValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::UpdateFeatureActiveValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4ac430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"UpdateFeatureActiveValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4ac4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__fingerFeatureStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureStateProvider;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider> const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__fingerFeatureStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureStateProvider;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__fingerFeatureStateProvider(::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerFeatureStateProvider = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineRenderer;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineRenderer = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__normalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__normalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__normalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__activeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__activeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__activeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeColor = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__lineWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineWidth;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__lineWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineWidth;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__lineWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineWidth = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__lastFeatureActiveValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFeatureActiveValue;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__lastFeatureActiveValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFeatureActiveValue;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__lastFeatureActiveValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFeatureActiveValue = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>*& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__jointsCovered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsCovered;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>* const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__jointsCovered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsCovered;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__jointsCovered(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Input::HandJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointsCovered = value;
}
constexpr ::Oculus::Interaction::Input::HandFinger& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__finger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finger;
}
constexpr ::Oculus::Interaction::Input::HandFinger const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__finger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finger;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__finger(::Oculus::Interaction::Input::HandFinger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finger = value;
}
constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__fingerFeatureConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureConfig;
}
constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__fingerFeatureConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureConfig;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__fingerFeatureConfig(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerFeatureConfig = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__initializedPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializedPositions;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__initializedPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializedPositions;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__initializedPositions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializedPositions = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::UpdateFeatureActiveValueAndVisual(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"UpdateFeatureActiveValueAndVisual", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::Initialize(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  fingerFeatureConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, finger, fingerFeatureConfig);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::ToggleLineRendererEnableState(bool  enableState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"ToggleLineRendererEnableState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableState);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::UpdateDebugSkeletonLineRendererJoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"UpdateDebugSkeletonLineRendererJoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::UpdateFeatureActiveValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {"UpdateFeatureActiveValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual* Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::FingerFeatureSkeletalDebugVisual::FingerFeatureSkeletalDebugVisual()   {
}
