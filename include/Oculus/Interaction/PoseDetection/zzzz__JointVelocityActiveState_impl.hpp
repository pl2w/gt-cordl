#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointVelocityActiveState.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBase_1_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_HandAxis_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_HeadAxis_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_RelativeTo_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_WorldAxis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IJointDeltaProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointDeltaConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_HandAxis_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_HeadAxis_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_JointVelocityFeatureState_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_RelativeTo_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_WorldAxis_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_def.hpp"
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
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.get_JointDeltaProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::IJointDeltaProvider* (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_JointDeltaProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_JointDeltaProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.set_JointDeltaProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::set_JointDeltaProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"set_JointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.get_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHmd* (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_Hmd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.set_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::set_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_Active)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4a1d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.get_FeatureConfigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>* (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_FeatureConfigs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4a1e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_FeatureConfigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.get_FeatureStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>* (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_FeatureStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a1e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_FeatureStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4a1e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::Start)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0xa4a1f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.CheckAllJointVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::CheckAllJointVelocities)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0xa4a23e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"CheckAllJointVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4a2a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4a2a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4a2ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.UpdateActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::UpdateActiveState)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4a1d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"UpdateActiveState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.GetWorldTargetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::UnityEngine::Pose, ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::GetWorldTargetVector)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4a299c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"GetWorldTargetVector", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.GetWorldAxisVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::GlobalNamespace::JointVelocityActiveState_WorldAxis)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::GetWorldAxisVector)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa4a3148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"GetWorldAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_WorldAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.GetHandAxisVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::GlobalNamespace::JointVelocityActiveState_HandAxis, ::UnityEngine::Pose)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::GetHandAxisVector)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0xa4a2b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"GetHandAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_HandAxis>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.GetHeadAxisVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::GlobalNamespace::JointVelocityActiveState_HeadAxis)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::GetHeadAxisVector)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa4a330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"GetHeadAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_HeadAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.InjectAllJointVelocityActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*, ::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectAllJointVelocityActiveState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4a3540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectAllJointVelocityActiveState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.InjectFeatureConfigList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectFeatureConfigList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectFeatureConfigList", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4a357c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.InjectJointDeltaProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectJointDeltaProvider)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4a364c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectJointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState.InjectOptionalHmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectOptionalHmd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4a3728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectOptionalHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa4a37f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__jointDeltaProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__jointDeltaProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaProvider;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__jointDeltaProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointDeltaProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__JointDeltaProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JointDeltaProvider_k__BackingField;
}
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__JointDeltaProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JointDeltaProvider_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__JointDeltaProvider_k__BackingField(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JointDeltaProvider_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__Hmd_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__Hmd_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hmd_k__BackingField = value;
}
constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__featureConfigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfigs;
}
constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__featureConfigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfigs;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__featureConfigs(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureConfigs = value;
}
constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__featureConfigurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfigurations;
}
constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__featureConfigurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureConfigurations;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__featureConfigurations(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureConfigurations = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__minVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minVelocity;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__minVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minVelocity;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__minVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minVelocity = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__thresholdWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdWidth;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__thresholdWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdWidth;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__thresholdWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresholdWidth = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__minTimeInState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__minTimeInState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeInState;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__minTimeInState(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minTimeInState = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>*& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__featureStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureStates;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__featureStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureStates;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__featureStates(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureStates = value;
}
constexpr ::Oculus::Interaction::PoseDetection::JointDeltaConfig*& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__jointDeltaConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaConfig;
}
constexpr ::Oculus::Interaction::PoseDetection::JointDeltaConfig* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__jointDeltaConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointDeltaConfig;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__jointDeltaConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointDeltaConfig = value;
}
constexpr int32_t& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__lastStateUpdateFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateUpdateFrame;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__lastStateUpdateFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateUpdateFrame;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__lastStateUpdateFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStateUpdateFrame = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__lastStateChangeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateChangeTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__lastStateChangeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStateChangeTime;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__lastStateChangeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStateChangeTime = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateTime = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__internalState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalState;
}
constexpr bool const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__internalState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalState;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__internalState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalState = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr bool const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__activeState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_JointDeltaProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_JointDeltaProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::set_JointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"set_JointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IHmd* Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_Hmd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_Hmd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHmd*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::set_Hmd(::Oculus::Interaction::Input::IHmd*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>* Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_FeatureConfigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_FeatureConfigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>* Oculus::Interaction::PoseDetection::JointVelocityActiveState::get_FeatureStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"get_FeatureStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::JointVelocityActiveState::CheckAllJointVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"CheckAllJointVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::UpdateActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"UpdateActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::JointVelocityActiveState::GetWorldTargetVector(::UnityEngine::Pose  wristPose, ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"GetWorldTargetVector", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, wristPose, config);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::JointVelocityActiveState::GetWorldAxisVector(::GlobalNamespace::JointVelocityActiveState_WorldAxis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"GetWorldAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_WorldAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, axis);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::JointVelocityActiveState::GetHandAxisVector(::GlobalNamespace::JointVelocityActiveState_HandAxis  axis, ::UnityEngine::Pose  wristPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"GetHandAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_HandAxis>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, axis, wristPose);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PoseDetection::JointVelocityActiveState::GetHeadAxisVector(::GlobalNamespace::JointVelocityActiveState_HeadAxis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"GetHeadAxisVector", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_HeadAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, axis);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectAllJointVelocityActiveState(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  featureConfigs, ::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectAllJointVelocityActiveState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureConfigs, hand, jointDeltaProvider);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectFeatureConfigList(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  featureConfigs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectFeatureConfigList", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureConfigs);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectJointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectJointDeltaProvider", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointDeltaProvider);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::InjectOptionalHmd(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {"InjectOptionalHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState* Oculus::Interaction::PoseDetection::JointVelocityActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointVelocityActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::PoseDetection::JointVelocityActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::JointVelocityActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::PoseDetection::JointVelocityActiveState::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::PoseDetection::JointVelocityActiveState::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState::JointVelocityActiveState()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c.__ctor_b__60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::__ctor_b__60_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>(),
                        {"<.ctor>b__60_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::setStaticF___9(::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*, "<>9", ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>(std::forward<::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>(value));
}
inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c* Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*, "<>9", ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>();
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::setStaticF___9__60_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__60_0", ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::getStaticF___9__60_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__60_0", ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>();
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::__ctor_b__60_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>(),
                        {"<.ctor>b__60_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c* Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c::JointVelocityActiveState___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig.get_RelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JointVelocityActiveState_RelativeTo (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::get_RelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig.set_RelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)(::GlobalNamespace::JointVelocityActiveState_RelativeTo)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::set_RelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a396c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"set_RelativeTo", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_RelativeTo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig.get_WorldAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JointVelocityActiveState_WorldAxis (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::get_WorldAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"get_WorldAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig.set_WorldAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)(::GlobalNamespace::JointVelocityActiveState_WorldAxis)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::set_WorldAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"set_WorldAxis", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_WorldAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig.get_HandAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JointVelocityActiveState_HandAxis (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::get_HandAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"get_HandAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig.set_HandAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)(::GlobalNamespace::JointVelocityActiveState_HandAxis)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::set_HandAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a398c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"set_HandAxis", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_HandAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig.get_HeadAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JointVelocityActiveState_HeadAxis (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::get_HeadAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"get_HeadAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig.set_HeadAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)(::GlobalNamespace::JointVelocityActiveState_HeadAxis)>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::set_HeadAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a399c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"set_HeadAxis", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_HeadAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4a39a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo const& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_set__relativeTo(::GlobalNamespace::JointVelocityActiveState_RelativeTo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
constexpr ::GlobalNamespace::JointVelocityActiveState_WorldAxis& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_get__worldAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldAxis;
}
constexpr ::GlobalNamespace::JointVelocityActiveState_WorldAxis const& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_get__worldAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldAxis;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_set__worldAxis(::GlobalNamespace::JointVelocityActiveState_WorldAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldAxis = value;
}
constexpr ::GlobalNamespace::JointVelocityActiveState_HandAxis& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_get__handAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handAxis;
}
constexpr ::GlobalNamespace::JointVelocityActiveState_HandAxis const& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_get__handAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handAxis;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_set__handAxis(::GlobalNamespace::JointVelocityActiveState_HandAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handAxis = value;
}
constexpr ::GlobalNamespace::JointVelocityActiveState_HeadAxis& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_get__headAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headAxis;
}
constexpr ::GlobalNamespace::JointVelocityActiveState_HeadAxis const& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_get__headAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headAxis;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::__cordl_internal_set__headAxis(::GlobalNamespace::JointVelocityActiveState_HeadAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headAxis = value;
}
inline ::GlobalNamespace::JointVelocityActiveState_RelativeTo Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::get_RelativeTo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JointVelocityActiveState_RelativeTo>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::set_RelativeTo(::GlobalNamespace::JointVelocityActiveState_RelativeTo  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"set_RelativeTo", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_RelativeTo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::JointVelocityActiveState_WorldAxis Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::get_WorldAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"get_WorldAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JointVelocityActiveState_WorldAxis>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::set_WorldAxis(::GlobalNamespace::JointVelocityActiveState_WorldAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"set_WorldAxis", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_WorldAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::JointVelocityActiveState_HandAxis Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::get_HandAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"get_HandAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JointVelocityActiveState_HandAxis>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::set_HandAxis(::GlobalNamespace::JointVelocityActiveState_HandAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"set_HandAxis", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_HandAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::JointVelocityActiveState_HeadAxis Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::get_HeadAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"get_HeadAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JointVelocityActiveState_HeadAxis>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::set_HeadAxis(::GlobalNamespace::JointVelocityActiveState_HeadAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {"set_HeadAxis", {}, {::i2c::type_of<::GlobalNamespace::JointVelocityActiveState_HeadAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig* Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig::JointVelocityActiveState_JointVelocityFeatureConfig()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>* (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::*)()>(&::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a395c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>* const& Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::__cordl_internal_set__values(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____values = value;
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>* Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList* Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList::JointVelocityActiveState_JointVelocityFeatureConfigList()   {
}
