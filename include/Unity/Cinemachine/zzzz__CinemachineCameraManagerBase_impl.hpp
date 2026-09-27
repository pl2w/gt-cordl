#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraManagerBase.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_DefaultTargetSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__BlendManager_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlenderSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_DefaultTargetSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::Reset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaeafdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::OnEnable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaeafe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::OnDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeb015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_Description)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb01e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb01fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.IsLiveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::Unity::Cinemachine::ICinemachineCamera*, bool)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::IsLiveChild)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb020c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_ChildCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_ChildCameras)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaeb0224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"get_ChildCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_PreviousStateIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_PreviousStateIsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb0248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.set_PreviousStateIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(bool)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::set_PreviousStateIsValid)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaeb0250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_IsBlending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_IsBlending)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb02f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"get_IsBlending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_ActiveBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlend* (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_ActiveBlend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaeb0310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"get_ActiveBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.set_ActiveBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::Unity::Cinemachine::CinemachineBlend*)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::set_ActiveBlend)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb0350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"set_ActiveBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_LiveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineCamera* (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_LiveChild)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaeb0368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"get_LiveChild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_LookAt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeb03a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.set_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::set_LookAt)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb04ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.get_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::get_Follow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb04c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.set_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::set_Follow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb05b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.InternalUpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::InternalUpdateCameraState)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xaeb05c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.LookupBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::LookupBlend)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaeb0c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.ChooseCurrentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::ChooseCurrentCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaeb0c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaeb0d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaeb0ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.InvalidateCameraCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::InvalidateCameraCache)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeafe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"InvalidateCameraCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.UpdateCameraCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::UpdateCameraCache)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xaeb1110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.OnTransformChildrenChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::OnTransformChildrenChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeb130c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.SetLiveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::SetLiveChild)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaeb0b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"SetLiveChild", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.ResetLiveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::ResetLiveChild)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb0ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"ResetLiveChild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase.FinalizeCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)(float_t)>(&::Unity::Cinemachine::CinemachineCameraManagerBase::FinalizeCameraState)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaeb0c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"FinalizeCameraState", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerBase::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerBase::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaeb14dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_DefaultTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultTarget;
}
constexpr ::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings const& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_DefaultTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultTarget;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_set_DefaultTarget(::GlobalNamespace::CinemachineCameraManagerBase_DefaultTargetSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultTarget = value;
}
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_DefaultBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultBlend;
}
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition const& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_DefaultBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultBlend;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_set_DefaultBlend(::Unity::Cinemachine::CinemachineBlendDefinition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultBlend = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_CustomBlends()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomBlends;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings> const& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_CustomBlends() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomBlends;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_set_CustomBlends(::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomBlends = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_ChildCameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChildCameras;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* const& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_ChildCameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChildCameras;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_set_m_ChildCameras(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChildCameras = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_ChildCountCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChildCountCache;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_ChildCountCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChildCountCache;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_set_m_ChildCountCache(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChildCountCache = value;
}
constexpr ::Unity::Cinemachine::BlendManager*& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_BlendManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendManager;
}
constexpr ::Unity::Cinemachine::BlendManager* const& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_BlendManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendManager;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_set_m_BlendManager(::Unity::Cinemachine::BlendManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlendManager = value;
}
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera*& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_TransitioningFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransitioningFrom;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera* const& Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_get_m_TransitioningFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransitioningFrom;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerBase::__cordl_internal_set_m_TransitioningFrom(::Unity::Cinemachine::ICinemachineCamera*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TransitioningFrom = value;
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::CinemachineCameraManagerBase::get_Description()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineCameraManagerBase::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineCameraManagerBase::IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  cam, bool  dominantChildOnly)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam, dominantChildOnly);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* Unity::Cinemachine::CinemachineCameraManagerBase::get_ChildCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"get_ChildCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineCameraManagerBase::get_PreviousStateIsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::set_PreviousStateIsValid(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineCameraManagerBase::get_IsBlending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"get_IsBlending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBlend* Unity::Cinemachine::CinemachineCameraManagerBase::get_ActiveBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"get_ActiveBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlend*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::set_ActiveBlend(::Unity::Cinemachine::CinemachineBlend*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"set_ActiveBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineCameraManagerBase::get_LiveChild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"get_LiveChild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineCamera*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineCameraManagerBase::get_LookAt()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::set_LookAt(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineCameraManagerBase::get_Follow()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::set_Follow(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineCameraManagerBase::LookupBlend(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(this, ___internal_method, outgoing, incoming);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineCameraManagerBase::ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::InvalidateCameraCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"InvalidateCameraCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineCameraManagerBase::UpdateCameraCache()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::OnTransformChildrenChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::SetLiveChild(::Unity::Cinemachine::ICinemachineCamera*  activeCamera, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"SetLiveChild", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeCamera, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::ResetLiveChild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"ResetLiveChild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::FinalizeCameraState(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {"FinalizeCameraState", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void Unity::Cinemachine::CinemachineCameraManagerBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCameraManagerBase* Unity::Cinemachine::CinemachineCameraManagerBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCameraManagerBase*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineMixer"
constexpr  Unity::Cinemachine::CinemachineCameraManagerBase::operator ::Unity::Cinemachine::ICinemachineMixer*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineMixer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineMixer"
constexpr ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CinemachineCameraManagerBase::i___Unity__Cinemachine__ICinemachineMixer() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineMixer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr  Unity::Cinemachine::CinemachineCameraManagerBase::operator ::Unity::Cinemachine::ICinemachineCamera*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineCameraManagerBase::i___Unity__Cinemachine__ICinemachineCamera() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCameraManagerBase::CinemachineCameraManagerBase()   {
}
