#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/HandShapeSkeletalDebugVisual.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__HandShapeSkeletalDebugVisual_def.hpp"
#include "GlobalNamespace/zzzz____f__AnonymousType0_2_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__HandShapeSkeletalDebugVisual_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizerActiveState_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4ade20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::Start)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0xa4ade24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual.AllFeatureStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::AllFeatureStates)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4ae6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(),
                        {"AllFeatureStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ae760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::__cordl_internal_get__shapeRecognizerActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shapeRecognizerActiveState;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState> const& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::__cordl_internal_get__shapeRecognizerActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shapeRecognizerActiveState;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::__cordl_internal_set__shapeRecognizerActiveState(::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizerActiveState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shapeRecognizerActiveState = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::__cordl_internal_get__fingerFeatureDebugVisualPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureDebugVisualPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::__cordl_internal_get__fingerFeatureDebugVisualPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerFeatureDebugVisualPrefab;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::__cordl_internal_set__fingerFeatureDebugVisualPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerFeatureDebugVisualPrefab = value;
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::AllFeatureStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(),
                        {"AllFeatureStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual::HandShapeSkeletalDebugVisual()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)(int32_t)>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4ae72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4ae9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0xa4aea70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4aefa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.__m__Finally2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4aeef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4af050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4af05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4af094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.System_Collections_Generic_IEnumerable__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_Generic_IEnumerable__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa4af0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4af194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> const& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_set___2__current(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual>& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual> const& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>* const& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* const& Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_Generic_IEnumerable__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr  Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Oculus__Interaction__Input__HandFinger___System__Collections__Generic__IReadOnlyList_1___Oculus__Interaction__PoseDetection__ShapeRecognizer_FingerFeatureConfig_____() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr  Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Oculus__Interaction__Input__HandFinger___System__Collections__Generic__IReadOnlyList_1___Oculus__Interaction__PoseDetection__ShapeRecognizer_FingerFeatureConfig_____() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4::HandShapeSkeletalDebugVisual__AllFeatureStates_d__4()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::*)()>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ae7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c._Start_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFinger (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::*)(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>)>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::_Start_b__3_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ae7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(),
                        {"<Start>b__3_0", {}, {::i2c::type_of<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c._Start_b__3_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>* (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::*)(::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*)>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::_Start_b__3_1)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa4ae7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(),
                        {"<Start>b__3_1", {}, {::i2c::type_of<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c._Start_b__3_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* (::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::*)(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>)>(&::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::_Start_b__3_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ae9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(),
                        {"<Start>b__3_2", {}, {::i2c::type_of<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::setStaticF___9(::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*, "<>9", ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(std::forward<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(value));
}
inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*, "<>9", ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>();
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::setStaticF___9__3_0(::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>*, "<>9__3_0", ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(std::forward<::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::Oculus::Interaction::Input::HandFinger>*, "<>9__3_0", ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>();
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::setStaticF___9__3_2(::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*, "<>9__3_2", ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(std::forward<::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::getStaticF___9__3_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*, "<>9__3_2", ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>();
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::setStaticF___9__3_1(::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>*, "<>9__3_1", ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(std::forward<::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>*>(value));
}
inline ::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::getStaticF___9__3_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*,::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>*, "<>9__3_1", ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>();
}
inline void Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandFinger Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::_Start_b__3_0(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(),
                        {"<Start>b__3_0", {}, {::i2c::type_of<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFinger>(this, ___internal_method, s);
}
inline ::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::_Start_b__3_1(::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(),
                        {"<Start>b__3_1", {}, {::i2c::type_of<::System::Linq::IGrouping_2<::Oculus::Interaction::Input::HandFinger,::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__f__AnonymousType0_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>*>(this, ___internal_method, group);
}
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::_Start_b__3_2(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>(),
                        {"<Start>b__3_2", {}, {::i2c::type_of<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>(this, ___internal_method, item);
}
inline ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c* Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::HandShapeSkeletalDebugVisual___c::HandShapeSkeletalDebugVisual___c()   {
}
