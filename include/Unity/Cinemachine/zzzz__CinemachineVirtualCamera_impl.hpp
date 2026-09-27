#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVirtualCamera.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_LegacyTransitionParams_impl.hpp"
#include "Unity/Cinemachine/zzzz__LegacyLensSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineLegacyCameraEvents_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_LegacyTransitionParams_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.PerformLegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)(int32_t)>(&::Unity::Cinemachine::CinemachineVirtualCamera::PerformLegacyUpgrade)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaedb730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.get_IsDprecated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::get_IsDprecated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaedb7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaedb7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.get_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::get_LookAt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaedb7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.set_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineVirtualCamera::set_LookAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaedb7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.get_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::get_Follow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaedb7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.set_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineVirtualCamera::set_Follow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaedb7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaedb804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.InternalUpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCamera::InternalUpdateCameraState)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xaedbf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaedc588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::OnDestroy)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xaedc6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::OnValidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaedca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.OnTransformChildrenChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::OnTransformChildrenChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaedcb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"OnTransformChildrenChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaedcb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.DestroyPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::DestroyPipeline)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0xaedcb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"DestroyPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.CreatePipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::Unity::Cinemachine::CinemachineVirtualCamera*)>(&::Unity::Cinemachine::CinemachineVirtualCamera::CreatePipeline)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xaedd1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"CreatePipeline", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.InvalidateComponentPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::InvalidateComponentPipeline)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaedc6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"InvalidateComponentPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.GetComponentOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::GetComponentOwner)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaedd3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"GetComponentOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.GetComponentPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>> (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::GetComponentPipeline)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaedd3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"GetComponentPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.GetCinemachineComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineComponentBase> (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::GlobalNamespace::CinemachineCore_Stage)>(&::Unity::Cinemachine::CinemachineVirtualCamera::GetCinemachineComponent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaedd40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.UpdateComponentPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::UpdateComponentPipeline)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0xaedb894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"UpdateComponentPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.SetFlagsForHiddenChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Unity::Cinemachine::CinemachineVirtualCamera::SetFlagsForHiddenChild)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaedd498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"SetFlagsForHiddenChild", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.CalculateNewState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCamera::CalculateNewState)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xaedc114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"CalculateNewState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineVirtualCamera::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xaedd52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineVirtualCamera::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xaedd69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.SetStateRawPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineVirtualCamera::SetStateRawPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaedd7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"SetStateRawPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCamera::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xaedd7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera.Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaeddb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xaeddc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_LookAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookAt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_LookAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookAt;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_LookAt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookAt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_Follow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Follow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_Follow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Follow;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_Follow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Follow = value;
}
constexpr ::Unity::Cinemachine::LegacyLensSettings& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_Lens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Lens;
}
constexpr ::Unity::Cinemachine::LegacyLensSettings const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_Lens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Lens;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_Lens(::Unity::Cinemachine::LegacyLensSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Lens = value;
}
constexpr ::GlobalNamespace::CinemachineCore_BlendHints& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_BlendHint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendHint;
}
constexpr ::GlobalNamespace::CinemachineCore_BlendHints const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_BlendHint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendHint;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_BlendHint(::GlobalNamespace::CinemachineCore_BlendHints  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendHint = value;
}
constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_OnCameraLiveEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnCameraLiveEvent;
}
constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent* const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_OnCameraLiveEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnCameraLiveEvent;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_OnCameraLiveEvent(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnCameraLiveEvent = value;
}
constexpr ::ArrayW<::StringW>& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_ExcludedPropertiesInInspector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExcludedPropertiesInInspector;
}
constexpr ::ArrayW<::StringW> const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_ExcludedPropertiesInInspector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExcludedPropertiesInInspector;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_ExcludedPropertiesInInspector(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExcludedPropertiesInInspector = value;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineCore_Stage>& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_LockStageInInspector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LockStageInInspector;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineCore_Stage> const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_LockStageInInspector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LockStageInInspector;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_LockStageInInspector(::ArrayW<::GlobalNamespace::CinemachineCore_Stage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LockStageInInspector = value;
}
constexpr ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_LegacyTransitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyTransitions;
}
constexpr ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_LegacyTransitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyTransitions;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_LegacyTransitions(::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyTransitions = value;
}
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_ComponentPipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComponentPipeline;
}
constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>> const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_ComponentPipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComponentPipeline;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_ComponentPipeline(::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ComponentPipeline = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_ComponentOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComponentOwner;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_ComponentOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComponentOwner;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_ComponentOwner(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ComponentOwner = value;
}
constexpr ::Unity::Cinemachine::LensSettings& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_LensSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LensSettings;
}
constexpr ::Unity::Cinemachine::LensSettings const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_m_LensSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LensSettings;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_m_LensSettings(::Unity::Cinemachine::LensSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LensSettings = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_mCachedLookAtTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCachedLookAtTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_mCachedLookAtTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCachedLookAtTarget;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_mCachedLookAtTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCachedLookAtTarget = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_mCachedLookAtTargetVcam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCachedLookAtTargetVcam;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_get_mCachedLookAtTargetVcam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCachedLookAtTargetVcam;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCamera::__cordl_internal_set_mCachedLookAtTargetVcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCachedLookAtTargetVcam = value;
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::setStaticF_CreatePipelineOverride(::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*, "CreatePipelineOverride", ::Unity::Cinemachine::CinemachineVirtualCamera*>(std::forward<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate* Unity::Cinemachine::CinemachineVirtualCamera::getStaticF_CreatePipelineOverride()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*, "CreatePipelineOverride", ::Unity::Cinemachine::CinemachineVirtualCamera*>();
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::setStaticF_DestroyPipelineOverride(::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*, "DestroyPipelineOverride", ::Unity::Cinemachine::CinemachineVirtualCamera*>(std::forward<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate* Unity::Cinemachine::CinemachineVirtualCamera::getStaticF_DestroyPipelineOverride()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*, "DestroyPipelineOverride", ::Unity::Cinemachine::CinemachineVirtualCamera*>();
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::PerformLegacyUpgrade(int32_t  streamedVersion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streamedVersion);
}
inline bool Unity::Cinemachine::CinemachineVirtualCamera::get_IsDprecated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineVirtualCamera::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCamera::get_LookAt()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::set_LookAt(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCamera::get_Follow()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::set_Follow(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::Cinemachine::CinemachineVirtualCamera::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::OnTransformChildrenChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"OnTransformChildrenChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::DestroyPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"DestroyPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCamera::CreatePipeline(::Unity::Cinemachine::CinemachineVirtualCamera*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"CreatePipeline", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, copyFrom);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::InvalidateComponentPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"InvalidateComponentPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCamera::GetComponentOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"GetComponentOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>> Unity::Cinemachine::CinemachineVirtualCamera::GetComponentPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"GetComponentPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineComponentBase> Unity::Cinemachine::CinemachineVirtualCamera::GetCinemachineComponent(::GlobalNamespace::CinemachineCore_Stage  stage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>(this, ___internal_method, stage);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineComponentBase*>)
inline T Unity::Cinemachine::CinemachineVirtualCamera::GetCinemachineComponent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {"GetCinemachineComponent", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineComponentBase*>)
inline T Unity::Cinemachine::CinemachineVirtualCamera::AddCinemachineComponent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {"AddCinemachineComponent", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineComponentBase*>)
inline void Unity::Cinemachine::CinemachineVirtualCamera::DestroyCinemachineComponent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                    {"DestroyCinemachineComponent", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::UpdateComponentPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"UpdateComponentPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::SetFlagsForHiddenChild(::UnityEngine::GameObject*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"SetFlagsForHiddenChild", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, child);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineVirtualCamera::CalculateNewState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"CalculateNewState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::SetStateRawPosition(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"SetStateRawPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineVirtualCamera::Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {"Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineVirtualCamera* Unity::Cinemachine::CinemachineVirtualCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineVirtualCamera*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr  Unity::Cinemachine::CinemachineVirtualCamera::operator ::Unity::Cinemachine::AxisState_IRequiresInput*() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IRequiresInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr ::Unity::Cinemachine::AxisState_IRequiresInput* Unity::Cinemachine::CinemachineVirtualCamera::i___Unity__Cinemachine__AxisState_IRequiresInput() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IRequiresInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineVirtualCamera::CinemachineVirtualCamera()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera___c::*)()>(&::Unity::Cinemachine::CinemachineVirtualCamera___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaede18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera___c._UpdateComponentPipeline_b__44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachineVirtualCamera___c::*)(::Unity::Cinemachine::CinemachineComponentBase*, ::Unity::Cinemachine::CinemachineComponentBase*)>(&::Unity::Cinemachine::CinemachineVirtualCamera___c::_UpdateComponentPipeline_b__44_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaede194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera___c*>(),
                        {"<UpdateComponentPipeline>b__44_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineVirtualCamera___c::setStaticF___9(::Unity::Cinemachine::CinemachineVirtualCamera___c*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineVirtualCamera___c*, "<>9", ::Unity::Cinemachine::CinemachineVirtualCamera___c*>(std::forward<::Unity::Cinemachine::CinemachineVirtualCamera___c*>(value));
}
inline ::Unity::Cinemachine::CinemachineVirtualCamera___c* Unity::Cinemachine::CinemachineVirtualCamera___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineVirtualCamera___c*, "<>9", ::Unity::Cinemachine::CinemachineVirtualCamera___c*>();
}
inline void Unity::Cinemachine::CinemachineVirtualCamera___c::setStaticF___9__44_0(::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>*, "<>9__44_0", ::Unity::Cinemachine::CinemachineVirtualCamera___c*>(std::forward<::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>* Unity::Cinemachine::CinemachineVirtualCamera___c::getStaticF___9__44_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>*, "<>9__44_0", ::Unity::Cinemachine::CinemachineVirtualCamera___c*>();
}
inline void Unity::Cinemachine::CinemachineVirtualCamera___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CinemachineVirtualCamera___c::_UpdateComponentPipeline_b__44_0(::Unity::Cinemachine::CinemachineComponentBase*  c1, ::Unity::Cinemachine::CinemachineComponentBase*  c2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera___c*>(),
                        {"<UpdateComponentPipeline>b__44_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c1, c2);
}
inline ::Unity::Cinemachine::CinemachineVirtualCamera___c* Unity::Cinemachine::CinemachineVirtualCamera___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineVirtualCamera___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineVirtualCamera___c::CinemachineVirtualCamera___c()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaede034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::*)(::UnityEngine::GameObject*)>(&::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaede0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::*)(::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaede0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaede118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::Invoke(::UnityEngine::GameObject*  pipeline)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pipeline);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::BeginInvoke(::UnityEngine::GameObject*  pipeline, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pipeline, callback, object);
}
inline void Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate* Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate::CinemachineVirtualCamera_DestroyPipelineDelegate()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaedded4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::*)(::Unity::Cinemachine::CinemachineVirtualCamera*, ::StringW, ::ArrayW<::Unity::Cinemachine::CinemachineComponentBase*>)>(&::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeddfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::*)(::Unity::Cinemachine::CinemachineVirtualCamera*, ::StringW, ::ArrayW<::Unity::Cinemachine::CinemachineComponentBase*>, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaeddff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaede028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::Invoke(::Unity::Cinemachine::CinemachineVirtualCamera*  vcam, ::StringW  name, ::ArrayW<::Unity::Cinemachine::CinemachineComponentBase*>  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, vcam, name, copyFrom);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::BeginInvoke(::Unity::Cinemachine::CinemachineVirtualCamera*  vcam, ::StringW  name, ::ArrayW<::Unity::Cinemachine::CinemachineComponentBase*>  copyFrom, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, vcam, name, copyFrom, callback, object);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate* Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate::CinemachineVirtualCamera_CreatePipelineDelegate()   {
}
