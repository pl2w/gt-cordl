#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalFollow.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettings_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_impl.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_OrbitSplineCache_impl.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_Settings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow_OrbitStyles_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow_ReferenceFrames_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow_OrbitStyles_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow_ReferenceFrames_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow___c__DisplayClass50_0_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow___c__DisplayClass50_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow___c__DisplayClass50_2_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisResetSource_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.get_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::get_TrackedPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae9f9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.set_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::set_TrackedPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae9f9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::OnValidate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae9f9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Reset)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xae9fa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.get_DefaultHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::InputAxis (*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::get_DefaultHorizontal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae9fb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"get_DefaultHorizontal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.get_DefaultVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::InputAxis (*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::get_DefaultVertical)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xae9fbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"get_DefaultVertical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.get_DefaultRadial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::InputAxis (*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::get_DefaultRadial)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xae9fc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"get_DefaultRadial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae9fc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae9fce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xae9fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_IInputAxisOwner_GetInputAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_IInputAxisOwner_GetInputAxes)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xae9fd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.IInputAxisOwner.GetInputAxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_IInputAxisResetSource_RegisterResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::System::Action*)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_IInputAxisResetSource_RegisterResetHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea007c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.RegisterResetHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_IInputAxisResetSource_UnregisterResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::System::Action*)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_IInputAxisResetSource_UnregisterResetHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea010c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.UnregisterResetHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaea019c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.get_HasResetHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaea01ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea0350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea0368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(float_t)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea0370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.GetCameraOffsetForNormalizedAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(float_t)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::GetCameraOffsetForNormalizedAxisValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaea0378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"GetCameraOffsetForNormalizedAxisValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.GetCameraPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::GetCameraPoint)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xaea01d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"GetCameraPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xaea0838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xaea0a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.InferAxesFromPosition_Sphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::UnityEngine::Vector3, float_t, ::by_ref<::Unity::Cinemachine::CameraState>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::InferAxesFromPosition_Sphere)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xaea0ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"InferAxesFromPosition_Sphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.InferAxesFromPosition_ThreeRing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::UnityEngine::Vector3, float_t, ::by_ref<::Unity::Cinemachine::CameraState>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::InferAxesFromPosition_ThreeRing)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xaea0d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"InferAxesFromPosition_ThreeRing", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaea140c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::MutateCameraState)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0xaea14f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.UpdateHorizontalCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::UpdateHorizontalCenter)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xaea1acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"UpdateHorizontalCenter", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow.GetReferenceOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::GetReferenceOrientation)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaea1dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"GetReferenceOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaea1ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Cinemachine::InputAxis> (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea1fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Cinemachine::InputAxis> (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea1fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Cinemachine::InputAxis> (::Unity::Cinemachine::CinemachineOrbitalFollow::*)()>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea1fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._InferAxesFromPosition_ThreeRing_g__GetHorizontalAxis_50_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__GetHorizontalAxis_50_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaea1018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__GetHorizontalAxis|50_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._InferAxesFromPosition_ThreeRing_g__GetVerticalAxisClosestValue_50_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__GetVerticalAxisClosestValue_50_1)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xaea1118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__GetVerticalAxisClosestValue|50_1", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._InferAxesFromPosition_ThreeRing_g__SteepestDescent_50_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__SteepestDescent_50_2)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaea1fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__SteepestDescent|50_2", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._InferAxesFromPosition_ThreeRing_g__AngleFunction_50_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(float_t, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__AngleFunction_50_4)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaea2168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__AngleFunction|50_4", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._InferAxesFromPosition_ThreeRing_g__SlopeOfAngleFunction_50_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(float_t, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__SlopeOfAngleFunction_50_5)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaea2220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__SlopeOfAngleFunction|50_5", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._InferAxesFromPosition_ThreeRing_g__InitialGuess_50_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__InitialGuess_50_6)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaea2098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__InitialGuess|50_6", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._InferAxesFromPosition_ThreeRing_g__ChooseBestAngle_50_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalFollow::*)(float_t, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2>)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__ChooseBestAngle_50_7)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaea2288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__ChooseBestAngle|50_7", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalFollow._InferAxesFromPosition_ThreeRing_g__MapTo01_50_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__MapTo01_50_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaea2088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__MapTo01|50_3", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_TargetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_TargetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetOffset;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_TargetOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetOffset = value;
}
constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_TrackerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackerSettings;
}
constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_TrackerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackerSettings;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_TrackerSettings(::Unity::Cinemachine::TargetTracking::TrackerSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackerSettings = value;
}
constexpr ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_OrbitStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrbitStyle;
}
constexpr ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_OrbitStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrbitStyle;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_OrbitStyle(::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrbitStyle = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr ::GlobalNamespace::Cinemachine3OrbitRig_Settings& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_Orbits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Orbits;
}
constexpr ::GlobalNamespace::Cinemachine3OrbitRig_Settings const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_Orbits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Orbits;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_Orbits(::GlobalNamespace::Cinemachine3OrbitRig_Settings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Orbits = value;
}
constexpr ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_RecenteringTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecenteringTarget;
}
constexpr ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_RecenteringTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecenteringTarget;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_RecenteringTarget(::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecenteringTarget = value;
}
constexpr ::Unity::Cinemachine::InputAxis& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_HorizontalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalAxis;
}
constexpr ::Unity::Cinemachine::InputAxis const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_HorizontalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalAxis;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_HorizontalAxis(::Unity::Cinemachine::InputAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HorizontalAxis = value;
}
constexpr ::Unity::Cinemachine::InputAxis& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_VerticalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalAxis;
}
constexpr ::Unity::Cinemachine::InputAxis const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_VerticalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalAxis;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_VerticalAxis(::Unity::Cinemachine::InputAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerticalAxis = value;
}
constexpr ::Unity::Cinemachine::InputAxis& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_RadialAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RadialAxis;
}
constexpr ::Unity::Cinemachine::InputAxis const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_RadialAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RadialAxis;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_RadialAxis(::Unity::Cinemachine::InputAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RadialAxis = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_m_PreviousOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_m_PreviousOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousOffset;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_m_PreviousOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousOffset = value;
}
constexpr ::Unity::Cinemachine::TargetTracking::Tracker& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_m_TargetTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTracker;
}
constexpr ::Unity::Cinemachine::TargetTracking::Tracker const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_m_TargetTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTracker;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_m_TargetTracker(::Unity::Cinemachine::TargetTracking::Tracker  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetTracker = value;
}
constexpr ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_m_OrbitCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OrbitCache;
}
constexpr ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_m_OrbitCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OrbitCache;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_m_OrbitCache(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OrbitCache = value;
}
constexpr ::System::Action*& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_m_ResetHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetHandler;
}
constexpr ::System::Action* const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get_m_ResetHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetHandler;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set_m_ResetHandler(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResetHandler = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get__TrackedPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_get__TrackedPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalFollow::__cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackedPoint_k__BackingField = value;
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineOrbitalFollow::get_TrackedPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::set_TrackedPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::InputAxis Unity::Cinemachine::CinemachineOrbitalFollow::get_DefaultHorizontal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"get_DefaultHorizontal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::InputAxis>(nullptr, ___internal_method);
}
inline ::Unity::Cinemachine::InputAxis Unity::Cinemachine::CinemachineOrbitalFollow::get_DefaultVertical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"get_DefaultVertical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::InputAxis>(nullptr, ___internal_method);
}
inline ::Unity::Cinemachine::InputAxis Unity::Cinemachine::CinemachineOrbitalFollow::get_DefaultRadial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"get_DefaultRadial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::InputAxis>(nullptr, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineOrbitalFollow::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineOrbitalFollow::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_IInputAxisOwner_GetInputAxes(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  axes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.IInputAxisOwner.GetInputAxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axes);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_IInputAxisResetSource_RegisterResetHandler(::System::Action*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.RegisterResetHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_IInputAxisResetSource_UnregisterResetHandler(::System::Action*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.UnregisterResetHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline bool Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.get_HasResetHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineOrbitalFollow::GetCameraOffsetForNormalizedAxisValue(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"GetCameraOffsetForNormalizedAxisValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector4 Unity::Cinemachine::CinemachineOrbitalFollow::GetCameraPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"GetCameraPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineOrbitalFollow::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::InferAxesFromPosition_Sphere(::UnityEngine::Vector3  dir, float_t  distance, ::by_ref<::Unity::Cinemachine::CameraState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"InferAxesFromPosition_Sphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dir, distance, state);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::InferAxesFromPosition_ThreeRing(::UnityEngine::Vector3  dir, float_t  distance, ::by_ref<::Unity::Cinemachine::CameraState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"InferAxesFromPosition_ThreeRing", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dir, distance, state);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::UpdateHorizontalCenter(::UnityEngine::Quaternion  referenceOrientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"UpdateHorizontalCenter", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, referenceOrientation);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineOrbitalFollow::GetReferenceOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"GetReferenceOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::by_ref<::Unity::Cinemachine::InputAxis> Unity::Cinemachine::CinemachineOrbitalFollow::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Cinemachine::InputAxis>>(this, ___internal_method);
}
inline ::by_ref<::Unity::Cinemachine::InputAxis> Unity::Cinemachine::CinemachineOrbitalFollow::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Cinemachine::InputAxis>>(this, ___internal_method);
}
inline ::by_ref<::Unity::Cinemachine::InputAxis> Unity::Cinemachine::CinemachineOrbitalFollow::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__32_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__32_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Cinemachine::InputAxis>>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__GetHorizontalAxis_50_0(::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__GetHorizontalAxis|50_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__GetVerticalAxisClosestValue_50_1(::by_ref<::UnityEngine::Vector3>  splinePoint, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__GetVerticalAxisClosestValue|50_1", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, splinePoint, _cordl_fixed_empty_name_whitespace);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__SteepestDescent_50_2(::UnityEngine::Vector3  cameraOffset, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__SteepestDescent|50_2", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, cameraOffset, _cordl_fixed_empty_name_whitespace);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__AngleFunction_50_4(float_t  input, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__AngleFunction|50_4", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, input, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__SlopeOfAngleFunction_50_5(float_t  input, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__SlopeOfAngleFunction|50_5", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, input, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__InitialGuess_50_6(::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__InitialGuess|50_6", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__ChooseBestAngle_50_7(float_t  x, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__ChooseBestAngle|50_7", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_1>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineOrbitalFollow___c__DisplayClass50_2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalFollow::_InferAxesFromPosition_ThreeRing_g__MapTo01_50_3(float_t  valueToMap, float_t  fMin, float_t  fMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>(),
                        {"<InferAxesFromPosition_ThreeRing>g__MapTo01|50_3", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, valueToMap, fMin, fMax);
}
inline ::Unity::Cinemachine::CinemachineOrbitalFollow* Unity::Cinemachine::CinemachineOrbitalFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineOrbitalFollow*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisOwner"
constexpr  Unity::Cinemachine::CinemachineOrbitalFollow::operator ::Unity::Cinemachine::IInputAxisOwner*() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IInputAxisOwner"
constexpr ::Unity::Cinemachine::IInputAxisOwner* Unity::Cinemachine::CinemachineOrbitalFollow::i___Unity__Cinemachine__IInputAxisOwner() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisOwner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisResetSource"
constexpr  Unity::Cinemachine::CinemachineOrbitalFollow::operator ::Unity::Cinemachine::IInputAxisResetSource*() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisResetSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IInputAxisResetSource"
constexpr ::Unity::Cinemachine::IInputAxisResetSource* Unity::Cinemachine::CinemachineOrbitalFollow::i___Unity__Cinemachine__IInputAxisResetSource() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisResetSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr  Unity::Cinemachine::CinemachineOrbitalFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* Unity::Cinemachine::CinemachineOrbitalFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr  Unity::Cinemachine::CinemachineOrbitalFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping* Unity::Cinemachine::CinemachineOrbitalFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiablePositionDamping() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr  Unity::Cinemachine::CinemachineOrbitalFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance* Unity::Cinemachine::CinemachineOrbitalFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableDistance() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineOrbitalFollow::CinemachineOrbitalFollow()   {
}
