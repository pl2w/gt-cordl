#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVirtualCameraBase.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_StandbyUpdateMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__OutputChannels_impl.hpp"
#include "Unity/Cinemachine/zzzz__PrioritySettings_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_StandbyUpdateMode_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineTargetGroup_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_IsDprecated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_IsDprecated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb37b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.PerformLegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(int32_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::PerformLegacyUpgrade)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeb37bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::GetMaxDampTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaeb37f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.DetachedFollowTargetDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(float_t, float_t, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedFollowTargetDamp)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaeb38a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedFollowTargetDamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.DetachedFollowTargetDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedFollowTargetDamp)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaeb39ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedFollowTargetDamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.DetachedFollowTargetDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Vector3, float_t, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedFollowTargetDamp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaeb3c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedFollowTargetDamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.DetachedLookAtTargetDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(float_t, float_t, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedLookAtTargetDamp)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaeb3d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedLookAtTargetDamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.DetachedLookAtTargetDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedLookAtTargetDamp)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaeb3e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedLookAtTargetDamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.DetachedLookAtTargetDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Vector3, float_t, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedLookAtTargetDamp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaeb3ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedLookAtTargetDamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.AddExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::Unity::Cinemachine::CinemachineExtension*)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::AddExtension)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaeb3414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"AddExtension", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.RemoveExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::Unity::Cinemachine::CinemachineExtension*)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::RemoveExtension)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaeb3538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"RemoveExtension", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_Extensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>* (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb3f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_Extensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.set_Extensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::set_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb3f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"set_Extensions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.InvokePostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::InvokePostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xaeb133c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"InvokePostPipelineStageCallback", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.InvokePrePipelineMutateCameraStateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::InvokePrePipelineMutateCameraStateCallback)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xaeb3fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"InvokePrePipelineMutateCameraStateCallback", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.InvokeOnTransitionInExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::InvokeOnTransitionInExtensions)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xaeb0f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"InvokeOnTransitionInExtensions", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_Name)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaeb4164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_Description)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaeb424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_IsValid)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeb41e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_State)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_ParentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineMixer* (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_ParentCamera)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaeb3f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_ParentCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_LookAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.set_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::set_LookAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_Follow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.set_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::set_Follow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_PreviousStateIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_PreviousStateIsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.set_PreviousStateIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(bool)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::set_PreviousStateIsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.UpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::UpdateCameraState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaeb0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.InternalUpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::InternalUpdateCameraState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.OnCameraActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::GlobalNamespace::ICinemachineCamera_ActivationEventParams)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::OnCameraActivated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeb4370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaeb0f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.EnsureStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::EnsureStarted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaeb43a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"EnsureStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.OnTransformParentChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaeb447c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaeb45b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaeb4608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::OnEnable)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xaeafeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::OnDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaeb0188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeb46bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.UpdateStatusAsChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::UpdateStatusAsChild)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaeb428c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"UpdateStatusAsChild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.ResolveLookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::ResolveLookAt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaeb03d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"ResolveLookAt", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.ResolveFollow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::ResolveFollow)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaeb04d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"ResolveFollow", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.UpdateVcamPoolStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::UpdateVcamPoolStatus)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaeb44e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"UpdateVcamPoolStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.MoveToTopOfPrioritySubqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::MoveToTopOfPrioritySubqueue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb46f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"MoveToTopOfPrioritySubqueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.Prioritize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::Prioritize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb46f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"Prioritize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb0d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xaeb46fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"OnTargetObjectWarped", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb0ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xaeb4894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"ForceCameraPosition", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.PullStateFromVirtualCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::UnityEngine::Vector3, ::by_ref<::Unity::Cinemachine::LensSettings>)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::PullStateFromVirtualCamera)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xaeb4a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"PullStateFromVirtualCamera", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.InvalidateCachedTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::InvalidateCachedTargets)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeb4654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"InvalidateCachedTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_FollowTargetChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_FollowTargetChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_FollowTargetChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.set_FollowTargetChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(bool)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::set_FollowTargetChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"set_FollowTargetChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_LookAtTargetChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_LookAtTargetChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_LookAtTargetChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.set_LookAtTargetChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(bool)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::set_LookAtTargetChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"set_LookAtTargetChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.UpdateTargetCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::UpdateTargetCache)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xaeb0894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"UpdateTargetCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_FollowTargetAsGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineTargetGroup* (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_FollowTargetAsGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_FollowTargetAsGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_FollowTargetAsVcam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_FollowTargetAsVcam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_FollowTargetAsVcam", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_LookAtTargetAsGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineTargetGroup* (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_LookAtTargetAsGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_LookAtTargetAsGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_LookAtTargetAsVcam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_LookAtTargetAsVcam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_LookAtTargetAsVcam", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.GetCinemachineComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineComponentBase> (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(::GlobalNamespace::CinemachineCore_Stage)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::GetCinemachineComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb4da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.get_IsLive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::get_IsLive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaeb4dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_IsLive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.IsParticipatingInBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::IsParticipatingInBlend)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xaeb4e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"IsParticipatingInBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase.CancelDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)(bool)>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::CancelDamping)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xaeb4fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"CancelDamping", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVirtualCameraBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVirtualCameraBase::*)()>(&::Unity::Cinemachine::CinemachineVirtualCameraBase::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeb15ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::PrioritySettings& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_Priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr ::Unity::Cinemachine::PrioritySettings const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_Priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_Priority(::Unity::Cinemachine::PrioritySettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Priority = value;
}
constexpr ::Unity::Cinemachine::OutputChannels& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_OutputChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputChannel;
}
constexpr ::Unity::Cinemachine::OutputChannels const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_OutputChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputChannel;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_OutputChannel(::Unity::Cinemachine::OutputChannels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutputChannel = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_ActivationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivationId;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_ActivationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivationId;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_ActivationId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActivationId = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_QueuePriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QueuePriority;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_QueuePriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QueuePriority;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_QueuePriority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_QueuePriority = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_FollowTargetAttachment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowTargetAttachment;
}
constexpr float_t const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_FollowTargetAttachment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowTargetAttachment;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_FollowTargetAttachment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FollowTargetAttachment = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_LookAtTargetAttachment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LookAtTargetAttachment;
}
constexpr float_t const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_LookAtTargetAttachment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LookAtTargetAttachment;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_LookAtTargetAttachment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LookAtTargetAttachment = value;
}
constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_StandbyUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandbyUpdate;
}
constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_StandbyUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandbyUpdate;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_StandbyUpdate(::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StandbyUpdate = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedName;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedName;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_CachedName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedName = value;
}
constexpr bool& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_WasStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasStarted;
}
constexpr bool const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_WasStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasStarted;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_WasStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WasStarted = value;
}
constexpr bool& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_ChildStatusUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChildStatusUpdated;
}
constexpr bool const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_ChildStatusUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChildStatusUpdated;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_ChildStatusUpdated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChildStatusUpdated = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_ParentVcam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParentVcam;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_ParentVcam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParentVcam;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_ParentVcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ParentVcam = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedFollowTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedFollowTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedFollowTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedFollowTarget;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_CachedFollowTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedFollowTarget = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedFollowTargetVcam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedFollowTargetVcam;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedFollowTargetVcam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedFollowTargetVcam;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_CachedFollowTargetVcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedFollowTargetVcam = value;
}
constexpr ::Unity::Cinemachine::ICinemachineTargetGroup*& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedFollowTargetGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedFollowTargetGroup;
}
constexpr ::Unity::Cinemachine::ICinemachineTargetGroup* const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedFollowTargetGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedFollowTargetGroup;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_CachedFollowTargetGroup(::Unity::Cinemachine::ICinemachineTargetGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedFollowTargetGroup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedLookAtTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedLookAtTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedLookAtTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedLookAtTarget;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_CachedLookAtTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedLookAtTarget = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedLookAtTargetVcam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedLookAtTargetVcam;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedLookAtTargetVcam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedLookAtTargetVcam;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_CachedLookAtTargetVcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedLookAtTargetVcam = value;
}
constexpr ::Unity::Cinemachine::ICinemachineTargetGroup*& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedLookAtTargetGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedLookAtTargetGroup;
}
constexpr ::Unity::Cinemachine::ICinemachineTargetGroup* const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_CachedLookAtTargetGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedLookAtTargetGroup;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_CachedLookAtTargetGroup(::Unity::Cinemachine::ICinemachineTargetGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedLookAtTargetGroup = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_StreamingVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StreamingVersion;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_StreamingVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StreamingVersion;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_StreamingVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StreamingVersion = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_LegacyPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyPriority;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get_m_LegacyPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyPriority;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set_m_LegacyPriority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyPriority = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get__Extensions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Extensions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>* const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get__Extensions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Extensions_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set__Extensions_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Extensions_k__BackingField = value;
}
constexpr bool& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get__PreviousStateIsValid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousStateIsValid_k__BackingField;
}
constexpr bool const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get__PreviousStateIsValid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousStateIsValid_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set__PreviousStateIsValid_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreviousStateIsValid_k__BackingField = value;
}
constexpr bool& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get__FollowTargetChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FollowTargetChanged_k__BackingField;
}
constexpr bool const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get__FollowTargetChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FollowTargetChanged_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set__FollowTargetChanged_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FollowTargetChanged_k__BackingField = value;
}
constexpr bool& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get__LookAtTargetChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LookAtTargetChanged_k__BackingField;
}
constexpr bool const& Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_get__LookAtTargetChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LookAtTargetChanged_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineVirtualCameraBase::__cordl_internal_set__LookAtTargetChanged_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LookAtTargetChanged_k__BackingField = value;
}
inline bool Unity::Cinemachine::CinemachineVirtualCameraBase::get_IsDprecated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::PerformLegacyUpgrade(int32_t  streamedVersion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streamedVersion);
}
inline float_t Unity::Cinemachine::CinemachineVirtualCameraBase::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedFollowTargetDamp(float_t  initial, float_t  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedFollowTargetDamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, initial, dampTime, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedFollowTargetDamp(::UnityEngine::Vector3  initial, ::UnityEngine::Vector3  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedFollowTargetDamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, initial, dampTime, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedFollowTargetDamp(::UnityEngine::Vector3  initial, float_t  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedFollowTargetDamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, initial, dampTime, deltaTime);
}
inline float_t Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedLookAtTargetDamp(float_t  initial, float_t  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedLookAtTargetDamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, initial, dampTime, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedLookAtTargetDamp(::UnityEngine::Vector3  initial, ::UnityEngine::Vector3  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedLookAtTargetDamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, initial, dampTime, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineVirtualCameraBase::DetachedLookAtTargetDamp(::UnityEngine::Vector3  initial, float_t  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"DetachedLookAtTargetDamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, initial, dampTime, deltaTime);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::AddExtension(::Unity::Cinemachine::CinemachineExtension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"AddExtension", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::RemoveExtension(::Unity::Cinemachine::CinemachineExtension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"RemoveExtension", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>* Unity::Cinemachine::CinemachineVirtualCameraBase::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_Extensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::set_Extensions(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"set_Extensions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::InvokePostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  newState, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"InvokePostPipelineStageCallback", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, newState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::InvokePrePipelineMutateCameraStateCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  newState, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"InvokePrePipelineMutateCameraStateCallback", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, newState, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineVirtualCameraBase::InvokeOnTransitionInExtensions(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"InvokeOnTransitionInExtensions", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline ::StringW Unity::Cinemachine::CinemachineVirtualCameraBase::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::CinemachineVirtualCameraBase::get_Description()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineVirtualCameraBase::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineVirtualCameraBase::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CinemachineVirtualCameraBase::get_ParentCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_ParentCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineMixer*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCameraBase::get_LookAt()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::set_LookAt(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCameraBase::get_Follow()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::set_Follow(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineVirtualCameraBase::get_PreviousStateIsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::set_PreviousStateIsValid(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::EnsureStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"EnsureStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::OnTransformParentChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::UpdateStatusAsChild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"UpdateStatusAsChild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCameraBase::ResolveLookAt(::UnityEngine::Transform*  localLookAt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"ResolveLookAt", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, localLookAt);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineVirtualCameraBase::ResolveFollow(::UnityEngine::Transform*  localFollow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"ResolveFollow", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, localFollow);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::UpdateVcamPoolStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"UpdateVcamPoolStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::MoveToTopOfPrioritySubqueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"MoveToTopOfPrioritySubqueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::Prioritize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"Prioritize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"OnTargetObjectWarped", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::ForceCameraPosition(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"ForceCameraPosition", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, pos, rot);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineVirtualCameraBase::PullStateFromVirtualCamera(::UnityEngine::Vector3  worldUp, ::by_ref<::Unity::Cinemachine::LensSettings>  lens)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"PullStateFromVirtualCamera", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method, worldUp, lens);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::InvalidateCachedTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"InvalidateCachedTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineVirtualCameraBase::get_FollowTargetChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_FollowTargetChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::set_FollowTargetChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"set_FollowTargetChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineVirtualCameraBase::get_LookAtTargetChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_LookAtTargetChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::set_LookAtTargetChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"set_LookAtTargetChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::UpdateTargetCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"UpdateTargetCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineTargetGroup* Unity::Cinemachine::CinemachineVirtualCameraBase::get_FollowTargetAsGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_FollowTargetAsGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineTargetGroup*>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineVirtualCameraBase::get_FollowTargetAsVcam()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_FollowTargetAsVcam", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineTargetGroup* Unity::Cinemachine::CinemachineVirtualCameraBase::get_LookAtTargetAsGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_LookAtTargetAsGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineTargetGroup*>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineVirtualCameraBase::get_LookAtTargetAsVcam()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_LookAtTargetAsVcam", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineComponentBase> Unity::Cinemachine::CinemachineVirtualCameraBase::GetCinemachineComponent(::GlobalNamespace::CinemachineCore_Stage  stage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>(this, ___internal_method, stage);
}
inline bool Unity::Cinemachine::CinemachineVirtualCameraBase::get_IsLive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"get_IsLive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineVirtualCameraBase::IsParticipatingInBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"IsParticipatingInBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::CancelDamping(bool  updateNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {"CancelDamping", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateNow);
}
inline void Unity::Cinemachine::CinemachineVirtualCameraBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineVirtualCameraBase* Unity::Cinemachine::CinemachineVirtualCameraBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineVirtualCameraBase*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr  Unity::Cinemachine::CinemachineVirtualCameraBase::operator ::Unity::Cinemachine::ICinemachineCamera*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineVirtualCameraBase::i___Unity__Cinemachine__ICinemachineCamera() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineVirtualCameraBase::CinemachineVirtualCameraBase()   {
}
