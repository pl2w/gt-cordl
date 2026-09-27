#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseComparerActiveState.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseComparerActiveState_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseComparerActiveState_BodyPoseComparerFeatureState_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseComparerActiveState_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__IBodyPose_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.get_MinTimeInState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::get_MinTimeInState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f440c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"get_MinTimeInState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.set_MinTimeInState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)(float_t)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::set_MinTimeInState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f4414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"set_MinTimeInState", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f441c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.get_FeatureStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>* (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::get_FeatureStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f4424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"get_FeatureStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4f442c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f44cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::get_Active)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa4f44d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.GetJointDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<float_t>)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::GetJointDelta)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa4f4754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"GetJointDelta", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.InjectAllBodyPoseComparerActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)(::Oculus::Interaction::Body::PoseDetection::IBodyPose*, ::Oculus::Interaction::Body::PoseDetection::IBodyPose*, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectAllBodyPoseComparerActiveState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4f4928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectAllBodyPoseComparerActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), ::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.InjectPoseA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)(::Oculus::Interaction::Body::PoseDetection::IBodyPose*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectPoseA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4f4960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectPoseA", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.InjectPoseB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)(::Oculus::Interaction::Body::PoseDetection::IBodyPose*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectPoseB)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4f4a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectPoseB", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.InjectJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectJoints)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4f4b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectJoints", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f4b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa4f4b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__poseA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseA;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__poseA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseA;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__poseA(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseA = value;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get_PoseA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseA;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get_PoseA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseA;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set_PoseA(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoseA = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__poseB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseB;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__poseB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseB;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__poseB(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseB = value;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get_PoseB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseB;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get_PoseB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseB;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set_PoseB(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoseB = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__configs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configs;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>* const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__configs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configs;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__configs(::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configs = value;
}
constexpr float_t& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__minTimeInState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr float_t const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__minTimeInState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__minTimeInState(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minTimeInState = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>*& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__featureStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureStates;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>* const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__featureStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureStates;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__featureStates(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureStates = value;
}
constexpr bool& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
constexpr bool& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__internalActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalActive;
}
constexpr bool const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__internalActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalActive;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__internalActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalActive = value;
}
constexpr float_t& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__lastStateChangeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateChangeTime;
}
constexpr float_t const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_get__lastStateChangeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateChangeTime;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::__cordl_internal_set__lastStateChangeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStateChangeTime = value;
}
inline float_t Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::get_MinTimeInState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"get_MinTimeInState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::set_MinTimeInState(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"set_MinTimeInState", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>* Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::get_FeatureStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"get_FeatureStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::GetJointDelta(::Oculus::Interaction::Body::Input::BodyJointId  joint, ::by_ref<float_t>  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"GetJointDelta", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, delta);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectAllBodyPoseComparerActiveState(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  poseA, ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  poseB, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*  configs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectAllBodyPoseComparerActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), ::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseA, poseB, configs);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectPoseA(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  poseA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectPoseA", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseA);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectPoseB(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  poseB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectPoseB", {}, {::i2c::type_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseB);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectJoints(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*  configs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectJoints", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configs);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState* Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState::BodyPoseComparerActiveState()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f4e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c.__ctor_b__29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::__ctor_b__29_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f4e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>(),
                        {"<.ctor>b__29_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::setStaticF___9(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*, "<>9", ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>(std::forward<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>(value));
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c* Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*, "<>9", ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>();
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::setStaticF___9__29_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__29_0", ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::getStaticF___9__29_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__29_0", ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>();
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::__ctor_b__29_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>(),
                        {"<.ctor>b__29_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c* Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c::BodyPoseComparerActiveState___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4f4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Body::Input::BodyJointId& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_get_Joint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Joint;
}
constexpr ::Oculus::Interaction::Body::Input::BodyJointId const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_get_Joint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Joint;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_set_Joint(::Oculus::Interaction::Body::Input::BodyJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Joint = value;
}
constexpr float_t& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_get_MaxDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDelta;
}
constexpr float_t const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_get_MaxDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDelta;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_set_MaxDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxDelta = value;
}
constexpr float_t& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_get_Width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Width;
}
constexpr float_t const& Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_get_Width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Width;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::__cordl_internal_set_Width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Width = value;
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig* Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig::BodyPoseComparerActiveState_JointComparerConfig()   {
}
