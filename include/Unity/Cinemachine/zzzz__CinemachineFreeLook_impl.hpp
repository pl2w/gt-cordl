#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFreeLook.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__BindingMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_impl.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_LegacyTransitionParams_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_Orbit_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_impl.hpp"
#include "Unity/Cinemachine/zzzz__LegacyLensSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_LegacyTransitionParams_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_Orbit_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook___c__DisplayClass52_0_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook___c__DisplayClass52_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLook_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineLegacyCameraEvents_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.PerformLegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(int32_t)>(&::Unity::Cinemachine::CinemachineFreeLook::PerformLegacyUpgrade)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaecdf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.get_IsDprecated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::get_IsDprecated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaece01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::OnValidate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaece024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.GetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> (::Unity::Cinemachine::CinemachineFreeLook::*)(int32_t)>(&::Unity::Cinemachine::CinemachineFreeLook::GetRig)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaece094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"GetRig", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.get_RigsAreCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::get_RigsAreCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaece838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"get_RigsAreCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.get_RigNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::Unity::Cinemachine::CinemachineFreeLook::get_RigNames)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaece858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"get_RigNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaece948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.UpdateInputAxisProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::UpdateInputAxisProvider)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaece978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"UpdateInputAxisProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::OnDestroy)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xaecea28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.OnTransformChildrenChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::OnTransformChildrenChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeceb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"OnTransformChildrenChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeceb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.get_PreviousStateIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::get_PreviousStateIsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaecf250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.set_PreviousStateIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(bool)>(&::Unity::Cinemachine::CinemachineFreeLook::set_PreviousStateIsValid)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaecf258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaecf348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.get_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::get_LookAt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaecf358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.set_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineFreeLook::set_LookAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaecf364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.get_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::get_Follow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaecf36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.set_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineFreeLook::set_Follow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaecf378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.IsLiveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFreeLook::*)(::Unity::Cinemachine::ICinemachineCamera*, bool)>(&::Unity::Cinemachine::CinemachineFreeLook::IsLiveChild)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaecf380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"IsLiveChild", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFreeLook::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaecf4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineFreeLook::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaecf560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.InternalUpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineFreeLook::InternalUpdateCameraState)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xaecff68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineFreeLook::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xaed0458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed07c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.GetYAxisClosestValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFreeLook::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFreeLook::GetYAxisClosestValue)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xaecf780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"GetYAxisClosestValue", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.SteepestDescent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFreeLook::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFreeLook::SteepestDescent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaed07d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"SteepestDescent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.InvalidateRigCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::InvalidateRigCache)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaece080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"InvalidateRigCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.DestroyRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::DestroyRigs)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0xaeceb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"DestroyRigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.CreateRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>> (::Unity::Cinemachine::CinemachineFreeLook::*)(::ArrayW<::Unity::Cinemachine::CinemachineVirtualCamera*>)>(&::Unity::Cinemachine::CinemachineFreeLook::CreateRigs)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0xaed0ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"CreateRigs", {}, {::i2c::type_of<::ArrayW<::Unity::Cinemachine::CinemachineVirtualCamera*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.UpdateRigCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::UpdateRigCache)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0xaece0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"UpdateRigCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.LocateExistingRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>* (::Unity::Cinemachine::CinemachineFreeLook::*)(bool)>(&::Unity::Cinemachine::CinemachineFreeLook::LocateExistingRigs)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0xaed1390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"LocateExistingRigs", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.UpdateXAxisHeading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFreeLook::*)(::Unity::Cinemachine::CinemachineOrbitalTransposer*, float_t, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFreeLook::UpdateXAxisHeading)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xaed1980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"UpdateXAxisHeading", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.PushSettingsToRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::PushSettingsToRigs)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xaecfb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"PushSettingsToRigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.GetYAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::GetYAxisValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaecf474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"GetYAxisValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.CalculateNewState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineFreeLook::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineFreeLook::CalculateNewState)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xaed02e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"CalculateNewState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.GetLocalPositionForCameraFromInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineFreeLook::*)(float_t)>(&::Unity::Cinemachine::CinemachineFreeLook::GetLocalPositionForCameraFromInput)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaed1b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"GetLocalPositionForCameraFromInput", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook.UpdateCachedSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::UpdateCachedSpline)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xaed1c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"UpdateCachedSpline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)()>(&::Unity::Cinemachine::CinemachineFreeLook::_ctor)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xaed1fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook._SteepestDescent_g__AngleFunction_52_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFreeLook::*)(float_t, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>)>(&::Unity::Cinemachine::CinemachineFreeLook::_SteepestDescent_g__AngleFunction_52_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaed09a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"<SteepestDescent>g__AngleFunction|52_0", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook._SteepestDescent_g__SlopeOfAngleFunction_52_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFreeLook::*)(float_t, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>)>(&::Unity::Cinemachine::CinemachineFreeLook::_SteepestDescent_g__SlopeOfAngleFunction_52_1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaed0a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"<SteepestDescent>g__SlopeOfAngleFunction|52_1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook._SteepestDescent_g__InitialGuess_52_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFreeLook::*)(::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>)>(&::Unity::Cinemachine::CinemachineFreeLook::_SteepestDescent_g__InitialGuess_52_2)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaed08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"<SteepestDescent>g__InitialGuess|52_2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook._SteepestDescent_g__ChooseBestAngle_52_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook::*)(float_t, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_1>)>(&::Unity::Cinemachine::CinemachineFreeLook::_SteepestDescent_g__ChooseBestAngle_52_3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaed236c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"<SteepestDescent>g__ChooseBestAngle|52_3", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_1>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LookAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookAt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LookAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookAt;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_LookAt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookAt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Follow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Follow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Follow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Follow;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_Follow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Follow = value;
}
constexpr bool& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CommonLens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommonLens;
}
constexpr bool const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CommonLens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommonLens;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_CommonLens(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CommonLens = value;
}
constexpr ::Unity::Cinemachine::LegacyLensSettings& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Lens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Lens;
}
constexpr ::Unity::Cinemachine::LegacyLensSettings const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Lens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Lens;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_Lens(::Unity::Cinemachine::LegacyLensSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Lens = value;
}
constexpr ::GlobalNamespace::CinemachineCore_BlendHints& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_BlendHint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendHint;
}
constexpr ::GlobalNamespace::CinemachineCore_BlendHints const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_BlendHint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendHint;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_BlendHint(::GlobalNamespace::CinemachineCore_BlendHints  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendHint = value;
}
constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_OnCameraLiveEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnCameraLiveEvent;
}
constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent* const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_OnCameraLiveEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnCameraLiveEvent;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_OnCameraLiveEvent(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnCameraLiveEvent = value;
}
constexpr ::Unity::Cinemachine::AxisState& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_YAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YAxis;
}
constexpr ::Unity::Cinemachine::AxisState const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_YAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YAxis;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_YAxis(::Unity::Cinemachine::AxisState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YAxis = value;
}
constexpr ::GlobalNamespace::AxisState_Recentering& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_YAxisRecentering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YAxisRecentering;
}
constexpr ::GlobalNamespace::AxisState_Recentering const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_YAxisRecentering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YAxisRecentering;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_YAxisRecentering(::GlobalNamespace::AxisState_Recentering  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YAxisRecentering = value;
}
constexpr ::Unity::Cinemachine::AxisState& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_XAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XAxis;
}
constexpr ::Unity::Cinemachine::AxisState const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_XAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XAxis;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_XAxis(::Unity::Cinemachine::AxisState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XAxis = value;
}
constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Heading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Heading;
}
constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Heading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Heading;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_Heading(::GlobalNamespace::CinemachineOrbitalTransposer_Heading  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Heading = value;
}
constexpr ::GlobalNamespace::AxisState_Recentering& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_RecenterToTargetHeading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecenterToTargetHeading;
}
constexpr ::GlobalNamespace::AxisState_Recentering const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_RecenterToTargetHeading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecenterToTargetHeading;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_RecenterToTargetHeading(::GlobalNamespace::AxisState_Recentering  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RecenterToTargetHeading = value;
}
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_BindingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMode;
}
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_BindingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMode;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_BindingMode(::Unity::Cinemachine::TargetTracking::BindingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingMode = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_SplineCurvature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineCurvature;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_SplineCurvature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineCurvature;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_SplineCurvature(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SplineCurvature = value;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Orbits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Orbits;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Orbits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Orbits;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_Orbits(::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Orbits = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LegacyHeadingBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyHeadingBias;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LegacyHeadingBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyHeadingBias;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_LegacyHeadingBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyHeadingBias = value;
}
constexpr bool& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mUseLegacyRigDefinitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUseLegacyRigDefinitions;
}
constexpr bool const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mUseLegacyRigDefinitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUseLegacyRigDefinitions;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_mUseLegacyRigDefinitions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mUseLegacyRigDefinitions = value;
}
constexpr ::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LegacyTransitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyTransitions;
}
constexpr ::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LegacyTransitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyTransitions;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_LegacyTransitions(::GlobalNamespace::CinemachineFreeLook_LegacyTransitionParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyTransitions = value;
}
constexpr bool& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mIsDestroyed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mIsDestroyed;
}
constexpr bool const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mIsDestroyed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mIsDestroyed;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_mIsDestroyed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mIsDestroyed = value;
}
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Rigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigs;
}
constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_Rigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigs;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_Rigs(::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Rigs = value;
}
constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineOrbitalTransposer>>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mOrbitals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mOrbitals;
}
constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineOrbitalTransposer>> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mOrbitals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mOrbitals;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_mOrbitals(::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineOrbitalTransposer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mOrbitals = value;
}
constexpr ::Unity::Cinemachine::CinemachineBlend*& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mBlendA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mBlendA;
}
constexpr ::Unity::Cinemachine::CinemachineBlend* const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mBlendA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mBlendA;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_mBlendA(::Unity::Cinemachine::CinemachineBlend*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mBlendA = value;
}
constexpr ::Unity::Cinemachine::CinemachineBlend*& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mBlendB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mBlendB;
}
constexpr ::Unity::Cinemachine::CinemachineBlend* const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_mBlendB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mBlendB;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_mBlendB(::Unity::Cinemachine::CinemachineBlend*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mBlendB = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedXAxisHeading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedXAxisHeading;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedXAxisHeading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedXAxisHeading;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_CachedXAxisHeading(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedXAxisHeading = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LastHeadingUpdateFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHeadingUpdateFrame;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LastHeadingUpdateFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHeadingUpdateFrame;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_LastHeadingUpdateFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastHeadingUpdateFrame = value;
}
constexpr ::Unity::Cinemachine::LensSettings& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LensSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LensSettings;
}
constexpr ::Unity::Cinemachine::LensSettings const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_LensSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LensSettings;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_LensSettings(::Unity::Cinemachine::LensSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LensSettings = value;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedOrbits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedOrbits;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedOrbits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedOrbits;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_CachedOrbits(::ArrayW<::GlobalNamespace::CinemachineFreeLook_Orbit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedOrbits = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedTension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedTension;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedTension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedTension;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_CachedTension(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedTension = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedKnots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedKnots;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedKnots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedKnots;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_CachedKnots(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedKnots = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedCtrl1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedCtrl1;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedCtrl1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedCtrl1;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_CachedCtrl1(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedCtrl1 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedCtrl2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedCtrl2;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_get_m_CachedCtrl2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedCtrl2;
}
constexpr void Unity::Cinemachine::CinemachineFreeLook::__cordl_internal_set_m_CachedCtrl2(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedCtrl2 = value;
}
inline void Unity::Cinemachine::CinemachineFreeLook::setStaticF_CreateRigOverride(::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*, "CreateRigOverride", ::Unity::Cinemachine::CinemachineFreeLook*>(std::forward<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate* Unity::Cinemachine::CinemachineFreeLook::getStaticF_CreateRigOverride()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*, "CreateRigOverride", ::Unity::Cinemachine::CinemachineFreeLook*>();
}
inline void Unity::Cinemachine::CinemachineFreeLook::setStaticF_DestroyRigOverride(::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*, "DestroyRigOverride", ::Unity::Cinemachine::CinemachineFreeLook*>(std::forward<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate* Unity::Cinemachine::CinemachineFreeLook::getStaticF_DestroyRigOverride()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*, "DestroyRigOverride", ::Unity::Cinemachine::CinemachineFreeLook*>();
}
inline void Unity::Cinemachine::CinemachineFreeLook::PerformLegacyUpgrade(int32_t  streamedVersion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streamedVersion);
}
inline bool Unity::Cinemachine::CinemachineFreeLook::get_IsDprecated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> Unity::Cinemachine::CinemachineFreeLook::GetRig(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"GetRig", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>(this, ___internal_method, i);
}
inline bool Unity::Cinemachine::CinemachineFreeLook::get_RigsAreCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"get_RigsAreCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Unity::Cinemachine::CinemachineFreeLook::get_RigNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"get_RigNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::UpdateInputAxisProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"UpdateInputAxisProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::OnTransformChildrenChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"OnTransformChildrenChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineFreeLook::get_PreviousStateIsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::set_PreviousStateIsValid(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineFreeLook::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineFreeLook::get_LookAt()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::set_LookAt(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineFreeLook::get_Follow()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::set_Follow(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineFreeLook::IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  vcam, bool  dominantChildOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"IsLiveChild", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam, dominantChildOnly);
}
inline void Unity::Cinemachine::CinemachineFreeLook::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineFreeLook::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void Unity::Cinemachine::CinemachineFreeLook::InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineFreeLook::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineFreeLook::Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineFreeLook::GetYAxisClosestValue(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"GetYAxisClosestValue", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, cameraPos, up);
}
inline float_t Unity::Cinemachine::CinemachineFreeLook::SteepestDescent(::UnityEngine::Vector3  cameraOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"SteepestDescent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, cameraOffset);
}
inline void Unity::Cinemachine::CinemachineFreeLook::InvalidateRigCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"InvalidateRigCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::DestroyRigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"DestroyRigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>> Unity::Cinemachine::CinemachineFreeLook::CreateRigs(::ArrayW<::Unity::Cinemachine::CinemachineVirtualCamera*>  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"CreateRigs", {}, {::i2c::type_of<::ArrayW<::Unity::Cinemachine::CinemachineVirtualCamera*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>>(this, ___internal_method, copyFrom);
}
inline bool Unity::Cinemachine::CinemachineFreeLook::UpdateRigCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"UpdateRigCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>* Unity::Cinemachine::CinemachineFreeLook::LocateExistingRigs(bool  forceOrbital)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"LocateExistingRigs", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>*>(this, ___internal_method, forceOrbital);
}
inline float_t Unity::Cinemachine::CinemachineFreeLook::UpdateXAxisHeading(::Unity::Cinemachine::CinemachineOrbitalTransposer*  orbital, float_t  deltaTime, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"UpdateXAxisHeading", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, orbital, deltaTime, up);
}
inline void Unity::Cinemachine::CinemachineFreeLook::PushSettingsToRigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"PushSettingsToRigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineFreeLook::GetYAxisValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"GetYAxisValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineFreeLook::CalculateNewState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"CalculateNewState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method, worldUp, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineFreeLook::GetLocalPositionForCameraFromInput(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"GetLocalPositionForCameraFromInput", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline void Unity::Cinemachine::CinemachineFreeLook::UpdateCachedSpline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"UpdateCachedSpline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFreeLook::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineFreeLook::_SteepestDescent_g__AngleFunction_52_0(float_t  input, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"<SteepestDescent>g__AngleFunction|52_0", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, input, _cordl_fixed_empty_name_whitespace);
}
inline float_t Unity::Cinemachine::CinemachineFreeLook::_SteepestDescent_g__SlopeOfAngleFunction_52_1(float_t  input, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"<SteepestDescent>g__SlopeOfAngleFunction|52_1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, input, _cordl_fixed_empty_name_whitespace);
}
inline float_t Unity::Cinemachine::CinemachineFreeLook::_SteepestDescent_g__InitialGuess_52_2(::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"<SteepestDescent>g__InitialGuess|52_2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Unity::Cinemachine::CinemachineFreeLook::_SteepestDescent_g__ChooseBestAngle_52_3(float_t  x, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>  _cordl_fixed_empty_name_whitespace, ::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_1>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook*>(),
                        {"<SteepestDescent>g__ChooseBestAngle|52_3", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Unity::Cinemachine::CinemachineFreeLook* Unity::Cinemachine::CinemachineFreeLook::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineFreeLook*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr  Unity::Cinemachine::CinemachineFreeLook::operator ::Unity::Cinemachine::AxisState_IRequiresInput*() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IRequiresInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr ::Unity::Cinemachine::AxisState_IRequiresInput* Unity::Cinemachine::CinemachineFreeLook::i___Unity__Cinemachine__AxisState_IRequiresInput() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IRequiresInput*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineMixer"
constexpr  Unity::Cinemachine::CinemachineFreeLook::operator ::Unity::Cinemachine::ICinemachineMixer*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineMixer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineMixer"
constexpr ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CinemachineFreeLook::i___Unity__Cinemachine__ICinemachineMixer() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineMixer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr  Unity::Cinemachine::CinemachineFreeLook::operator ::Unity::Cinemachine::ICinemachineCamera*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineFreeLook::i___Unity__Cinemachine__ICinemachineCamera() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineFreeLook::CinemachineFreeLook()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaed2504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::*)(::UnityEngine::GameObject*)>(&::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaed25b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::*)(::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaed25c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaed25e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::Invoke(::UnityEngine::GameObject*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::BeginInvoke(::UnityEngine::GameObject*  rig, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rig, callback, object);
}
inline void Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate* Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineFreeLook_DestroyRigDelegate::CinemachineFreeLook_DestroyRigDelegate()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaed23a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> (::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::*)(::Unity::Cinemachine::CinemachineFreeLook*, ::StringW, ::Unity::Cinemachine::CinemachineVirtualCamera*)>(&::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaed24b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::*)(::Unity::Cinemachine::CinemachineFreeLook*, ::StringW, ::Unity::Cinemachine::CinemachineVirtualCamera*, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaed24c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> (::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaed24f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::Invoke(::Unity::Cinemachine::CinemachineFreeLook*  vcam, ::StringW  name, ::Unity::Cinemachine::CinemachineVirtualCamera*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>(this, ___internal_method, vcam, name, copyFrom);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::BeginInvoke(::Unity::Cinemachine::CinemachineFreeLook*  vcam, ::StringW  name, ::Unity::Cinemachine::CinemachineVirtualCamera*  copyFrom, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, vcam, name, copyFrom, callback, object);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate* Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineFreeLook_CreateRigDelegate::CinemachineFreeLook_CreateRigDelegate()   {
}
