#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBrain.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_BrainUpdateMethods_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_LensModeOverrideSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_UpdateMethods_impl.hpp"
#include "Unity/Cinemachine/zzzz__OutputChannels_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__BlendManager_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraUpdateManager_UpdateFilter_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlenderSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_BrainUpdateMethods_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_LensModeOverrideSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_UpdateMethods_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICameraOverrideStack_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__WaitForFixedUpdate_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae8582c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae85844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae858d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::Start)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae859b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::OnEnable)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xae85c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::OnDisable)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xae85ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Unity::Cinemachine::CinemachineBrain::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae860b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.OnSceneUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(::UnityEngine::SceneManagement::Scene)>(&::Unity::Cinemachine::CinemachineBrain::OnSceneUnloaded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae86400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnSceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::LateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xae86460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.AfterPhysics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::AfterPhysics)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae85e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"AfterPhysics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.SetCameraOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachineBrain::*)(int32_t, int32_t, ::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, float_t, float_t)>(&::Unity::Cinemachine::CinemachineBrain::SetCameraOverride)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae864b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"SetCameraOverride", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.ReleaseCameraOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(int32_t)>(&::Unity::Cinemachine::CinemachineBrain::ReleaseCameraOverride)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae864d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ReleaseCameraOverride", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_DefaultWorldUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_DefaultWorldUp)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xae864e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_DefaultWorldUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae865b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_Description)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xae865b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae86890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_IsValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae868a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_ParentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineMixer* (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_ParentCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae868fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ParentCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.UpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineBrain::UpdateCameraState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae86904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.OnCameraActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(::GlobalNamespace::ICinemachineCamera_ActivationEventParams)>(&::Unity::Cinemachine::CinemachineBrain::OnCameraActivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae86908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.IsLiveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBrain::*)(::Unity::Cinemachine::ICinemachineCamera*, bool)>(&::Unity::Cinemachine::CinemachineBrain::IsLiveChild)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xae8690c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"IsLiveChild", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_ActiveBrainCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Cinemachine::CinemachineBrain::get_ActiveBrainCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae86ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ActiveBrainCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.GetActiveBrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineBrain> (*)(int32_t)>(&::Unity::Cinemachine::CinemachineBrain::GetActiveBrain)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae86b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"GetActiveBrain", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_ControlledObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_ControlledObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae85930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ControlledObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.set_ControlledObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(::UnityEngine::GameObject*)>(&::Unity::Cinemachine::CinemachineBrain::set_ControlledObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae86bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"set_ControlledObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_OutputCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_OutputCamera)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae86c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_OutputCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_ActiveVirtualCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineCamera* (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_ActiveVirtualCamera)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xae867b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ActiveVirtualCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::ResetState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae86d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_IsBlending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_IsBlending)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae86860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_IsBlending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.get_ActiveBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlend* (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::get_ActiveBlend)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae86878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ActiveBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.set_ActiveBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(::Unity::Cinemachine::CinemachineBlend*)>(&::Unity::Cinemachine::CinemachineBrain::set_ActiveBlend)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae86d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"set_ActiveBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.IsValidChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBrain::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineBrain::IsValidChannel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae86d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"IsValidChannel", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.IsLiveInBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBrain::*)(::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineBrain::IsLiveInBlend)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xae86dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"IsLiveInBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.ManualUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(int32_t, float_t)>(&::Unity::Cinemachine::CinemachineBrain::ManualUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae86f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ManualUpdate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.ManualUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::ManualUpdate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae86fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ManualUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.DoNonFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(int32_t)>(&::Unity::Cinemachine::CinemachineBrain::DoNonFixedUpdate)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xae86118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"DoNonFixedUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.DoFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::DoFixedUpdate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xae87420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"DoFixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.GetEffectiveDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineBrain::*)(bool)>(&::Unity::Cinemachine::CinemachineBrain::GetEffectiveDeltaTime)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xae86fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"GetEffectiveDeltaTime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.UpdateVirtualCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(::GlobalNamespace::CameraUpdateManager_UpdateFilter, float_t)>(&::Unity::Cinemachine::CinemachineBrain::UpdateVirtualCameras)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xae859c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"UpdateVirtualCameras", {}, {::i2c::type_of<::GlobalNamespace::CameraUpdateManager_UpdateFilter>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.TopCameraFromPriorityQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineCamera* (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::TopCameraFromPriorityQueue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae87550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.LookupBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (::Unity::Cinemachine::CinemachineBrain::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineBrain::LookupBlend)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae87604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"LookupBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.ProcessActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(float_t)>(&::Unity::Cinemachine::CinemachineBrain::ProcessActiveCamera)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xae87154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ProcessActiveCamera", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain.PushStateToUnityCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)(::by_ref<::Unity::Cinemachine::CameraState>)>(&::Unity::Cinemachine::CinemachineBrain::PushStateToUnityCamera)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xae87624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"PushStateToUnityCamera", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain::*)()>(&::Unity::Cinemachine::CinemachineBrain::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xae879d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_ShowDebugText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDebugText;
}
constexpr bool const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_ShowDebugText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDebugText;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_ShowDebugText(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowDebugText = value;
}
constexpr bool& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_ShowCameraFrustum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowCameraFrustum;
}
constexpr bool const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_ShowCameraFrustum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowCameraFrustum;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_ShowCameraFrustum(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowCameraFrustum = value;
}
constexpr bool& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_IgnoreTimeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTimeScale;
}
constexpr bool const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_IgnoreTimeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTimeScale;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_IgnoreTimeScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreTimeScale = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_WorldUpOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldUpOverride;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_WorldUpOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldUpOverride;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_WorldUpOverride(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorldUpOverride = value;
}
constexpr ::Unity::Cinemachine::OutputChannels& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_ChannelMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelMask;
}
constexpr ::Unity::Cinemachine::OutputChannels const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_ChannelMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelMask;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_ChannelMask(::Unity::Cinemachine::OutputChannels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChannelMask = value;
}
constexpr ::GlobalNamespace::CinemachineBrain_UpdateMethods& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_UpdateMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateMethod;
}
constexpr ::GlobalNamespace::CinemachineBrain_UpdateMethods const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_UpdateMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateMethod;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_UpdateMethod(::GlobalNamespace::CinemachineBrain_UpdateMethods  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateMethod = value;
}
constexpr ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_BlendUpdateMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendUpdateMethod;
}
constexpr ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_BlendUpdateMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendUpdateMethod;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_BlendUpdateMethod(::GlobalNamespace::CinemachineBrain_BrainUpdateMethods  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendUpdateMethod = value;
}
constexpr ::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_LensModeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LensModeOverride;
}
constexpr ::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_LensModeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LensModeOverride;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_LensModeOverride(::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LensModeOverride = value;
}
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_DefaultBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultBlend;
}
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_DefaultBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultBlend;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_DefaultBlend(::Unity::Cinemachine::CinemachineBlendDefinition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultBlend = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_CustomBlends()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomBlends;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings> const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_CustomBlends() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomBlends;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_CustomBlends(::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomBlends = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_OutputCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OutputCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_OutputCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OutputCamera;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_m_OutputCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OutputCamera = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_TargetOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetOverride;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_TargetOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetOverride;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_m_TargetOverride(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetOverride = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_LastFrameUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameUpdated;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_LastFrameUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameUpdated;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_m_LastFrameUpdated(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFrameUpdated = value;
}
constexpr ::UnityEngine::Coroutine*& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_PhysicsCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_PhysicsCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsCoroutine;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_m_PhysicsCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PhysicsCoroutine = value;
}
constexpr ::UnityEngine::WaitForFixedUpdate*& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_WaitForFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitForFixedUpdate;
}
constexpr ::UnityEngine::WaitForFixedUpdate* const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_WaitForFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitForFixedUpdate;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_m_WaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WaitForFixedUpdate = value;
}
constexpr ::Unity::Cinemachine::BlendManager*& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_BlendManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendManager;
}
constexpr ::Unity::Cinemachine::BlendManager* const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_BlendManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendManager;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_m_BlendManager(::Unity::Cinemachine::BlendManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlendManager = value;
}
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_CameraState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraState;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::CinemachineBrain::__cordl_internal_get_m_CameraState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraState;
}
constexpr void Unity::Cinemachine::CinemachineBrain::__cordl_internal_set_m_CameraState(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraState = value;
}
inline void Unity::Cinemachine::CinemachineBrain::setStaticF_s_ActiveBrains(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*, "s_ActiveBrains", ::Unity::Cinemachine::CinemachineBrain*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>* Unity::Cinemachine::CinemachineBrain::getStaticF_s_ActiveBrains()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*, "s_ActiveBrains", ::Unity::Cinemachine::CinemachineBrain*>();
}
inline void Unity::Cinemachine::CinemachineBrain::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, mode);
}
inline void Unity::Cinemachine::CinemachineBrain::OnSceneUnloaded(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnSceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene);
}
inline void Unity::Cinemachine::CinemachineBrain::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Unity::Cinemachine::CinemachineBrain::AfterPhysics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"AfterPhysics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CinemachineBrain::SetCameraOverride(int32_t  overrideId, int32_t  priority, ::Unity::Cinemachine::ICinemachineCamera*  camA, ::Unity::Cinemachine::ICinemachineCamera*  camB, float_t  weightB, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"SetCameraOverride", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, overrideId, priority, camA, camB, weightB, deltaTime);
}
inline void Unity::Cinemachine::CinemachineBrain::ReleaseCameraOverride(int32_t  overrideId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ReleaseCameraOverride", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideId);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineBrain::get_DefaultWorldUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_DefaultWorldUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::CinemachineBrain::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::CinemachineBrain::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineBrain::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineBrain::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CinemachineBrain::get_ParentCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ParentCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineMixer*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::UpdateCameraState(::UnityEngine::Vector3  up, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, up, deltaTime);
}
inline void Unity::Cinemachine::CinemachineBrain::OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline bool Unity::Cinemachine::CinemachineBrain::IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  cam, bool  dominantChildOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"IsLiveChild", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam, dominantChildOnly);
}
inline int32_t Unity::Cinemachine::CinemachineBrain::get_ActiveBrainCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ActiveBrainCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineBrain> Unity::Cinemachine::CinemachineBrain::GetActiveBrain(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"GetActiveBrain", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineBrain>>(nullptr, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::Cinemachine::CinemachineBrain::get_ControlledObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ControlledObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::set_ControlledObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"set_ControlledObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> Unity::Cinemachine::CinemachineBrain::get_OutputCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_OutputCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineBrain::get_ActiveVirtualCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ActiveVirtualCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineCamera*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineBrain::get_IsBlending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_IsBlending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBlend* Unity::Cinemachine::CinemachineBrain::get_ActiveBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"get_ActiveBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlend*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::set_ActiveBlend(::Unity::Cinemachine::CinemachineBlend*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"set_ActiveBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineBrain::IsValidChannel(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"IsValidChannel", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam);
}
inline bool Unity::Cinemachine::CinemachineBrain::IsLiveInBlend(::Unity::Cinemachine::ICinemachineCamera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"IsLiveInBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam);
}
inline void Unity::Cinemachine::CinemachineBrain::ManualUpdate(int32_t  currentFrame, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ManualUpdate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentFrame, deltaTime);
}
inline void Unity::Cinemachine::CinemachineBrain::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ManualUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain::DoNonFixedUpdate(int32_t  updateFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"DoNonFixedUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateFrame);
}
inline void Unity::Cinemachine::CinemachineBrain::DoFixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"DoFixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineBrain::GetEffectiveDeltaTime(bool  fixedDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"GetEffectiveDeltaTime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fixedDelta);
}
inline void Unity::Cinemachine::CinemachineBrain::UpdateVirtualCameras(::GlobalNamespace::CameraUpdateManager_UpdateFilter  updateFilter, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"UpdateVirtualCameras", {}, {::i2c::type_of<::GlobalNamespace::CameraUpdateManager_UpdateFilter>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateFilter, deltaTime);
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineBrain::TopCameraFromPriorityQueue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineCamera*>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineBrain::LookupBlend(::Unity::Cinemachine::ICinemachineCamera*  fromKey, ::Unity::Cinemachine::ICinemachineCamera*  toKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"LookupBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(this, ___internal_method, fromKey, toKey);
}
inline void Unity::Cinemachine::CinemachineBrain::ProcessActiveCamera(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"ProcessActiveCamera", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void Unity::Cinemachine::CinemachineBrain::PushStateToUnityCamera(::by_ref<::Unity::Cinemachine::CameraState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {"PushStateToUnityCamera", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Unity::Cinemachine::CinemachineBrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBrain* Unity::Cinemachine::CinemachineBrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineBrain*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::ICameraOverrideStack"
constexpr  Unity::Cinemachine::CinemachineBrain::operator ::Unity::Cinemachine::ICameraOverrideStack*() noexcept {
return static_cast<::Unity::Cinemachine::ICameraOverrideStack*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICameraOverrideStack"
constexpr ::Unity::Cinemachine::ICameraOverrideStack* Unity::Cinemachine::CinemachineBrain::i___Unity__Cinemachine__ICameraOverrideStack() noexcept {
return static_cast<::Unity::Cinemachine::ICameraOverrideStack*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineMixer"
constexpr  Unity::Cinemachine::CinemachineBrain::operator ::Unity::Cinemachine::ICinemachineMixer*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineMixer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineMixer"
constexpr ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CinemachineBrain::i___Unity__Cinemachine__ICinemachineMixer() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineMixer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr  Unity::Cinemachine::CinemachineBrain::operator ::Unity::Cinemachine::ICinemachineCamera*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineBrain::i___Unity__Cinemachine__ICinemachineCamera() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineBrain::CinemachineBrain()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::*)(int32_t)>(&::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xae86490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::*)()>(&::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae87b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::*)()>(&::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae87b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::*)()>(&::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae87be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::*)()>(&::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xae87bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::*)()>(&::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae87c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain>& Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain> const& Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::__cordl_internal_set___4__this(::UnityW<::Unity::Cinemachine::CinemachineBrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30* Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30::CinemachineBrain__AfterPhysics_d__30()   {
}
