#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_StatusEffect_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_StiltTagData_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverFieldInfo_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_StatusEffect_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_StiltTagData_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger__ConfirmUpdatedFrameRate_d__180_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger__IsXRSubsystemActive_d__149_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger___c__DisplayClass159_0_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GlobalNamespace/zzzz__VRRigSerializer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__Watchable_1_def.hpp"
#include "GorillaLocomotion/zzzz__StiltID_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTryResolveInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefMonoBehaviour_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefObject_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefReceiverMono_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__GameOverlayActivated_t_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaTagger> (*)()>(&::GlobalNamespace::GorillaTagger::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x592fb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_ForcePerfRefreshRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_ForcePerfRefreshRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592fb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_ForcePerfRefreshRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.SetExtraHandPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::GorillaLocomotion::StiltID, ::UnityEngine::Vector3, bool, bool)>(&::GlobalNamespace::GorillaTagger::SetExtraHandPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x592fb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"SetExtraHandPosition", {}, {::i2c::type_of<::GorillaLocomotion::StiltID>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_myVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NetworkView> (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_myVRRig)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x592fbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_myVRRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_rigSerializer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRigSerializer> (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_rigSerializer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x592fc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_rigSerializer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_PerformanceOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_PerformanceOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592fc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_PerformanceOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_rigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592fc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.set_rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::UnityEngine::Rigidbody*)>(&::GlobalNamespace::GorillaTagger::set_rigidbody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x592fc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"set_rigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_DefaultHandTapVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_DefaultHandTapVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592fc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_DefaultHandTapVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_myRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Recorder> (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_myRecorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592fc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_myRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.set_myRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::Photon::Voice::Unity::Recorder*)>(&::GlobalNamespace::GorillaTagger::set_myRecorder)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x592fc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"set_myRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_sphereCastRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_sphereCastRadius)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x592fc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_sphereCastRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.add_OnHandTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*)>(&::GlobalNamespace::GorillaTagger::add_OnHandTap)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x592fccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"add_OnHandTap", {}, {::i2c::type_of<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.remove_OnHandTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*)>(&::GlobalNamespace::GorillaTagger::remove_OnHandTap)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x592fd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"remove_OnHandTap", {}, {::i2c::type_of<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.get_hasTappedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::get_hasTappedSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592fe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_hasTappedSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.set_hasTappedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(bool)>(&::GlobalNamespace::GorillaTagger::set_hasTappedSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592fe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"set_hasTappedSurface", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ResetTappedSurfaceCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::ResetTappedSurfaceCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592fe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ResetTappedSurfaceCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.SetTagRadiusOverrideThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(float_t)>(&::GlobalNamespace::GorillaTagger::SetTagRadiusOverrideThisFrame)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x592fe44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"SetTagRadiusOverrideThisFrame", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::Awake)> {
  constexpr static std::size_t size = 0xd70;
  constexpr static std::size_t addrs = 0x592febc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5930e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.IsXRSubsystemActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::IsXRSubsystemActive)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5930f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"IsXRSubsystemActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.IsOculusQuest2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::IsOculusQuest2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5930fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"IsOculusQuest2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::Start)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5931044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.OnGameOverlayActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::Steamworks::GameOverlayActivated_t)>(&::GlobalNamespace::GorillaTagger::OnGameOverlayActivated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5931478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnGameOverlayActivated", {}, {::i2c::type_of<::Steamworks::GameOverlayActivated_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ToggleForcedPerformanceRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::ToggleForcedPerformanceRefresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5931488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ToggleForcedPerformanceRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ToggleDefaultPerformanceRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::ToggleDefaultPerformanceRefresh)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5931748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ToggleDefaultPerformanceRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ToggleForcedRefreshRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(float_t)>(&::GlobalNamespace::GorillaTagger::ToggleForcedRefreshRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5931754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ToggleForcedRefreshRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.SetForcedRefreshRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(bool, float_t)>(&::GlobalNamespace::GorillaTagger::SetForcedRefreshRate)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5931498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"SetForcedRefreshRate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ClearFramerateTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::ClearFramerateTracker)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5930de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ClearFramerateTracker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.UpdateResolutionScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(bool)>(&::GlobalNamespace::GorillaTagger::UpdateResolutionScale)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5931764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"UpdateResolutionScale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::LateUpdate)> {
  constexpr static std::size_t size = 0x2828;
  constexpr static std::size_t addrs = 0x59318b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.TryToTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger::*)(::GlobalNamespace::VRRig*, ::UnityEngine::Vector3, bool, bool, float_t, ::by_ref<::GlobalNamespace::NetPlayer*>, ::by_ref<::GlobalNamespace::NetPlayer*>)>(&::GlobalNamespace::GorillaTagger::TryToTag)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5935b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"TryToTag", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.TryToTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger::*)(::UnityEngine::Collider*, bool, bool, float_t, ::by_ref<::GlobalNamespace::NetPlayer*>, ::by_ref<::GlobalNamespace::NetPlayer*>)>(&::GlobalNamespace::GorillaTagger::TryToTag)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5935f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"TryToTag", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.HitWithKnockBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::GorillaTagger::HitWithKnockBack)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x59345bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"HitWithKnockBack", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.StartVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(bool, float_t, float_t)>(&::GlobalNamespace::GorillaTagger::StartVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5935ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"StartVibration", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.HapticPulses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagger::*)(bool, float_t, float_t)>(&::GlobalNamespace::GorillaTagger::HapticPulses)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5936170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"HapticPulses", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.PlayHapticClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(bool, ::UnityEngine::AudioClip*, float_t)>(&::GlobalNamespace::GorillaTagger::PlayHapticClip)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5936210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"PlayHapticClip", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.StopHapticClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(bool)>(&::GlobalNamespace::GorillaTagger::StopHapticClip)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5936374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"StopHapticClip", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.AudioClipHapticPulses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTagger::*)(bool, ::UnityEngine::AudioClip*, float_t)>(&::GlobalNamespace::GorillaTagger::AudioClipHapticPulses)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59362c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"AudioClipHapticPulses", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.DoVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::UnityEngine::XR::XRNode, float_t, float_t)>(&::GlobalNamespace::GorillaTagger::DoVibration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59363bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"DoVibration", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(float_t, float_t, float_t)>(&::GlobalNamespace::GorillaTagger::UpdateColor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x593641c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"UpdateColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaTagger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x593654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaTagger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59365c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ShowCosmeticParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(bool)>(&::GlobalNamespace::GorillaTagger::ShowCosmeticParticles)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5936634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ShowCosmeticParticles", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ApplyStatusEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::GlobalNamespace::GorillaTagger_StatusEffect, float_t)>(&::GlobalNamespace::GorillaTagger::ApplyStatusEffect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x593676c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ApplyStatusEffect", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagger_StatusEffect>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.CheckEndStatusEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::CheckEndStatusEffect)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5935b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"CheckEndStatusEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.EndStatusEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::GlobalNamespace::GorillaTagger_StatusEffect)>(&::GlobalNamespace::GorillaTagger::EndStatusEffect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5936840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"EndStatusEffect", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagger_StatusEffect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.CalcSlideControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaTagger::*)(float_t)>(&::GlobalNamespace::GorillaTagger::CalcSlideControl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59340d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"CalcSlideControl", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.OnPlayerSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GorillaTagger::OnPlayerSpawned)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59368f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnPlayerSpawned", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ProcessHandTapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::by_ref<bool>, ::by_ref<::GorillaLocomotion::StiltID>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<bool>, ::by_ref<::UnityEngine::AudioSource*>)>(&::GlobalNamespace::GorillaTagger::ProcessHandTapping)> {
  constexpr static std::size_t size = 0x11d8;
  constexpr static std::size_t addrs = 0x5934970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ProcessHandTapping", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::StiltID>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioSource*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.ConfirmUpdatedFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::ConfirmUpdatedFrameRate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5936a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ConfirmUpdatedFrameRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.DebugDrawTagCasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::UnityEngine::Color)>(&::GlobalNamespace::GorillaTagger::DebugDrawTagCasts)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x5936ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"DebugDrawTagCasts", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.DrawSphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Color)>(&::GlobalNamespace::GorillaTagger::DrawSphereCast)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59370e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"DrawSphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.RecoverMissingRefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::RecoverMissingRefs)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5930cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"RecoverMissingRefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.GuidedRefInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::GuidedRefInitialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5930c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GuidedRefInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59371e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.get_GuidedRefsWaitingToResolveCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(int32_t)>(&::GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59371ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.set_GuidedRefsWaitingToResolveCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger::*)(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo)>(&::GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x59371f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefTryResolveReference", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59373b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnAllGuidedRefsResolved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(int32_t)>(&::GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59373b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnGuidedRefTargetDestroyed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x59373bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5937628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger.GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaTagger::*)()>(&::GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5937630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger._LateUpdate_g__TryTaggingAllHitsOverlap_159_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(bool, float_t, bool, bool, ::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>)>(&::GlobalNamespace::GorillaTagger::_LateUpdate_g__TryTaggingAllHitsOverlap_159_0)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5934110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"<LateUpdate>g__TryTaggingAllHitsOverlap|159_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger._LateUpdate_g__TryTaggingAllHitsCapsulecast_159_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger::*)(float_t, bool, bool, ::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>)>(&::GlobalNamespace::GorillaTagger::_LateUpdate_g__TryTaggingAllHitsCapsulecast_159_1)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5934358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"<LateUpdate>g__TryTaggingAllHitsCapsulecast|159_1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_SmoothedFramerate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmoothedFramerate;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_SmoothedFramerate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmoothedFramerate;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_SmoothedFramerate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SmoothedFramerate = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__prevSmoothedFramerate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevSmoothedFramerate;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__prevSmoothedFramerate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevSmoothedFramerate;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__prevSmoothedFramerate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevSmoothedFramerate = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_FramerateHealth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FramerateHealth;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_FramerateHealth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FramerateHealth;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_FramerateHealth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FramerateHealth = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__prevFramerateHealth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevFramerateHealth;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__prevFramerateHealth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevFramerateHealth;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__prevFramerateHealth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevFramerateHealth = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateHealthTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateHealthTimer;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateHealthTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateHealthTimer;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__framerateHealthTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____framerateHealthTimer = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateTracker;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateTracker;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__framerateTracker(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____framerateTracker = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateTotal;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateTotal;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__framerateTotal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____framerateTotal = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateIndex;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__framerateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____framerateIndex = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateTimer;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateTimer;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__framerateTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____framerateTimer = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get__forcePerfRefreshRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forcePerfRefreshRate;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get__forcePerfRefreshRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forcePerfRefreshRate;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__forcePerfRefreshRate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forcePerfRefreshRate = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__perfRefreshRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____perfRefreshRate;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__perfRefreshRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____perfRefreshRate;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__perfRefreshRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____perfRefreshRate = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__defaultRefreshRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultRefreshRate;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__defaultRefreshRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultRefreshRate;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__defaultRefreshRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultRefreshRate = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_inCosmeticsRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inCosmeticsRoom;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_inCosmeticsRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inCosmeticsRoom;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_inCosmeticsRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inCosmeticsRoom = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::GorillaTagger::__cordl_internal_get_headCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_headCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headCollider;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_headCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headCollider = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::GorillaTagger::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastLeftHandPositionForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftHandPositionForTag;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastLeftHandPositionForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftHandPositionForTag;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_lastLeftHandPositionForTag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeftHandPositionForTag = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastRightHandPositionForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightHandPositionForTag;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastRightHandPositionForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightHandPositionForTag;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_lastRightHandPositionForTag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRightHandPositionForTag = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastBodyPositionForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBodyPositionForTag;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastBodyPositionForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBodyPositionForTag;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_lastBodyPositionForTag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastBodyPositionForTag = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastHeadPositionForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadPositionForTag;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastHeadPositionForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadPositionForTag;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_lastHeadPositionForTag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeadPositionForTag = value;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaTagger_StiltTagData>& GlobalNamespace::GorillaTagger::__cordl_internal_get_stiltTagData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stiltTagData;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaTagger_StiltTagData> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_stiltTagData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stiltTagData;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_stiltTagData(::ArrayW<::GlobalNamespace::GorillaTagger_StiltTagData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stiltTagData = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHandTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHandTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTransform;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHandTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHandTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTransform;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandTransform = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_hapticWaitSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticWaitSeconds;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_hapticWaitSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticWaitSeconds;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_hapticWaitSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticWaitSeconds = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_handTapVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapVolume;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_handTapVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapVolume;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_handTapVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTapVolume = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_handTapSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapSpeed;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_handTapSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapSpeed;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_handTapSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTapSpeed = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_tapCoolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapCoolDown;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tapCoolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapCoolDown;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tapCoolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapCoolDown = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastLeftTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftTap;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastLeftTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftTap;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_lastLeftTap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeftTap = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastLeftUpTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftUpTap;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastLeftUpTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftUpTap;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_lastLeftUpTap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeftUpTap = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastRightTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightTap;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastRightTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightTap;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_lastRightTap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRightTap = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastRightUpTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightUpTap;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_lastRightUpTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightUpTap;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_lastRightUpTap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRightUpTap = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHandWasTouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandWasTouching;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHandWasTouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandWasTouching;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftHandWasTouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandWasTouching = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHandWasTouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandWasTouching;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHandWasTouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandWasTouching;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightHandWasTouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandWasTouching = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_tapHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapHapticDuration;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tapHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapHapticDuration;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tapHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapHapticDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_tapHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapHapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tapHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapHapticStrength;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tapHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapHapticStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagHapticDuration;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagHapticDuration;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tagHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagHapticDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagHapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagHapticStrength;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tagHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagHapticStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_taggedHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedHapticDuration;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_taggedHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedHapticDuration;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_taggedHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taggedHapticDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_taggedHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedHapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_taggedHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedHapticStrength;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_taggedHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taggedHapticStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_taggedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedTime;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_taggedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedTime;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_taggedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taggedTime = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCooldown;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCooldown;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tagCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagCooldown = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_slowCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowCooldown;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_slowCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowCooldown;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_slowCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowCooldown = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_maxTagDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTagDistance;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_maxTagDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTagDistance;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_maxTagDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTagDistance = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_maxStiltTagDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStiltTagDistance;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_maxStiltTagDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStiltTagDistance;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_maxStiltTagDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxStiltTagDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaTagger::__cordl_internal_get_offlineVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_offlineVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_offlineVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineVRRig = value;
}
constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo& GlobalNamespace::GorillaTagger::__cordl_internal_get_offlineVRRig_gRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig_gRef;
}
constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo const& GlobalNamespace::GorillaTagger::__cordl_internal_get_offlineVRRig_gRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig_gRef;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_offlineVRRig_gRef(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineVRRig_gRef = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaTagger::__cordl_internal_get_thirdPersonCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonCamera;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_thirdPersonCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonCamera;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_thirdPersonCamera(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thirdPersonCamera = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaTagger::__cordl_internal_get_mainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_mainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCamera = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_testTutorial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testTutorial;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_testTutorial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testTutorial;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_testTutorial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testTutorial = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_disableTutorial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableTutorial;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_disableTutorial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableTutorial;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_disableTutorial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableTutorial = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateUpdated;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get__framerateUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framerateUpdated;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__framerateUpdated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____framerateUpdated = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get__performanceOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____performanceOn;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get__performanceOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____performanceOn;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__performanceOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____performanceOn = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHandTriggerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTriggerCollider;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHandTriggerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTriggerCollider;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftHandTriggerCollider(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandTriggerCollider = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHandTriggerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTriggerCollider;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHandTriggerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTriggerCollider;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightHandTriggerCollider(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandTriggerCollider = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHandSlideSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandSlideSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHandSlideSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandSlideSource;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftHandSlideSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandSlideSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHandSlideSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandSlideSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHandSlideSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandSlideSource;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightHandSlideSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandSlideSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GorillaTagger::__cordl_internal_get_bodySlideSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodySlideSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_bodySlideSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodySlideSource;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_bodySlideSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodySlideSource = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_overrideNotInFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideNotInFocus;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_overrideNotInFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideNotInFocus;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_overrideNotInFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideNotInFocus = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaTagger::__cordl_internal_get__rigidbody_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaTagger::__cordl_internal_get__rigidbody_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody_k__BackingField;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__rigidbody_k__BackingField(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftRaycastSweep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftRaycastSweep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftRaycastSweep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftRaycastSweep;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftRaycastSweep(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftRaycastSweep = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHeadRaycastSweep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHeadRaycastSweep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHeadRaycastSweep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHeadRaycastSweep;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftHeadRaycastSweep(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHeadRaycastSweep = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightRaycastSweep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightRaycastSweep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightRaycastSweep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightRaycastSweep;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightRaycastSweep(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightRaycastSweep = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHeadRaycastSweep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHeadRaycastSweep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHeadRaycastSweep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHeadRaycastSweep;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightHeadRaycastSweep(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHeadRaycastSweep = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_headRaycastSweep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRaycastSweep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_headRaycastSweep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRaycastSweep;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_headRaycastSweep(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headRaycastSweep = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_bodyRaycastSweep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyRaycastSweep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_bodyRaycastSweep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyRaycastSweep;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_bodyRaycastSweep(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyRaycastSweep = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightDevice;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightDevice = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftDevice;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftDevice = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_primaryButtonPressRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPressRight;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_primaryButtonPressRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPressRight;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_primaryButtonPressRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryButtonPressRight = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_secondaryButtonPressRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButtonPressRight;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_secondaryButtonPressRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButtonPressRight;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_secondaryButtonPressRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryButtonPressRight = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_primaryButtonPressLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPressLeft;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_primaryButtonPressLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPressLeft;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_primaryButtonPressLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryButtonPressLeft = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_secondaryButtonPressLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButtonPressLeft;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_secondaryButtonPressLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButtonPressLeft;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_secondaryButtonPressLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryButtonPressLeft = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::GorillaTagger::__cordl_internal_get_hitInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitInfo;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::GorillaTagger::__cordl_internal_get_hitInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitInfo;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_hitInfo(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitInfo = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaTagger::__cordl_internal_get_otherPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_otherPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherPlayer;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_otherPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherPlayer = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaTagger::__cordl_internal_get_tryPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tryPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryPlayer;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tryPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryPlayer = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaTagger::__cordl_internal_get_touchedPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchedPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_touchedPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchedPlayer;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_touchedPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchedPlayer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_topVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_topVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topVector;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_topVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topVector = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_bottomVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_bottomVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomVector;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_bottomVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomVector = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_bodyVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_bodyVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyVector;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_bodyVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyVector = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTagger::__cordl_internal_get_dirFromHitToHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirFromHitToHand;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTagger::__cordl_internal_get_dirFromHitToHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirFromHitToHand;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_dirFromHitToHand(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirFromHitToHand = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_audioClipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClipIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_audioClipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClipIndex;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_audioClipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClipIndex = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaTagger::__cordl_internal_get_inputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaTagger::__cordl_internal_get_inputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDevice;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_inputDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputDevice = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_wasInOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInOverlay;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_wasInOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInOverlay;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_wasInOverlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasInOverlay = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GorillaTagger::__cordl_internal_get_tempView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tempView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempView;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tempView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempView = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaTagger::__cordl_internal_get_tempCreator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempCreator;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tempCreator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempCreator;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tempCreator(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempCreator = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_cacheHandTapVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheHandTapVolume;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_cacheHandTapVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheHandTapVolume;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_cacheHandTapVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cacheHandTapVolume = value;
}
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect& GlobalNamespace::GorillaTagger::__cordl_internal_get_currentStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStatus;
}
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect const& GlobalNamespace::GorillaTagger::__cordl_internal_get_currentStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStatus;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_currentStatus(::GlobalNamespace::GorillaTagger_StatusEffect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentStatus = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_statusStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusStartTime;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_statusStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusStartTime;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_statusStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusStartTime = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_statusEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusEndTime;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_statusEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusEndTime;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_statusEndTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusEndTime = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_refreshRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refreshRate;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_refreshRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refreshRate;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_refreshRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___refreshRate = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_baseSlideControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseSlideControl;
}
constexpr float_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_baseSlideControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseSlideControl;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_baseSlideControl(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseSlideControl = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_gorillaTagColliderLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaTagColliderLayerMask;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_gorillaTagColliderLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaTagColliderLayerMask;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_gorillaTagColliderLayerMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaTagColliderLayerMask = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::GorillaTagger::__cordl_internal_get_nonAllocRaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonAllocRaycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_nonAllocRaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonAllocRaycastHits;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_nonAllocRaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonAllocRaycastHits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::GorillaTagger::__cordl_internal_get_colliderOverlaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderOverlaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_colliderOverlaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderOverlaps;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_colliderOverlaps(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderOverlaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagRigDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRigDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagRigDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRigDict;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tagRigDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagRigDict = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_nonAllocHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonAllocHits;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_nonAllocHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonAllocHits;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_nonAllocHits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonAllocHits = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& GlobalNamespace::GorillaTagger::__cordl_internal_get__myRecorder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myRecorder_k__BackingField;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& GlobalNamespace::GorillaTagger::__cordl_internal_get__myRecorder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myRecorder_k__BackingField;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__myRecorder_k__BackingField(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myRecorder_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_xrSubsystemIsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrSubsystemIsActive;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_xrSubsystemIsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrSubsystemIsActive;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_xrSubsystemIsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrSubsystemIsActive = value;
}
constexpr ::StringW& GlobalNamespace::GorillaTagger::__cordl_internal_get_loadedDeviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadedDeviceName;
}
constexpr ::StringW const& GlobalNamespace::GorillaTagger::__cordl_internal_get_loadedDeviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadedDeviceName;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_loadedDeviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadedDeviceName = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get__forceFramerateCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceFramerateCheck;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get__forceFramerateCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceFramerateCheck;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__forceFramerateCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceFramerateCheck = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__framesForHandTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framesForHandTrigger;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__framesForHandTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framesForHandTrigger;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__framesForHandTrigger(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____framesForHandTrigger = value;
}
constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool*& GlobalNamespace::GorillaTagger::__cordl_internal_get__leftHandDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandDown;
}
constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool* const& GlobalNamespace::GorillaTagger::__cordl_internal_get__leftHandDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandDown;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__leftHandDown(::GlobalNamespace::GorillaTagger_DebouncedBool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandDown = value;
}
constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool*& GlobalNamespace::GorillaTagger::__cordl_internal_get__rightHandDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandDown;
}
constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool* const& GlobalNamespace::GorillaTagger::__cordl_internal_get__rightHandDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandDown;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__rightHandDown(::GlobalNamespace::GorillaTagger_DebouncedBool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandDown = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GorillaTagger::__cordl_internal_get_BaseMirrorCameraCullingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseMirrorCameraCullingMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GorillaTagger::__cordl_internal_get_BaseMirrorCameraCullingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseMirrorCameraCullingMask;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_BaseMirrorCameraCullingMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BaseMirrorCameraCullingMask = value;
}
constexpr ::GlobalNamespace::Watchable_1<int32_t>*& GlobalNamespace::GorillaTagger::__cordl_internal_get_MirrorCameraCullingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MirrorCameraCullingMask;
}
constexpr ::GlobalNamespace::Watchable_1<int32_t>* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_MirrorCameraCullingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MirrorCameraCullingMask;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_MirrorCameraCullingMask(::GlobalNamespace::Watchable_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MirrorCameraCullingMask = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHapticsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHapticsBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHapticsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHapticsBuffer;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftHapticsBuffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHapticsBuffer = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHapticsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHapticsBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHapticsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHapticsBuffer;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightHapticsBuffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHapticsBuffer = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHapticsRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHapticsRoutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_leftHapticsRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHapticsRoutine;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_leftHapticsRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHapticsRoutine = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHapticsRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHapticsRoutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_rightHapticsRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHapticsRoutine;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_rightHapticsRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHapticsRoutine = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*& GlobalNamespace::GorillaTagger::__cordl_internal_get_gameOverlayActivatedCb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameOverlayActivatedCb;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_gameOverlayActivatedCb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameOverlayActivatedCb;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_gameOverlayActivatedCb(::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameOverlayActivatedCb = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get_isGameOverlayActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGameOverlayActive;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get_isGameOverlayActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGameOverlayActive;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_isGameOverlayActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGameOverlayActive = value;
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagRadiusOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRadiusOverride;
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagRadiusOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRadiusOverride;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tagRadiusOverride(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagRadiusOverride = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagRadiusOverrideFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRadiusOverrideFrame;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get_tagRadiusOverrideFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRadiusOverrideFrame;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_tagRadiusOverrideFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagRadiusOverrideFrame = value;
}
constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*& GlobalNamespace::GorillaTagger::__cordl_internal_get_OnHandTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHandTap;
}
constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_OnHandTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHandTap;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_OnHandTap(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHandTap = value;
}
constexpr bool& GlobalNamespace::GorillaTagger::__cordl_internal_get__hasTappedSurface_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasTappedSurface_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaTagger::__cordl_internal_get__hasTappedSurface_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasTappedSurface_k__BackingField;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__hasTappedSurface_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasTappedSurface_k__BackingField = value;
}
constexpr Il2CppObject*& GlobalNamespace::GorillaTagger::__cordl_internal_get_activeXRDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeXRDisplay;
}
constexpr Il2CppObject* const& GlobalNamespace::GorillaTagger::__cordl_internal_get_activeXRDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeXRDisplay;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set_activeXRDisplay(Il2CppObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeXRDisplay = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger::__cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger::__cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;
}
constexpr void GlobalNamespace::GorillaTagger::__cordl_internal_set__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField = value;
}
inline void GlobalNamespace::GorillaTagger::setStaticF__instance(::UnityW<::GlobalNamespace::GorillaTagger>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaTagger>, "_instance", ::GlobalNamespace::GorillaTagger*>(std::forward<::UnityW<::GlobalNamespace::GorillaTagger>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaTagger> GlobalNamespace::GorillaTagger::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaTagger>, "_instance", ::GlobalNamespace::GorillaTagger*>();
}
inline void GlobalNamespace::GorillaTagger::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::GorillaTagger*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GorillaTagger::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::GorillaTagger*>();
}
inline void GlobalNamespace::GorillaTagger::setStaticF_moderationMutedTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "moderationMutedTime", ::GlobalNamespace::GorillaTagger*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::GorillaTagger::getStaticF_moderationMutedTime()  {
return ::cordl_internals::getStaticField<float_t, "moderationMutedTime", ::GlobalNamespace::GorillaTagger*>();
}
inline void GlobalNamespace::GorillaTagger::setStaticF_onPlayerSpawnedRootCallback(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onPlayerSpawnedRootCallback", ::GlobalNamespace::GorillaTagger*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::GorillaTagger::getStaticF_onPlayerSpawnedRootCallback()  {
return ::cordl_internals::getStaticField<::System::Action*, "onPlayerSpawnedRootCallback", ::GlobalNamespace::GorillaTagger*>();
}
inline ::UnityW<::GlobalNamespace::GorillaTagger> GlobalNamespace::GorillaTagger::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaTagger>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagger::get_ForcePerfRefreshRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_ForcePerfRefreshRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::SetExtraHandPosition(::GorillaLocomotion::StiltID  stiltID, ::UnityEngine::Vector3  position, bool  canTag, bool  canStun)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"SetExtraHandPosition", {}, {::i2c::type_of<::GorillaLocomotion::StiltID>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stiltID, position, canTag, canStun);
}
inline ::UnityW<::GlobalNamespace::NetworkView> GlobalNamespace::GorillaTagger::get_myVRRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_myVRRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NetworkView>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRigSerializer> GlobalNamespace::GorillaTagger::get_rigSerializer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_rigSerializer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRigSerializer>>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagger::get_PerformanceOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_PerformanceOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> GlobalNamespace::GorillaTagger::get_rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::set_rigidbody(::UnityEngine::Rigidbody*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"set_rigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::GorillaTagger::get_DefaultHandTapVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_DefaultHandTapVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::Photon::Voice::Unity::Recorder> GlobalNamespace::GorillaTagger::get_myRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_myRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Recorder>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::set_myRecorder(::Photon::Voice::Unity::Recorder*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"set_myRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::GorillaTagger::get_sphereCastRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_sphereCastRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::add_OnHandTap(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"add_OnHandTap", {}, {::i2c::type_of<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagger::remove_OnHandTap(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"remove_OnHandTap", {}, {::i2c::type_of<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GorillaTagger::get_hasTappedSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"get_hasTappedSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::set_hasTappedSurface(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"set_hasTappedSurface", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagger::ResetTappedSurfaceCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ResetTappedSurfaceCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::SetTagRadiusOverrideThisFrame(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"SetTagRadiusOverrideThisFrame", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radius);
}
inline void GlobalNamespace::GorillaTagger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::IsXRSubsystemActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"IsXRSubsystemActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagger::IsOculusQuest2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"IsOculusQuest2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::OnGameOverlayActivated(::Steamworks::GameOverlayActivated_t  pCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnGameOverlayActivated", {}, {::i2c::type_of<::Steamworks::GameOverlayActivated_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pCallback);
}
inline void GlobalNamespace::GorillaTagger::ToggleForcedPerformanceRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ToggleForcedPerformanceRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::ToggleDefaultPerformanceRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ToggleDefaultPerformanceRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::ToggleForcedRefreshRate(float_t  newRefreshRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ToggleForcedRefreshRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRefreshRate);
}
inline void GlobalNamespace::GorillaTagger::SetForcedRefreshRate(bool  forcePerf, float_t  newRefreshRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"SetForcedRefreshRate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forcePerf, newRefreshRate);
}
inline void GlobalNamespace::GorillaTagger::ClearFramerateTracker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ClearFramerateTracker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::UpdateResolutionScale(bool  performanceMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"UpdateResolutionScale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, performanceMode);
}
inline void GlobalNamespace::GorillaTagger::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagger::TryToTag(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  hitObjectPos, bool  isBodyTag, bool  canStun, float_t  maxTagDistance, ::by_ref<::GlobalNamespace::NetPlayer*>  taggedPlayer, ::by_ref<::GlobalNamespace::NetPlayer*>  touchedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"TryToTag", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig, hitObjectPos, isBodyTag, canStun, maxTagDistance, taggedPlayer, touchedPlayer);
}
inline bool GlobalNamespace::GorillaTagger::TryToTag(::UnityEngine::Collider*  hitCollider, bool  isBodyTag, bool  canStun, float_t  maxTagDistance, ::by_ref<::GlobalNamespace::NetPlayer*>  taggedPlayer, ::by_ref<::GlobalNamespace::NetPlayer*>  touchedNetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"TryToTag", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hitCollider, isBodyTag, canStun, maxTagDistance, taggedPlayer, touchedNetPlayer);
}
inline void GlobalNamespace::GorillaTagger::HitWithKnockBack(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"HitWithKnockBack", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer, leftHand);
}
inline void GlobalNamespace::GorillaTagger::StartVibration(bool  forLeftController, float_t  amplitude, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"StartVibration", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forLeftController, amplitude, duration);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagger::HapticPulses(bool  forLeftController, float_t  amplitude, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"HapticPulses", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, forLeftController, amplitude, duration);
}
inline void GlobalNamespace::GorillaTagger::PlayHapticClip(bool  forLeftController, ::UnityEngine::AudioClip*  clip, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"PlayHapticClip", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forLeftController, clip, strength);
}
inline void GlobalNamespace::GorillaTagger::StopHapticClip(bool  forLeftController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"StopHapticClip", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forLeftController);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagger::AudioClipHapticPulses(bool  forLeftController, ::UnityEngine::AudioClip*  clip, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"AudioClipHapticPulses", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, forLeftController, clip, strength);
}
inline void GlobalNamespace::GorillaTagger::DoVibration(::UnityEngine::XR::XRNode  node, float_t  amplitude, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"DoVibration", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, amplitude, duration);
}
inline void GlobalNamespace::GorillaTagger::UpdateColor(float_t  red, float_t  green, float_t  blue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"UpdateColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, red, green, blue);
}
inline void GlobalNamespace::GorillaTagger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaTagger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaTagger::ShowCosmeticParticles(bool  showParticles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ShowCosmeticParticles", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showParticles);
}
inline void GlobalNamespace::GorillaTagger::ApplyStatusEffect(::GlobalNamespace::GorillaTagger_StatusEffect  newStatus, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ApplyStatusEffect", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagger_StatusEffect>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newStatus, duration);
}
inline void GlobalNamespace::GorillaTagger::CheckEndStatusEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"CheckEndStatusEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::EndStatusEffect(::GlobalNamespace::GorillaTagger_StatusEffect  effectToEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"EndStatusEffect", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagger_StatusEffect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effectToEnd);
}
inline float_t GlobalNamespace::GorillaTagger::CalcSlideControl(float_t  fps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"CalcSlideControl", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fps);
}
inline void GlobalNamespace::GorillaTagger::OnPlayerSpawned(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"OnPlayerSpawned", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void GlobalNamespace::GorillaTagger::ProcessHandTapping(/* [IsReadOnly] */ ::by_ref<bool>  isLeftHand, /* [IsReadOnly] */ ::by_ref<::GorillaLocomotion::StiltID>  stiltID, ::by_ref<float_t>  lastTapTime, ::by_ref<float_t>  lastTapUpTime, ::by_ref<bool>  wasHandTouching, /* [IsReadOnly] */ ::by_ref<::UnityEngine::AudioSource*>  handSlideSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ProcessHandTapping", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::StiltID>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioSource*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, stiltID, lastTapTime, lastTapUpTime, wasHandTouching, handSlideSource);
}
inline void GlobalNamespace::GorillaTagger::ConfirmUpdatedFrameRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"ConfirmUpdatedFrameRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::DebugDrawTagCasts(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"DebugDrawTagCasts", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::GorillaTagger::DrawSphereCast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, float_t  radius, float_t  dist, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"DrawSphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, dir, radius, dist, color);
}
inline void GlobalNamespace::GorillaTagger::RecoverMissingRefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"RecoverMissingRefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void GlobalNamespace::GorillaTagger::RecoverMissingRefs_Asdf(::by_ref<T>  objRef, ::StringW  objFieldName, ::StringW  recoveryPath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                    {"RecoverMissingRefs_Asdf", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objRef, objFieldName, recoveryPath);
}
inline void GlobalNamespace::GorillaTagger::GuidedRefInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GuidedRefInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.get_GuidedRefsWaitingToResolveCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.set_GuidedRefsWaitingToResolveCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefTryResolveReference", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline void GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnAllGuidedRefsResolved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed(int32_t  fieldId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnGuidedRefTargetDestroyed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldId);
}
inline void GlobalNamespace::GorillaTagger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaTagger::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger::_LateUpdate_g__TryTaggingAllHitsOverlap_159_0(bool  isLeftHand, float_t  maxTagDistance, bool  canTag, bool  canStun, ::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"<LateUpdate>g__TryTaggingAllHitsOverlap|159_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, maxTagDistance, canTag, canStun, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GorillaTagger::_LateUpdate_g__TryTaggingAllHitsCapsulecast_159_1(float_t  maxTagDistance, bool  canTag, bool  canStun, ::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger*>(),
                        {"<LateUpdate>g__TryTaggingAllHitsCapsulecast|159_1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxTagDistance, canTag, canStun, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::GorillaTagger* GlobalNamespace::GorillaTagger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagger*>());
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr  GlobalNamespace::GorillaTagger::operator ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono* GlobalNamespace::GorillaTagger::i___GorillaTag__GuidedRefs__IGuidedRefReceiverMono() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr  GlobalNamespace::GorillaTagger::operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* GlobalNamespace::GorillaTagger::i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr  GlobalNamespace::GorillaTagger::operator ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* GlobalNamespace::GorillaTagger::i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagger::GorillaTagger()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__HapticPulses_d__164._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger__HapticPulses_d__164::*)(int32_t)>(&::GlobalNamespace::GorillaTagger__HapticPulses_d__164::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59384b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__HapticPulses_d__164.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger__HapticPulses_d__164::*)()>(&::GlobalNamespace::GorillaTagger__HapticPulses_d__164::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59384e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__HapticPulses_d__164.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger__HapticPulses_d__164::*)()>(&::GlobalNamespace::GorillaTagger__HapticPulses_d__164::MoveNext)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x59384e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__HapticPulses_d__164.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagger__HapticPulses_d__164::*)()>(&::GlobalNamespace::GorillaTagger__HapticPulses_d__164::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593864c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__HapticPulses_d__164.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger__HapticPulses_d__164::*)()>(&::GlobalNamespace::GorillaTagger__HapticPulses_d__164::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5938654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__HapticPulses_d__164.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagger__HapticPulses_d__164::*)()>(&::GlobalNamespace::GorillaTagger__HapticPulses_d__164::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593868c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr bool& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get_forLeftController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forLeftController;
}
constexpr bool const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get_forLeftController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forLeftController;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set_forLeftController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forLeftController = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get_amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitude;
}
constexpr float_t const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get_amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitude;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set_amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amplitude = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagger>& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagger> const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get__device_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_5__3;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get__device_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_5__3;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set__device_5__3(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____device_5__3 = value;
}
constexpr uint32_t& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get__channel_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel_5__4;
}
constexpr uint32_t const& GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_get__channel_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel_5__4;
}
constexpr void GlobalNamespace::GorillaTagger__HapticPulses_d__164::__cordl_internal_set__channel_5__4(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channel_5__4 = value;
}
inline void GlobalNamespace::GorillaTagger__HapticPulses_d__164::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagger__HapticPulses_d__164::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagger__HapticPulses_d__164::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagger__HapticPulses_d__164::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger__HapticPulses_d__164::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagger__HapticPulses_d__164::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagger__HapticPulses_d__164* GlobalNamespace::GorillaTagger__HapticPulses_d__164::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagger__HapticPulses_d__164*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagger__HapticPulses_d__164::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagger__HapticPulses_d__164::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagger__HapticPulses_d__164::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagger__HapticPulses_d__164::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagger__HapticPulses_d__164::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagger__HapticPulses_d__164::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagger__HapticPulses_d__164::GorillaTagger__HapticPulses_d__164()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::*)(int32_t)>(&::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x593775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::*)()>(&::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5937784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::*)()>(&::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::MoveNext)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5937788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::*)()>(&::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5937b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::*)()>(&::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5937b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::*)()>(&::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5937b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr bool& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get_forLeftController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forLeftController;
}
constexpr bool const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get_forLeftController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forLeftController;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set_forLeftController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forLeftController = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagger>& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagger> const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get_clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get_clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clip = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get_strength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr float_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get_strength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set_strength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strength = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__device_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_5__2;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__device_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_5__2;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__device_5__2(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____device_5__2 = value;
}
constexpr uint32_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__channel_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel_5__3;
}
constexpr uint32_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__channel_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel_5__3;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__channel_5__3(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channel_5__3 = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__bufferSize_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize_5__4;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__bufferSize_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize_5__4;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__bufferSize_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferSize_5__4 = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__sampleWindowSize_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleWindowSize_5__5;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__sampleWindowSize_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleWindowSize_5__5;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__sampleWindowSize_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleWindowSize_5__5 = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__audioData_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioData_5__6;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__audioData_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioData_5__6;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__audioData_5__6(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioData_5__6 = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__sampleOffset_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleOffset_5__7;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__sampleOffset_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleOffset_5__7;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__sampleOffset_5__7(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleOffset_5__7 = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__startTime_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__8;
}
constexpr float_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__startTime_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__8;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__startTime_5__8(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__8 = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__length_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____length_5__9;
}
constexpr float_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__length_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____length_5__9;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__length_5__9(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____length_5__9 = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__endTime_5__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endTime_5__10;
}
constexpr float_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__endTime_5__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endTime_5__10;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__endTime_5__10(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endTime_5__10 = value;
}
constexpr float_t& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__sampleRate_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate_5__11;
}
constexpr float_t const& GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_get__sampleRate_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate_5__11;
}
constexpr void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::__cordl_internal_set__sampleRate_5__11(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate_5__11 = value;
}
inline void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167* GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167::GorillaTagger__AudioClipHapticPulses_d__167()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger_DebouncedBool.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger_DebouncedBool::*)()>(&::GlobalNamespace::GorillaTagger_DebouncedBool::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5937688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger_DebouncedBool.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger_DebouncedBool::*)(bool)>(&::GlobalNamespace::GorillaTagger_DebouncedBool::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5937690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"set_Value", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger_DebouncedBool.get_JustEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger_DebouncedBool::*)()>(&::GlobalNamespace::GorillaTagger_DebouncedBool::get_JustEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5937698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"get_JustEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger_DebouncedBool.set_JustEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger_DebouncedBool::*)(bool)>(&::GlobalNamespace::GorillaTagger_DebouncedBool::set_JustEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59376a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"set_JustEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger_DebouncedBool.get_WasStablyEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagger_DebouncedBool::*)()>(&::GlobalNamespace::GorillaTagger_DebouncedBool::get_WasStablyEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59376a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"get_WasStablyEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger_DebouncedBool.set_WasStablyEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger_DebouncedBool::*)(bool)>(&::GlobalNamespace::GorillaTagger_DebouncedBool::set_WasStablyEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59376b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"set_WasStablyEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger_DebouncedBool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger_DebouncedBool::*)(int32_t, bool)>(&::GlobalNamespace::GorillaTagger_DebouncedBool::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59376b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagger_DebouncedBool.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagger_DebouncedBool::*)(bool)>(&::GlobalNamespace::GorillaTagger_DebouncedBool::Set)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59376ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"Set", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__callsUntilStable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callsUntilStable;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__callsUntilStable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callsUntilStable;
}
constexpr void GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_set__callsUntilStable(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callsUntilStable = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__callsSinceDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callsSinceDisable;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__callsSinceDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callsSinceDisable;
}
constexpr void GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_set__callsSinceDisable(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callsSinceDisable = value;
}
constexpr int32_t& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__callsSinceEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callsSinceEnable;
}
constexpr int32_t const& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__callsSinceEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callsSinceEnable;
}
constexpr void GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_set__callsSinceEnable(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callsSinceEnable = value;
}
constexpr bool& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__lastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastValue;
}
constexpr bool const& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__lastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastValue;
}
constexpr void GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_set__lastValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastValue = value;
}
constexpr bool& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__Value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__Value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
constexpr void GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_set__Value_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Value_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__JustEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JustEnabled_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__JustEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JustEnabled_k__BackingField;
}
constexpr void GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_set__JustEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JustEnabled_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__WasStablyEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WasStablyEnabled_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_get__WasStablyEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WasStablyEnabled_k__BackingField;
}
constexpr void GlobalNamespace::GorillaTagger_DebouncedBool::__cordl_internal_set__WasStablyEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WasStablyEnabled_k__BackingField = value;
}
inline bool GlobalNamespace::GorillaTagger_DebouncedBool::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger_DebouncedBool::set_Value(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"set_Value", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GorillaTagger_DebouncedBool::get_JustEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"get_JustEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger_DebouncedBool::set_JustEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"set_JustEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GorillaTagger_DebouncedBool::get_WasStablyEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"get_WasStablyEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagger_DebouncedBool::set_WasStablyEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"set_WasStablyEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagger_DebouncedBool::_ctor(int32_t  callsUntilDisable, bool  initialValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callsUntilDisable, initialValue);
}
inline void GlobalNamespace::GorillaTagger_DebouncedBool::Set(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagger_DebouncedBool*>(),
                        {"Set", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GorillaTagger_DebouncedBool* GlobalNamespace::GorillaTagger_DebouncedBool::New_ctor(int32_t  callsUntilDisable, bool  initialValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagger_DebouncedBool*>(callsUntilDisable, initialValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool::GorillaTagger_DebouncedBool()   {
}
