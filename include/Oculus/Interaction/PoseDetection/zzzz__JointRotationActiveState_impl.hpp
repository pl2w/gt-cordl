#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointRotationActiveState.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBase_1_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_HandAxis_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_RelativeTo_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_WorldAxis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IJointDeltaProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointDeltaConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_HandAxis_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_JointRotationFeatureState_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_RelativeTo_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_WorldAxis_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a0308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a0310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::get_Active)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4a0318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a040c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.get_FeatureConfigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>* (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::get_FeatureConfigs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4a0414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"get_FeatureConfigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.get_FeatureStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>* (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::get_FeatureStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a042c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"get_FeatureStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4a0434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::Start)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0xa4a04d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.CheckAllJointRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::CheckAllJointRotations)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0xa4a094c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"CheckAllJointRotations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4a0fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4a0fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4a108c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.UpdateActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::UpdateActiveState)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4a0350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"UpdateActiveState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.GetWorldTargetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::UnityEngine::Pose, ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::GetWorldTargetAxis)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4a0f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"GetWorldTargetAxis", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.GetWorldAxisVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::GlobalNamespace::JointRotationActiveState_WorldAxis)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::GetWorldAxisVector)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa4a16fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"GetWorldAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_WorldAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.GetHandAxisVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::GlobalNamespace::JointRotationActiveState_HandAxis, ::UnityEngine::Pose)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::GetHandAxisVector)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0xa4a114c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"GetHandAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_HandAxis>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.InjectAllJointRotationActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*, ::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectAllJointRotationActiveState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4a18c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectAllJointRotationActiveState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.InjectFeatureConfigList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectFeatureConfigList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectFeatureConfigList", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4a18fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.InjectJointDeltaProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectJointDeltaProvider)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4a19cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectJointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa4a1aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__jointDeltaProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__jointDeltaProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaProvider;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__jointDeltaProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointDeltaProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__featureConfigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfigs;
}
constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList* const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__featureConfigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfigs;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__featureConfigs(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureConfigs = value;
}
constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__featureConfigurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfigurations;
}
constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList* const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__featureConfigurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfigurations;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__featureConfigurations(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureConfigurations = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__degreesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____degreesPerSecond;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__degreesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____degreesPerSecond;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__degreesPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____degreesPerSecond = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__thresholdWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdWidth;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__thresholdWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdWidth;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__thresholdWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresholdWidth = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__minTimeInState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__minTimeInState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__minTimeInState(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minTimeInState = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>*& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__featureStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureStates;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>* const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__featureStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureStates;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__featureStates(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureStates = value;
}
constexpr ::Oculus::Interaction::PoseDetection::JointDeltaConfig*& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__jointDeltaConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaConfig;
}
constexpr ::Oculus::Interaction::PoseDetection::JointDeltaConfig* const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__jointDeltaConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaConfig;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__jointDeltaConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointDeltaConfig = value;
}
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get_JointDeltaProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointDeltaProvider;
}
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get_JointDeltaProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointDeltaProvider;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set_JointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JointDeltaProvider = value;
}
constexpr int32_t& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__lastStateUpdateFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateUpdateFrame;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__lastStateUpdateFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateUpdateFrame;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__lastStateUpdateFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStateUpdateFrame = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__lastStateChangeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateChangeTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__lastStateChangeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateChangeTime;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__lastStateChangeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStateChangeTime = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateTime = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__internalState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalState;
}
constexpr bool const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__internalState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalState;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__internalState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalState = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr bool const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__activeState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::PoseDetection::JointRotationActiveState::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::PoseDetection::JointRotationActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>* Oculus::Interaction::PoseDetection::JointRotationActiveState::get_FeatureConfigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"get_FeatureConfigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>* Oculus::Interaction::PoseDetection::JointRotationActiveState::get_FeatureStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"get_FeatureStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::JointRotationActiveState::CheckAllJointRotations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"CheckAllJointRotations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::UpdateActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"UpdateActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::JointRotationActiveState::GetWorldTargetAxis(::UnityEngine::Pose  wristPose, ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"GetWorldTargetAxis", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, wristPose, config);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::JointRotationActiveState::GetWorldAxisVector(::GlobalNamespace::JointRotationActiveState_WorldAxis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"GetWorldAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_WorldAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, axis);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::JointRotationActiveState::GetHandAxisVector(::GlobalNamespace::JointRotationActiveState_HandAxis  axis, ::UnityEngine::Pose  wristPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"GetHandAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_HandAxis>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, axis, wristPose);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectAllJointRotationActiveState(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  featureConfigs, ::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectAllJointRotationActiveState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureConfigs, hand, jointDeltaProvider);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectFeatureConfigList(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  featureConfigs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectFeatureConfigList", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureConfigs);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectJointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectJointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointDeltaProvider);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState* Oculus::Interaction::PoseDetection::JointRotationActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointRotationActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::PoseDetection::JointRotationActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::JointRotationActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::PoseDetection::JointRotationActiveState::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::PoseDetection::JointRotationActiveState::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationActiveState()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState___c::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c.__ctor_b__49_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::JointRotationActiveState___c::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState___c::__ctor_b__49_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>(),
                        {"<.ctor>b__49_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState___c::setStaticF___9(::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*, "<>9", ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>(std::forward<::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>(value));
}
inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c* Oculus::Interaction::PoseDetection::JointRotationActiveState___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*, "<>9", ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>();
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState___c::setStaticF___9__49_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__49_0", ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::PoseDetection::JointRotationActiveState___c::getStaticF___9__49_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__49_0", ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>();
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::JointRotationActiveState___c::__ctor_b__49_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>(),
                        {"<.ctor>b__49_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c* Oculus::Interaction::PoseDetection::JointRotationActiveState___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c::JointRotationActiveState___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig.get_RelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JointRotationActiveState_RelativeTo (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::get_RelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig.set_RelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::*)(::GlobalNamespace::JointRotationActiveState_RelativeTo)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::set_RelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"set_RelativeTo", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_RelativeTo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig.get_WorldAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JointRotationActiveState_WorldAxis (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::get_WorldAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"get_WorldAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig.set_WorldAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::*)(::GlobalNamespace::JointRotationActiveState_WorldAxis)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::set_WorldAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"set_WorldAxis", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_WorldAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig.get_HandAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JointRotationActiveState_HandAxis (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::get_HandAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"get_HandAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig.set_HandAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::*)(::GlobalNamespace::JointRotationActiveState_HandAxis)>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::set_HandAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"set_HandAxis", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_HandAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4a1c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::JointRotationActiveState_RelativeTo& Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::GlobalNamespace::JointRotationActiveState_RelativeTo const& Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_set__relativeTo(::GlobalNamespace::JointRotationActiveState_RelativeTo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
constexpr ::GlobalNamespace::JointRotationActiveState_WorldAxis& Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_get__worldAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldAxis;
}
constexpr ::GlobalNamespace::JointRotationActiveState_WorldAxis const& Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_get__worldAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldAxis;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_set__worldAxis(::GlobalNamespace::JointRotationActiveState_WorldAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldAxis = value;
}
constexpr ::GlobalNamespace::JointRotationActiveState_HandAxis& Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_get__handAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handAxis;
}
constexpr ::GlobalNamespace::JointRotationActiveState_HandAxis const& Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_get__handAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handAxis;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::__cordl_internal_set__handAxis(::GlobalNamespace::JointRotationActiveState_HandAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handAxis = value;
}
inline ::GlobalNamespace::JointRotationActiveState_RelativeTo Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::get_RelativeTo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JointRotationActiveState_RelativeTo>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::set_RelativeTo(::GlobalNamespace::JointRotationActiveState_RelativeTo  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"set_RelativeTo", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_RelativeTo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::JointRotationActiveState_WorldAxis Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::get_WorldAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"get_WorldAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JointRotationActiveState_WorldAxis>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::set_WorldAxis(::GlobalNamespace::JointRotationActiveState_WorldAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"set_WorldAxis", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_WorldAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::JointRotationActiveState_HandAxis Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::get_HandAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"get_HandAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JointRotationActiveState_HandAxis>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::set_HandAxis(::GlobalNamespace::JointRotationActiveState_HandAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {"set_HandAxis", {}, {::i2c::type_of<::GlobalNamespace::JointRotationActiveState_HandAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig* Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig::JointRotationActiveState_JointRotationFeatureConfig()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>* (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::*)()>(&::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*& Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>* const& Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::__cordl_internal_set__values(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____values = value;
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>* Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList* Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList::JointRotationActiveState_JointRotationFeatureConfigList()   {
}
