#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ShapeRecognizerActiveState.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizerActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFingerFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizerActiveState_FingerFeatureStateUsage_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizer_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a5858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.get_Shapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>* (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::get_Shapes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a5860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"get_Shapes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::get_Handedness)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4a5868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"get_Handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4a5908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4a59a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.InitStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InitStateProvider)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa4a5dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InitStateProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.FlattenUsedFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>* (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::FlattenUsedFeatures)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xa4a59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"FlattenUsedFeatures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::get_Active)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa4a5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.InjectAllShapeRecognizerActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*, ::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>)>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InjectAllShapeRecognizerActiveState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4a623c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InjectAllShapeRecognizerActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4a6278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.InjectFingerFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*)>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InjectFingerFeatureStateProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4a6348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InjectFingerFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState.InjectShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>)>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InjectShapes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a6418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InjectShapes", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4a6420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__fingerFeatureStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureStateProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__fingerFeatureStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureStateProvider;
}
constexpr void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_set__fingerFeatureStateProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerFeatureStateProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get_FingerFeatureStateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FingerFeatureStateProvider;
}
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* const& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get_FingerFeatureStateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FingerFeatureStateProvider;
}
constexpr void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_set_FingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FingerFeatureStateProvider = value;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__shapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shapes;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>> const& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__shapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shapes;
}
constexpr void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_set__shapes(::ArrayW<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shapes = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>*& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__allFingerStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allFingerStates;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>* const& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__allFingerStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allFingerStates;
}
constexpr void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_set__allFingerStates(::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allFingerStates = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__nativeActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeActive;
}
constexpr bool const& Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_get__nativeActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeActive;
}
constexpr void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::__cordl_internal_set__nativeActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeActive = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>* Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::get_Shapes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"get_Shapes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::get_Handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"get_Handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InitStateProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InitStateProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>* Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::FlattenUsedFeatures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"FlattenUsedFeatures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage>*>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InjectAllShapeRecognizerActiveState(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureStateProvider, ::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>  shapes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InjectAllShapeRecognizerActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, fingerFeatureStateProvider, shapes);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InjectFingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureStateProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InjectFingerFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerFeatureStateProvider);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::InjectShapes(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>  shapes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {"InjectShapes", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shapes);
}
inline void Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState* Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState::ShapeRecognizerActiveState()   {
}
